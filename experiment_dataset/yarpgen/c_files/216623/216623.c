/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216623
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [8] = 1306914880618401489;
        arr_3 [i_0] = (((((~(arr_0 [i_0])))) ? (arr_1 [i_0]) : (~6)));
        var_19 = (~(arr_1 [i_0]));
        var_20 = (arr_1 [i_0]);
    }

    for (int i_1 = 1; i_1 < 14;i_1 += 1)
    {
        arr_7 [i_1] = 52849;
        var_21 = -614412236;
    }
    #pragma endscop
}
