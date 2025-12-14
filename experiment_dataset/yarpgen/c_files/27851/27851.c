/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27851
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_12;
    var_15 = (12 * 1184147091);
    var_16 = -1184147096;
    var_17 = ((~(min(var_13, var_11))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_18 = ((var_0 && ((((max(1184147091, 15)) - var_8)))));
                arr_6 [i_0] [i_1] = ((~135543657871797672) * 218);
                var_19 = (max(var_5, (max((((arr_2 [i_0] [i_0]) | (arr_5 [i_0] [2] [2]))), var_3))));

                /* vectorizable */
                for (int i_2 = 3; i_2 < 14;i_2 += 1)
                {
                    var_20 = (arr_7 [i_0] [i_1] [i_2 + 2]);
                    arr_10 [i_2] [i_0] = ((((arr_5 [15] [15] [15]) + 1184147091)));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_16 [i_4 + 1] [i_3] [i_2 - 1] [5] [5] = (arr_2 [i_2] [i_4 + 2]);
                                arr_17 [i_4] [i_4] [i_4] [i_4] [11] = 18;
                            }
                        }
                    }
                }
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    var_21 = (min((min((arr_19 [i_5] [i_0] [i_5]), (arr_9 [i_0] [i_5]))), (!-1184147091)));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            {
                                arr_26 [i_0] [i_1] [i_5] [i_6] [i_6] = -1184147091;
                                arr_27 [i_0] [i_0] [9] [i_0] [i_0] [i_6] [i_0] = ((+(((arr_11 [i_7] [i_6] [i_5] [i_1] [i_0]) + 192))));
                                var_22 = ((((((arr_8 [i_0]) ? (arr_8 [i_6]) : (arr_8 [i_0])))) ? (!142) : (arr_8 [i_0])));
                                arr_28 [i_6] [9] = 49;
                                var_23 = ((!((max(((var_4 ? var_2 : var_1)), ((min(59, var_2))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
