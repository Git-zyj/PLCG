/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19035
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_10 ? var_8 : var_9));
    var_14 = var_4;
    var_15 = (max(var_15, var_1));
    var_16 = (max(((min((var_1 || 6507223133892155606), (var_0 || var_1)))), var_8));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 19;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [8] = (arr_1 [i_0]);
        var_17 = (min(var_17, ((((((6507223133892155599 ? 19537 : (arr_0 [i_0] [i_0])))) ? ((-19533 * (arr_1 [0]))) : (((arr_0 [i_0] [i_0]) ? (arr_1 [i_0]) : (arr_0 [i_0] [i_0]))))))));
    }
    for (int i_1 = 2; i_1 < 19;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = 127;
        arr_6 [i_1] [i_1] = ((((((!(arr_1 [i_1]))))) > (((arr_4 [i_1 - 1]) ? (arr_1 [i_1 - 2]) : (max(var_1, 53))))));
        var_18 |= (max((arr_1 [i_1]), (!-2235113116)));
    }
    #pragma endscop
}
