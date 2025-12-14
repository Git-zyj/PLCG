/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206622
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 -= ((-((((var_7 ? var_1 : var_3)) - (1 + var_6)))));
    var_14 = 0;
    var_15 = (min(var_15, var_1));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_16 = -13033;
                    var_17 = (max(var_17, (((((((~var_0) ^ ((var_11 ? var_8 : 0))))) ? 2029835688 : 18023975920726053219)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_18 = (i_2 % 2 == zero) ? (((-var_2 << (((arr_8 [i_0] [i_2] [1] [1]) - 65))))) : (((-var_2 << (((((arr_8 [i_0] [i_2] [1] [1]) - 65)) - 53)))));
                                var_19 = var_6;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
