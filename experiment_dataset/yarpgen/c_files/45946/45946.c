/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45946
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_9;
    var_18 = (max(var_16, var_2));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = ((~255) ? ((((~(arr_1 [i_0]))))) : ((0 << ((((var_6 ? -7298 : -15863)) + 7307)))));
        var_19 = min(((!(arr_1 [i_0]))), (arr_0 [8]));
        var_20 = (((((arr_0 [i_0]) ? var_1 : 16)) / ((var_3 ? (arr_0 [i_0]) : 1))));
    }
    #pragma endscop
}
