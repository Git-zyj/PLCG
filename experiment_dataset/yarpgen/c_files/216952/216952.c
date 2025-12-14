/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216952
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= var_4;
    var_19 += 0;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_20 = (min(var_20, (((max(var_7, (var_10 - var_15)))))));
                                var_21 = (((arr_9 [12] [i_0 + 2] [12] [12] [i_1]) ^ -61));
                                arr_12 [i_4 - 1] [i_1] [i_3] [9] [i_2] [i_1] [i_0 + 1] = (arr_6 [i_4] [i_3] [i_1]);
                            }
                        }
                    }
                    var_22 = var_1;
                }
            }
        }
    }
    #pragma endscop
}
