/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210841
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        var_16 = (max(var_16, (((((97 ? -96291653 : 2147483647)) ^ (((!(arr_0 [i_0 + 1] [i_0 + 1])))))))));
        var_17 = ((arr_2 [1]) ^ (((-6583263785895595452 ? 1 : 96))));
        var_18 = ((((((arr_0 [i_0 - 1] [i_0 + 1]) ? ((((arr_0 [i_0] [0]) * var_12))) : var_13))) ? (((((((min(0, (-127 - 1))))) != (max((arr_2 [i_0]), (-127 - 1))))))) : (max((arr_0 [i_0] [i_0 - 3]), (arr_2 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        arr_5 [i_1] [i_1] = (arr_4 [19]);
        var_19 = (max(var_19, 159));
        var_20 = ((((min((~102), (arr_3 [i_1])))) ? var_4 : (((~(~var_2))))));
    }
    for (int i_2 = 1; i_2 < 15;i_2 += 1)
    {
        arr_9 [10] = (max((1297000942 < 83), ((0 && (((var_13 ? 1 : 21586)))))));
        var_21 = (max((((1333657859870424710 > 171) ? 110 : ((max((arr_8 [i_2 + 1]), (arr_4 [i_2])))))), ((min(96, (max(121, 48567)))))));
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        var_22 = ((+((((((-127 - 1) ? (arr_1 [i_3] [i_3]) : 22780))) ? -123 : -127))));
        var_23 |= (max((arr_7 [i_3]), (max((arr_12 [i_3]), 107))));
    }
    var_24 = var_14;
    #pragma endscop
}
