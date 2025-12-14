/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205224
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= ((((1414623293 <= var_11) ? ((-1 ? var_9 : 1291972786550572992)) : (max(var_0, var_11)))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] = var_9;
        var_20 = (max((((+((((arr_2 [i_0] [7]) > var_3)))))), (max(((-(arr_1 [i_0] [i_0]))), (var_5 && 236)))));
        arr_4 [i_0] [1] = 0;
        arr_5 [i_0] [0] &= (max(1, 0));
    }
    for (int i_1 = 2; i_1 < 13;i_1 += 1)
    {
        arr_9 [i_1] [i_1] = ((-(((arr_0 [i_1] [i_1 + 1]) & (~1)))));
        var_21 = ((((((max(1, 1)) ? 1 : 197919893))) ? var_17 : (((!(!4097047403))))));
        var_22 = (max(var_22, (((18050 << (((arr_0 [i_1] [i_1]) - 23985)))))));
        arr_10 [i_1] = (1 || 117);
    }
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        var_23 -= 2147483647;
        arr_13 [i_2] = (((var_14 + 2147483647) >> ((min((arr_11 [i_2]), (-25620 != 0))))));
    }
    var_24 = ((-((4097047403 ? (35184367894528 | var_14) : var_11))));
    var_25 = (((((~2147483647) ? 117 : var_12)) & 19580));
    #pragma endscop
}
