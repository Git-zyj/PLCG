/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243384
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((var_11 + 2147483647) >> ((((17090 ? 9732819835007036471 : 482888575)) - 9732819835007036454))));

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_14 ^= (!1);
        var_15 = (((8713924238702515127 * 8713924238702515157) ? (arr_0 [i_0 + 1]) : -var_6));
        var_16 = ((~((min(22939, (arr_0 [i_0 + 1]))))));
        arr_2 [i_0] = ((-((min(1, -22939)))));
    }
    var_17 = var_0;
    #pragma endscop
}
