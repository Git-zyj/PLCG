/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230720
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, (((var_5 == ((~((var_7 ? var_5 : 65535)))))))));

    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        arr_3 [i_0] = ((((((((arr_2 [i_0]) ? var_7 : var_7))) ? ((max(var_10, 16572))) : 1)) + (((!(arr_1 [i_0] [i_0 - 2]))))));
        var_12 = (max(var_12, ((((((((arr_1 [1] [i_0]) + 2147483647)) << (var_5 - 940214552))) & (arr_2 [1]))))));
    }

    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        arr_7 [i_1] = ((((var_2 ? 127 : (arr_4 [i_1] [i_1]))) * ((max(47948, (arr_5 [i_1]))))));
        var_13 = var_8;
        arr_8 [i_1] = (((((33210 ? var_0 : var_9) * var_4))));
    }
    #pragma endscop
}
