/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205214
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_18;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_4 [i_0] = var_2;
        var_21 = (max(var_21, ((min((~18446744073709551615), 8296197529867265158)))));
        var_22 += (~97);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = (((arr_5 [i_1]) ? ((-97 ? -70 : (arr_6 [i_1]))) : (arr_6 [i_1])));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 21;i_3 += 1)
            {
                {
                    var_23 &= (((((~(arr_12 [i_3 - 1] [i_1] [i_1])))) || (((arr_8 [i_3 - 2] [2]) != (arr_6 [8])))));
                    arr_15 [i_1] [i_2] [i_3 - 2] [i_1] = var_18;
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        for (int i_5 = 3; i_5 < 21;i_5 += 1)
                        {
                            {
                                arr_22 [i_5 - 3] [i_1] [i_4] [i_3] [i_1] [i_1] = (((arr_12 [i_2 + 1] [i_4] [i_3 - 1]) ? (arr_12 [i_2 - 1] [i_2] [i_3 - 1]) : var_13));
                                arr_23 [i_1] [i_2] [14] [i_4] [i_2 - 1] = ((6742182769412031507 != (~711)));
                                var_24 ^= (((((var_13 >> (arr_21 [i_5] [i_4] [i_3 + 1] [i_2])))) ? 175 : (~97)));
                            }
                        }
                    }
                    var_25 = (~var_11);
                }
            }
        }
        var_26 = (max(var_26, ((((~2179218242961465484) <= (arr_10 [12]))))));
    }
    #pragma endscop
}
