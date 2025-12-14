/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28186
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, var_8));
    var_11 |= (((((!(32 > var_3)))) | var_6));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_12 += (min(((!(~8934068143676690643))), (0 || -1495082605)));
        var_13 = (min(var_13, var_7));
    }
    var_14 = (min(var_14, ((((var_3 * var_2) != (((var_8 % var_4) << (6270127415077542998 - 6270127415077542991))))))));
    #pragma endscop
}
