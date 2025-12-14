/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243276
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_12;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_19 = (arr_1 [i_0 - 1] [i_0]);
        var_20 = (~var_14);
        arr_3 [i_0] [i_0] = var_12;
        arr_4 [i_0 + 1] [i_0 + 1] = (~104246447);
    }
    for (int i_1 = 2; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_21 = min(((var_8 >= ((max(var_0, var_6))))), ((!(5294861597282367991 * var_0))));
        arr_7 [i_1 - 1] = ((((-(arr_5 [i_1] [i_1]))) ^ 18189));
        arr_8 [i_1] = var_5;
    }
    var_22 -= ((!((((~var_7) - (var_11 | var_7))))));
    var_23 = var_15;
    #pragma endscop
}
