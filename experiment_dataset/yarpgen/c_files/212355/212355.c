/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212355
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, var_5));

    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_13 = ((30 > ((((((arr_1 [i_0] [i_0]) / var_10))) ? (arr_1 [i_0] [i_0]) : (((arr_0 [i_0]) / 11403320368219856900))))));
        var_14 = (min(var_14, (!16532716432153261061)));
        var_15 = ((((1750804609 ? (5 / 17548918928440485398) : (min(11403320368219856900, (arr_1 [i_0] [5]))))) - (((772724201 ? (((arr_0 [5]) ? 1540277302 : 1557115095485940589)) : (((arr_0 [i_0]) ? var_11 : (arr_0 [i_0]))))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {
        var_16 -= (((~var_9) * (!5)));
        var_17 |= (((((arr_2 [i_1] [i_1]) != var_1)) || (arr_3 [i_1] [i_1])));
    }
    #pragma endscop
}
