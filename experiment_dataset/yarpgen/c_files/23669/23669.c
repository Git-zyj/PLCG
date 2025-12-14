/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23669
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, ((min(var_8, 3)))));
    var_17 = var_8;
    var_18 = (max(var_18, 2147483647));

    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = var_2;
        arr_3 [i_0] [i_0] = ((var_12 >= ((((var_10 - var_9) > ((((!(arr_0 [i_0]))))))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_19 -= 80;
        var_20 = (max(var_20, (((var_13 ^ 2669770173) >= ((((arr_6 [i_1]) * 35)))))));
    }
    var_21 = (((~2305843009213693951) ? (((var_1 < ((var_4 ? var_13 : var_14))))) : (((max(var_1, 63732))))));
    #pragma endscop
}
