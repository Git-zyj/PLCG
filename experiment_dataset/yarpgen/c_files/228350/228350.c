/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228350
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max((((((min(var_1, 45285))) ? -59 : ((max(var_5, var_12)))))), (((max(5066986316541702158, 40)) >> (var_7 || var_1)))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_16 = (min(((((40 ? var_0 : 11293177734022897476)) * (((~(arr_0 [i_0] [i_0])))))), ((-(max(11293177734022897476, 11293177734022897497))))));
        arr_3 [i_0] = ((((((arr_1 [i_0]) ? (var_5 && var_3) : ((max(var_0, var_9)))))) < (min(18446744073709551597, 12278159))));
        arr_4 [i_0] = var_3;
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_17 &= ((((min(var_9, var_7))) | (min(11293177734022897476, 11711446205256512889))));
        var_18 = (min(-7192583277944280257, (((((max(-18683, var_9))) && var_6)))));
        var_19 = ((9223372036854775795 ? (arr_6 [i_1]) : (((max(2131019548, 7153566339686654118))))));
    }
    #pragma endscop
}
