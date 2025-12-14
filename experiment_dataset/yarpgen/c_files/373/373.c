/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/373
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_11 > (((var_3 - var_10) ? var_0 : var_8))));
    var_13 = (min(var_10, ((255 ? -170 : 7424933217801162204))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_14 = ((((((arr_1 [i_0]) ? -118 : (arr_2 [i_0]))) == (arr_2 [10]))));
        var_15 = 12;
        var_16 = var_3;
        var_17 = 2147483647;
        var_18 = 9849;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_19 = (arr_4 [i_1] [i_1]);
        var_20 = (arr_3 [i_1]);
        var_21 = ((((arr_2 [i_1]) ? 7401663097268033591 : 150)));
        var_22 = (arr_3 [i_1]);
    }
    var_23 = (((!var_4) ? 7401663097268033591 : var_7));
    var_24 = var_0;
    #pragma endscop
}
