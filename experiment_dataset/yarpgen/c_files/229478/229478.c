/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229478
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (!(((~(~var_10)))));
        var_12 = ((~(max((arr_0 [i_0] [i_0]), (min((arr_1 [i_0]), 0))))));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = (min((~6932981350737364713), (arr_0 [i_1] [i_1])));
        arr_8 [i_1] [i_1] = max(((135 ? var_11 : (arr_2 [i_1]))), ((-(arr_2 [i_1]))));
        var_13 *= (arr_6 [i_1]);
        arr_9 [i_1] = (max(var_7, (((arr_1 [2]) == (arr_0 [i_1] [i_1])))));
        arr_10 [i_1] [i_1] = (var_2 ^ (arr_1 [4]));
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
    {
        var_14 = var_10;
        arr_13 [i_2] = ((var_4 ? ((~(((arr_2 [i_2]) ? (arr_12 [i_2]) : var_6)))) : var_7));
    }
    var_15 += ((!var_4) ? (((~var_8) ? (max(var_5, var_1)) : (~var_9))) : -var_11);
    var_16 ^= var_9;
    #pragma endscop
}
