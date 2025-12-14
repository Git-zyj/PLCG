/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240101
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((min((max(0, 1)), var_5))) << (var_2 - 17701671261850766564));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_11 = (0 != 26);
        var_12 = (((arr_0 [i_0 + 1] [i_0 + 1]) != (((arr_0 [i_0 + 1] [i_0 + 1]) ? var_5 : 26))));
        var_13 = (((arr_0 [i_0] [i_0 + 1]) < (((arr_1 [i_0 + 1]) | var_8))));
        var_14 = (arr_1 [i_0]);
    }
    #pragma endscop
}
