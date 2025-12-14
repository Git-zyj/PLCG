/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201853
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_19 = var_9;
        var_20 = (arr_1 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_21 += ((-((1 ? 1 : 1))));
        var_22 = (arr_5 [i_1]);
        var_23 = ((-(arr_4 [0])));
    }
    for (int i_2 = 1; i_2 < 14;i_2 += 1) /* same iter space */
    {
        var_24 -= ((var_3 == ((((var_10 > (arr_4 [i_2 + 2])))))));
        var_25 += ((!(((((max(var_4, var_16))) ? ((var_11 ? (arr_7 [i_2]) : var_17)) : ((-(arr_4 [i_2]))))))));
    }
    for (int i_3 = 1; i_3 < 14;i_3 += 1) /* same iter space */
    {
        arr_13 [i_3 - 1] |= (((min((arr_1 [i_3 + 2]), (arr_1 [i_3 - 1]))) ^ (((arr_1 [i_3 + 4]) ^ (arr_1 [i_3 + 3])))));
        var_26 = (max(var_26, (arr_4 [4])));
    }
    var_27 += 1;
    var_28 = -var_1;
    #pragma endscop
}
