/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208332
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_18 *= (!var_12);
                                var_19 = (max(var_19, ((min((min(var_1, (arr_6 [i_3 - 1] [i_3] [i_4] [i_4] [i_4] [i_4]))), (arr_10 [i_3 - 2] [i_3 - 2] [i_4] [i_2] [i_4] [i_4] [i_3 - 2]))))));
                            }
                        }
                    }
                    var_20 = (((((65535 ? ((min(-20, (arr_10 [i_0] [i_1] [i_0] [i_1] [i_1] [i_2] [14])))) : var_2))) ? ((-(min((arr_1 [i_1]), var_15)))) : (var_0 - 18)));
                    var_21 = (((~3746788089) ? ((max(var_7, (((!(arr_3 [i_0] [i_1] [1]))))))) : -18));
                }
            }
        }
    }
    var_22 ^= ((~(~10670)));
    var_23 = var_17;
    var_24 = var_15;

    for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
    {
        var_25 = ((arr_12 [12]) ? var_4 : (arr_12 [i_5]));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 4; i_7 < 20;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 20;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 21;i_9 += 1)
                        {
                            {
                                var_26 = ((~((9484741833820151942 ? (arr_18 [i_9] [15] [i_6] [i_6] [i_7 - 1] [i_7 - 2]) : (arr_21 [i_7] [i_7 - 4] [i_7 + 1] [i_6] [7] [i_7 + 1])))));
                                var_27 = ((((min((arr_17 [i_5] [i_6] [i_6] [i_9]), var_15))) ? 18446744073709551615 : (!var_13)));
                            }
                        }
                    }
                    var_28 = 1;
                }
            }
        }
        var_29 = (((((arr_17 [i_5] [i_5] [i_5] [i_5]) != ((0 ? -44 : 0)))) ? 0 : (((((arr_15 [i_5]) ? 0 : 18446744073709551593)) ^ 6))));
        var_30 = 3733323831;
    }
    for (int i_10 = 0; i_10 < 21;i_10 += 1) /* same iter space */
    {
        var_31 += 95;
        var_32 = (max((((548179207 ? (-127 - 1) : 212))), ((-(155 + 7465240169753046090)))));
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 21;i_11 += 1) /* same iter space */
    {

        for (int i_12 = 4; i_12 < 19;i_12 += 1)
        {
            var_33 = (var_7 && var_0);
            var_34 = (min(var_34, (((((arr_14 [i_12] [i_11] [6]) ? (arr_23 [i_12]) : 65535))))));
        }
        var_35 = (((arr_20 [i_11]) ? (arr_20 [i_11]) : (arr_20 [i_11])));
    }
    #pragma endscop
}
