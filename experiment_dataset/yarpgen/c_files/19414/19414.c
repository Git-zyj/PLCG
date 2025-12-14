/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19414
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1] [i_2] [13] [i_2] [i_3] [i_2] = (arr_11 [i_0] [i_2] [i_2] [i_2] [i_4]);
                                arr_16 [i_0] [i_1] [i_2] [i_2] [i_3] [i_2] = (min((arr_13 [i_2] [i_1] [i_1] [15] [i_1]), (min((((arr_7 [i_3] [i_2] [i_2] [i_0]) ? 4486053687753977194 : (arr_14 [i_2] [i_2]))), 8997220730841771983))));
                            }
                        }
                    }
                }
                var_18 = (((((arr_14 [i_1] [i_1]) ? (arr_12 [i_0] [4] [i_0] [i_0] [i_0] [i_0] [18]) : 1))));
            }
        }
    }
    var_19 = 1;
    var_20 = ((var_14 * (!800913881)));
    var_21 ^= var_15;
    #pragma endscop
}
