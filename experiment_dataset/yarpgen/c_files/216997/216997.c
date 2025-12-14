/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216997
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 24;i_1 += 1)
        {
            {
                var_15 = ((-(((arr_3 [i_0 + 3]) & var_1))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            var_16 *= 253;
                            var_17 = var_2;
                            var_18 = (arr_3 [i_2]);
                        }
                    }
                }
            }
        }
    }
    var_19 = ((((min(var_6, 0))) || (((2473839107 ? var_5 : var_7)))));
    #pragma endscop
}
