/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49403
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = max(var_4, var_2);
    var_20 &= (min(var_3, var_9));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        var_21 *= ((((!(arr_0 [i_0])))));
        var_22 = ((arr_0 [i_0 + 1]) ? var_8 : (arr_0 [i_0 - 1]));
    }
    var_23 += (min(var_10, 6374274463603344399));
    var_24 = ((var_6 ? (max((~var_13), var_12)) : var_17));
    #pragma endscop
}
