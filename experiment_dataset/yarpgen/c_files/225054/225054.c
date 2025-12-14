/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225054
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min((((3 ? -18 : var_6))), -12));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] = -38;
                            arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = 181;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 18;i_5 += 1)
                    {
                        {
                            var_20 = var_18;
                            var_21 = (((!1912673800) ? (((((((-9098776812828539400 + 9223372036854775807) >> (var_4 - 1651977189538348430)))) ? var_8 : -0))) : (min((((arr_14 [i_0] [i_0] [i_0]) ? var_4 : var_5)), (arr_5 [i_0] [i_0] [i_0])))));
                            arr_21 [0] [0] [0] [i_0] &= ((17 ? ((17 / (53383 && -30980))) : var_5));
                        }
                    }
                }
                arr_22 [i_0] [4] [4] |= ((((min((arr_20 [i_1] [i_1] [i_1] [i_1] [i_1]), (((7 < (arr_15 [i_0] [i_0] [i_0])))))) + 9223372036854775807)) << ((((((((arr_15 [i_0] [i_0] [i_0]) ? 606356188 : var_13))) ? (arr_5 [i_1] [6] [i_0]) : (((30971 << (((((arr_20 [i_0] [i_0] [i_0] [i_0] [i_0]) + 8699796265379839204)) - 18))))))) - 3244022819)));
                var_22 -= (arr_0 [i_0] [i_0]);
            }
        }
    }
    #pragma endscop
}
