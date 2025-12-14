/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215527
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((!var_0) ? (((!((min(112, var_10)))))) : -14274));
    var_19 = ((!((((var_7 ? var_9 : 0))))));

    for (int i_0 = 1; i_0 < 23;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((!(((-(~-16))))));
        var_20 = ((((-2147483647 - 1) & (arr_2 [i_0 + 1]))));
        var_21 = ((--1) ? (min((((arr_1 [i_0] [i_0]) ? 8191 : 1)), -16)) : (!32767));
        arr_4 [i_0] [i_0] = 1;
    }
    for (int i_1 = 1; i_1 < 23;i_1 += 1) /* same iter space */
    {
        var_22 = (!18446744073709551601);
        var_23 = ((((arr_1 [i_1] [i_1 + 1]) ? (arr_2 [i_1 + 1]) : 0)));
    }
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        arr_10 [i_2] = (144737044 < var_0);
        var_24 = ((!((max(((25 ? 27 : var_0)), var_13)))));
        arr_11 [i_2] = (min(((~(arr_9 [i_2]))), -var_10));
        var_25 = (-2147483647 - 1);
    }
    #pragma endscop
}
