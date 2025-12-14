/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33375
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(((((max(var_0, var_8))) + ((var_9 ? 57588 : 215)))), var_8));

    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (1623519424 + 2825494834330401202);
        arr_4 [i_0] [i_0] = ((-((var_10 ^ (max((arr_2 [i_0]), var_17))))));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {
        var_19 = (((49966 * -127) ? ((var_6 & (arr_6 [i_1] [i_1]))) : (((arr_6 [i_1] [i_1]) ? var_13 : (arr_6 [i_1] [17])))));
        arr_7 [i_1] = var_12;
        var_20 ^= (max((arr_2 [i_1]), ((((((((arr_5 [i_1]) + 2147483647)) >> (((arr_6 [i_1] [i_1]) - 9126340269353263658)))) > 53385)))));
        arr_8 [i_1] = (((((arr_1 [12]) ? (32767 - -117) : 8465910191943164229)) > -1623519452));
    }
    var_21 = (((min(53385, 1623519425)) / ((var_17 ? (1 / 1) : (var_9 + var_10)))));
    #pragma endscop
}
