/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198090
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_10 = ((+((var_1 ? (arr_1 [i_0]) : (arr_1 [i_0])))));
        arr_2 [i_0] = (((arr_1 [i_0]) ? var_1 : (arr_0 [i_0])));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = ((((min((max(56868, -198130636)), var_4))) < (arr_1 [i_1])));
        arr_6 [i_1] = (min((arr_4 [i_1]), (arr_4 [i_1])));
        arr_7 [0] [0] = (arr_3 [i_1]);
        var_11 = (((min(((~(arr_1 [i_1]))), var_1)) << ((var_1 & (((min(11212, 121))))))));
    }
    var_12 *= ((max((max(var_7, var_9)), var_8)));
    var_13 = -var_2;
    #pragma endscop
}
