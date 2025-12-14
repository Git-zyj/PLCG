/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220750
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        var_11 = (max(1, (158 ^ 1)));
        var_12 &= ((((min(var_10, ((((-2147483647 - 1) || var_7)))))) ? (~0) : ((max(246839607, var_3)))));
        var_13 = (max(var_13, ((max(var_3, (min(-5928038003244431613, var_1)))))));
        var_14 = ((((((-7 ? -553854375 : -1205708691)) ? (max(var_1, 2147483647)) : (min(2147483640, -1410570880))))));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_15 -= ((var_2 | ((~((1048512 >> (var_9 - 7092088443881611022)))))));
        var_16 ^= ((((((((var_2 ? var_0 : 2147483625))) ? (var_0 && var_4) : var_8))) && (!-1410570888)));
        arr_6 [i_1] = (((min((((var_4 ? 1 : var_8))), var_4)) / ((((8504163981811488225 ? var_8 : var_5)) / var_8))));
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        arr_9 [i_2] = var_3;
        var_17 = (max(var_17, ((((var_4 / var_6) > var_0)))));
    }
    var_18 = ((((((max(var_7, var_8)) ^ var_8))) ? (~6100902936499949895) : ((((1 ? var_8 : var_9))))));
    var_19 &= -var_0;
    var_20 = (!(((-var_2 ? (((15098819205067987419 ? var_3 : var_4))) : ((var_0 ? -114 : 16346763407404181500))))));
    #pragma endscop
}
