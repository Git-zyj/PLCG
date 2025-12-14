/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48686
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= (min((var_11 >= 32748), (((var_9 || (((6 ? 18446744073709551615 : 18446744073709551615))))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 = (-27 <= 32747);
        var_18 ^= ((((((~(arr_0 [4]))) + 2147483647)) >> 27));
    }
    var_19 = (~var_12);
    #pragma endscop
}
