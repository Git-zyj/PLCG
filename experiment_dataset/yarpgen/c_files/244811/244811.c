/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244811
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        arr_4 [i_0] = 53;
        var_11 -= ((((-7 / (min((arr_0 [i_0 - 1]), (arr_2 [i_0] [i_0 + 3]))))) > (((-((var_10 ? (arr_3 [i_0] [i_0]) : (arr_3 [i_0] [i_0 + 3]))))))));
    }
    var_12 = var_0;
    var_13 = (287 & (~var_5));
    #pragma endscop
}
