/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222307
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((var_2 ? var_5 : (var_10 * var_11)))) ? ((4172 ? 1230704842 : 18446744073709551609)) : var_15));

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_19 += ((((((arr_0 [i_0 - 1]) << (4172 > 15291)))) ? (((((arr_1 [i_0 + 2] [i_0 + 1]) <= (arr_0 [i_0 + 2]))))) : (((arr_1 [i_0 - 1] [i_0 - 1]) ? (arr_0 [i_0 - 1]) : (((arr_1 [i_0 + 1] [i_0 + 1]) ? (arr_0 [i_0 + 2]) : (arr_1 [i_0] [i_0 - 1])))))));
        var_20 = ((((((arr_0 [i_0 + 1]) << (((arr_0 [i_0 + 1]) - 7318813))))) ? (((arr_0 [i_0 - 1]) ? (arr_1 [i_0 + 1] [i_0 + 2]) : (arr_0 [i_0 + 2]))) : (((~(arr_1 [i_0 + 2] [i_0 + 2]))))));
        var_21 = (arr_0 [i_0]);
    }
    var_22 = ((~((98 ? var_1 : (~15279)))));
    var_23 = ((var_14 ? (((4147 ? 1 : 0))) : (((var_9 - var_5) ? (((var_14 ? var_4 : var_7))) : ((var_0 ? var_16 : var_3))))));
    var_24 = (((((var_9 ? var_10 : var_12))) % (((var_8 ^ var_1) ? (var_17 % var_2) : (((var_16 ? var_3 : var_15)))))));
    #pragma endscop
}
