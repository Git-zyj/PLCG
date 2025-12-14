/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45751
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_3;
    var_11 -= min((max((max(var_2, var_7)), 0)), 22);
    var_12 = (min(var_3, ((((-127 - 1) && 4294967295)))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_4 [1] = (((((!(arr_1 [i_0])))) / 122));
        arr_5 [i_0] = var_9;
        arr_6 [i_0] |= (arr_3 [i_0] [i_0]);
    }
    var_13 = (min(var_13, (var_2 / var_5)));
    #pragma endscop
}
