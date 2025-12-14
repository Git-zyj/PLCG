/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191499
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        var_20 = (((arr_0 [1]) | ((((arr_7 [i_2 - 4] [i_2] [i_2] [i_1 + 1]) || (arr_7 [i_2 + 2] [i_2] [i_2] [1]))))));
                        var_21 = ((((((arr_2 [i_3] [i_2] [i_0]) ? (arr_2 [i_0] [i_0] [i_3]) : var_17)))) ? ((((!((((arr_10 [i_2] [i_0] [1] [1]) ? var_13 : (arr_7 [i_0] [i_2] [i_2] [i_3])))))))) : (min(((((arr_1 [i_1 + 1]) ? 109 : (arr_7 [i_2] [i_2] [i_2] [i_0])))), (arr_4 [i_0] [i_1 - 1] [i_2]))));
                    }
                }
            }
        }
        arr_12 [i_0] = (((arr_8 [i_0] [i_0] [i_0] [i_0]) ? (max(-7110372624172872555, (max(6371437615018582866, var_9)))) : var_3));
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 23;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    {
                        arr_22 [i_0] [i_4] [i_6] [i_4] [i_4] [i_0] &= (arr_11 [i_6] [i_5 + 1] [i_0] [i_0]);
                        var_22 = (max(var_22, var_4));
                    }
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 18;i_7 += 1)
    {
        var_23 = (((~(arr_1 [i_7]))));
        arr_26 [i_7] [i_7] |= (max(((((((70 ? (arr_6 [11] [11] [11] [15]) : (arr_9 [i_7] [i_7])))) || (arr_2 [i_7] [23] [i_7])))), (((arr_2 [i_7] [i_7] [i_7]) >> (arr_2 [i_7] [i_7] [i_7])))));
        var_24 = 15;
        var_25 = ((~((-202 ^ (arr_8 [i_7] [i_7] [i_7] [i_7])))));
    }
    for (int i_8 = 0; i_8 < 20;i_8 += 1)
    {
        var_26 = (min(var_26, (arr_6 [i_8] [i_8] [i_8] [i_8])));
        arr_29 [i_8] [i_8] = 118;
        arr_30 [i_8] = ((913498498 ? var_8 : (~-4428310082532395274)));
    }
    var_27 |= ((((min((((var_9 ? -913498516 : var_19))), var_7))) ? 2256567214 : (((210 - var_18) & (max(var_17, var_6))))));
    #pragma endscop
}
