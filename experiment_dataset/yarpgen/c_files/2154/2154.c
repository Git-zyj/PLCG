/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2154
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                var_20 = (min((arr_2 [i_1 + 1] [i_1]), (min((arr_2 [i_1 + 1] [i_1 - 1]), (arr_2 [i_1 - 1] [i_1 + 1])))));

                /* vectorizable */
                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {
                    var_21 = (arr_7 [i_1 - 1] [i_1 - 2]);
                    arr_9 [i_0] [i_2] [i_1] [i_2] = (((arr_6 [i_0] [i_1 - 2] [i_2] [i_2 - 1]) ? (arr_0 [i_0]) : (arr_6 [i_1] [i_1] [i_2] [i_2 + 1])));
                }
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    var_22 = var_18;
                    var_23 = (((((max((arr_1 [i_1]), (arr_6 [i_0] [i_0] [i_0] [i_3])))) ? var_13 : (min(var_10, (arr_1 [i_3]))))));
                }
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    var_24 = (arr_3 [i_0]);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            {
                                arr_21 [i_0] [i_4] [i_4] [i_6] = (arr_12 [i_0] [i_4] [1]);
                                arr_22 [i_6] [i_1 + 1] = ((-(min((min((arr_7 [i_0] [i_0]), var_16)), var_3))));
                                var_25 ^= (((arr_15 [i_0] [i_1 + 1] [i_4] [i_5]) ? (min(((var_1 ? (arr_17 [i_0] [i_5] [i_4] [i_6] [i_4] [5] [i_4]) : (arr_1 [i_0]))), var_2)) : (arr_1 [1])));
                                var_26 &= (arr_1 [i_1 + 1]);
                            }
                        }
                    }
                    var_27 = ((var_9 ? (arr_15 [i_1] [13] [i_4] [i_4]) : (arr_10 [i_0] [i_1] [i_1] [i_4])));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        for (int i_8 = 4; i_8 < 13;i_8 += 1)
                        {
                            {
                                var_28 = arr_2 [i_8] [i_4];
                                var_29 = (min((max(-14822, 1985235269457267904)), (arr_17 [11] [i_1 - 2] [i_1] [i_1] [i_7] [i_7] [i_7])));
                            }
                        }
                    }
                }
                arr_28 [6] [i_1] = (arr_20 [i_1 - 2] [i_1] [i_1] [i_1 - 2] [i_1] [i_1] [1]);
                var_30 = (((((~(arr_11 [i_1])))) ? (((arr_20 [i_0] [3] [i_1 - 1] [i_1 - 1] [i_1] [i_1 - 1] [i_1]) ? var_4 : (arr_1 [i_0]))) : ((min((arr_23 [i_1 - 2] [12] [i_0] [i_0] [i_0]), (~var_11))))));
                var_31 *= (arr_4 [i_0] [i_1] [i_0]);
            }
        }
    }
    #pragma endscop
}
