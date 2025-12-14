/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199379
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_10;
    var_19 = ((~(((0 < (79 >= 22458))))));

    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        var_20 &= ((((-((-(arr_0 [2] [i_0]))))) ^ ((((arr_1 [10]) && (var_8 || -2305708754185764362))))));
        arr_2 [i_0] = (~-9223372036854775799);
        arr_3 [i_0 + 1] [i_0] = 2305708754185764368;
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = 0;
        arr_8 [i_1] = (((arr_1 [i_1]) ? (((!(((3569238297 << (arr_6 [i_1] [i_1]))))))) : (((!((max(0, 123145302310912))))))));
        var_21 = (min(var_21, ((max((~1896), 0)))));
    }
    #pragma endscop
}
