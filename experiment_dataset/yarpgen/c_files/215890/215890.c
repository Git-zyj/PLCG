/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215890
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_16 = var_1;
        var_17 = (((arr_0 [6]) ? ((((arr_0 [i_0]) <= (arr_0 [i_0])))) : ((65 / ((~(arr_0 [i_0])))))));
        var_18 &= ((max(var_15, (arr_1 [i_0]))));
        arr_2 [i_0] [i_0] = (var_9 ? (((arr_0 [i_0]) ? 9223372036854775807 : (((arr_1 [i_0]) - var_12)))) : (arr_0 [i_0]));
        arr_3 [i_0] [i_0] = var_2;
    }
    var_19 *= var_8;
    #pragma endscop
}
