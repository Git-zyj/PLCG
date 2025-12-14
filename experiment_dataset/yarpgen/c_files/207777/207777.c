/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207777
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_19 = (min(var_19, var_14));
                var_20 = (max(var_20, var_14));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_21 = ((((max(210, 184)))));
                            var_22 = var_3;
                        }
                    }
                }
            }
        }
    }
    var_23 = (((((-121 ? 756791155 : (((103 ? -69656811 : 120)))))) ? var_8 : (((((0 ? -48 : var_17))) ? (~var_3) : ((var_4 ? 131 : var_11))))));
    #pragma endscop
}
