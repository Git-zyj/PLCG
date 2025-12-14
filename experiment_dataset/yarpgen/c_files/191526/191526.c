/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191526
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] = arr_0 [i_0];
        var_12 += ((!(arr_0 [i_0])));

        for (int i_1 = 2; i_1 < 16;i_1 += 1) /* same iter space */
        {
            arr_7 [i_0] [i_0] = 2147483647;
            var_13 &= (arr_0 [i_0]);
        }
        for (int i_2 = 2; i_2 < 16;i_2 += 1) /* same iter space */
        {
            var_14 &= var_3;
            var_15 = (max(var_15, (((((((arr_0 [i_2]) + var_6))) ? (var_10 && 0) : (arr_4 [i_2 + 3] [5] [4]))))));
            var_16 = (min(var_16, (-211281988 > -622598366)));
        }
        var_17 = (((arr_0 [1]) ? (arr_0 [i_0]) : (arr_0 [i_0])));
    }
    var_18 = ((~(((((1 ? 647953363 : 3121862254100221082))) ? var_8 : var_6))));
    #pragma endscop
}
