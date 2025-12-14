/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221939
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(4455707653686911081, (min(116, 255))));
    var_13 += var_5;
    var_14 ^= ((((min(1, 101))) ? var_7 : var_10));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 = (arr_1 [i_0]);
        var_16 = (!154);
        var_17 = (max((((((var_7 + (arr_1 [i_0])))) ? var_3 : var_9)), (arr_1 [i_0])));
        var_18 *= min(17, 17);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_19 ^= (!0);
        var_20 += 255;
        var_21 = (min(var_21, (((~(arr_3 [i_1]))))));
        var_22 = (max(var_22, 255));
    }
    var_23 = ((~(max(15, (((var_1 ? 22 : var_3)))))));
    #pragma endscop
}
