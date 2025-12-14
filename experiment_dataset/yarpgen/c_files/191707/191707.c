/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191707
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((1761362154 ? 8002516389363237215 : 49899));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            var_11 = (((arr_3 [i_1]) ? ((-2 ? 488401802 : -3707589752763609782)) : var_6));
            arr_6 [i_0] [i_1] = var_1;
        }
        arr_7 [i_0] = ((1 ? -1761362166 : -85));
        var_12 -= (((((20076 ? (arr_0 [i_0] [i_0]) : var_0))) ? (var_9 && var_3) : (~var_3)));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 0;i_2 += 1)
    {
        arr_10 [i_2 + 1] [4] &= (((((-(arr_9 [i_2] [i_2 + 1])))) ? (arr_9 [i_2 + 1] [i_2 + 1]) : ((var_2 ? var_1 : var_6))));
        arr_11 [i_2] = ((-(arr_8 [i_2])));
    }
    /* vectorizable */
    for (int i_3 = 3; i_3 < 11;i_3 += 1)
    {
        arr_14 [i_3] [i_3] = var_1;
        arr_15 [i_3] = ((((((arr_12 [i_3]) ? var_9 : (arr_8 [i_3])))) ? (arr_12 [i_3 - 3]) : -1761362169));

        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            var_13 = (min(var_13, 9223372036854775801));
            var_14 = (var_1 ^ ((20096 ? var_5 : (arr_12 [i_3]))));
        }
    }
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            for (int i_7 = 3; i_7 < 9;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 10;i_8 += 1)
                {
                    {
                        arr_29 [i_5] [i_8] [i_7] [i_7] [i_7] [i_7] = (arr_18 [i_5] [i_7 - 2]);
                        var_15 = (((!(arr_22 [i_7 - 1] [i_7 - 3] [i_7]))));
                    }
                }
            }
        }
        var_16 = var_1;
    }
    var_17 = ((((min(var_4, ((var_9 ? var_7 : var_3))))) ? -var_5 : (1 == 20076)));
    var_18 |= (~var_9);
    #pragma endscop
}
