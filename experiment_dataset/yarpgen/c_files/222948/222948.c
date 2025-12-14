/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222948
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_4;

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        var_11 = (!1974314026);
        arr_2 [i_0] [i_0] = ((-((-(((arr_0 [2] [i_0]) ? var_7 : 2320653285))))));
    }
    for (int i_1 = 1; i_1 < 20;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 20;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 20;i_4 += 1)
                    {
                        for (int i_5 = 3; i_5 < 21;i_5 += 1)
                        {
                            {
                                var_12 = (((-var_7 & var_2) + 217));
                                var_13 = (~-var_4);
                            }
                        }
                    }
                    var_14 = ((-((var_0 ? (arr_13 [i_1] [i_3] [i_3 - 1] [2] [2] [2] [2]) : var_7))));
                    arr_16 [16] = arr_10 [i_3] [10] [i_3] [i_3] [12] [i_3];
                }
            }
        }
        var_15 = ((-(~var_4)));
    }
    var_16 = (~var_4);
    #pragma endscop
}
