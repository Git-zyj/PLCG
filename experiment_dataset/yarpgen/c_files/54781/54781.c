/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54781
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= var_0;
    var_19 = (((((9800 ? var_16 : (0 - -51)))) || var_13));
    var_20 = (~var_1);
    var_21 = (max(50, 6516105742675590355));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_22 ^= 20803;
        arr_3 [i_0] |= (((((max(var_5, var_6)))) <= ((var_3 ? 1 : (arr_1 [i_0] [i_0])))));
    }
    #pragma endscop
}
