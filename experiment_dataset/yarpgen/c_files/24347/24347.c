/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24347
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_10 = ((27 ? 1802122159 : ((1 ? -1802122169 : -1802122159))));
        arr_3 [i_0] [0] = ((((((1 ? (arr_0 [i_0]) : -1802122160)) <= (((!(arr_0 [i_0 - 3])))))) ? ((((arr_1 [i_0 - 1]) <= (arr_1 [i_0 - 1])))) : ((max((arr_1 [i_0 - 1]), (arr_1 [i_0 + 1]))))));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 13;i_1 += 1) /* same iter space */
    {
        var_11 = (max(var_11, ((((118 - 1) == (arr_5 [i_1]))))));
        var_12 += ((arr_0 [i_1 - 3]) ? (arr_4 [i_1 + 1] [i_1 + 1]) : ((((!(arr_4 [0] [0]))))));
        arr_6 [i_1] = (((~(arr_2 [7]))) * (arr_1 [i_1 - 1]));
    }

    /* vectorizable */
    for (int i_2 = 3; i_2 < 16;i_2 += 1)
    {
        var_13 = (min(var_13, ((((arr_8 [i_2 - 3]) * (arr_8 [i_2 - 2]))))));
        arr_9 [i_2] = ((1802122159 ? 178 : (arr_7 [i_2 - 1])));
        var_14 = (((arr_8 [i_2 - 1]) || (arr_8 [i_2 + 1])));
    }
    var_15 = var_8;
    var_16 &= var_8;
    #pragma endscop
}
