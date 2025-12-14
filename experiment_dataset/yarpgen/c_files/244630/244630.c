/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244630
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_3;
    var_12 = ((max(16845217974009442102, var_6)));

    for (int i_0 = 3; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_13 &= ((var_4 ? (~var_4) : var_8));
        var_14 = (min(var_14, (((-(min(-var_9, (3179 || 62382))))))));
    }
    for (int i_1 = 3; i_1 < 12;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = (((((~(((var_1 + 2147483647) << (var_5 - 28230466)))))) / ((+(((arr_1 [i_1] [i_1]) ? (arr_0 [i_1] [i_1]) : 16845217974009442102))))));
        var_15 ^= (((((arr_0 [i_1 + 1] [i_1 - 3]) ? (arr_0 [i_1 + 1] [i_1 + 2]) : (arr_2 [i_1 + 2])))) && (arr_4 [i_1] [2]));
    }
    /* vectorizable */
    for (int i_2 = 3; i_2 < 12;i_2 += 1) /* same iter space */
    {
        arr_10 [i_2] = ((!(arr_8 [i_2])));
        arr_11 [i_2] = ((-((var_2 ? (arr_8 [i_2]) : 1))));
        arr_12 [i_2] = (~-var_6);
    }
    #pragma endscop
}
