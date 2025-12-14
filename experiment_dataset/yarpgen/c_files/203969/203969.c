/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203969
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] [i_1] = (((4021616128 | 4021616148) ? (min(273351167, 1)) : 273351147));
                arr_8 [i_0] [i_0] [i_1] = 273351147;
                arr_9 [i_0] [i_1] [i_0] = var_0;
                arr_10 [i_0] = (max(((-57 ? (arr_5 [i_0 + 1] [i_1]) : (arr_5 [i_0 + 2] [i_1]))), (((~((54 ? 1 : 99)))))));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_16 |= -55;
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_17 = (min(((min(8682, 0))), (((arr_18 [i_0] [i_1] [i_2] [i_3 - 2] [i_2]) << (((arr_18 [i_0 + 2] [i_0 - 1] [i_0] [i_0 - 1] [i_0]) - 171245929))))));
                                arr_20 [i_0] [i_1] [i_2] [i_2] [i_0] = var_1;
                                arr_21 [i_0] [i_0] [i_2] [i_0] [i_0] [i_4] = ((((1 ? (((99 ? 273351169 : (arr_4 [i_0])))) : 178)) & ((max((var_2 ^ 273351148), ((((-9223372036854775807 - 1) ? var_2 : 20551))))))));
                            }
                        }
                    }
                    var_18 = ((2943100808 ? -71 : 4294967295));
                    var_19 = (max(var_12, 4));
                }
            }
        }
    }
    var_20 = ((((-4 || -274) ? (var_14 / var_11) : (74 >= 4021616148))));
    #pragma endscop
}
