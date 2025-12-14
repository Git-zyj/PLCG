/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46542
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (~var_15);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_13 [i_3] [i_2] [i_3] = ((var_0 ? (var_15 == var_0) : ((((max(13, 65535)) == var_8)))));
                                arr_14 [i_0] [i_3] [17] = var_0;
                            }
                        }
                    }
                    arr_15 [i_1] = var_6;
                }
            }
        }
    }
    var_18 |= ((((max((~var_15), var_16))) ? (((-2881483599005145334 ? 22 : ((36 ? var_13 : -62))))) : (max(var_10, var_13))));
    #pragma endscop
}
