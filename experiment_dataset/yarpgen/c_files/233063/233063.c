/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233063
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_11, var_3));
    var_18 = ((max((var_5 <= 103), var_16)));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 = ((!((max(var_16, 94)))));
        var_20 *= 1;
        var_21 = (max((~1), -1));
        arr_2 [i_0] [i_0] = (min((18016561315629434893 == var_8), var_8));
    }

    for (int i_1 = 1; i_1 < 19;i_1 += 1)
    {
        var_22 = ((~(var_0 <= var_7)));
        arr_5 [i_1] = (min((1 | -115), 41));
        var_23 = (~var_15);
    }
    #pragma endscop
}
