/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198697
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_10;

    for (int i_0 = 2; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_17 = (max(var_17, ((min(var_8, (((arr_0 [i_0 + 1]) % (arr_0 [i_0 - 1]))))))));
        var_18 = -var_13;
        arr_2 [i_0] = ((var_2 ? (arr_1 [i_0 - 1] [i_0 + 1]) : (((-(var_12 == 1))))));
        var_19 = (min(var_19, ((((1 && (arr_0 [i_0 + 1])))))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 11;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] [i_1 + 1] |= ((-(arr_3 [i_1 - 1])));
        arr_7 [i_1] [i_1] = (((arr_4 [i_1 - 1] [i_1 - 1]) ? var_3 : (~1916668053402821695)));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        arr_12 [i_2] [i_2] = ((((-4053 ? var_2 : 1))) ? (((arr_11 [i_2]) ? var_14 : var_14)) : ((2147483647 ? (arr_9 [i_2]) : var_5)));
        var_20 ^= ((((((arr_8 [i_2]) < var_8))) << ((((var_2 ? (arr_10 [i_2] [i_2]) : var_0)) - 11797267296876101511))));
    }
    #pragma endscop
}
