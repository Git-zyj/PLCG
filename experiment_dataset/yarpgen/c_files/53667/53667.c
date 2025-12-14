/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53667
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                {
                    arr_8 [6] &= (min(13, 252));
                    var_13 = ((-402792333 ? (((arr_0 [i_0 + 1] [i_2 + 3]) ? (arr_0 [i_0 - 1] [i_2 + 2]) : (arr_0 [i_0 - 1] [i_2 - 2]))) : 4));
                    var_14 = 402792317;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_15 += ((((((arr_14 [i_4 - 1] [i_1] [i_2] [i_1] [i_4 - 1]) | ((-6288948752602219012 ? 3318791959 : var_7))))) ? -var_8 : (((arr_14 [i_0] [i_0] [i_0] [i_0] [2]) ? (arr_4 [i_0 - 1]) : 8755356884811460191))));
                                var_16 &= (((min(0, var_1))) ? var_5 : (((~-35) ? 905278913 : (-3569036210071219417 | 4))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = (max(var_17, (((2172080172 & (((-402792335 & ((max(1, 1)))))))))));
    #pragma endscop
}
