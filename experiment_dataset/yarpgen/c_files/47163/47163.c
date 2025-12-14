/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47163
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((-(var_2 >> var_3)))) ? var_5 : (max(((18446744073709551615 ? var_2 : 63230)), (1151795604700004352 | -7374738505630476893)))));

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        arr_2 [i_0] [10] = ((((max(((-7374738505630476893 ? var_5 : 255)), (var_0 >= var_4)))) ? ((7374738505630476888 ? var_9 : var_5)) : ((var_8 ? ((var_0 ? var_6 : var_2)) : ((var_6 ? var_2 : var_5))))));
        var_11 -= 7374738505630476905;
        var_12 = -7374738505630476893;
    }
    #pragma endscop
}
