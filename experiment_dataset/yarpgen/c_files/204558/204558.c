/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204558
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_10 = ((-((578718169 ? ((0 ? (arr_1 [i_0] [i_0]) : 1)) : ((-(arr_2 [i_0] [i_0])))))));
        var_11 = (((min(127, 4598741196371944538)) <= (((var_8 ? (arr_3 [8] [i_0]) : (~var_6))))));
    }

    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        arr_6 [i_1] = ((1192363196 & ((-104 ? var_0 : (arr_4 [i_1])))));
        var_12 *= var_4;
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        var_13 = (((arr_9 [i_2]) <= 55));
        var_14 ^= (1 & -2147483628);
        var_15 = (max(var_15, (((1192363196 ? -4598741196371944545 : 0)))));
        arr_10 [i_2] [i_2] &= (~542962423489104499);
    }
    var_16 = ((var_2 ? ((((var_2 + 1) ? ((min(var_9, var_1))) : (var_3 * var_9)))) : var_7));
    var_17 = ((var_4 == ((1 ? (((var_8 ? 1 : 1))) : ((var_7 ? var_7 : 0))))));
    #pragma endscop
}
