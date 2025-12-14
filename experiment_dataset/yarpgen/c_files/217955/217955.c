/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217955
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= ((-var_4 ? var_8 : (max((var_7 ^ 1140537297), 127))));
    var_12 -= var_2;

    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        var_13 = (max(var_13, ((max((((!(arr_0 [i_0 + 3])))), (((arr_0 [i_0 - 1]) ? 1 : 2147483637)))))));
        var_14 = max(-127, ((-(arr_1 [i_0]))));
    }
    #pragma endscop
}
