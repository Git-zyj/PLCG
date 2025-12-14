/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37647
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= var_9;
    var_21 = ((var_11 * ((((var_5 / 1) - ((var_18 ? var_14 : var_8)))))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_22 += ((~((~(arr_2 [i_0])))));
        var_23 = (min(var_23, ((((arr_2 [4]) >= -3391556887630562403)))));
        var_24 = (((arr_0 [18]) ? (((-(((4294967281 && (arr_0 [i_0]))))))) : 9223372036854775780));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        arr_7 [i_1] [i_1] |= (((min((arr_3 [12]), (arr_3 [16]))) >> (((((arr_3 [4]) * (arr_3 [8]))) - 9750658))));

        for (int i_2 = 2; i_2 < 17;i_2 += 1)
        {
            arr_10 [i_2 + 2] [i_1] [i_1] = (((((arr_1 [i_2 + 1]) & (arr_1 [i_1]))) * ((((((min(var_10, (arr_2 [i_1])))) <= (1 || var_18)))))));
            var_25 = (min(var_25, 1));
        }
        var_26 |= var_6;
    }
    #pragma endscop
}
