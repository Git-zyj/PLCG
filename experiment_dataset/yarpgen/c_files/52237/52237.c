/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52237
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= (~var_0);

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_16 = var_13;
        arr_2 [i_0] [i_0] = (arr_1 [i_0]);
        arr_3 [1] = (arr_1 [i_0]);
        var_17 -= ((((((arr_0 [i_0 - 2] [i_0 - 1]) ? (arr_0 [i_0 - 2] [i_0 - 1]) : (arr_1 [i_0 - 2])))) ? (arr_0 [i_0 - 2] [i_0 - 1]) : var_14));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        var_18 = var_1;
        var_19 = ((1 ? (arr_4 [i_1] [3]) : (arr_5 [i_1])));
    }
    for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
    {
        var_20 = ((1 ? ((12328900341322045742 ? (arr_4 [i_2] [i_2]) : 1)) : var_5));
        var_21 += (~var_1);
    }
    #pragma endscop
}
