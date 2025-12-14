/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191740
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= (~var_9);

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = 29828;
        var_17 += (1 && (103 && 29828));
        arr_3 [i_0] = var_10;
    }
    for (int i_1 = 1; i_1 < 14;i_1 += 1) /* same iter space */
    {
        var_18 |= (!91);
        var_19 = (max(((-(((arr_7 [i_1 + 1]) ? (arr_4 [i_1]) : (arr_4 [i_1]))))), ((max((arr_7 [i_1]), (min(-29828, var_8)))))));
        var_20 += (arr_7 [i_1 - 1]);
    }
    for (int i_2 = 1; i_2 < 14;i_2 += 1) /* same iter space */
    {
        arr_10 [i_2] = var_13;
        var_21 = (min(var_21, var_5));
        arr_11 [i_2] = var_3;
        arr_12 [i_2] [i_2] = (arr_9 [i_2]);
        arr_13 [i_2] = 66;
    }
    var_22 = ((((~((max(var_9, var_0))))) ^ 92));
    #pragma endscop
}
