/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37855
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        var_14 = (((((arr_1 [i_0 + 2] [i_0 + 2]) ? (arr_1 [i_0 + 1] [i_0 + 2]) : (arr_1 [i_0 + 2] [i_0 + 1]))) == ((min(54, -25922)))));
        var_15 = (max(var_15, (arr_0 [i_0 - 1] [i_0])));
        var_16 = (min(var_16, ((max(((min(123, -103))), (~-123))))));
    }

    /* vectorizable */
    for (int i_1 = 2; i_1 < 16;i_1 += 1)
    {
        arr_6 [i_1] [i_1 + 1] = (arr_3 [i_1 - 2]);
        var_17 = (max(var_17, (arr_1 [i_1 + 1] [i_1 + 1])));
        var_18 += 210;
    }
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        arr_10 [i_2] = (((arr_1 [i_2] [i_2]) ? (max(-1, (-127 - 1))) : (((~(arr_9 [i_2]))))));
        var_19 = ((+((max((arr_5 [i_2]), -125)))));
    }
    var_20 &= (((((var_9 ? var_4 : var_11))) == ((((var_9 != ((124 ? 12345 : var_10))))))));
    #pragma endscop
}
