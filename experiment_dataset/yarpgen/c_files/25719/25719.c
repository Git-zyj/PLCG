/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25719
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        var_10 = ((-(min((1 - 134217728), -134217736))));
        var_11 = (min(var_11, (((-((((-134217736 ? var_9 : (arr_1 [i_0] [i_0]))) / (arr_1 [i_0 - 1] [i_0]))))))));
    }
    var_12 = ((((((min(1, var_9)) && (var_3 % 255))))));
    var_13 = (min(var_13, (((18446744073709551615 ? ((81 & ((min(1, 1))))) : (!var_5))))));
    var_14 = ((((((((0 ? var_1 : var_5))) ? (max(var_2, 2147483647)) : ((max(-2084129937, 0)))))) && (((var_7 ? 1 : (max(var_4, 1)))))));
    #pragma endscop
}
