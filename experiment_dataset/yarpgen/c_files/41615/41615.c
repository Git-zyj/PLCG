/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41615
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = 0;
        arr_3 [i_0] [i_0] = (arr_1 [1] [1]);
        var_10 = (max(var_10, var_5));
        arr_4 [i_0] [21] = -32763;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 21;i_3 += 1)
                {
                    {
                        var_11 = ((-(32763 == var_6)));
                        var_12 *= (((57603 ^ 0) ? var_6 : (arr_10 [i_3 - 1] [i_3 - 1] [i_3 + 1] [i_3])));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        arr_18 [1] = (((arr_6 [i_4]) >= (arr_6 [i_4])));
        arr_19 [i_4] |= var_7;
        arr_20 [7] = (((((arr_15 [i_4] [i_4]) / var_1)) - (((arr_1 [i_4] [i_4]) * var_6))));
    }
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        arr_23 [i_5] = (min(((1 ? ((((arr_21 [1] [i_5]) ^ var_1))) : ((30282 ? -32733 : var_8)))), (4196 & var_1)));
        arr_24 [3] = ((+(((min((arr_12 [i_5] [i_5] [i_5]), var_0)) - (((min(var_0, 1))))))));
    }
    var_13 = var_2;
    #pragma endscop
}
