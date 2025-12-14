/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54924
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_9;
    var_21 = var_2;
    var_22 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            {
                var_23 = 241;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 7;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_11 [i_0 + 2] [i_0 - 1] [i_2] [2] [i_0] [i_2] = (min(((112 ? var_8 : (arr_8 [i_0] [i_4] [i_2] [i_4] [i_0 - 1] [i_0] [i_0]))), ((-(arr_8 [i_0 + 2] [5] [i_2] [i_0] [i_0 - 1] [i_0] [i_0 - 1])))));
                                arr_12 [i_0] [i_0] [1] [i_3] [i_0] = ((((min((min(var_2, 192)), var_14))) ? (min(27645, (max(-4226454291519375185, -3551780322587503194)))) : (var_10 & 4226454291519375184)));
                                arr_13 [i_4] [i_0] [i_2] [i_0] [i_0 + 2] = ((((min(249, 112))) ? -4226454291519375185 : 2147483647));
                                var_24 = -var_11;
                                arr_14 [3] [i_1] [i_2] [i_1] [i_0] [i_1] [i_2] = (((((arr_9 [i_3 + 1] [i_3 - 1] [i_3 + 3] [i_0] [7]) + ((min((arr_6 [i_4] [i_0] [i_0] [i_0] [i_0]), var_18)))))) ? (((-27893 ? (arr_4 [i_0 + 2] [i_1] [10] [i_0 + 2]) : ((var_12 / (-2147483647 - 1)))))) : 7276360029361775662);
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 2; i_5 < 9;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 8;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            {
                                arr_23 [i_0] [i_0] [i_0 + 1] [i_0] = 77;
                                arr_24 [3] [i_6 + 2] [i_0] [i_0] [i_0] [3] = var_14;
                            }
                        }
                    }
                }
                var_25 ^= (((((var_19 ? 15820301338266872526 : -2040639091))) | 15820301338266872531));
                arr_25 [i_1] [i_0] [i_1] &= (((arr_10 [i_0] [i_0] [i_1] [i_0] [i_0]) ? var_17 : var_17));
            }
        }
    }
    #pragma endscop
}
