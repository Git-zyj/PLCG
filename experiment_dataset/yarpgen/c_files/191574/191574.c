/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191574
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((min(11856627686602565241, 2841971542)) >> (var_1 - 11589))) - var_2));

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_13 = ((((var_1 ^ var_9) << ((((var_4 ? 65535 : var_1)) - 65506)))) << (((~3268537617) - 1026429664)));
        arr_2 [i_0] = ((~(arr_1 [i_0])));
        var_14 = var_9;
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = ((((15697956781367119034 ? 794 : (arr_4 [i_1] [i_1]))) / (arr_4 [i_1] [i_1])));
        var_15 = (min(var_15, ((((((~(min(2453159469, (arr_0 [i_1])))))) != 4150057782357284029)))));
        var_16 |= ((!(~2841971536)));
    }
    for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
    {
        arr_8 [i_2] [1] = 129;
        var_17 += (((((arr_4 [i_2] [16]) - (arr_6 [i_2]))) != ((var_1 ? (arr_6 [i_2]) : (arr_4 [i_2] [10])))));
        var_18 = (min(var_18, (arr_4 [i_2] [16])));

        for (int i_3 = 2; i_3 < 14;i_3 += 1)
        {
            var_19 = var_11;
            var_20 = var_5;
        }
        arr_13 [i_2] = min(var_0, (((var_9 >> (var_11 - 4725982528759990766)))));
    }
    for (int i_4 = 0; i_4 < 17;i_4 += 1) /* same iter space */
    {
        arr_16 [i_4] = 62;
        arr_17 [i_4] = ((-(min((arr_12 [0] [i_4]), var_8))));
    }
    #pragma endscop
}
