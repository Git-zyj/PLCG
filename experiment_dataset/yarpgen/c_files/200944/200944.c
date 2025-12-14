/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200944
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((var_15 ? var_17 : var_11))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = (min((((var_14 ? (arr_0 [i_0]) : var_5))), (~995324507)));
        arr_3 [i_0] [i_0] |= (((((var_8 ? 2047 : (arr_1 [i_0])))) ? (min((max(var_11, var_2)), ((max(2042, var_4))))) : ((min(((min(48, 2042))), (min((arr_0 [i_0]), (arr_0 [1]))))))));
    }
    var_19 = ((((((((~(-9223372036854775807 - 1)))) ? (min(var_7, var_15)) : (0 - 995324507)))) ? (((var_5 * (!var_9)))) : (((var_7 + 0) ? (min(var_11, 11)) : (~var_16)))));
    var_20 &= 4294967285;
    #pragma endscop
}
