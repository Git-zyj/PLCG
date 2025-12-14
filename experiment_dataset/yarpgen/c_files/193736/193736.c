/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193736
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_9, ((var_0 ? var_5 : 15804))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_15 -= ((((38500 | (arr_2 [i_0 - 1]))) != (arr_0 [i_1])));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_16 = (min(((((arr_6 [i_0 + 1] [i_0 + 1] [i_0 + 1]) ? ((18 ? var_11 : 202)) : (3925848828309745485 || 11145968415799262471)))), (arr_4 [i_0] [i_0 + 1] [i_2])));
                            var_17 = min(((142796736 ? 4294967295 : 55287)), var_9);
                            arr_9 [i_0] [i_1] [i_2] [i_3] = (arr_1 [i_3]);
                            var_18 = (arr_1 [i_0 + 1]);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
