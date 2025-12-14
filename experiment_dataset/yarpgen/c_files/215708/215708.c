/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215708
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((-((var_4 ? var_2 : -885298115))))) ? (min(-885298115, 885298139)) : (~var_5)));
    var_13 |= ((var_9 - (-885298115 + 87)));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] [2] &= (max((((arr_0 [i_0] [10]) ? (arr_1 [12]) : (arr_1 [16]))), 93));
        arr_3 [i_0] [1] = (max((-1518048330 + -6619537593340682501), ((min(101, 63)))));
    }
    #pragma endscop
}
