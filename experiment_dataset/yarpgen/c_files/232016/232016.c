/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232016
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (-30352 / 3290909390);
    var_20 = (((!var_3) == -75));

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        var_21 = (((((!(~23472)))) - (((12081 <= (!26656))))));
        arr_2 [i_0] [12] &= (((((!((((((arr_0 [1]) + 2147483647)) << (52 - 52))))))) & ((~((((arr_1 [8]) != 44563)))))));
    }
    var_22 = (((-(var_18 / var_0))));
    #pragma endscop
}
