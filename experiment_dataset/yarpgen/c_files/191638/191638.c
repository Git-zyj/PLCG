/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191638
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_13 = (min(134217728, 45608));
                                var_14 += 10;
                            }
                        }
                    }
                    var_15 = (((((var_6 ? 19908 : (~1161688641)))) ? (min(var_8, ((min((arr_3 [i_0]), 1022))))) : (arr_11 [5] [i_1 - 1] [i_1 - 1] [0])));
                    arr_14 [i_0] = -4;
                    arr_15 [i_0] [i_1 + 2] [i_0] [i_0] = (~3898945640);
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 12;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                {
                    arr_22 [i_5] [i_5] = var_7;
                    arr_23 [i_5] [9] [5] [i_5] = ((9223372036854775807 ? (var_7 / 9223372036854775807) : (~1069235105)));
                }
            }
        }
    }
    #pragma endscop
}
