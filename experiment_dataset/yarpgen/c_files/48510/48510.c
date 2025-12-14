/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48510
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += var_14;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_19 += (arr_7 [i_2]);
                    var_20 = (7 ? 58 : -64);
                }
            }
        }
    }
    var_21 = (min(var_21, ((1 ? ((((!(((1 ? 8413051295856809424 : 8601845646112972749))))))) : var_5))));

    /* vectorizable */
    for (int i_3 = 2; i_3 < 15;i_3 += 1) /* same iter space */
    {
        var_22 = (min(var_22, (arr_10 [i_3 - 1])));
        var_23 = arr_9 [i_3];
        var_24 |= (arr_11 [i_3 - 2] [i_3 + 1]);
    }
    for (int i_4 = 2; i_4 < 15;i_4 += 1) /* same iter space */
    {
        var_25 += ((var_7 ? (arr_14 [i_4 - 1]) : (arr_10 [i_4 - 1])));
        var_26 = (min(var_26, (((~(arr_13 [i_4]))))));
    }
    for (int i_5 = 2; i_5 < 15;i_5 += 1) /* same iter space */
    {
        var_27 += (max(((((arr_15 [i_5 - 1]) ? 8413051295856809443 : (arr_15 [i_5 - 2])))), var_5));
        var_28 ^= (((1 ? 10575 : (arr_10 [i_5]))));
        var_29 = (min(var_29, 0));
        arr_17 [14] |= (((~(arr_16 [i_5 - 1]))));
    }
    for (int i_6 = 2; i_6 < 15;i_6 += 1) /* same iter space */
    {
        var_30 = (max(var_30, (arr_13 [i_6])));
        var_31 = (max(var_31, ((-1119957232 ? 5183972833297006414 : 22954))));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 16;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 1;i_8 += 1)
            {
                {
                    arr_24 [14] [14] [1] [14] |= ((((((arr_16 [i_8 - 1]) ? (arr_16 [i_8 - 1]) : (arr_16 [i_8 - 1])))) ? (arr_16 [i_8 - 1]) : (arr_16 [i_8 - 1])));

                    /* vectorizable */
                    for (int i_9 = 2; i_9 < 15;i_9 += 1)
                    {
                        var_32 ^= ((94 && (((-470613446 ? 23224 : (arr_22 [i_9] [i_7] [i_9]))))));
                        var_33 = (min(var_33, ((var_4 ? (arr_18 [i_9 - 1]) : (arr_18 [i_9 - 1])))));

                        for (int i_10 = 0; i_10 < 16;i_10 += 1) /* same iter space */
                        {
                            var_34 = (max(var_34, 1));
                            var_35 ^= (arr_19 [i_6] [i_6 - 2]);
                            var_36 ^= (((~var_16) ? (((14429 <= (arr_9 [i_8])))) : 15669));
                        }
                        for (int i_11 = 0; i_11 < 16;i_11 += 1) /* same iter space */
                        {
                            var_37 &= ((-55 >> ((((var_0 ? -58 : var_13)) + 99))));
                            var_38 *= ((!(arr_18 [i_6 - 1])));
                            var_39 = (max(var_39, var_15));
                            var_40 = (min(var_40, (arr_32 [i_7] [i_8 - 1] [i_8 - 1] [i_11])));
                        }
                        for (int i_12 = 0; i_12 < 1;i_12 += 1)
                        {
                            var_41 = (min(var_41, (((((((arr_22 [i_6] [i_6] [i_9]) ? -22196 : var_1))) ? 23239 : (arr_33 [14] [14] [14] [i_8 - 1] [i_8] [i_8 - 1]))))));
                            var_42 -= -102;
                        }
                        var_43 = (max(var_43, -79));
                    }
                    for (int i_13 = 0; i_13 < 16;i_13 += 1) /* same iter space */
                    {
                        var_44 += var_0;
                        var_45 = (max(var_45, (((-((min((arr_20 [i_6] [i_6] [i_6]), (arr_20 [i_6] [i_6] [1])))))))));
                        var_46 = (max(var_46, (((((((((-2020968399560623391 ? 1 : (arr_11 [i_7] [i_6])))) - ((58 ? 0 : (arr_36 [i_6] [i_6] [i_6] [12] [i_6] [10])))))) ? (((arr_13 [i_6 - 1]) ? (arr_14 [i_6 - 1]) : (arr_13 [i_6 - 1]))) : -13220)))));
                    }
                    for (int i_14 = 0; i_14 < 16;i_14 += 1) /* same iter space */
                    {
                        var_47 = (max(var_47, (((max((arr_28 [i_6] [6] [i_6] [i_6 - 1] [i_8] [i_8]), (arr_26 [i_6] [i_6] [14] [i_6 - 2])))))));
                        arr_40 [4] [i_14] [8] [4] [i_14] [i_14] |= (((arr_30 [i_7] [1]) >= (((arr_35 [3] [i_6 - 1] [i_6 - 1] [i_8 - 1]) ? (arr_26 [i_8 - 1] [i_6 - 2] [i_6] [i_6]) : (arr_27 [i_6 + 1] [13] [9] [1])))));
                        var_48 = (max(var_48, (arr_14 [1])));
                    }
                    var_49 *= (arr_30 [i_6 + 1] [i_6 - 2]);
                }
            }
        }
        var_50 = (max(var_50, 1472));
    }
    #pragma endscop
}
