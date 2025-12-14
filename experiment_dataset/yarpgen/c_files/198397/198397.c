/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198397
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_18;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_20 *= (!var_14);
        arr_4 [i_0] [i_0 - 1] = 4294967295;
        var_21 = (max(var_21, (((!(arr_2 [14]))))));
    }
    for (int i_1 = 2; i_1 < 22;i_1 += 1) /* same iter space */
    {
        var_22 = (min(var_22, (((-238 ? (((min(255, 255)))) : (((arr_2 [0]) ? var_11 : var_1)))))));
        arr_7 [8] |= ((-(arr_3 [10])));
        arr_8 [i_1] = 9007199254740992;
    }
    for (int i_2 = 3; i_2 < 19;i_2 += 1)
    {
        arr_12 [20] &= 1;
        arr_13 [2] |= ((((!(1 ^ 1)))));
        arr_14 [i_2] [i_2] = (((((((var_14 ? var_2 : var_5)) ^ (arr_2 [i_2])))) ? (min(((max(var_10, 28))), (arr_5 [i_2]))) : (1 - 248)));
        arr_15 [i_2] = (!54);
    }
    #pragma endscop
}
