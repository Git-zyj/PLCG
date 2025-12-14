/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203381
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 8;i_4 += 1)
                        {
                            {
                                var_17 = (((arr_2 [i_1] [i_4 - 4]) <= 11801316786461282432));
                                arr_15 [i_0] [i_0] [i_0] [i_2] [i_4] [i_0] = (arr_13 [i_2] [i_2]);
                                var_18 = (min((((((min(var_7, (arr_9 [i_0] [i_1] [i_2] [i_2])))) ? (!var_6) : (arr_7 [i_2] [i_2] [i_3] [i_4 - 4])))), (--11801316786461282420)));
                                arr_16 [i_0] [i_1] [i_2] [i_2] [i_4] [i_2] [i_4] = ((((min((arr_8 [8] [i_1] [i_1]), (arr_0 [i_4 + 3])))) || ((!(var_0 && 6645427287248269184)))));
                            }
                        }
                    }
                }

                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    arr_19 [i_0] [i_0] [1] = ((~(min(((min(29946, 32767))), ((2568862962 ? 13 : 14012655094869219478))))));

                    for (int i_6 = 1; i_6 < 10;i_6 += 1)
                    {
                        arr_23 [i_6] [2] [2] [i_0] [i_0] = 1132580657;
                        var_19 = 1564144322;
                        var_20 *= (arr_9 [i_0] [i_1] [i_0] [i_5]);
                    }
                }
                for (int i_7 = 1; i_7 < 7;i_7 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 11;i_9 += 1)
                        {
                            {
                                arr_33 [i_0] [i_1] [i_0] [10] [i_0] = (((((35571 ? 10917168626561348909 : 6645427287248269165))) ? (arr_0 [i_9]) : (~3400660279)));
                                var_21 += (arr_31 [5] [i_7 + 3] [i_7 + 3] [i_7 + 4] [i_7 + 1]);
                                arr_34 [i_7] = (((((arr_28 [i_7 + 1] [i_7 + 4] [i_7 + 3]) ? (((arr_26 [3] [i_0] [i_0]) ? var_11 : (arr_11 [i_0] [i_9]))) : 35566))) ? (arr_2 [5] [i_9]) : (((arr_24 [i_7] [i_7 + 1] [i_7 + 2] [i_7 - 1]) ? (arr_24 [i_7 + 4] [i_7 + 2] [i_7 + 3] [i_7 + 4]) : (arr_24 [i_7] [i_7 + 3] [i_7 + 3] [i_7 + 4]))));
                            }
                        }
                    }
                    var_22 = 2594344465;
                    var_23 += -27771;
                }
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    var_24 = 1;
                    arr_38 [i_0] [i_0] [i_1] [i_10] = (min(var_10, ((min(var_15, (arr_1 [i_0]))))));
                    arr_39 [i_0] [i_0] = var_8;
                }
            }
        }
    }
    var_25 *= (min(var_11, (((var_9 >= (min(var_1, var_4)))))));
    #pragma endscop
}
