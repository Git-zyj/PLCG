/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191144
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 *= (3881495737 == -3190343996057560213);
    var_13 = (max(var_13, ((min((-1 % 1), ((9269803121124468678 + (max(var_6, 4028336186)))))))));

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_14 = ((+(max((((arr_1 [i_0] [i_0]) ? 2738845315183573165 : 255)), -5428609959554297987))));
        arr_3 [16] |= var_8;
    }
    var_15 = 255;
    var_16 = 413471557;
    #pragma endscop
}
