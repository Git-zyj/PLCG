/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19201
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (+-2232);
    var_15 -= (min(-2232, ((var_4 ? var_5 : ((8191 ? -59 : var_5))))));
    var_16 = ((-59 && ((((((1 << (713790265 - 713790249)))) | (min(var_10, var_4)))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [4] = ((((-(max(-8192, 71)))) / var_7));
        var_17 -= (max(8192, 33252));
    }
    #pragma endscop
}
