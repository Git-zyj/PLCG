/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226380
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((((((var_13 ? -2822508037109270110 : 52891))) == (min(-2822508037109270111, 18446744073709551611))))) << ((((min(52896, 52891))) - 52868))));
    var_21 *= (((max((min(2822508037109270130, 2822508037109270109)), (2822508037109270109 > var_3))) & (((min((min(12644, var_2)), var_12))))));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        var_22 += (~60218);
        arr_4 [i_0] = 12;
        arr_5 [i_0 - 2] = 52891;
        var_23 = (max(var_23, ((((arr_2 [i_0 - 3]) ? ((var_19 ? (arr_1 [i_0 - 1]) : 47241)) : var_12)))));
        var_24 ^= ((((var_15 ? var_9 : 2822508037109270109)) - 47235));
    }
    #pragma endscop
}
