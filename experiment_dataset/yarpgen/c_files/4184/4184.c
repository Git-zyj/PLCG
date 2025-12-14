/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4184
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_9;

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        arr_4 [i_0] = (0 < (((!(var_5 % var_16)))));
        var_20 = ((!(((0 ? (1 && 0) : (((!(arr_2 [i_0] [i_0 + 2])))))))));
    }
    for (int i_1 = 0; i_1 < 0;i_1 += 1)
    {
        var_21 = (min((min(18627, -40)), ((((((-1 + 2147483647) >> var_17))) ? var_11 : ((-18628 ? var_14 : (arr_5 [i_1])))))));
        arr_8 [i_1] |= (min(-25, -18628));
        var_22 ^= (~var_6);
    }
    var_23 = var_5;
    #pragma endscop
}
