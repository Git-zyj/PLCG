/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223054
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_9 / (min((max(var_6, var_7)), var_13))));
    var_17 = (min(var_17, (((-7919419209978289467 ? 1 : 9223372036854775807)))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = (((-var_10 ? (var_7 / var_0) : (28 / 5739322080966891418))));
        var_18 = ((((max((min(var_8, 2362493310)), 2871345758))) / (((!17062782154526648264) ? ((max(8015803593637123569, 65535))) : (arr_1 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
    {
        var_19 = (min(3284130762312110262, 65530));
        var_20 += (min(-3242632723, var_7));
        var_21 = (min((((((arr_4 [i_1]) + (arr_5 [5]))) + (arr_6 [i_1]))), 3512023272));
    }
    var_22 += ((-271868672193674325 ? ((((min(var_3, (-127 - 1)))) ? -var_12 : ((min(-6644, var_1))))) : ((~(var_9 / var_1)))));
    var_23 = var_8;
    #pragma endscop
}
