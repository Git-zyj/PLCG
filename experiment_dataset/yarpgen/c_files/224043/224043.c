/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224043
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_8;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_11 = min((((arr_0 [8]) ? ((((arr_1 [i_0]) * (arr_0 [i_0])))) : ((207 ? -278958229909546891 : (arr_1 [i_0]))))), ((((-1 + 2147483647) << (((arr_1 [i_0]) - 54150879))))));
        arr_2 [i_0] [i_0] = 27077;
        var_12 = (min(var_12, ((((var_0 <= var_9) ? ((((((var_2 >> (43740 - 43729))) <= ((var_9 % (arr_1 [i_0]))))))) : (((arr_0 [i_0]) ? 6579387569448864132 : (arr_1 [i_0]))))))));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        arr_7 [i_1] = (arr_1 [i_1]);
        var_13 |= (~((~(arr_1 [i_1]))));
    }
    var_14 = ((var_8 ? var_2 : var_4));
    var_15 = (min(((max(((var_5 ? var_8 : var_0)), var_8))), ((-(max(var_7, 820190278347731005))))));
    #pragma endscop
}
