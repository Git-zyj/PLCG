/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49204
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += var_8;

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((~((~(((arr_1 [i_0] [i_0]) ? var_8 : var_9))))));
        arr_4 [i_0 + 3] = (((((arr_2 [i_0] [i_0 + 3]) / var_6)) + ((~(arr_2 [i_0] [i_0 + 1])))));
        var_16 &= (((((arr_0 [i_0 + 2]) ^ (arr_0 [i_0 + 2]))) + (((arr_0 [i_0 + 2]) ? 32767 : (arr_0 [i_0 + 2])))));
        var_17 = ((937 * (arr_0 [i_0])));
    }
    #pragma endscop
}
