/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230695
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_7;
    var_14 = ((15688061909722461328 ? (3780466673 / 11878318743084734678) : (min(1816802418, var_12))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_15 *= ((((((((var_4 ^ (arr_1 [i_0])))) ? (arr_3 [i_0]) : var_2))) ? (!-337887171) : (((!(arr_1 [i_0]))))));
        var_16 = ((!(((~(3891128313282807365 == var_4))))));
        arr_4 [9] = (min(12, (((((max(var_7, var_1)))) + 1298406853))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 19;i_1 += 1) /* same iter space */
    {
        var_17 = (((12 < 31) != ((253 ? (arr_6 [i_1]) : 12))));
        arr_8 [i_1] = (123 * (arr_7 [i_1 - 2]));
    }
    for (int i_2 = 2; i_2 < 19;i_2 += 1) /* same iter space */
    {
        arr_12 [i_2] = ((12 ? 191 : -57));
        arr_13 [i_2 + 1] = (((((7340032 ? var_4 : var_6)) * (arr_5 [i_2]))) + (246 + 3));
        var_18 = (19 << ((((((-1133797582 ? 1725350972 : 243)) | (~12))) + 18)));
    }
    #pragma endscop
}
