/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196543
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(-2819866389282058608, 93435714));
    var_16 = var_2;
    var_17 -= (max(var_8, -89));

    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0 + 1] [i_0] = (max((min((max((arr_0 [i_0] [i_0]), (arr_2 [10]))), (((arr_2 [i_0]) ? var_4 : var_1)))), (max((arr_2 [i_0 - 3]), (arr_2 [i_0 - 1])))));
        var_18 = ((var_11 ? (~var_9) : (max(((((arr_2 [i_0]) ? (arr_1 [i_0 - 2]) : (-2147483647 - 1)))), -2819866389282058608))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
        {
            arr_6 [i_1] = (((((2819866389282058604 ? -2819866389282058593 : 2819866389282058613))) ? (((arr_2 [i_1]) ? var_7 : var_9)) : ((-7314555200177546867 & (arr_1 [i_0])))));
            arr_7 [i_1] = (arr_1 [i_0]);
            var_19 = ((!(arr_0 [i_0] [i_1])));
            var_20 = var_2;
        }
        for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
        {
            var_21 = (min(var_21, ((min(((((var_10 | var_14) ? var_12 : 32754))), (min((47914 ^ 7314555200177546866), (((2047 ? var_9 : (arr_10 [0])))))))))));
            var_22 |= var_14;
        }
    }
    #pragma endscop
}
