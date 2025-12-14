/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25305
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_7 && ((max(9, 557534160)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_11 = var_9;
                            var_12 |= ((var_9 | ((((arr_3 [i_2 - 1]) > (arr_3 [i_1 - 1]))))));
                            arr_15 [i_1] [i_1] [i_0] = ((((17 ? 47676 : (((arr_7 [i_1] [i_1]) ? 0 : 9021320758414699536)))) >> (4045554426 - 4045554421)));
                            arr_16 [i_0] [i_1 - 1] [i_1] [i_1 - 1] = ((49494 >> (2335553943 - 2335553940)));
                        }
                    }
                }
                var_13 = (((((~(-2147483647 - 1)))) & ((39030 ? 18446744073709551606 : 18446744073709551615))));
            }
        }
    }
    var_14 = (((((((~0) + 2147483647)) >> (var_6 - 6842827293439001303))) ^ var_0));
    #pragma endscop
}
