/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201361
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_1;
    var_18 = ((((((var_15 || -13) ? 3 : (-9 >= var_2)))) || (((224 * (!var_16))))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (min(0, (arr_0 [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1 + 1] = (min((~0), (((-8702460054792389503 ? var_4 : (arr_5 [i_0] [i_1 + 2] [i_2] [i_1 + 1]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_1 - 1] [i_2] [i_3] [i_4] = (min((arr_10 [0] [i_0] [i_1] [1] [i_4 - 1] [i_4 + 3]), (((min(9223372036854775807, 0)) ^ (~var_12)))));
                                var_19 -= (min((arr_0 [i_0]), (min((11 & 65535), 33))));
                            }
                        }
                    }
                    arr_13 [i_1] [i_1] [i_2] = (~-3);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            {
                                arr_20 [i_0] [i_5] [i_2] [5] = ((1 ? ((((((var_10 ? var_9 : (arr_9 [i_0] [i_2] [i_5] [9])))) ? ((min(0, -1))) : (var_3 - var_7)))) : (((arr_8 [i_0] [i_1] [i_2] [i_5]) - 956821169581275808))));
                                arr_21 [i_2] [i_2] [i_2] [i_5] [10] = ((9 ? (((~var_13) ? 13 : (-32767 - 1))) : (((arr_9 [13] [i_1] [i_1 + 1] [i_5]) / var_6))));
                                arr_22 [i_0] [1] [i_1 + 1] [i_2] [i_5] [i_6] [i_6] |= ((+((((((arr_19 [i_0] [i_5] [i_2] [i_5]) ? 127 : 32767))) ? (arr_4 [i_0] [i_0] [i_2]) : ((var_16 / (arr_11 [i_1 - 1] [i_2] [i_5])))))));
                            }
                        }
                    }
                }
            }
        }
        var_20 -= 0;
        arr_23 [i_0] [i_0] = (!1);
    }
    var_21 |= (((~((17 ? var_4 : var_7)))));
    var_22 ^= (((0 != var_15) | var_12));
    #pragma endscop
}
