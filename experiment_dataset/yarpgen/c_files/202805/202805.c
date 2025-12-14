/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202805
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += var_17;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_19 = (((arr_1 [i_0] [i_0 - 1]) / (arr_0 [i_0 - 1])));
        var_20 = 230;
        arr_2 [1] [i_0] = ((~(~1)));
        var_21 = 4;
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_22 += ((~(max((arr_3 [i_1 - 1]), -var_7))));
        var_23 += (((arr_4 [i_1] [5]) ^ (min((((!(arr_3 [i_1])))), (var_14 % var_13)))));
    }
    #pragma endscop
}
