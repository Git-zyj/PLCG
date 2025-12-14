/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22655
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_14 = ((!((((arr_0 [i_0]) - (arr_2 [i_1]))))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_15 = ((+((-5560171659668419248 ? (arr_7 [i_3 + 2] [i_3 - 1] [i_3 + 1] [i_2 + 2]) : (arr_2 [i_2 - 2])))));
                            var_16 = -65535;
                        }
                    }
                }
                arr_9 [18] [i_1] [i_1] = (((217 != 1) + (~1)));
            }
        }
    }
    var_17 = ((((((var_2 & -3498) | -3505))) ? ((var_12 ? var_1 : ((var_13 ? var_1 : -3512)))) : ((((137 >> (var_8 + 112))) | var_4))));
    #pragma endscop
}
