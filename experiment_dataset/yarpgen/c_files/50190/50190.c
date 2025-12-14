/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50190
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 22;i_1 += 1) /* same iter space */
        {
            arr_4 [0] [i_1] = ((!((((arr_2 [i_1] [i_1]) ? (arr_2 [i_1] [i_1]) : 1151980500)))));
            arr_5 [i_0] [i_1] = ((-(((arr_3 [i_0] [i_1 + 2]) ? (arr_3 [i_0] [i_1 + 2]) : (arr_3 [i_0] [i_1 + 2])))));
        }
        for (int i_2 = 1; i_2 < 22;i_2 += 1) /* same iter space */
        {
            var_16 ^= (((((arr_7 [i_0]) ? var_14 : -1590190645803664609))) ? var_12 : (var_3 && 2147483647));
            var_17 = (((-(arr_0 [i_2 - 1] [i_2 - 1]))));
        }
        var_18 = (max(var_18, ((((((((min(var_5, 1))) ? (((arr_0 [16] [16]) ? 13382467401432816440 : var_0)) : var_0))) ? (arr_6 [i_0] [12] [i_0]) : 1)))));
    }
    var_19 = (max((var_12 / var_9), var_6));
    #pragma endscop
}
