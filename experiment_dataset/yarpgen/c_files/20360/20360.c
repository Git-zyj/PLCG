/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20360
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] = (((((-111 ? 65535 : 23531))) ? (((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0]))) : ((min((arr_0 [i_0]), (arr_0 [i_0]))))));
        var_18 = -99;
    }
    var_19 = ((-var_8 & ((((((var_14 ? var_6 : 127))) == (min(var_16, var_2)))))));
    var_20 = (max(1, var_2));
    var_21 = 16368;
    var_22 = (((((-((min(var_2, var_12)))))) == ((-var_11 ? var_3 : (~var_16)))));
    #pragma endscop
}
