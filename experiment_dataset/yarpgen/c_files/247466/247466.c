/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247466
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max((var_9 > -538762680), 538762695));
    var_20 = (max(var_20, var_1));
    var_21 = ((!((max((max(538762695, var_15)), -1)))));
    var_22 = (((min(var_17, -538762680)) / (var_7 * var_10)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_23 = -1;
                            arr_9 [i_0] [i_1] [i_2] [i_3] = (min((arr_1 [i_0] [i_1]), (((var_17 ? var_14 : var_18)))));
                        }
                    }
                }
                var_24 = (min((min(var_13, (arr_4 [i_1]))), (4315 / -8)));
            }
        }
    }
    #pragma endscop
}
