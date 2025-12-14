/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3009
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(8565, var_4));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_12 = (min((max(19056, 6586144952695759222)), (-127 - 1)));
        arr_3 [20] [20] |= ((-117 != (min(var_10, 4462355609095473459))));
    }
    var_13 = (min(var_13, ((max(-var_1, -3134188635212223792)))));
    #pragma endscop
}
