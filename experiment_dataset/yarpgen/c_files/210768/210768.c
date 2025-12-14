/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210768
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_5;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        {
                            var_11 = 254;
                            var_12 = ((arr_7 [i_1] [i_1] [i_1] [i_1]) ? (arr_7 [i_1] [i_1] [i_3] [i_3]) : (arr_7 [i_1] [i_1] [i_2] [i_3]));
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_0] |= (var_7 <= -1159200389);
                            arr_14 [i_4] [i_1] [i_1] [i_1] [i_0] = (arr_10 [i_0] [i_1] [i_1] [i_1] [i_4]);
                        }
                    }
                }
            }
            arr_15 [i_1] = -110;
            arr_16 [i_1] = (~(89 % -90));
        }
        for (int i_5 = 3; i_5 < 16;i_5 += 1)
        {
            arr_20 [i_5] [i_5 + 2] = -87;
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 0;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 16;i_7 += 1)
                {
                    {
                        arr_27 [i_7] [i_5] [i_6] [i_6] [i_7 + 3] &= ((var_7 ? (arr_1 [i_5 - 1]) : 15605067795350388012));
                        var_13 |= (arr_5 [i_0] [i_5] [i_6 + 1] [i_7]);
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_8 = 3; i_8 < 17;i_8 += 1)
            {
                for (int i_9 = 4; i_9 < 18;i_9 += 1)
                {
                    {
                        arr_33 [i_5] = (((arr_11 [i_0] [i_5 + 2] [i_9 - 2]) <= var_2));
                        var_14 = ((~(arr_29 [i_0] [i_5 - 2] [i_8] [i_9])));
                        var_15 = (max(var_15, (((-((90 ? -87 : var_6)))))));
                        arr_34 [i_0] [i_0] [5] [i_5] = ((-(arr_3 [i_0] [i_8 - 3] [i_8])));
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 19;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        {
                            var_16 -= ((~-77) ? (~-110) : ((58 ? -72 : -90)));
                            var_17 = (((arr_40 [i_0] [i_5 - 1] [i_5 - 1] [i_5 + 3] [1]) ? (arr_40 [i_0] [i_5] [i_10] [i_5 + 1] [i_12]) : var_0));
                            var_18 += (~var_7);
                        }
                    }
                }
            }
        }

        for (int i_13 = 0; i_13 < 19;i_13 += 1)
        {
            arr_46 [i_0] = (((arr_7 [i_0] [i_0] [i_13] [i_13]) <= ((var_5 ? var_1 : var_6))));
            var_19 = ((-5 ? (arr_2 [i_0] [i_13]) : ((~(arr_28 [i_0])))));
            /* LoopNest 2 */
            for (int i_14 = 2; i_14 < 16;i_14 += 1)
            {
                for (int i_15 = 2; i_15 < 17;i_15 += 1)
                {
                    {

                        for (int i_16 = 2; i_16 < 17;i_16 += 1)
                        {
                            var_20 *= (arr_23 [i_0] [i_16]);
                            arr_55 [i_15] [i_13] [i_14] [i_16 + 2] = (arr_7 [i_15] [i_13] [i_14 - 1] [i_15]);
                            arr_56 [i_0] [i_13] [i_0] [i_14 + 1] [i_13] [i_16 + 2] |= 1;
                            var_21 = ((0 ? -90 : 872073122));
                        }
                        var_22 = 1;
                    }
                }
            }
        }
        for (int i_17 = 0; i_17 < 19;i_17 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_18 = 0; i_18 < 19;i_18 += 1)
            {
                for (int i_19 = 4; i_19 < 18;i_19 += 1)
                {
                    {
                        var_23 = 67108863;
                        var_24 = (((arr_63 [i_17] [i_19 - 4] [i_19] [i_19]) ? (arr_63 [i_17] [i_19 - 3] [i_19] [i_19 - 2]) : (arr_29 [i_18] [i_19 - 4] [i_19] [i_19])));
                    }
                }
            }
            arr_64 [i_0] [i_17] = (arr_38 [i_0] [i_0] [i_0] [i_17]);
            arr_65 [i_0] [i_0] = ((var_0 ? (arr_61 [12] [i_17]) : (arr_48 [i_0] [i_0] [i_17])));
        }
        for (int i_20 = 0; i_20 < 19;i_20 += 1) /* same iter space */
        {
            var_25 |= ((var_8 ? (arr_8 [i_0] [i_20]) : (arr_61 [i_0] [i_0])));
            var_26 = (arr_24 [i_0] [i_0] [1] [i_20]);
        }
        for (int i_21 = 0; i_21 < 19;i_21 += 1) /* same iter space */
        {
            var_27 *= (21315 % 4227858432);
            var_28 = (var_2 != var_9);
            arr_72 [i_0] [i_21] [i_21] = var_6;
        }
    }
    for (int i_22 = 0; i_22 < 1;i_22 += 1) /* same iter space */
    {
        arr_75 [i_22] = (~127);
        var_29 = -0;
        var_30 = (((((~(arr_71 [i_22] [i_22] [i_22])))) <= (min((min(var_6, -51)), (((~(arr_57 [i_22]))))))));
    }
    /* vectorizable */
    for (int i_23 = 0; i_23 < 1;i_23 += 1) /* same iter space */
    {
        arr_79 [i_23] = ((~(arr_2 [i_23] [i_23])));
        var_31 = ((!(arr_41 [i_23] [i_23] [i_23] [i_23] [i_23] [i_23])));
        arr_80 [i_23] [i_23] |= (arr_77 [i_23]);
    }
    for (int i_24 = 0; i_24 < 1;i_24 += 1) /* same iter space */
    {
        arr_84 [i_24] [i_24] = var_6;
        arr_85 [i_24] = ((1 ? (-127 - 1) : -217640454441585905));
    }
    #pragma endscop
}
