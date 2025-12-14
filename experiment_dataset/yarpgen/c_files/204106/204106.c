/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204106
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((-var_7 || ((min(var_8, var_2)))))) <= (!123)));

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_11 = ((((arr_1 [i_0 - 1]) >= (var_5 ^ -3))));
        var_12 = ((!((max(var_4, ((((arr_1 [i_0 - 1]) > 65535))))))));
    }
    var_13 = ((-((~((var_2 << (var_8 - 9)))))));
    var_14 |= (max((65518 + var_3), var_4));
    #pragma endscop
}
