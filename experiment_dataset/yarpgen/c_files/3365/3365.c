/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3365
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (~var_8);
    var_11 = (min(2735205204, 1));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_12 = var_7;
        var_13 = (min(((((var_1 > var_1) <= ((1220091900 ? 1 : 3014995918))))), var_3));
    }
    for (int i_1 = 4; i_1 < 16;i_1 += 1)
    {
        var_14 = ((max((arr_4 [i_1] [i_1]), var_2)) * ((min((~1), (arr_3 [i_1])))));
        var_15 = arr_2 [i_1 - 2] [i_1 - 2];
        var_16 = (((min((((1 ? (arr_3 [i_1]) : (arr_3 [i_1])))), (((arr_3 [i_1]) ? (arr_3 [i_1]) : (arr_2 [i_1] [i_1 + 1]))))) <= (((((-825359205 | (arr_4 [i_1] [i_1])))) ? var_9 : (((arr_3 [i_1]) - var_6))))));
    }
    #pragma endscop
}
