/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222545
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += -2054015474;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_11 = (max(var_11, var_8));
        arr_3 [i_0] [i_0] |= ((-66 == ((-2054015480 ? (max(-66, 1820439327)) : (arr_2 [i_0] [i_0])))));
    }
    var_12 = ((max(((var_7 ? -2054015470 : var_2)), (-127 - 1))) + (((min(2054015493, var_3)))));
    #pragma endscop
}
