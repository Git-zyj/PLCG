/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239814
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_10 [i_3] [i_3] = ((max(127, -1469283570)));
                                var_13 = 124;
                            }
                        }
                    }
                    arr_11 [i_0] = (((max(((max(-122, -1179006520))), (max(var_1, 85389302)))) + (-127 - 1)));
                }
            }
        }
    }
    var_14 = (max(var_1, (!1)));
    var_15 = (max(1469283570, (((!var_2) / var_0))));

    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        arr_16 [i_5] = 41;
        arr_17 [i_5] = var_6;
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 19;i_6 += 1)
    {
        var_16 = (var_12 & var_10);
        arr_20 [i_6] [i_6] = -6;
    }
    var_17 += var_3;
    #pragma endscop
}
