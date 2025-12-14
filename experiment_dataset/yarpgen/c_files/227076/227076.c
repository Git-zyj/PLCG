/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227076
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        arr_2 [17] = var_0;
        var_13 = (max(var_13, (11039942536992916294 != 17224)));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_14 = (max(var_14, ((((min((arr_1 [i_1]), 228))) ? 134 : 0))));
        var_15 = var_2;
        arr_6 [i_1] = (min(((max(var_12, (arr_4 [i_1])))), ((98 ? 1472298982 : 4294967282))));
        arr_7 [i_1] = 4294967290;
        arr_8 [i_1] |= arr_5 [2];
    }
    var_16 = var_0;
    #pragma endscop
}
