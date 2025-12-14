/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203988
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_3 - ((((min(281474976710655, 53325)))))));
    var_16 = (!var_4);
    var_17 += (min((((var_6 / var_1) ? ((var_7 ? var_3 : var_11)) : ((var_2 ? var_5 : -281474976710644)))), var_11));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (((((var_1 ? -9252 : -281474976710655))) ? (arr_0 [i_0]) : (arr_0 [i_0])));
        var_18 = (((arr_1 [i_0] [i_0]) + (arr_1 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {
        var_19 = ((((arr_5 [i_1]) & (arr_5 [i_1]))));
        arr_7 [i_1] = (+(((((var_7 ? (arr_5 [i_1]) : (arr_6 [i_1])))) ? (arr_6 [i_1]) : -9223372036854775786)));
        var_20 = (min(var_20, (arr_0 [10])));
        var_21 = (((arr_4 [i_1]) ? ((max((arr_2 [i_1] [i_1]), (arr_0 [i_1])))) : ((min((arr_5 [i_1]), 47)))));
    }
    var_22 |= -var_1;
    #pragma endscop
}
