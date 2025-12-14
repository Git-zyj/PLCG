/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2598
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_16 = (((((arr_8 [i_3 + 1] [i_1 + 3] [i_0 + 3] [i_0]) * var_3)) < (min((((arr_0 [i_2]) ? var_3 : (arr_8 [i_2] [i_2] [i_2] [i_3]))), (!32512)))));
                            var_17 += ((var_11 ? ((min(-121, 0))) : var_5));
                        }
                    }
                }
                var_18 = (((121 ? 31 : 452474523)));
            }
        }
    }
    var_19 = (-122 < 26788);
    var_20 = var_2;
    var_21 = ((~((((-1347120687053667348 ? 1 : var_7))))));
    #pragma endscop
}
