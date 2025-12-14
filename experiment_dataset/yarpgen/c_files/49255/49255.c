/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49255
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_0] = var_12;
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_19 = (arr_6 [i_2] [i_1] [i_3] [i_2 - 1]);
                            arr_11 [i_0] [i_1] = (((-28 && -28) != ((var_15 ^ (var_18 - var_0)))));
                            var_20 |= ((var_5 * ((0 ? (((arr_10 [i_0] [i_1] [i_3] [i_3] [i_1] [i_0]) ? 9223372036854775807 : -22662)) : (!9223372036854775796)))));
                        }
                    }
                }
            }
        }
    }
    var_21 += ((((-(~-17123)))) ? -9223372036854775797 : var_13);
    var_22 += (!27014);
    var_23 = ((!((max(var_16, (!var_13))))));
    #pragma endscop
}
