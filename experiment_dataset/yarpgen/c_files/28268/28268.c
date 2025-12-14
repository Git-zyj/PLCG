/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28268
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((65532 ? ((((~-2707154994286972077) * (!1453850500)))) : ((18446744073709551600 | (((126 >> (((arr_0 [1]) - 13766)))))))));
        var_17 = ((~(((var_13 <= (!6))))));
    }
    var_18 -= ((var_7 != (((!(var_1 == 16))))));
    var_19 = (max(var_19, ((min(1, var_6)))));
    #pragma endscop
}
