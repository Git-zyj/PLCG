/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230675
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [21] = var_10;
        var_17 |= (((var_1 != var_1) ? (((var_3 ? var_12 : var_6))) : ((2789297729 ? 2789297729 : 18446744073709551615))));
        var_18 = (min(var_18, var_0));
        var_19 = 0;
    }
    for (int i_1 = 1; i_1 < 17;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        {
                            arr_19 [i_1] [i_1] [i_1] [i_1] [i_1] = min(-var_8, ((min((2789297729 < 3659704828), 1505669567))));
                            arr_20 [i_1] [i_2] [i_4] [i_5] |= ((((max(var_2, var_12))) < (var_4 != var_16)));
                            var_20 = (max(var_20, (~-var_13)));
                        }
                    }
                }
            }
            arr_21 [i_1 + 1] [14] [i_1] = ((~var_11) ? ((((min(var_9, var_5))))) : ((var_3 ^ (min(var_0, var_8)))));
        }
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                {
                    arr_28 [i_1] [i_1] = (min((((~var_2) ? (min(var_6, var_12)) : var_10)), var_1));

                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        var_21 = (max(var_21, (((~(min((~1608941416), 18446744073709551615)))))));
                        var_22 = (((((!(((var_11 ? var_8 : var_11)))))) < (-var_15 | var_13)));

                        for (int i_9 = 0; i_9 < 18;i_9 += 1)
                        {
                            arr_35 [i_1] [i_6] [i_7] [i_1] [8] = (((((((var_14 ? var_2 : var_8))) ? (var_6 - var_5) : var_7)) - var_1));
                            var_23 = (max(var_23, ((((((var_5 ? var_9 : var_10))) < 0)))));
                            arr_36 [i_1] = ((((((var_9 ^ var_3) ? -var_15 : (var_2 != var_9)))) ? (((((var_3 ? var_1 : var_3))) ? (var_2 & var_12) : -var_9)) : ((((((max(var_5, var_4))) < ((max(var_3, var_11)))))))));
                            arr_37 [i_1 - 1] [i_1] [i_1] [i_1 - 1] [i_1] [i_1] = var_11;
                        }
                    }
                }
            }
        }
        var_24 += (((~(var_1 || var_11))));
        var_25 *= (((-(max(var_7, var_4)))));
    }
    for (int i_10 = 0; i_10 < 17;i_10 += 1) /* same iter space */
    {
        var_26 = (min(var_26, (((((((var_11 ? var_13 : var_3) < ((var_2 >> (var_8 - 30427)))))))))));
        var_27 *= (((max(var_0, var_8)) >> ((((max(var_0, var_15))) - 62224))));
        var_28 *= ((-124 <= (var_7 ^ 1505669567)));
        arr_41 [i_10] = 24299;
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 17;i_11 += 1) /* same iter space */
    {
        var_29 |= (~var_5);
        var_30 = (min(var_30, ((((var_10 * var_4) ? (var_4 + var_14) : (var_10 < var_12))))));
        var_31 = (min(var_31, var_0));
    }
    var_32 = ((((max((max(var_14, var_4)), var_16))) ? ((((min(var_15, var_2))) ? var_2 : (!var_6))) : var_13));
    var_33 = ((2789297728 ? (max((~var_11), (var_7 / var_5))) : (((var_2 ? (var_8 / var_3) : var_15)))));
    #pragma endscop
}
