/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50546
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_6 [i_0] = (((((((min(4864839092307717974, (arr_0 [i_0])))) ? (max(4351198737767429373, -94)) : 1624432965))) ? -30799 : 203));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_15 += 4864839092307717959;
                            arr_11 [i_3] [i_1] [19] = ((4351198737767429397 ? 1624432957 : 2));
                            arr_12 [i_0] [i_0] [i_0] [i_0] = (((arr_1 [i_0]) ? (((arr_3 [i_2] [i_3]) ? (~var_7) : ((-1624432941 ? 1968717079 : 1032399231)))) : ((~(max(var_13, 1129555416))))));
                            arr_13 [i_0] [i_0] |= ((((max(76, 0))) ? var_4 : ((max(245, -18)))));
                        }
                    }
                }
                arr_14 [i_1] &= (221 << ((min(-73, 23))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        {
                            var_16 *= 2623639443550104087;
                            arr_20 [i_5] [i_4] = (!1);
                        }
                    }
                }
            }
        }
    }
    var_17 = (max(29, 11800954348452074712));
    var_18 = (min(var_18, var_4));
    #pragma endscop
}
