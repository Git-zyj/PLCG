/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243667
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= (((((var_1 ? var_3 : ((-52 ? var_9 : -33))))) ? var_19 : var_4));
    var_21 = (~var_5);

    /* vectorizable */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_22 = (min(var_22, var_18));
        var_23 = (arr_0 [i_0]);
        var_24 *= ((~(arr_1 [i_0 - 1])));
        var_25 *= ((-(~var_7)));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 18;i_1 += 1)
    {
        var_26 = (max(var_26, var_10));
        arr_4 [1] [i_1 - 1] = (~33);

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_27 = (min(var_27, (arr_3 [i_2])));
            arr_8 [i_1] = ((((((arr_2 [i_1 + 1] [i_2]) - (arr_3 [i_1])))) || (((var_16 ? 20 : -7737)))));
        }
        arr_9 [i_1] = var_0;
        var_28 = (((arr_2 [i_1] [i_1 + 1]) ? (arr_2 [i_1 + 1] [i_1]) : (arr_2 [i_1 + 1] [i_1 - 1])));
    }
    #pragma endscop
}
