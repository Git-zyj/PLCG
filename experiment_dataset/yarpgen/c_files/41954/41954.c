/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41954
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 95;

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_13 = ((((~(arr_0 [i_0 - 1]))) ^ (((max((arr_2 [i_0]), var_9))))));
        arr_3 [i_0] = ((((((arr_0 [i_0]) ? (((var_11 ? var_11 : 2900211204))) : (min(805, var_2))))) ? (arr_2 [i_0]) : (arr_0 [i_0])));
        arr_4 [i_0] [i_0 - 1] = (var_7 << (((max((((arr_0 [i_0]) ? 58519 : 1180475314)), (-30070 >= 102))) - 58504)));
        arr_5 [i_0] = ((((((min(38935, 61151))) ? (((arr_0 [i_0]) ? 1248034144 : (arr_0 [i_0]))) : 1933945514)) - (arr_0 [i_0 - 1])));
    }
    var_14 = var_1;
    #pragma endscop
}
