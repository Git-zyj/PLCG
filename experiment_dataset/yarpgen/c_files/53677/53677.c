/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53677
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_3, ((((max(var_8, var_1)) > (var_11 <= var_12))))));
    var_16 = (((((var_2 - (var_13 ^ var_3)))) >= var_10));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_17 *= ((((((var_5 + var_11) ? (var_6 / var_1) : (min(var_0, var_2))))) ? (~var_10) : (min(var_6, var_12))));
                var_18 *= ((~((((4069331719232488440 && 35809) < var_7)))));
                arr_5 [i_1] = (((((var_1 ? (max(var_13, var_12)) : (max(var_2, var_10))))) ? var_8 : (min(var_13, (1515026025 || -3383463549906721767)))));
            }
        }
    }
    var_19 ^= (min(((min(58419, 1211199397))), ((var_10 ? (~var_11) : var_1))));
    var_20 = (var_10 != (((var_13 == var_8) ? (min(var_4, var_0)) : (var_11 / var_7))));
    #pragma endscop
}
