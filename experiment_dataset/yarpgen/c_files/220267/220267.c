/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220267
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, (max(((((-9223372036854775807 - 1) <= ((max(61230, var_9)))))), var_13))));
    var_21 *= var_16;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = (((((!(arr_1 [4] [5]))) && (!var_1))));
        arr_3 [i_0] [9] = ((((max((arr_0 [7] [i_0]), (arr_0 [i_0] [i_0])))) - ((-(arr_0 [5] [4])))));
        var_22 -= (max(((((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [11]) : (arr_0 [i_0] [i_0])))), ((var_9 ? var_12 : (((((arr_1 [8] [11]) > 43))))))));
    }
    var_23 = (max(((-var_14 + ((max(61237, -94))))), ((max(var_1, 61230)))));
    #pragma endscop
}
