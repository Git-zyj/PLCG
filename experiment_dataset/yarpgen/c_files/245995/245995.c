/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245995
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_11 = (((arr_1 [i_0 + 1]) & 622072099));
        var_12 = ((((var_10 + (arr_0 [i_0 + 1])))) ? (arr_0 [i_0 + 1]) : ((var_7 % (arr_1 [i_0]))));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_13 = (3613 && -51);
        var_14 += ((((((arr_1 [i_1]) | (arr_1 [i_1])))) ? (((((arr_1 [i_1]) <= (arr_1 [i_1]))))) : ((0 ? 910496561171300115 : (arr_1 [i_1])))));
        arr_6 [i_1] = arr_2 [i_1] [i_1];
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 7;i_4 += 1)
                {
                    {
                        arr_18 [i_3] [i_3] [i_4] [i_4] [i_3] [i_3] = var_7;
                        arr_19 [i_4] [i_2] [i_2] [i_3] [i_4 + 1] = (~((max(29775, 36544))));
                        var_15 = (((((((max((arr_4 [i_1] [i_1]), 5268197127895512304))) ? 1 : (arr_5 [i_3])))) | 15386549740696967437));
                        var_16 = var_4;
                    }
                }
            }
        }
        arr_20 [i_1] = ((-(((((935939454 ? -935939455 : (arr_4 [i_1] [i_1])))) ? var_2 : 1125371065))));
    }
    var_17 &= var_6;
    #pragma endscop
}
