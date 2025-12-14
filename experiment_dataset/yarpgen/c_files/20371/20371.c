/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20371
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_16;
    var_18 = 255;
    var_19 = (var_1 | var_1);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] [9] [i_0] [i_0 - 1] [14] = (max(-2147483630, (-32767 - 1)));
                                var_20 = ((((-1 ^ 127) + 2147483647)) << ((((((~(arr_0 [i_2]))) + 192)) - 19)));
                            }
                        }
                    }
                }
                var_21 = (((arr_8 [i_1] [i_0 + 2]) <= (arr_4 [i_1])));
                var_22 = (min(var_22, (max(-2147483630, (arr_12 [i_1] [i_1] [i_1] [i_0] [i_0])))));
                arr_15 [i_0] = 21907;
            }
        }
    }
    #pragma endscop
}
