/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229626
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= var_13;
    var_21 = (min(var_21, var_5));
    var_22 = var_17;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((((((max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))) ? (-509802302 ^ -1) : (-26992 & 1)))) ? (arr_0 [i_0]) : ((-(arr_1 [i_0] [i_0]))));
        var_23 = (min(var_23, ((((26964 % 38) != (arr_2 [i_0]))))));
    }
    for (int i_1 = 4; i_1 < 21;i_1 += 1)
    {
        arr_8 [i_1 - 1] [i_1 - 1] = (arr_6 [i_1 - 3]);
        var_24 = (((arr_5 [i_1 - 2]) ? (min(((max(-23, (arr_4 [i_1 - 3])))), (((arr_5 [i_1 - 4]) ? 1 : 11350)))) : ((~(min((arr_6 [i_1]), 865074537))))));
    }
    var_25 *= ((((((min(var_17, 5014440647682264232))) ? var_4 : var_17)) + ((~(min(32767, -865074537))))));
    #pragma endscop
}
