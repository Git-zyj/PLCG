/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228371
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= var_16;
    var_18 *= (2495638656 <= 1109135338);

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [14] [i_0] = ((((((var_12 || (1109135353 && 4095))))) ^ ((31924 ? 7693 : (arr_1 [i_0] [i_0])))));
        var_19 *= var_15;
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 21;i_1 += 1)
    {
        arr_6 [2] |= (!-8);
        var_20 = (~3826331360);
        var_21 ^= (((arr_5 [6]) ? (arr_5 [2]) : (arr_5 [14])));
    }
    var_22 = ((~(!1799328640)));
    #pragma endscop
}
