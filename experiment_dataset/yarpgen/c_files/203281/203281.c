/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203281
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((64 ? (-2147483647 - 1) : var_4)) | ((1904382826 ? 2147483647 : 1))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = max(((((((2147483646 >> (var_7 + 30791190)))) || ((min((-2147483647 - 1), 0)))))), -1445211240);
        var_21 = (((!150) ? ((209 ? 149 : var_2)) : (((-2147483647 - 1) ? 248 : 130))));
    }
    for (int i_1 = 2; i_1 < 11;i_1 += 1)
    {
        arr_6 [i_1] = (((246 / -651100834) - (min(-20, var_18))));
        var_22 *= (((max(((min(var_10, (arr_0 [i_1])))), ((var_5 ? 2147483647 : (-2147483647 - 1))))) <= var_7));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        var_23 += 248;
        arr_9 [i_2] = 6;
        arr_10 [i_2] = (((((2147483642 ? var_3 : 140))) || (!146)));
    }
    for (int i_3 = 3; i_3 < 18;i_3 += 1)
    {
        arr_13 [i_3] [i_3] = (((2147483643 ? 134 : ((248 ? var_6 : (-2147483647 - 1))))));
        var_24 = (142 ^ (min((~1048448), 255)));
        var_25 += 8;
    }
    #pragma endscop
}
