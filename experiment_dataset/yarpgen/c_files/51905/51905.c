/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51905
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_9;

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = (min((!-2888981384824264661), (((var_4 && var_2) || (arr_0 [i_0 - 1])))));
        arr_3 [i_0 + 1] [i_0] = ((~(arr_0 [i_0])));
        var_15 = 240;
    }
    for (int i_1 = 2; i_1 < 21;i_1 += 1)
    {
        var_16 = (((~-11) ? (((arr_6 [i_1 - 1]) ? (((min(108, var_12)))) : (var_2 & var_5))) : var_10));
        var_17 = var_9;
        var_18 = (((((min(4095, var_3)))) ? ((~(var_13 % var_3))) : 222));
        var_19 ^= (56 ^ 84);
    }
    var_20 = (((((814120256 ? ((var_13 ? 3480847040 : 1)) : ((56 ? var_0 : 3480847039))))) ? (min(var_6, ((7935815068362150593 ? var_1 : var_11)))) : var_1));
    #pragma endscop
}
