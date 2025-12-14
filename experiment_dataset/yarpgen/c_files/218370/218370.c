/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218370
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((-4864543036909423769 ? -1855700463362186291 : -4864543036909423760));
    var_19 -= var_0;

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_20 ^= ((var_11 && (((arr_2 [10]) <= (((arr_2 [10]) / -4864543036909423768))))));
        arr_3 [14] [i_0] = (arr_0 [i_0 + 2] [i_0 + 2]);
    }
    #pragma endscop
}
