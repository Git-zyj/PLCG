/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229193
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_12 = (~var_10);
        var_13 = (max(var_13, ((min((((!1) << (-952133502 + 952133533))), (!1))))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 12;i_1 += 1) /* same iter space */
    {
        arr_4 [i_1 - 2] = (((((var_7 ? 7098772 : (arr_0 [i_1])))) ? (arr_2 [i_1 - 1]) : (arr_3 [i_1 - 2])));
        arr_5 [i_1] [i_1] = ((!(arr_0 [i_1])));
        var_14 ^= (arr_3 [13]);
        var_15 = (((var_5 & (arr_0 [i_1]))));
        var_16 = (((var_8 ? 1298805184 : var_3)));
    }
    var_17 = var_11;
    var_18 = 3684;
    #pragma endscop
}
