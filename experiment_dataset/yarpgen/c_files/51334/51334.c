/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51334
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= (((((-(3362239222 * -1151876673)))) ? (((12252786380026952903 / 2547513786) / (((7978 ? 32 : -7121517119950607835))))) : var_3));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 22;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0 - 3] [i_0] = ((!((((arr_0 [i_0 - 1] [i_0 + 3]) ? (arr_1 [i_0]) : -8686586903620695469)))));
        var_19 = ((var_4 ? -1668452153 : ((220 ? var_11 : 42))));
        arr_3 [i_0] [i_0] = -107;
    }
    for (int i_1 = 3; i_1 < 22;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = (arr_0 [i_1] [i_1]);
        var_20 = (((((arr_6 [i_1]) > 1)) ? (((max(1, (((arr_1 [i_1]) || var_13)))))) : (max((136 == var_11), (arr_1 [i_1])))));
        arr_8 [i_1] [7] &= (min(((((arr_5 [i_1 + 2] [i_1 - 3]) ? ((min(119, -2))) : (((arr_0 [i_1] [i_1]) | var_11))))), (min((arr_6 [i_1 + 3]), -9143907742329251875))));
    }
    #pragma endscop
}
