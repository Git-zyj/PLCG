/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213414
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= var_5;
    var_17 = ((var_13 >> (min(((251 ? var_5 : var_7)), (!var_0)))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_18 = var_8;
        var_19 &= (9190485635481810586 & -9190485635481810587);
        arr_4 [i_0] = ((((!(arr_2 [i_0] [i_0]))) ? 0 : (192 / -9190485635481810593)));
        var_20 = ((-5837 ? 9190485635481810586 : 1));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = (((((-(arr_6 [i_1] [i_1])))) && var_10));
        arr_8 [i_1] [i_1] &= (((!-80) ? -9190485635481810593 : var_10));
        var_21 = 9190485635481810622;
        var_22 = -9190485635481810593;
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_23 = ((!((((var_6 ? var_10 : (arr_9 [i_2])))))));
        arr_11 [i_2] [i_2] = (!18349692096815126084);
    }
    var_24 = (!1);
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 19;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            {
                var_25 = (min(var_25, ((max(((+(((arr_14 [i_3]) / 9223372036854775807)))), (((-(var_14 <= var_15)))))))));
                var_26 = (min(60202, (min(((max(var_4, -1895025813))), (max(var_10, var_12))))));
                var_27 &= (max((13572162810933893293 % 21601), (var_15 == -10552)));

                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    var_28 &= var_4;
                    var_29 = (min(var_29, ((((((!(((var_12 ? var_7 : var_9)))))) & (var_10 && var_10))))));

                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        var_30 = (~18349692096815126097);
                        var_31 = (max(var_31, ((((var_0 & var_13) % (arr_15 [i_3 + 2] [i_3 - 2] [i_3 - 1]))))));
                    }
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        var_32 = ((((min(var_14, 9190485635481810593))) ? ((var_12 ? 268173312 : var_7)) : (!var_5)));
                        var_33 = (((arr_12 [i_3 - 2]) > (~var_4)));
                    }
                    for (int i_8 = 1; i_8 < 19;i_8 += 1)
                    {
                        arr_28 [i_3 + 2] [i_4] [i_5] [i_4] [i_5] &= (((min(var_15, -18))));

                        for (int i_9 = 0; i_9 < 21;i_9 += 1)
                        {
                            var_34 = (min(var_34, (((((~((var_13 ? 3 : var_14)))) & (1895025817 < 0))))));
                            arr_31 [i_3] [i_3] [i_3] [i_3] [i_3 - 1] [i_3 - 1] = ((~(((!((((arr_14 [i_3 + 2]) ? -8192 : -364420863))))))));
                            var_35 &= (max(0, 199));
                            var_36 = ((((min((arr_12 [i_3]), (min(var_13, var_7))))) * (arr_18 [i_8 - 1] [9] [i_3 + 1] [i_8 - 1])));
                        }
                        for (int i_10 = 0; i_10 < 21;i_10 += 1)
                        {
                            var_37 = ((((((!var_11) || var_1))) & (((((arr_15 [i_3] [i_4] [i_5]) ? var_4 : (arr_30 [i_3] [i_3] [i_3] [i_5] [17] [i_8] [i_10]))) >> ((94 ? 0 : var_13))))));
                            var_38 = (max(var_38, (((((max((arr_20 [i_4] [i_4] [i_4] [i_4]), var_4))) ? (-5651068913233492799 || 0) : -7993324796458055131)))));
                        }
                        for (int i_11 = 3; i_11 < 20;i_11 += 1)
                        {
                            arr_37 [6] [i_4] [6] [i_8] [i_11] = (!-19750);
                            var_39 = (min(var_39, ((!(((-818 ? 11440102394826327876 : var_2)))))));
                            var_40 = ((((190 ? var_7 : 0)) < -var_6));
                            var_41 = (min(var_41, (!161)));
                        }
                    }
                    arr_38 [i_3 + 2] [i_3 + 2] [i_5] [i_5] &= ((!(var_5 * -39)));
                }
                /* vectorizable */
                for (int i_12 = 0; i_12 < 21;i_12 += 1)
                {
                    var_42 = (!var_8);
                    arr_41 [i_12] [i_3] [i_12] [i_3] = (1399795253 % 1399795253);
                }
                var_43 = -20608;
            }
        }
    }
    #pragma endscop
}
