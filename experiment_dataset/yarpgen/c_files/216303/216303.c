/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216303
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        var_14 *= ((min(1, 9223372036854775807)));
        var_15 += ((1 >> (9706958631409010117 - 9706958631409010086)));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 10;i_3 += 1)
            {
                {
                    arr_11 [i_2] [5] [i_2] = -105;
                    arr_12 [i_1] [i_1] [i_1] &= ((~(arr_4 [i_3 + 1] [i_3])));
                }
            }
        }
        var_16 = (max(var_16, (!var_11)));
        var_17 = (((arr_3 [i_1]) ? 8739785442300541498 : (arr_3 [i_1])));
    }
    var_18 = ((((var_12 ? 1 : (min(var_7, 8265223670846646726))))) ? 1 : var_11);
    var_19 = var_0;
    #pragma endscop
}
