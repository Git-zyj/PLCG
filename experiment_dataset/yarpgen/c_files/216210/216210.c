/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216210
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_4 ? var_8 : (((var_11 ? (4050943932 == 4050943932) : var_9)))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_16 = (min(var_16, (arr_0 [i_0])));
        arr_2 [i_0] = ((-(min(244023365, 244023365))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = ((((min((7 << var_13), (arr_1 [i_1])))) ? var_0 : ((max(((min(32484, 2770965860))), (min((arr_0 [i_1]), (arr_6 [i_1] [i_1]))))))));
        arr_8 [i_1] = (max((((arr_0 [i_1]) * (((arr_1 [i_1]) ? (arr_3 [i_1]) : (arr_4 [i_1]))))), (arr_1 [i_1])));
        arr_9 [i_1] = 4111;
    }
    var_17 = ((min(var_14, (max(31, var_11)))));
    var_18 = var_0;
    #pragma endscop
}
