/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213902
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= ((!(~4826)));

    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        var_18 = (min(var_18, ((max((min((max((arr_2 [i_0]), var_16)), (arr_0 [i_0]))), ((((arr_1 [i_0] [i_0]) ? ((max((arr_0 [11]), 1))) : (arr_2 [i_0])))))))));
        arr_3 [i_0] [i_0] = (min((arr_2 [i_0]), ((((arr_2 [0]) ? var_9 : var_1)))));
        var_19 = arr_0 [i_0];
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = var_9;
        arr_7 [i_1] = (min((((arr_2 [i_1]) ? ((((var_3 + 2147483647) >> (((arr_5 [i_1] [i_1]) - 14031967494190686285))))) : (arr_5 [i_1] [i_1]))), (((255 != (arr_1 [i_1] [i_1]))))));
        arr_8 [1] [i_1] = (max((min(((~(arr_5 [i_1] [i_1]))), var_7)), (53 < 65535)));
        arr_9 [i_1] = ((var_3 ? 65535 : 52989));
    }
    var_20 = (max(var_20, ((max((var_10 | var_3), (((((var_10 ? var_7 : var_1))) ? ((var_15 ? 617037740197249830 : var_10)) : 25)))))));
    var_21 = (((((-68 ^ (var_15 + var_15)))) | (max(var_1, ((max(var_5, var_13)))))));
    var_22 = ((53704 ? var_5 : ((-var_2 ? var_9 : -1))));
    #pragma endscop
}
