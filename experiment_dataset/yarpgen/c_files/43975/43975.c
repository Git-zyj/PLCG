/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43975
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [i_1] = var_5;
                arr_7 [i_0 - 3] [i_1] = ((arr_4 [i_0 + 1] [i_1]) ? (arr_4 [i_0 - 3] [i_1]) : (arr_4 [1] [i_1]));
                arr_8 [i_0 - 3] [i_1] = (min(((-(~var_10))), (((!((((arr_0 [i_0]) ? (arr_5 [i_0] [i_0]) : var_9))))))));
                var_20 &= (max((~22246), ((~(arr_3 [i_0 - 3] [i_0 + 1])))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        arr_11 [i_2] [i_2] = ((~(~892254338606087435)));
        arr_12 [i_2] = ((+((+((var_12 ? (arr_9 [i_2]) : (arr_10 [i_2])))))));
        var_21 = ((((!((max(var_4, var_14)))))) & ((~(~0))));
        var_22 += (!-var_9);
        var_23 = (-48635 ? (min(var_15, ((3703 ? 28 : 1)))) : (arr_9 [i_2]));
    }
    #pragma endscop
}
