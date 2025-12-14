/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210285
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, ((((~var_2) + var_3)))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_15 *= (((-1 >= var_12) << ((((max(65533, var_2))) - 65509))));
        var_16 = (max(var_16, ((max((((var_9 ? var_8 : (arr_0 [i_0] [i_0])))), (((arr_1 [i_0] [i_0]) ? var_6 : 0)))))));

        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            var_17 = (min(((min(var_2, (2 || var_8)))), 61069));
            var_18 = (min(var_18, 6016));
        }
        /* vectorizable */
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            arr_7 [i_0] [i_2] [i_2 - 1] = (26546 / 12);
            var_19 |= -var_3;
        }
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            var_20 = (min(var_20, -90));
            var_21 *= (arr_4 [i_0]);
        }
    }
    var_22 = var_11;
    #pragma endscop
}
