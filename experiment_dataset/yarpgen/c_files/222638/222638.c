/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222638
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {
                    var_17 |= (1 - -19566);
                    var_18 = (arr_0 [1] [i_0]);
                    var_19 &= (((((((1 << (var_12 + 1113539671039711140)))) ? var_10 : (((arr_0 [13] [13]) ? 1 : (arr_1 [i_2])))))) ? (arr_1 [i_0]) : ((((!(arr_3 [i_2 + 1]))))));
                }
                /* vectorizable */
                for (int i_3 = 1; i_3 < 21;i_3 += 1) /* same iter space */
                {
                    var_20 = (((arr_5 [i_1] [i_3 - 1] [i_3 + 2]) ? (((arr_8 [19] [i_1] [i_1] [i_1]) ? 19565 : 31)) : 19586));
                    var_21 = (((arr_0 [i_1] [i_3]) ? (~-19566) : -9223372036854775806));
                }
                for (int i_4 = 1; i_4 < 21;i_4 += 1) /* same iter space */
                {

                    for (int i_5 = 3; i_5 < 23;i_5 += 1)
                    {
                        var_22 = ((!(((~((-(arr_6 [i_0] [i_1] [i_5]))))))));
                        var_23 = ((((19582 ? 281474976710655 : (arr_11 [i_0])))) ? 3490680649111612390 : 4291471986);
                    }
                    /* vectorizable */
                    for (int i_6 = 3; i_6 < 23;i_6 += 1)
                    {
                        var_24 = ((((((arr_10 [i_1]) ? 5 : (arr_13 [i_6] [i_1] [0] [i_6] [i_1])))) ? (((arr_15 [2] [i_1] [i_1] [i_1]) - var_2)) : (arr_12 [10] [i_1] [i_1])));
                        var_25 = var_1;
                        var_26 = -1;
                    }
                    for (int i_7 = 1; i_7 < 1;i_7 += 1)
                    {
                        var_27 += arr_0 [i_4] [i_1];
                        var_28 |= ((((((arr_15 [i_0] [i_0] [i_0] [i_0]) | (!var_4)))) ? ((((arr_13 [i_0] [i_1] [i_4] [i_4] [i_1]) ? (!var_16) : ((min(6, -1)))))) : var_5));
                    }
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        var_29 = (min((!0), (max((arr_19 [i_4 + 3]), var_11))));
                        var_30 = 10289;
                    }
                    var_31 = ((arr_14 [i_4 + 1] [i_4] [i_4 + 1] [i_4 + 1]) ? ((((((((arr_11 [i_1]) ? (arr_1 [i_4]) : -1219634631))) || 19556)))) : ((min((arr_20 [i_1] [i_1] [i_1] [i_1] [i_1]), (arr_20 [i_0] [i_0] [i_1] [i_4 + 3] [i_0])))));
                    var_32 = (max(((((arr_19 [i_4 + 3]) ? (arr_7 [i_4 + 2] [i_1]) : ((max((arr_17 [i_0] [i_0]), var_11)))))), (max((arr_4 [i_0]), (max((arr_3 [i_0]), var_5))))));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 24;i_9 += 1)
                    {
                        for (int i_10 = 3; i_10 < 23;i_10 += 1)
                        {
                            {
                                var_33 = (min(var_33, -var_7));
                                var_34 = (((arr_11 [i_0]) - var_12));
                                var_35 = ((-(-1 & -19593)));
                            }
                        }
                    }
                }
                var_36 = (min(var_36, var_5));
                var_37 = 18446744073709551593;
            }
        }
    }
    var_38 = var_6;
    #pragma endscop
}
