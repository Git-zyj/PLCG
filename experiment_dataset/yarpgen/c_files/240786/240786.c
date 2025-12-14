/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240786
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            arr_11 [i_1] [i_1] [i_0] [8] [i_0] = ((((var_8 ? (arr_7 [i_0 - 1] [i_0 - 1] [i_1 + 2] [i_2 + 1]) : (arr_4 [i_0] [i_1 - 2]))) | (arr_4 [i_0] [i_1 + 1])));
                            var_10 = (min(var_10, (((((~(var_3 <= var_0))) & ((((arr_6 [i_2 + 1] [i_2 - 1] [12]) != (arr_5 [i_0 + 1] [i_0 + 1] [i_1 + 3] [i_2 - 1])))))))));

                            for (int i_4 = 0; i_4 < 15;i_4 += 1)
                            {
                                var_11 = var_7;
                                var_12 = var_5;
                                arr_14 [i_0] [7] = max(9007199254740991, (((arr_13 [i_0 - 1] [i_0]) | 1879048192)));
                                arr_15 [i_0] [i_0] [i_0 + 1] [i_0] [i_0] [i_0] = (min((max((arr_5 [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_2 - 1]), (arr_5 [i_2 - 1] [i_2 - 1] [i_2 + 1] [i_2 - 1]))), (122 && 0)));
                            }
                            for (int i_5 = 0; i_5 < 15;i_5 += 1)
                            {
                                var_13 &= min(((((arr_3 [14] [i_1 + 1]) ? (arr_12 [i_0 + 1] [i_1 + 2] [i_1 + 3] [i_1] [i_2 + 1] [i_1 + 2]) : -123))), (((2530252637 == 130) ? (arr_16 [6]) : var_1)));
                                arr_18 [i_0] [i_0] [i_0] [i_0 + 1] [i_0 + 1] = (arr_17 [i_3] [8] [i_0] [i_3] [0] [i_3] [i_3]);
                                var_14 = ((65532 ? (((min(137, 55435)))) : (min(3324642941, 137))));
                                var_15 = (max((var_7 | 60), (511347106 == 1)));
                            }
                            for (int i_6 = 2; i_6 < 11;i_6 += 1)
                            {
                                var_16 = ((-4 ? (((((arr_1 [i_2] [i_0]) != (((arr_19 [i_1 + 1]) ? 130 : (arr_2 [i_0 - 1] [i_2]))))))) : ((~((var_9 ? var_0 : 17757688837783867053))))));
                                var_17 &= 118;
                            }
                            for (int i_7 = 0; i_7 < 15;i_7 += 1)
                            {
                                arr_25 [3] [i_1] [i_0] [i_0] [i_7] = (min(var_6, (~var_8)));
                                var_18 = (!92);
                                arr_26 [i_0] [i_3] [i_2 - 1] [i_1] [13] [i_0] = ((((max(104, var_6))) ? var_2 : (((arr_19 [i_2 + 1]) / var_6))));
                                var_19 = (min(var_19, ((min(var_4, 17757688837783867051)))));
                            }
                        }
                    }
                }
                var_20 *= (((((var_9 ? 3423841599 : (arr_12 [i_0 + 1] [i_1] [i_1 + 2] [i_1 + 1] [i_1 - 2] [i_1 + 2])))) ? ((var_2 ? ((29656 ? (arr_10 [i_0] [10] [i_1 + 1]) : var_7)) : (148 % var_9))) : (41625 ^ 511347079)));
                var_21 = (arr_0 [i_1 - 1]);
            }
        }
    }
    var_22 = -1;
    #pragma endscop
}
