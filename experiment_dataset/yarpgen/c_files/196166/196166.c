/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196166
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_17 = ((((((((-(arr_2 [i_0]))) <= (arr_1 [i_0]))))) >= (max(((((arr_0 [i_0]) / -1020926619))), (((arr_1 [i_0]) ? (arr_2 [i_0]) : (arr_1 [i_0])))))));
        arr_3 [i_0] |= arr_2 [i_0];
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
    {
        var_18 = (min(var_18, ((((((var_1 ? 8030542183342233621 : (arr_1 [i_1])))) ? (arr_7 [i_1]) : (max((arr_4 [i_1]), var_14)))))));
        var_19 = (max(var_19, (((((arr_4 [i_1]) ? (max(212, var_10)) : (~var_12)))))));
        arr_8 [i_1] = (((arr_6 [i_1]) << (((max((27 / 576443160117379072), -var_8)) - 12105422284929108737))));
        arr_9 [i_1] = (((((-43 / (arr_6 [i_1])))) / (arr_1 [i_1])));
    }
    var_20 = var_16;
    #pragma endscop
}
