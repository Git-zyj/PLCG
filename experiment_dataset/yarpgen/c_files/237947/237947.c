/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237947
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_1;

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = var_13;
        var_16 = (min(var_16, var_9));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 10;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_1] [i_2] [0] = ((~((((min(8179, var_6)) < var_3)))));
                        arr_12 [i_3 + 1] [i_3] [8] |= (((((-44 ? 8184 : -1))) > (((arr_10 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3] [i_1]) ? (arr_10 [i_3 - 1] [5] [i_2] [i_3] [i_2]) : (arr_10 [i_3 + 2] [i_1] [0] [3] [i_0])))));
                        var_17 *= ((((var_2 ? var_14 : var_8)) >> (var_5 - 31196)));
                        arr_13 [i_0] [i_1] [12] [i_3 - 1] &= ((arr_4 [i_0] [12] [i_0]) & (min(8179, 2859825184)));
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        arr_16 [12] |= (((((((((arr_15 [i_4]) || var_2)))) > (min(var_14, (arr_14 [i_4]))))) ? (max(57329, 57364)) : ((((((arr_15 [i_4]) << (var_14 - 3061757898)))) ? (min(-48, var_8)) : -8))));
        arr_17 [i_4] = arr_14 [i_4];
        arr_18 [i_4] = (((arr_14 [i_4]) ? 4497924698192892321 : (((~(var_3 || var_7))))));
        arr_19 [i_4] = var_0;
    }
    #pragma endscop
}
