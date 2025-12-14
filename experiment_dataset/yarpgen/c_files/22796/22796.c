/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22796
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((!18446744073709551599) & ((18446744073709551599 ? var_6 : 18446744073709551599)));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_14 = var_11;
        var_15 = ((~(min((arr_3 [i_0]), (arr_3 [i_0])))));
    }
    var_16 = (max(-18446744073709551593, (((var_5 <= ((var_6 ? var_7 : var_3)))))));
    var_17 ^= (max((!1729382256910270464), var_3));
    #pragma endscop
}
