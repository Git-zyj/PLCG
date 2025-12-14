/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49553
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (~((var_6 ? (((var_4 ? var_11 : var_4))) : ((var_4 ? var_10 : var_2)))));
    var_13 = (((((min(var_4, var_5)))) ? var_5 : ((((max(var_1, var_5))) ? var_1 : var_3))));
    var_14 = (((((var_7 ? (var_2 + var_0) : ((2147483647 ? 1247135893 : 1))))) ? (((var_8 ? ((((var_3 + 2147483647) << (var_1 - 1480474889585151042)))) : var_1))) : ((~((var_4 ? var_2 : var_1))))));

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] = (((((var_5 ? var_4 : ((var_3 ? 14 : 133))))) ? ((var_3 ? ((var_0 ? var_3 : var_11)) : (((-32767 - 1) ? 1 : var_8)))) : (((var_8 <= (var_1 == var_1))))));
        var_15 = (((((((min(var_6, var_6))) ? ((var_6 ? var_8 : var_3)) : ((1 ? 115 : 32242))))) ? (((var_8 ? ((min(var_3, var_4))) : ((var_4 ? var_2 : var_8))))) : (max(2052110946, 3645346509))));
        var_16 = (min(var_16, (((min(var_10, (max(var_6, var_3))))))));
        var_17 = ((-var_0 ? var_4 : ((3645346523 ? -79 : 3645346509))));
    }
    #pragma endscop
}
