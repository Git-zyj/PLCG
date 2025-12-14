/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231410
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 243;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = (((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0]))) & (((arr_1 [i_0]) ? 3145728 : 14))));
        arr_3 [i_0] = ((var_6 - (((1073733632 + -1597514943) ? -1597514943 : (arr_1 [i_0])))));
    }
    #pragma endscop
}
