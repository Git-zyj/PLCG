/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38027
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((~(var_8 != var_16)));
    var_18 = (min(var_18, -1859849177));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_19 = (min(((((arr_0 [i_0]) ^ 1859849155))), (((arr_0 [i_0]) ? (-4 + 1859849176) : (arr_1 [i_0])))));
        var_20 = 1859849154;
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_21 *= ((~(((!(arr_2 [i_1]))))));
        var_22 = ((82 ? var_7 : 112));
        var_23 = 191;
        var_24 |= (1 || 2548);
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        var_25 = ((-(((arr_0 [i_2]) ? (arr_0 [i_2]) : (arr_0 [i_2])))));
        var_26 = (!var_7);
        var_27 = -8504115203600005075;
        var_28 = 8504115203600005077;
        var_29 &= ((((!(arr_5 [i_2]))) ? ((1859849154 ? (arr_9 [i_2] [i_2]) : var_10)) : (var_7 | var_1)));
    }
    #pragma endscop
}
