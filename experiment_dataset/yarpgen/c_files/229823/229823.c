/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229823
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += (max(((var_1 ? (max(var_8, 12366)) : var_5)), ((min(var_4, var_6)))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] &= (min((((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : var_1)), (min((arr_1 [i_0] [i_0]), (arr_0 [13])))));
        arr_3 [i_0] = ((-(((arr_1 [i_0] [i_0]) ? 32 : -3811778971586240341))));

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_11 = -12365;
            var_12 = (min(var_0, -var_7));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            var_13 |= ((var_6 << (-16898 + 16926)));
            var_14 = var_5;
            var_15 = 3129681743;
            var_16 = (arr_0 [i_2]);
            var_17 = (min(var_17, (arr_1 [i_0] [i_2])));
        }
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_18 = (arr_10 [i_3]);
        var_19 = (min(var_19, var_5));
        arr_14 [i_3] = (((~var_7) ? (((var_5 == (arr_0 [i_3])))) : ((min(var_7, (arr_0 [i_3]))))));
    }
    var_20 = (min(((var_0 - ((min(var_2, 93))))), ((-15830 ? -1991338807 : 126))));
    var_21 ^= ((((((min(var_7, 18446744073709551615))) ? var_2 : (max(1, var_8)))) & ((~((var_6 ? var_8 : var_0))))));
    #pragma endscop
}
