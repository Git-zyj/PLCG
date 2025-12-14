/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51313
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = -2068243094;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            {
                var_18 = (!231);
                arr_6 [i_0] [i_1] |= ((+(((arr_0 [i_1 - 1] [i_1 + 2]) ? var_12 : (arr_0 [i_1 - 2] [i_1 - 2])))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_19 = (min(var_19, (!0)));
                                var_20 = (var_9 / 243);
                                var_21 = var_3;
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 += var_10;
    #pragma endscop
}
