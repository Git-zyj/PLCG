/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195746
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += var_11;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_18 = var_12;
        var_19 = (max(var_19, ((((((arr_1 [i_0]) <= ((-(arr_0 [i_0]))))) ? var_6 : -120)))));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_20 = (((min((arr_4 [i_1]), 254363730)) >= 28));
        arr_5 [i_1] [i_1] = (arr_2 [i_1]);
        var_21 = (min(30, ((~((var_11 & (arr_2 [i_1])))))));
    }
    for (int i_2 = 1; i_2 < 15;i_2 += 1)
    {
        var_22 = var_5;
        var_23 = (((arr_7 [i_2 + 1] [i_2]) > (var_5 >= 0)));
    }
    var_24 &= 10;
    var_25 = (var_16 - var_10);
    #pragma endscop
}
