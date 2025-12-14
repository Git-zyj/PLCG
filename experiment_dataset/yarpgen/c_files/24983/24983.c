/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24983
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((-((1 ? var_1 : (((min(var_9, var_8))))))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_15 = (~var_2);
        arr_3 [17] = ((((((arr_2 [i_0]) ? (3129 + var_5) : var_9))) ? (+-3150) : var_1));
        arr_4 [i_0] = ((-var_11 ? (((858550688 ? -3124 : var_5))) : 33546240));
        var_16 = (var_6 ^ var_12);
        arr_5 [10] [i_0] &= ((9223372036854775807 ? 3135 : -3237));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_17 = (max(var_17, (((var_10 ? -3136 : var_2)))));
        arr_9 [i_1] = var_1;
    }
    for (int i_2 = 1; i_2 < 20;i_2 += 1) /* same iter space */
    {
        var_18 = (min(var_4, (min((arr_12 [i_2 - 1]), var_7))));
        arr_13 [11] [i_2 - 1] = (((((var_1 ? (arr_10 [i_2 + 1]) : -3137))) ? ((-(arr_12 [1]))) : 20));
        var_19 ^= (((arr_10 [i_2 - 1]) ? 90 : ((((max(var_0, 3452082003))) ? (arr_11 [i_2 + 1]) : 842885273))));
        var_20 = ((3436416622 ? 224 : -117));
    }
    for (int i_3 = 1; i_3 < 20;i_3 += 1) /* same iter space */
    {

        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    {
                        arr_26 [i_3] [i_3] [i_3] = 0;

                        for (int i_7 = 0; i_7 < 21;i_7 += 1)
                        {
                            var_21 = 864691128455135232;
                            var_22 -= (max((var_13 != 14215), ((var_8 << (!1413052879)))));
                            arr_29 [i_3] = var_9;
                        }
                    }
                }
            }

            for (int i_8 = 0; i_8 < 21;i_8 += 1) /* same iter space */
            {
                arr_34 [i_3] [i_3 + 1] [i_4] [i_3] = -var_4;
                arr_35 [i_3] [i_3] = (((((var_8 ? (min(-8436663934088712098, -26160)) : 3436416588))) ? ((((var_0 >= (max(-8436663934088712098, var_10)))))) : ((2147483647 ? (~17299194279181036650) : (((max(var_2, var_6))))))));
            }
            for (int i_9 = 0; i_9 < 21;i_9 += 1) /* same iter space */
            {
                arr_38 [i_9] [i_3] [i_3] = ((!(((~(arr_27 [19] [19] [i_3] [i_3] [i_3 + 1] [i_3 + 1] [i_3]))))));

                for (int i_10 = 0; i_10 < 21;i_10 += 1)
                {
                    arr_41 [i_3] = (((((var_3 ? var_9 : var_11))) ? (arr_16 [i_3 - 1]) : (((var_8 >= (arr_16 [i_3 - 1]))))));
                    var_23 = min((~var_5), 29);
                    arr_42 [i_3] [i_4] [i_9] [i_9] [9] [i_10] = var_4;
                }
            }
            var_24 = ((-var_5 ? (var_7 - var_4) : var_1));
            arr_43 [i_3] [i_4] = 65311;
        }
        arr_44 [i_3] [i_3] = ((842885254 ? (((min(var_11, 0)))) : (((arr_8 [i_3]) ? (arr_8 [i_3]) : 842885242))));
        arr_45 [i_3] = (((~var_13) + -var_11));
        arr_46 [i_3] = (!var_9);
    }
    #pragma endscop
}
