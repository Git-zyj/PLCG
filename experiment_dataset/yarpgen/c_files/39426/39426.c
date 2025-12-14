/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39426
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((-13572 ? ((max((max(var_9, var_2)), (4294967295 != var_10)))) : ((((var_14 ? var_4 : var_4)) * 0))));

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = (((240 ^ -5298589437647967764) / (((var_12 ? (arr_1 [i_0]) : (arr_1 [i_0]))))));
        var_16 |= ((~((max(0, 255)))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
    {
        var_17 |= var_2;
        arr_6 [i_1] = (~-5298589437647967771);
    }
    for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
    {
        var_18 = (((((1234622971 ? var_1 : var_10) / (var_1 >= var_6)))));
        var_19 = (((~var_11) != ((((var_3 > (arr_10 [i_2] [i_2])))))));
        var_20 += ((((109 ? -15349 : -8793765023089970037)) % (~var_14)));
        arr_11 [13] = -5298589437647967771;
        arr_12 [i_2] [i_2] = ((((0 ? 63 : -38))) > (((-(arr_8 [i_2])))));
    }
    #pragma endscop
}
