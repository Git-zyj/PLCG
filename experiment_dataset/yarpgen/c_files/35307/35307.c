/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35307
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_1] [i_1] [i_0] = var_13;
                    var_17 = ((((!(arr_8 [i_1] [i_1] [i_1]))) ? 0 : (((((max(-2091471504250342146, var_8))) ? (((max(var_11, var_4)))) : (~var_1))))));
                    arr_10 [i_1] [i_1] [i_1] [i_0] = (min(((var_13 ? 17415755911563414277 : (max(17415755911563414292, var_4)))), -2091471504250342160));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        arr_14 [i_3] = ((((((!-49) != var_13))) ^ var_3));

        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            arr_17 [i_3] [i_4] = (((!(arr_15 [i_3] [i_4]))));

            /* vectorizable */
            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                arr_22 [i_3] [i_5] = ((arr_18 [i_5] [i_5] [i_4] [i_3]) / (arr_18 [i_4] [i_4] [i_4] [i_4]));
                arr_23 [i_3] [i_3] = (((((var_14 ? var_0 : var_7))) ? (var_2 && var_6) : 2091471504250342145));
            }
        }
    }
    for (int i_6 = 0; i_6 < 21;i_6 += 1)
    {
        var_18 = ((((((var_0 + (arr_15 [i_6] [i_6]))) ? 7571293037988498626 : var_7))));
        arr_27 [i_6] [i_6] = 173889365;
    }
    for (int i_7 = 0; i_7 < 20;i_7 += 1)
    {
        var_19 -= (max(((((max((arr_13 [i_7]), var_0))) ? (((((arr_26 [i_7]) < var_9)))) : (max((arr_19 [i_7] [i_7] [i_7]), (arr_21 [i_7] [i_7] [i_7]))))), ((((arr_16 [i_7] [i_7] [i_7]) && (arr_11 [i_7]))))));
        arr_31 [i_7] = ((~(((~var_9) ? -var_13 : ((~(arr_28 [i_7])))))));
        var_20 = (max(var_20, ((max(((((var_6 | var_16) < (arr_13 [i_7])))), var_13)))));
    }
    #pragma endscop
}
