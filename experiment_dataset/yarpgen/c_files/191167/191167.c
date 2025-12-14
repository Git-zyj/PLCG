/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191167
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (255 ? (((var_10 ? var_4 : var_5))) : var_1);
    var_12 = (((((~((var_0 ? var_2 : var_3))))) ? var_10 : (~16958)));
    var_13 = (190 % (max(355276804, 3939690491)));
    var_14 &= 784954023;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_3 [2] |= 124;
        var_15 = arr_2 [i_0] [i_0];
    }
    #pragma endscop
}
