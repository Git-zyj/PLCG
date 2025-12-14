/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234228
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_20 += ((var_12 ? ((((arr_1 [i_0 + 1]) ? (arr_1 [i_0 + 3]) : (arr_0 [i_0] [i_0 - 2])))) : ((((1164167416 ? 0 : 13262823871644429833)) * var_13))));
        arr_2 [i_0] [i_0] = (((~var_12) | ((((6777386578252581108 ? 0 : -4784780730375774644)) * ((((arr_0 [i_0] [15]) ? 0 : var_11)))))));
    }
    for (int i_1 = 3; i_1 < 13;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = (((((1 ? (arr_1 [i_1 - 3]) : (arr_1 [11])))) ? ((-15 ? (arr_3 [i_1 - 1] [i_1]) : (arr_3 [i_1 - 2] [i_1]))) : (var_18 / 1)));
        var_21 = (((((arr_4 [i_1] [i_1 + 3]) ? (arr_3 [i_1] [i_1]) : -4784780730375774644)) * (((~((max(var_17, 1))))))));
        var_22 &= (((arr_3 [i_1 - 1] [2]) ? -1 : var_9));
        var_23 = (min(var_23, 70));
    }
    var_24 = -1;
    var_25 = (((((var_17 ? (max(var_16, var_6)) : (var_16 + var_0)))) ? var_8 : ((((var_1 | var_12) > (min(var_17, var_2)))))));
    var_26 = (((var_9 * var_3) ? ((((1 ? 4294967292 : var_5)))) : (!10881256064166741466)));
    #pragma endscop
}
