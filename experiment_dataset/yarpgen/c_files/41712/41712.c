/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41712
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_20 = ((((arr_2 [i_0 + 2] [i_0]) ? -var_0 : (min(var_6, 4294967295)))));
        arr_3 [i_0] = (((((((max(var_3, var_10))) & var_1))) ? (((~((10 ? var_0 : 2))))) : ((~(~-627896318996153454)))));
    }
    var_21 = (min(var_21, var_5));
    var_22 |= (max(1, var_10));
    #pragma endscop
}
