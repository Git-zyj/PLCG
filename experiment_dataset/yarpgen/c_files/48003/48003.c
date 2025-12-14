/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48003
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_16 = (max(var_16, ((((max((max(var_1, var_11)), (23917 & var_9)))) ? var_14 : -31092))));
                                var_17 = (((((17483483671563050157 ? 2 : 963260402146501459)) + (var_1 || 963260402146501459))));
                            }
                        }
                    }
                    var_18 = var_9;
                }
            }
        }
    }
    var_19 = (min(-1983204583, ((((-3770655684490463258 ? 3847 : 1))))));
    #pragma endscop
}
