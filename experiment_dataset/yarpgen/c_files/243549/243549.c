/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243549
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += var_6;
    var_11 = ((5580 ? 239 : 241));
    var_12 = ((-((-(!0)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_13 += ((((227 ? 208 : 1402539391089141647)) != (arr_0 [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    var_14 = (((arr_4 [i_0] [i_0]) | var_4));
                    arr_8 [i_0] [i_1] [i_1] [i_0] = ((var_8 ? (arr_0 [i_2 + 1]) : var_7));
                    var_15 = (arr_7 [i_0] [i_1]);
                    arr_9 [i_0] [i_2] [i_0] [i_1] = (((((var_5 ? (arr_4 [3] [3]) : var_6))) ? (((arr_6 [i_2] [i_1]) * var_1)) : (arr_3 [i_0])));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 19;i_3 += 1)
    {
        arr_13 [18] [18] = var_0;

        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            arr_18 [i_4] [i_4] [i_4] = 249;
            var_16 = (min(var_16, (~1)));
            arr_19 [i_3] [i_4] = (arr_15 [8] [i_4]);
            var_17 = var_2;
        }
        for (int i_5 = 2; i_5 < 18;i_5 += 1)
        {
            arr_22 [i_3] [i_3] = var_2;
            var_18 += (((((((arr_10 [13]) >= -3741164150796027912)))) >= (((arr_12 [i_3 - 1]) ? (arr_21 [i_5]) : var_3))));
        }
    }
    var_19 = (4274 << (((var_0 <= (!var_7)))));
    #pragma endscop
}
