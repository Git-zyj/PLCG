/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29814
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0 - 1] [i_0 - 1] = (~1452504165);
        var_11 = (max(var_11, (!var_1)));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] [i_1] = ((~((var_8 ? 0 : var_6))));
        arr_8 [i_1] [i_1] = ((((!(arr_1 [i_1])))));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_12 *= var_3;
            arr_14 [i_2] [i_3] = ((-(arr_1 [i_3])));
            var_13 = (max(var_13, (((~(arr_2 [i_2]))))));
            var_14 = (min(var_14, var_6));
        }
        arr_15 [i_2] = -168;
        var_15 = var_4;
    }
    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {
        var_16 = (((!var_0) + ((76 ? var_8 : var_5))));
        var_17 = ((~(~174)));
        var_18 &= ((~(((arr_9 [i_4]) ? ((-(arr_10 [i_4]))) : ((~(arr_1 [i_4])))))));
        arr_20 [i_4] = var_3;
    }
    var_19 = (~var_2);
    var_20 = ((!((((~var_6) * -var_1)))));
    var_21 = var_5;
    #pragma endscop
}
