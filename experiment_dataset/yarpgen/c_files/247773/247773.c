/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247773
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((var_8 + 2147483647) >> (var_4 - 6945177076446328350)));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] = (((arr_0 [i_0]) >> (((arr_2 [i_0]) - 3122015433))));
        var_13 = (arr_0 [5]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_14 = ((-113 ? 20106 : 45434));
        var_15 ^= (((arr_5 [i_1]) > (arr_5 [12])));
    }
    var_16 += ((((var_5 ? var_10 : 20106))) ? 1413 : 12369805371966041739);
    #pragma endscop
}
