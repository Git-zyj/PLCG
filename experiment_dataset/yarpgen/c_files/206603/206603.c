/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206603
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((0 ? 2456765220 : (min((max(42160, 4003604254225480672)), ((min(23375, 23346)))))));
    var_16 = ((((max((max(var_6, var_4)), ((-5 ? var_4 : var_8))))) / (~205437728542535344)));
    var_17 ^= (205437728542535325 == 42133);

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_18 *= (arr_0 [i_0 - 1]);
        var_19 *= (1 & 1);
    }
    #pragma endscop
}
