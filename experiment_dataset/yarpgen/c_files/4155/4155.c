/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4155
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                arr_7 [6] [i_0] = (arr_5 [i_0]);
                var_17 = (arr_0 [i_0]);
            }
        }
    }

    for (int i_2 = 3; i_2 < 15;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                {
                    var_18 = (max(var_18, ((((arr_11 [i_2] [i_2 + 2] [i_2 + 2]) & (arr_5 [i_2]))))));

                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 16;i_5 += 1)
                    {
                        var_19 = (arr_3 [i_2]);
                        var_20 = (arr_14 [7] [i_3] [i_3]);
                    }
                    for (int i_6 = 3; i_6 < 14;i_6 += 1)
                    {
                        var_21 = (((arr_12 [i_6] [6]) & 0));
                        var_22 = (max(var_22, (arr_1 [i_2 - 3])));
                        var_23 -= ((arr_12 [i_2 - 1] [i_4]) | (((((arr_15 [i_2] [i_4] [11]) & (arr_3 [15]))))));
                        var_24 = ((arr_8 [i_2]) && (arr_5 [6]));
                        var_25 = arr_11 [9] [i_3 + 3] [i_4];
                    }
                }
            }
        }
        var_26 = (((((((((arr_17 [i_2] [9]) || (arr_8 [i_2])))) >= (arr_19 [i_2] [i_2] [i_2] [i_2 + 2])))) & ((((arr_13 [2] [2] [i_2 + 1] [i_2]) >= (arr_5 [6]))))));
        var_27 = (arr_0 [18]);
    }
    #pragma endscop
}
