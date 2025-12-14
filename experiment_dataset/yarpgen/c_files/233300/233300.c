/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233300
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_12 ? (min(var_1, 1)) : ((((var_12 ^ var_8) ? var_8 : var_11)))));
    var_21 = (-9223372036854775807 - 1);

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [5] = (min((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_0 [i_0]))), 51457));
        arr_3 [i_0] |= -1;
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 7;i_1 += 1)
    {
        var_22 *= (((((var_14 + 2147483647) >> (611160738 - 611160707))) % (32745 || 27)));
        var_23 = (max(var_23, (((var_3 * (arr_4 [i_1 + 3]))))));
    }
    for (int i_2 = 2; i_2 < 21;i_2 += 1)
    {
        var_24 = (max(var_24, ((min((((-(arr_6 [6])))), 219)))));
        var_25 = ((arr_7 [i_2 + 1]) ? -19100 : 28710);
    }
    #pragma endscop
}
