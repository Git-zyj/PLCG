/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208914
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_16 += 705479859648961570;
        arr_3 [i_0] [i_0] = (i_0 % 2 == 0) ? ((max((((((arr_0 [i_0]) + 2147483647)) >> 1)), ((((arr_0 [i_0]) >= (arr_0 [i_0]))))))) : ((max((((((((arr_0 [i_0]) - 2147483647)) + 2147483647)) >> 1)), ((((arr_0 [i_0]) >= (arr_0 [i_0])))))));
        var_17 = (max(var_17, (((~(((((var_11 / (arr_1 [i_0])))) ? (~-6296175519289807242) : -var_13)))))));
        arr_4 [i_0 + 3] [i_0] = (((min((arr_0 [i_0]), (arr_2 [i_0]))) >= (1 << 1)));
        var_18 ^= -24506;
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_19 = (arr_8 [i_1] [i_1]);
        arr_9 [i_1] [i_1] = (max(((~(arr_6 [i_1]))), (max((~var_15), var_7))));
        arr_10 [i_1] = ((-(((arr_7 [i_1]) ? (arr_7 [i_1]) : 60208))));
        arr_11 [i_1] [i_1] = -705479859648961574;
    }
    var_20 = (max((((((27339 ? var_3 : var_0))) ? var_6 : var_12)), (max(((1 ? 1 : var_10)), -1079258790))));
    #pragma endscop
}
