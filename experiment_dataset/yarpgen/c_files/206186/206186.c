/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206186
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (-8626177994471217748 | 469762048);
    var_19 ^= (((var_1 == var_14) < 1));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 ^= (arr_0 [10] [i_0]);
        var_21 = (arr_0 [i_0] [i_0]);
    }
    for (int i_1 = 1; i_1 < 20;i_1 += 1)
    {
        var_22 = (0 & 0);
        var_23 = (max(var_23, -32));
        var_24 = 1;
        arr_4 [i_1] [i_1] = ((arr_3 [i_1 - 1]) * -120);
    }
    var_25 = (100 & var_7);
    var_26 ^= 39879;
    #pragma endscop
}
