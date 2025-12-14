/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19222
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (((-127 - 1) ? 62134 : 16383));
        var_10 *= (((((var_7 ? (max(var_9, (-127 - 1))) : (((-105 ? var_6 : (-127 - 1))))))) ? ((((((20 ? var_4 : 1))) ? (3402 % 116) : var_7))) : (((~115) ? var_0 : (11 | -111)))));
        var_11 = ((((max(4294967277, var_8))) ? -1994423150 : (min(383556395, (-127 - 1)))));
    }
    var_12 -= var_5;
    var_13 = (((min(((8917 ? var_1 : var_1)), ((var_4 ? var_2 : var_3)))) % (var_8 % var_2)));
    var_14 = (min(var_14, (((var_6 ? (((var_1 ? (min(var_9, var_2)) : -var_5))) : (((((4870390035086566931 ? var_4 : var_3))) ? (((max(62128, 62133)))) : var_3)))))));
    var_15 = (((((var_7 ? 7 : -651716455)) - (62116 - var_6))) << (var_0 - 4522074919689040427));
    #pragma endscop
}
