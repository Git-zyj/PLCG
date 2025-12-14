/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238767
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, (((-((-(min(928, 8018160105016808679)))))))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_20 = ((!(((-9031851542769237382 ? 1 : ((98 << (var_3 + 7702689633479761757))))))));

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        var_21 = (min((((arr_9 [i_1] [i_2] [i_1]) ? 119 : (arr_2 [i_3]))), (((arr_9 [i_2] [i_2] [i_1]) ? (arr_9 [i_1] [i_1] [i_1]) : var_4))));
                        var_22 = ((((min((arr_9 [i_0] [i_0] [i_1]), ((14240 ? var_11 : var_1))))) && 168));
                        arr_11 [i_1] [i_1] [i_1] [i_1] [i_3] = (arr_1 [i_0] [i_2]);

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_23 *= var_3;
                            var_24 = (((arr_10 [i_1]) ? (arr_10 [i_1]) : (arr_10 [i_1])));
                            var_25 = (((arr_8 [i_1] [i_2]) * 74));
                            var_26 = ((~(arr_13 [i_0] [i_1] [i_1] [i_3])));
                            arr_14 [i_0] [i_0] [i_1] [i_3] [i_4] = ((((arr_4 [i_0] [i_1] [i_1]) ? var_16 : var_11)));
                        }
                    }
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        var_27 = (min(var_27, ((((-(arr_15 [i_0] [i_0] [i_1] [i_2] [i_5])))))));
                        var_28 = ((!((((arr_3 [i_0] [i_2] [i_0]) - 1)))));
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            {
                                var_29 = (arr_10 [i_1]);
                                var_30 = ((((((arr_20 [i_0] [i_1] [i_2] [i_2] [i_6] [i_1]) | (var_14 <= var_7)))) || var_1));
                            }
                        }
                    }
                }
            }
        }
        var_31 &= (((78 << (((arr_19 [i_0] [i_0] [16] [i_0] [i_0] [i_0]) - 359019905299760172)))) << (((min(83, (arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) - 63)));
    }
    for (int i_8 = 0; i_8 < 16;i_8 += 1)
    {
        arr_23 [i_8] = var_6;
        var_32 &= var_7;
        arr_24 [i_8] = (arr_5 [i_8] [i_8]);
    }
    for (int i_9 = 0; i_9 < 23;i_9 += 1)
    {
        arr_27 [i_9] = ((var_6 ? (arr_26 [i_9]) : ((~(min(1335689544, 5244))))));
        var_33 = var_15;
        var_34 = (((((var_5 ? (arr_26 [i_9]) : 1))) ? (arr_26 [i_9]) : (min(((((arr_25 [i_9] [i_9]) || var_14))), (((arr_26 [3]) ^ var_10))))));
    }

    for (int i_10 = 0; i_10 < 12;i_10 += 1) /* same iter space */
    {
        var_35 = (min(((((-9031851542769237382 ? 1 : 1)))), ((((min(var_8, var_12))) + (max((arr_29 [i_10]), var_10))))));
        var_36 = ((((max(-24823, (arr_22 [i_10] [4])))) ? (arr_19 [1] [i_10] [i_10] [i_10] [i_10] [1]) : (min(5244, ((0 << (7359 - 7332)))))));
        var_37 -= 95;
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 12;i_11 += 1) /* same iter space */
    {
        var_38 = 9031851542769237366;
        var_39 = ((72 || (arr_3 [i_11] [i_11] [i_11])));
        var_40 = (arr_17 [i_11] [i_11] [i_11]);
        var_41 = ((((((arr_12 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11]) ? var_5 : 1))) / (arr_0 [i_11] [i_11])));
    }
    for (int i_12 = 0; i_12 < 0;i_12 += 1)
    {
        var_42 = -28;
        var_43 = -8801;
    }
    for (int i_13 = 4; i_13 < 14;i_13 += 1)
    {
        var_44 = var_1;
        var_45 = ((-28 ? 1 : (arr_16 [i_13 - 2])));
        var_46 = (min(var_46, (min(((~(min(var_1, (arr_10 [18]))))), 114))));
        arr_38 [i_13] [i_13] |= max((((arr_1 [i_13 - 3] [i_13 - 1]) * -11526)), (min(((max(5256, var_4))), (((arr_1 [i_13] [i_13]) ? -6950 : (arr_4 [i_13] [2] [i_13 - 2]))))));
    }
    #pragma endscop
}
