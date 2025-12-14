/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196562
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = -12;

    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        var_13 = (((((arr_0 [i_0 + 1]) ? (arr_0 [i_0 - 3]) : -1)) == 120));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] = (((((((max(709, 5601)))) % (arr_0 [i_0 + 3]))) << (((~var_2) + 7432734679645423728))));
                    var_14 = (116 < var_5);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_15 = 127;
                                var_16 *= (((arr_10 [4] [i_2 + 2] [8] [i_4 + 2]) ? ((var_7 ? var_7 : (arr_8 [i_4 + 2]))) : (((var_1 << (((arr_4 [i_4 + 2] [i_2 - 1] [i_0 - 2]) + 48)))))));
                            }
                        }
                    }
                }
            }
        }
        arr_17 [i_0] = 19;
        arr_18 [i_0] = (((var_4 > var_0) != var_7));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        arr_23 [i_5] = (((arr_13 [i_5] [1] [1] [i_5]) ? var_1 : (arr_13 [i_5] [8] [i_5] [i_5])));
        var_17 = (arr_8 [i_5]);
        arr_24 [i_5] [i_5] = ((-(arr_14 [i_5] [10] [i_5] [i_5] [i_5] [i_5] [i_5])));
        arr_25 [10] = (-127 - 1);
        var_18 |= ((arr_21 [i_5]) || (arr_21 [i_5]));
    }
    #pragma endscop
}
