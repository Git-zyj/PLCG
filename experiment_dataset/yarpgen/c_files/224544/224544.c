/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224544
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_18 -= (min(var_17, ((min((arr_0 [i_0]), ((var_5 ? 121 : (arr_0 [i_0]))))))));
        var_19 |= (min(((min(var_16, (max((arr_1 [i_0]), 121))))), (max((18345428370926597576 * 106), ((max(0, var_14)))))));
        var_20 = (max(var_20, 101315702782954028));
        var_21 = (((((min((arr_3 [i_0]), 1039647227)))) ? ((((arr_0 [i_0]) && (arr_0 [i_0])))) : (arr_0 [i_0])));
    }
    for (int i_1 = 1; i_1 < 16;i_1 += 1)
    {
        var_22 += (-2132998401 / -1832045247);
        var_23 = (max(-113, (((908128708 ? 15587 : 3801942084)))));
        arr_8 [i_1] [i_1] = var_6;
    }
    var_24 &= var_10;
    var_25 = ((0 ? var_2 : 101315702782954020));
    var_26 = (-32767 - 1);
    #pragma endscop
}
