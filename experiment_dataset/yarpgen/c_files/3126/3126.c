/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3126
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= (var_7 == var_19);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        var_21 = ((((var_16 ? (arr_5 [i_1] [i_2 - 1] [i_2 - 1]) : 16383)) >> (((max((arr_7 [i_0] [i_0] [1]), (((507305513148555002 ? (arr_2 [i_0] [i_0]) : (arr_1 [i_3])))))) - 7679))));
                        var_22 = 17939438560560996595;
                        var_23 = (max(var_9, (min(507305513148555002, var_7))));
                        var_24 = ((((arr_6 [i_2 - 1] [i_2 - 2] [i_2 + 1]) ? (arr_11 [i_2 - 2]) : var_2)));
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            {
                                var_25 = ((var_13 ? var_13 : (((var_16 + (arr_17 [3] [3] [i_2 - 2] [3] [i_2 - 1]))))));
                                var_26 = ((var_18 || ((((arr_16 [i_0] [i_0] [i_0] [i_0] [i_0]) - (((min((arr_4 [1]), (arr_5 [i_1] [7] [i_5]))))))))));
                                var_27 = (arr_11 [i_1]);
                            }
                        }
                    }

                    for (int i_6 = 1; i_6 < 15;i_6 += 1)
                    {
                        var_28 = (min(((((min((arr_15 [i_6] [2]), (arr_4 [i_2])))) ? ((-1 ? -13450 : 1)) : (max(var_4, (arr_4 [i_2]))))), var_16));
                        var_29 ^= var_17;
                        arr_22 [i_0] [i_1] [i_0] [i_6 + 2] = (min(((((arr_16 [i_0] [i_0] [i_0] [i_0] [16]) >= 17939438560560996614))), (max(((507305513148555002 ? 507305513148555012 : 1)), (((17939438560560996602 || (arr_20 [i_0] [i_0] [16] [i_6]))))))));
                    }

                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        var_30 = ((21868 ? 6 : 110));

                        for (int i_8 = 0; i_8 < 17;i_8 += 1)
                        {
                            var_31 = (arr_18 [2] [i_1] [i_1]);
                            var_32 = ((var_9 == (arr_20 [i_7] [i_0] [i_0] [8])));
                        }
                        for (int i_9 = 0; i_9 < 0;i_9 += 1)
                        {
                            var_33 = (min(var_33, (((((max(((((-368540108 + 2147483647) >> 1))), 23))) || var_4)))));
                            var_34 = 1;
                            var_35 = var_7;
                            var_36 = ((-7 ? ((6 ? (~var_10) : ((var_12 ? var_12 : 9)))) : (((((arr_3 [i_0] [i_0]) == ((var_18 ? (arr_8 [i_0]) : 21851))))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
