/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213274
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_20 = (arr_0 [i_0]);
        arr_4 [i_0] = -32760;
        arr_5 [i_0] [i_0] = (((max((arr_0 [i_0]), (arr_0 [i_0]))) << (((arr_0 [i_0]) - 24883))));
        var_21 += arr_3 [i_0];
        arr_6 [i_0] = (min(((var_6 & (min((arr_2 [16] [18]), (arr_0 [i_0]))))), (var_17 + var_18)));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_22 = (((((((min((arr_2 [16] [16]), var_9)))) + (((arr_0 [i_1]) + var_1)))) + (arr_0 [i_1])));
        arr_11 [i_1] [i_1] = (((arr_8 [i_1]) ^ (arr_1 [i_1])));
        var_23 = var_18;
    }
    var_24 = var_18;
    #pragma endscop
}
