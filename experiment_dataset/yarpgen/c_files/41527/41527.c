/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41527
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((0 ? var_10 : var_1));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = (((-2147483636 ? 7261385903649198192 : -18095)));

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            arr_5 [i_0] [i_0] = ((var_17 ? 7261385903649198192 : var_0));
            arr_6 [i_0] [i_0] = ((~((-241421530 ? var_8 : 2516383357402143425))));
        }
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            arr_9 [i_0] = ((7261385903649198194 ? -7261385903649198195 : 9223372036854775807));
            arr_10 [i_0] [i_2] = (3722091636 & 12);
        }
        arr_11 [i_0] = -189;
        arr_12 [i_0] [i_0] = -14;
        arr_13 [i_0] [i_0] = (-9223372036854775807 - 1);
    }
    var_21 = (min(11725081643822037225, 9223372036854775807));
    var_22 = (((((35911 ? -7261385903649198213 : ((1350121297167851586 ? 19 : 6721662429887514391))))) ? var_3 : ((9223372036854775797 ? 31457280 : 0))));
    #pragma endscop
}
