/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199303
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max((var_10 < -269084455), 8017));

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_21 = ((-((8017 >> (2980354674 - 2980354663)))));
        arr_3 [i_0] = (((+(((arr_2 [i_0] [i_0]) ? (arr_0 [i_0]) : 14428)))));
        var_22 &= (arr_2 [i_0 - 1] [i_0 + 2]);
        arr_4 [i_0] [i_0] = 45;
    }
    var_23 = var_12;
    #pragma endscop
}
