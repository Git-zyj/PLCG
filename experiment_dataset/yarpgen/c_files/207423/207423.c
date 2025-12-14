/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207423
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_12 = ((var_5 - (var_1 || var_7)));
        var_13 = (min(var_13, (((max(((-(arr_0 [i_0])), ((max((arr_0 [i_0]), (arr_0 [i_0])))))))))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_14 = (max(var_14, var_8));
        var_15 = ((max(0, var_11)));
    }
    var_16 = (max(var_16, ((max(((min((var_8 || var_5), var_10))), (min(var_6, (((var_2 ? var_11 : var_7))))))))));
    var_17 = ((((var_9 ? 2931618086037755728 : var_8)) - var_4));
    var_18 = (max(var_18, var_6));
    var_19 = (max(((((var_0 ? var_1 : var_9)))), var_6));
    #pragma endscop
}
