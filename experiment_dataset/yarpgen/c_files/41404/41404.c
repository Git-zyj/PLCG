/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41404
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += 0;

    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = var_10;
        var_17 = 2400;

        for (int i_1 = 3; i_1 < 16;i_1 += 1) /* same iter space */
        {

            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                arr_9 [i_1] = var_10;
                var_18 = (~40);
                arr_10 [i_0] [i_0] [i_1] [i_0] = max((-729592310 & -61), 2875378226);
                var_19 = ((min(0, var_11)));
            }
            arr_11 [i_0] [i_1] = 10430;
            var_20 = (max(var_20, ((min(1, 3974826019)))));
            var_21 = (max(var_21, (arr_6 [i_0] [i_0] [i_0])));
        }
        for (int i_3 = 3; i_3 < 16;i_3 += 1) /* same iter space */
        {
            var_22 = 7049443392359267721;
            var_23 = ((1 ? ((((((var_15 ? var_1 : (arr_4 [i_0] [i_3])))) ? 1 : ((((arr_13 [i_3]) < 729592309)))))) : (max((arr_5 [i_3] [i_3] [i_3]), ((((arr_1 [i_0]) < (arr_4 [i_3] [i_0]))))))));
            arr_14 [i_3] [i_3] [i_3] = (max(((max((1 < var_3), (var_3 < var_10)))), 25081));
            var_24 = min((min(-var_12, var_12)), var_9);
        }
        for (int i_4 = 3; i_4 < 16;i_4 += 1) /* same iter space */
        {
            var_25 = (((((-65531 ? (~1) : (((192 < (arr_8 [i_0] [i_0]))))))) ? ((((127 ? 25420 : 1)))) : (~-1)));
            var_26 = (max(var_26, (((7750 ? ((((arr_17 [i_0] [i_4 - 2]) < -46))) : (arr_16 [i_0] [i_4 + 2] [i_4 + 2]))))));
            var_27 = ((((arr_7 [i_4 + 2] [i_4 + 2] [i_4]) ? (arr_7 [i_4 - 1] [i_0] [i_4]) : (arr_7 [i_4 - 3] [i_4] [i_4]))));
        }
    }
    for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
    {
        arr_22 [i_5] = (min(((min(((((arr_16 [i_5] [i_5] [i_5]) < var_15))), 111))), var_3));
        var_28 = min(1, 8361);
        arr_23 [i_5] [i_5] = 192;

        /* vectorizable */
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            arr_27 [i_6] [i_6] = ((-(arr_25 [i_5] [i_6] [i_5])));
            var_29 *= (arr_0 [i_6] [i_5]);
        }
        var_30 = (min(var_30, (((((((231 ? var_9 : var_1))) ? var_0 : var_8))))));
    }
    var_31 = ((var_13 ? ((((var_10 ? var_10 : var_12)))) : -96));
    /* LoopNest 3 */
    for (int i_7 = 2; i_7 < 22;i_7 += 1)
    {
        for (int i_8 = 2; i_8 < 22;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 24;i_9 += 1)
            {
                {
                    var_32 = (min(var_32, 44));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 24;i_10 += 1)
                    {
                        for (int i_11 = 2; i_11 < 22;i_11 += 1)
                        {
                            {
                                var_33 |= (min((min(47, ((~(arr_35 [i_7] [i_8]))))), (min(var_4, 250))));
                                var_34 = (min(var_34, -729592320));
                            }
                        }
                    }
                }
            }
        }
    }
    var_35 = -18695;
    #pragma endscop
}
