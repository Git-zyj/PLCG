/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228152
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((!var_10) < var_5)) ? var_7 : (var_5 > 64)));

    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = 12134;
        var_14 = (((((52019 ? (arr_1 [i_0]) : ((((arr_2 [5]) != (arr_0 [20] [i_0]))))))) ? (arr_0 [i_0] [i_0]) : (((-1402 / -2) ? -0 : (var_11 / var_7)))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
    {
        var_15 = ((8188 << (46 - 28)));
        arr_6 [i_1] = ((((-1347607730 ? (arr_0 [i_1] [i_1]) : (arr_1 [i_1]))) <= -47));
        arr_7 [12] [i_1] = var_6;
        arr_8 [4] &= (arr_5 [18]);
        arr_9 [i_1] = ((var_6 ? (((arr_4 [i_1] [i_1]) ? (arr_2 [i_1]) : -19921)) : (((arr_1 [i_1]) ? 32768 : var_4))));
    }
    for (int i_2 = 3; i_2 < 11;i_2 += 1)
    {
        var_16 = (((((~(arr_5 [i_2])))) || ((((-9666 - var_2) ? -41 : 19862)))));
        arr_12 [i_2] = var_3;
        var_17 = -30020;
        var_18 = (((((~(arr_2 [i_2 + 2])))) ? ((var_8 << (((((arr_2 [i_2 - 1]) + 12147)) - 9)))) : (((arr_2 [i_2 - 1]) ? (arr_2 [i_2 + 1]) : (arr_2 [i_2 + 2])))));
    }
    var_19 = (((((-41 - ((var_8 ? 6472 : var_10))))) ? (var_11 * var_5) : var_12));
    #pragma endscop
}
