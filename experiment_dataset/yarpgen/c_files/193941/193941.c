/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193941
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_17 = ((((((arr_1 [i_0]) ? (arr_1 [i_0 - 1]) : (arr_2 [i_0 - 1] [i_0 + 1])))) ? ((((arr_0 [i_0 - 1] [i_0 - 1]) & (arr_0 [i_0 + 1] [i_0 - 1])))) : (max(((1826916955 ? (arr_1 [i_0]) : 4294967295)), (arr_0 [i_0 + 1] [i_0 + 1])))));
        arr_3 [i_0] = (min((241 || 0), (max((arr_0 [i_0] [i_0 + 1]), var_10))));
        arr_4 [i_0 - 1] = (((-(arr_0 [i_0 - 1] [i_0]))));
        arr_5 [i_0 - 1] [i_0 + 1] = var_9;
    }
    for (int i_1 = 1; i_1 < 11;i_1 += 1)
    {
        var_18 &= (min((((arr_7 [i_1 - 1]) && (arr_7 [i_1 + 1]))), var_13));
        arr_9 [i_1] = ((((((arr_7 [i_1 - 1]) ^ (arr_7 [i_1 + 1])))) ? ((((arr_7 [i_1 + 1]) | (arr_7 [i_1 - 1])))) : (((arr_7 [i_1 + 1]) | var_0))));
        var_19 = (max(var_19, ((((+(((arr_0 [i_1] [i_1 - 1]) ? 102046702 : (arr_6 [i_1] [i_1])))))))));
    }
    var_20 = -1826916955;
    #pragma endscop
}
