/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2971
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] = (((((~(arr_2 [i_0])))) ? var_1 : (arr_2 [i_0])));
        arr_4 [i_0] = (arr_1 [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 18;i_1 += 1)
    {
        arr_7 [i_1] = 9223372036854775807;
        var_12 = (min(var_12, (((var_7 ? (arr_2 [i_1 - 3]) : (arr_6 [i_1 - 1]))))));
    }
    for (int i_2 = 2; i_2 < 14;i_2 += 1)
    {
        arr_11 [i_2] = -1;
        var_13 = min((arr_2 [i_2]), 14924688896769619782);
    }
    var_14 = (min(-122, 2211154952));
    var_15 = var_5;
    var_16 -= 50760;
    var_17 -= 1558020136842751853;
    #pragma endscop
}
