/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243841
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 = (arr_0 [i_0]);
        var_17 = ((-((((arr_2 [i_0]) != 1766219846)))));
        var_18 = (((((2089742489883264279 ? 16357001583826287360 : -21))) ? (var_5 * 1) : (((62 != (arr_1 [i_0]))))));
    }
    var_19 |= (0 - 241);
    var_20 = (~2147483647);
    #pragma endscop
}
