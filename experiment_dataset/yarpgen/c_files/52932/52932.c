/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52932
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 = (min(var_18, ((((((746132216 / 6477545186139801590) ? 29479 : (min(1614521386, 1965370284))))) ? var_12 : 36056))));
        var_19 = ((-6491780793312747137 ? 89 : 794790473));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
    {
        var_20 += 6577682630102121542;
        arr_4 [i_1] = 1863685821;
        var_21 = 4908630552363539960;
        arr_5 [i_1] [4] = ((min((((var_0 ? var_12 : var_14))), (~-6577682630102121543))));
        arr_6 [i_1] [i_1] = (((!(var_12 && var_8))) ? var_9 : ((min(((var_12 ? 3680638995 : var_0)), (~var_7)))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
    {
        var_22 = ((var_10 >> (1614521386 - 1614521362)));
        arr_10 [1] = (((var_0 ? 89 : var_8)));
    }
    var_23 = var_9;
    var_24 -= (((((var_7 | var_9) ? var_2 : ((9223372036854775807 ? var_3 : var_2)))) & (((min(var_14, 0))))));
    var_25 -= max((!var_16), 182);
    #pragma endscop
}
