/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31727
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = max((~1789699092354491045), ((var_7 + (var_10 << 0))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_21 = 108817166;
                            var_22 = ((min((max(var_4, 1467850940), var_17))));
                            var_23 *= (arr_2 [i_0 + 1]);
                        }
                    }
                }
                var_24 = (arr_4 [i_1]);
                var_25 ^= ((16657044981355060570 != (((((-790270469 ? var_3 : var_15))) ? -var_3 : (arr_8 [i_0 - 1] [i_0 + 2] [i_0 + 2] [i_0] [i_0] [i_0 + 2])))));
            }
        }
    }
    var_26 = (max(var_26, var_5));
    #pragma endscop
}
