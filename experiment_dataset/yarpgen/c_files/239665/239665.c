/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239665
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 8;i_0 += 1) /* same iter space */
    {
        var_13 &= ((var_12 ? (arr_0 [i_0] [i_0 + 2]) : (max(-1, (arr_0 [i_0 + 4] [i_0 + 3])))));
        arr_2 [i_0] [i_0] = (~1);
        var_14 = -15;
        arr_3 [i_0] = ((-(arr_1 [i_0])));
    }
    for (int i_1 = 1; i_1 < 8;i_1 += 1) /* same iter space */
    {
        var_15 = (!var_12);
        var_16 = 25;
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 8;i_2 += 1) /* same iter space */
    {
        arr_10 [i_2] = (((arr_7 [i_2 + 2]) / var_6));
        var_17 = ((var_1 <= (-28 / var_2)));
        var_18 = (min(var_18, (((15 / (-28 + 1))))));
    }
    var_19 = var_10;
    #pragma endscop
}
