/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53083
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_20 = (min(var_20, (((+((~(((arr_1 [i_0]) >> (arr_1 [i_0]))))))))));
        arr_2 [1] [4] = ((((((((var_12 ? var_11 : var_5))) ? (((1 ? 384 : var_17))) : 9223372036854775807))) ? (max(0, ((1 ? 385827953 : var_7)))) : ((((2048 ? (arr_1 [i_0]) : var_13))))));
        var_21 = ((-((~(arr_1 [i_0])))));
    }
    var_22 = var_6;
    var_23 = ((-((((var_5 ? var_17 : var_4)) % ((min(var_15, 1)))))));
    #pragma endscop
}
