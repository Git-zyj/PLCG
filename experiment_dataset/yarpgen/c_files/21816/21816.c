/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21816
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((!(((var_12 & (!var_7))))));
    var_15 = ((max(var_1, -var_12)) >= var_2);
    var_16 = var_5;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (((arr_0 [i_0 - 2]) ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 - 1])));
        arr_4 [5] [i_0] = (~-238);
        arr_5 [i_0] [i_0 - 1] = (((arr_0 [i_0 - 1]) ? 16933922899802086943 : (-2147483647 - 1)));
    }
    #pragma endscop
}
