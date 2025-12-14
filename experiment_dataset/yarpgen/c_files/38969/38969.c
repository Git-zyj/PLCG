/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38969
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_12 *= (16027723138525050187 ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0]));
        var_13 = (min(var_13, ((((arr_2 [i_0] [i_0]) ? (arr_2 [i_0] [i_0]) : (((var_9 ? (arr_1 [i_0] [i_0]) : 1915529417))))))));
        arr_3 [i_0] = ((~((((arr_2 [i_0] [i_0]) == var_6)))));
    }
    var_14 = var_7;
    var_15 = 31;
    var_16 = (min(var_16, (((((((var_9 ? 2669472012 : 1)) ? var_11 : (-274034221 * 2669472012))))))));
    #pragma endscop
}
