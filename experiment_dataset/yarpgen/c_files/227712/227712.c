/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227712
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = (max(((22176 << (((arr_1 [i_0] [i_0]) - 46011)))), -33194));
        arr_3 [i_0] = ((min((arr_1 [i_0] [i_0]), (arr_0 [i_0]))));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_10 += (arr_4 [i_1]);
        var_11 = (min(var_11, var_7));
        arr_7 [i_1] = (arr_5 [i_1] [i_1]);
    }
    for (int i_2 = 1; i_2 < 21;i_2 += 1)
    {
        arr_11 [i_2] = (-1 < 32334);
        var_12 = (((min((((arr_4 [i_2 + 2]) ? -6891578006961383154 : 33182)), -2079295037)) & 22));
        var_13 = (max(var_0, (((arr_4 [i_2 - 1]) ? 33202 : 458752))));
    }
    var_14 *= 60893;
    #pragma endscop
}
