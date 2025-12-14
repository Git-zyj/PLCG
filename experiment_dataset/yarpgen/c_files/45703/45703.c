/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45703
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_0 || ((((min(-110, var_8))) || ((min(16380, var_7)))))));
    var_19 = (var_13 ? ((((var_11 || (var_3 || var_15))))) : (((((28968 ? var_17 : var_6))) ? -var_1 : 1312973750)));

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = (((((~(min(525226577, 2981993566))))) ? (min(2981993543, -65137131)) : (arr_0 [i_0] [i_0 + 1])));
        arr_3 [2] [2] |= var_13;
    }
    var_20 = (max(var_20, (((2981993550 & (((var_16 ? var_8 : (~var_8)))))))));
    #pragma endscop
}
