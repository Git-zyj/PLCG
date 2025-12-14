/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216598
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = -var_7;
    var_15 = (max(var_15, var_4));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_16 += (((((3 ^ ((var_12 ? var_13 : (arr_2 [i_0] [i_0])))))) ^ ((12803437144672272274 ? (((arr_0 [4]) ? 2956830964 : (arr_3 [i_0] [4]))) : (((5643306929037279330 ? (arr_2 [i_0] [i_0]) : 109)))))));
        arr_4 [i_0] [i_0] = (((((arr_3 [i_0] [i_0]) ? ((var_6 ^ (arr_0 [i_0]))) : (arr_3 [i_0] [i_0]))) ^ (arr_2 [i_0] [i_0])));
    }
    #pragma endscop
}
