/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243139
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= (((((var_6 >> (124 - 120)))) && var_12));
    var_15 = (~var_1);

    /* vectorizable */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_16 = (arr_1 [i_0]);
        var_17 *= (!var_6);

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_18 = ((+(((arr_3 [i_0 + 1] [i_0]) - -115))));
            var_19 *= 34;
        }
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            arr_8 [i_0] [i_2] [i_2] = 106;
            arr_9 [i_0] [i_0] = -18;
        }
        for (int i_3 = 3; i_3 < 20;i_3 += 1)
        {
            var_20 *= (199 / var_13);
            var_21 = var_12;
        }
    }
    for (int i_4 = 4; i_4 < 13;i_4 += 1)
    {
        arr_15 [i_4] [i_4] = var_5;
        var_22 = (min(-645319817, 1));
        arr_16 [i_4] = (-42 - -645319809);
    }
    for (int i_5 = 3; i_5 < 12;i_5 += 1)
    {
        var_23 = -645319820;
        arr_19 [i_5] [10] = (min(((((~288230376151707648) ? 1 : 65))), (~2827142296)));
    }
    #pragma endscop
}
