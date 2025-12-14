/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2374
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_15 = (min((arr_10 [11] [i_0] [i_0] [i_0]), (min((arr_10 [18] [i_0] [i_0] [18]), (arr_10 [2] [i_0] [i_0] [i_1 + 1])))));
                            var_16 = ((((min(134201344, var_11))) == 0));
                        }
                    }
                }
                arr_12 [i_0] = ((((9223372036854775807 / (arr_5 [i_0] [i_0])))));
                var_17 = 9223372036854775807;
                var_18 = (min(var_18, (-9223372036854775807 - 1)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 18;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            {
                var_19 += (max(var_11, (min((arr_15 [i_4 + 4]), ((6654 ? (arr_13 [11] [i_5]) : var_5))))));
                arr_20 [i_5] = ((var_6 ? -28889 : var_14));
            }
        }
    }
    var_20 = (var_14 * var_7);
    var_21 = (((max(-9223372036854775807, 105))) ? (min(105, 6074471658297564317)) : (~var_7));
    #pragma endscop
}
