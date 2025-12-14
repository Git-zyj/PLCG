/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34926
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= ((var_3 ? var_6 : ((((52080 | -8) ? (min(4024656056, -810605061)) : (~var_7))))));
    var_13 = ((-(((-var_7 == (min(7713571840769139430, var_11)))))));
    var_14 = var_5;

    for (int i_0 = 1; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_15 = (min(var_15, 8200));
        var_16 = -11675;
        var_17 = (((((65506 ? 158 : var_7))) ? -7713571840769139430 : (arr_0 [i_0 + 1] [i_0 + 1])));
    }
    for (int i_1 = 1; i_1 < 12;i_1 += 1) /* same iter space */
    {
        var_18 = ((-16013293012438678905 >= (((min(21434, -20108))))));
        var_19 = min((min((arr_2 [i_1 + 1]), 117)), (((!(arr_2 [i_1 + 1])))));
    }
    #pragma endscop
}
