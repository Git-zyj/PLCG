/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36445
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = ((1141148341585476784 ? 1141148341585476784 : ((((((arr_1 [i_0]) ? 4247597589693072418 : -37)))))));
        arr_3 [4] &= ((~(34 || 108)));
    }
    var_18 |= (((((((-109 ? 97 : var_2)) == var_1))) >> (((((min(-96, 39684)))) / ((9223372036854775807 ? var_9 : 3674987851))))));
    var_19 = ((((((((min(var_11, -1312)))) / (var_12 / var_15)))) ? var_0 : (32760 * 188)));
    var_20 = ((var_6 < (min(var_17, (var_16 - 1141148341585476769)))));
    #pragma endscop
}
