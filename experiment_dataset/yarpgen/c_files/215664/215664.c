/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215664
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += ((~((((max(-6465406794006689115, -6465406794006689100))) ? var_4 : (max(var_4, var_3))))));
    var_11 = var_5;
    var_12 &= (var_8 ? var_1 : var_9);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_13 = (max(var_13, 0));
                            var_14 = (~10127910945273050997);
                        }
                    }
                }
                var_15 = (arr_2 [i_1] [i_0]);
            }
        }
    }
    #pragma endscop
}
