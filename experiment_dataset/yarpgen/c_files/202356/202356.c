/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202356
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 *= (!var_1);
    var_17 |= (((~138181568) ? (max(138181578, var_12)) : 138181591));

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] |= var_8;
        var_18 = 0;
        arr_3 [i_0] = (arr_0 [i_0]);
    }
    for (int i_1 = 3; i_1 < 20;i_1 += 1)
    {
        arr_8 [i_1] = var_5;
        var_19 = ((~(min((((!(arr_6 [i_1])))), 292000255))));
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        arr_12 [i_2] = ((arr_10 [i_2] [i_2]) * (((!(arr_10 [15] [i_2])))));
        var_20 ^= 4156785736;
        var_21 = var_2;
        var_22 = max((max((min(var_9, (arr_5 [15] [i_2]))), (((arr_11 [i_2]) ? (arr_9 [i_2]) : 32)))), (max(4, (min(54423287, var_2)))));
        arr_13 [i_2] = min(((((max((arr_10 [i_2] [i_2]), var_15))) ? (max(var_10, var_12)) : (!241))), ((max(var_13, (max(var_0, (arr_5 [6] [0])))))));
    }
    #pragma endscop
}
