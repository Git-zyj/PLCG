/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209146
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_1] = min(var_7, (!var_2));

                for (int i_2 = 2; i_2 < 22;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        var_15 = (max(var_15, (((((((var_10 && 254) ? 8631704966620420819 : (!var_5)))) - (((~-4998558567676391973) ? 7631062573492056600 : (min(-15, var_1)))))))));
                        arr_10 [22] [i_1] [i_0] = ((2505866891 ? -530 : (min((!1607934299820226062), (min(16902611317789524915, -5))))));

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            arr_13 [i_0] [i_1] [i_2] [i_2 + 3] [14] &= (var_7 ? (var_4 | var_10) : (~var_7));
                            var_16 = var_6;
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            var_17 = (((var_14 + 13365359823744629884) + (((var_14 ? var_3 : var_13)))));
                            var_18 = (!var_14);
                            var_19 = var_5;
                            var_20 = (((!var_11) & (((var_4 + 9223372036854775807) >> (1536 - 1489)))));
                            var_21 = (-((var_6 ? 0 : var_6)));
                        }
                        var_22 = ((~(min((var_10 & var_10), var_8))));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        var_23 = (~var_14);
                        var_24 |= var_4;
                    }
                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {

                        for (int i_8 = 4; i_8 < 24;i_8 += 1)
                        {
                            var_25 = ((((min((-1607934299820226062 > 1563214487050238633), -var_7))) ? (((((min(var_3, 243))) - (2270999218500127502 && var_3)))) : (min((!var_12), (~var_8)))));
                            var_26 = (~((min(808748081, 7159631722590260323))));
                            var_27 ^= ((((min(var_7, (-9223372036854775807 - 1)))) < ((-((159 ? 3386699651886029076 : var_7))))));
                        }
                        var_28 = (max(var_28, (((~(-5181036653390177860 || 295676071725672849))))));
                        var_29 = (max(var_29, (((((min(-24056, (-5320726362080905211 >= 255)))) * 16)))));
                    }
                    /* vectorizable */
                    for (int i_9 = 2; i_9 < 22;i_9 += 1)
                    {
                        var_30 = (max(var_30, (!-var_12)));
                        var_31 = -13;
                        var_32 *= var_7;
                    }
                    var_33 = (max(var_33, (((-(((-3434291015253867202 + 9223372036854775807) >> (var_8 - 357415410404191875))))))));

                    /* vectorizable */
                    for (int i_10 = 3; i_10 < 24;i_10 += 1)
                    {
                        var_34 = (1138157747781171871 / (288230376143323136 % var_11));
                        var_35 ^= var_12;
                        var_36 |= (((!var_10) / var_3));
                    }
                    for (int i_11 = 0; i_11 < 25;i_11 += 1)
                    {
                        var_37 = ((+(min((!8619181047034660646), (var_1 ^ var_5)))));
                        var_38 = (max(var_38, var_10));
                    }
                    var_39 = (min((((!3117172261) | (min(var_3, 4611686018427387904)))), (var_3 != var_2)));
                }
                for (int i_12 = 3; i_12 < 21;i_12 += 1)
                {
                    var_40 |= (min(((((min(-7290846785158712562, 4308294249901227900)) - (min(-9587, 0))))), (min(-15178, (-609499081881294120 || var_0)))));
                    var_41 = (3911384579800122595 >= 281474976710655);
                }
                /* vectorizable */
                for (int i_13 = 0; i_13 < 25;i_13 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 25;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 25;i_15 += 1)
                        {
                            {
                                var_42 = (min(var_42, var_0));
                                var_43 = ((-(!var_3)));
                                var_44 ^= ((-(var_0 == var_0)));
                            }
                        }
                    }
                    arr_49 [i_0] [i_1] [i_13] = (((!144) && (((var_2 ? var_0 : var_10)))));
                    var_45 *= var_4;
                }
            }
        }
    }
    var_46 |= (-(((255 + 21219) ^ var_11)));
    #pragma endscop
}
