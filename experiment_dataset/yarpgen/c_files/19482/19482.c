/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19482
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_13 = ((-(((!(!347166474))))));
        var_14 = ((max(((31369 ? var_8 : 4550)), var_12)));
        arr_2 [i_0] [i_0] = ((-15119334615641491376 || ((((((var_10 ? (arr_0 [i_0]) : (arr_0 [i_0])))) ? (max((arr_1 [i_0]), (arr_0 [i_0]))) : (!var_7))))));
        var_15 *= (min(var_7, (((arr_1 [8]) ? (max(var_7, -7182777636764450912)) : ((min(var_11, 3939269286)))))));
        var_16 |= ((((((((~(arr_1 [8]))) == (-630189419 && var_4))))) - ((0 ? (((9223372036854775807 ? -85 : 133))) : (min(var_8, var_0))))));
    }
    var_17 = (max(var_17, var_10));
    #pragma endscop
}
