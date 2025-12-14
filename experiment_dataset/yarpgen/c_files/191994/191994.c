/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191994
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_13;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((var_3 ? var_3 : (((1078361527 | -25599) ? (arr_1 [i_0]) : (arr_0 [i_0] [i_0])))));
        var_20 = ((((var_5 ? (arr_1 [i_0]) : var_15)) ^ 1));
        arr_3 [16] [16] &= ((var_11 ? (~62) : ((((~248) == (arr_1 [16]))))));
        var_21 = ((-var_17 ? 1585416078 : ((536870911 ? var_11 : (arr_0 [i_0] [i_0])))));

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_22 = (max(var_22, ((min((((arr_1 [i_1]) ? var_1 : (arr_1 [i_1]))), ((25597 ? (arr_1 [i_1]) : (arr_1 [i_1]))))))));
            var_23 &= var_10;
            var_24 = (arr_0 [i_1] [i_0]);
        }
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            arr_9 [i_0] = ((arr_0 [i_0] [i_2]) ? (arr_0 [i_0] [i_2]) : (max((arr_0 [i_0] [i_2]), (arr_0 [i_2] [i_0]))));
            arr_10 [i_0] [i_0] = ((((253 ? ((((((arr_7 [12]) + 2147483647)) << (181 - 181)))) : (max(1008806316530991104, var_7)))) < 115));
            var_25 = ((!1) % ((3519 % (arr_6 [i_0] [i_0]))));
        }
    }
    var_26 = 302564792;
    #pragma endscop
}
