/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48429
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_15 = (((max(1344055116, (arr_1 [i_0] [7]))) < -153844125));
        var_16 = (max((!16016955608681884907), (103 / -5043947579071462231)));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_17 &= ((!((max((arr_3 [i_1]), -153844137)))));
        var_18 = 29909;
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_19 = max(((min((!3642626684), (((arr_4 [i_2]) < 503316480))))), (((!var_6) >> (var_7 - 34))));
        var_20 |= ((~(!var_14)));
        arr_6 [i_2] = (((((var_14 | var_14) + 2147483647)) << (((((~3227) + 3249)) - 21))));
        arr_7 [13] [i_2] = ((!(((((max(var_1, 1))) * (!4956778565847056080))))));
        var_21 = ((~(max(var_3, (arr_5 [i_2] [i_2])))));
    }
    var_22 = var_14;
    #pragma endscop
}
