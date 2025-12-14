/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195594
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_16 += (arr_1 [i_0]);
        var_17 += (((arr_0 [i_0]) ? (arr_0 [1]) : (26862 / var_12)));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 0;i_1 += 1) /* same iter space */
    {
        arr_4 [i_1] [i_1] = (arr_2 [i_1 + 1] [i_1 + 1]);
        arr_5 [i_1] = (arr_3 [1]);
    }
    for (int i_2 = 0; i_2 < 0;i_2 += 1) /* same iter space */
    {
        var_18 = (max(var_18, 52));
        var_19 *= (((((((min(-53, 3359364332733180992)) <= var_5)))) <= 12291638315602147508));
    }
    var_20 = (var_13 / var_14);
    var_21 = ((((((38674 ? var_2 : 3359364332733180992))) ? (576460752286646272 / var_14) : var_5)));
    var_22 = var_5;
    #pragma endscop
}
