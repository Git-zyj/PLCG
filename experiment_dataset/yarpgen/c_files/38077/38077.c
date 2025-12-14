/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38077
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_19 = (max(var_19, (((~(!var_1))))));
                    var_20 = var_6;
                }
            }
        }
        var_21 ^= ((-22935 ? 10602669882188438077 : -22935));
        var_22 += (max(-22939, (max((var_14 || 25449), -22935))));
        arr_7 [i_0] = var_8;
    }
    for (int i_3 = 0; i_3 < 21;i_3 += 1) /* same iter space */
    {
        var_23 = (max(var_23, (arr_6 [i_3] [i_3] [i_3] [i_3])));
        var_24 ^= -22931;
    }
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
        {
            var_25 = (1292543520 & 22935);
            var_26 = (~var_15);
        }
        for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
        {
            var_27 = (max(var_27, ((max(var_12, 3002423776)))));
            var_28 = (1 ? (min(0, (var_3 - -25382))) : (max((25394 ^ var_16), -9163767232925739129)));
        }
        for (int i_7 = 0; i_7 < 21;i_7 += 1) /* same iter space */
        {
            arr_21 [i_4] [5] [i_4] = ((~-25378) ? (arr_1 [i_4]) : var_10);
            var_29 ^= min(var_17, (arr_12 [i_4] [i_7]));
            var_30 = (max(var_2, ((max((arr_2 [i_4]), var_16)))));
            var_31 = (!((!(!var_4))));
        }
        arr_22 [i_4] [i_4] = (min(var_17, (((var_16 & 3002423755) ? (var_1 ^ 22935) : (max((arr_14 [i_4] [i_4]), var_9))))));
        var_32 ^= (max((arr_3 [i_4] [i_4]), 22958));
    }
    for (int i_8 = 0; i_8 < 18;i_8 += 1)
    {
        arr_27 [i_8] = ((-(((!((min(var_14, 25394))))))));

        for (int i_9 = 4; i_9 < 15;i_9 += 1)
        {
            arr_31 [i_8] = ((max(var_13, var_14)));
            var_33 += var_4;
            var_34 = (max(var_34, ((((((12789 & -8162414334369997572) << (12280814869029149265 - 12280814869029149228))) + (arr_0 [3]))))));
        }
        for (int i_10 = 1; i_10 < 16;i_10 += 1)
        {
            /* LoopNest 3 */
            for (int i_11 = 0; i_11 < 18;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 18;i_13 += 1)
                    {
                        {
                            var_35 = (((((arr_24 [i_10 + 2] [i_10 - 1]) ? (arr_24 [i_10 + 2] [i_10 - 1]) : -2079648638446075846)) == ((9223372036854775807 ? (arr_24 [i_10 + 2] [i_10 - 1]) : (arr_24 [i_10 + 2] [i_10 - 1])))));
                            arr_43 [i_8] [i_10] [i_11] [i_12] [i_13] = (max(var_3, (((~(arr_40 [i_10 - 1] [i_10 + 2] [i_10] [i_10] [i_10 + 2]))))));
                            var_36 = (max(var_36, ((-(max((((arr_8 [i_11]) ? var_17 : (arr_37 [i_10 + 1] [12] [0]))), (1 * 0)))))));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_14 = 0; i_14 < 18;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 1;i_15 += 1)
                {
                    {
                        var_37 = (min(var_37, (((((!(((~(arr_5 [i_8] [i_10 + 1] [i_14] [i_14])))))) ? (((!(((var_11 ? -25394 : var_12)))))) : 21516)))));
                        arr_50 [i_8] [i_10] [i_10 - 1] = (((arr_46 [i_8] [9] [9]) % 1));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_16 = 0; i_16 < 18;i_16 += 1)
            {
                for (int i_17 = 2; i_17 < 15;i_17 += 1)
                {
                    {

                        for (int i_18 = 0; i_18 < 18;i_18 += 1)
                        {
                            arr_59 [i_18] [i_17] [i_16] [i_18] [i_10] [3] [i_8] = ((var_12 ? (((((arr_51 [i_8] [i_10 - 1] [i_8]) >= var_4)))) : (((((25449 ? 22958 : -25384))) ? var_11 : (~var_15)))));
                            var_38 = (max(var_38, ((max((~var_18), (max((arr_11 [i_17 + 1]), var_10)))))));
                        }
                        var_39 = (max(var_39, ((((arr_40 [11] [i_10 - 1] [i_10 + 1] [i_17 + 2] [i_17]) ? -2281162881470160970 : var_4)))));
                        var_40 = (min(var_40, (((32767 ? var_3 : (arr_49 [i_8] [i_8] [i_8]))))));
                    }
                }
            }
        }
        var_41 = (25369 + var_13);
    }
    /* LoopNest 2 */
    for (int i_19 = 1; i_19 < 13;i_19 += 1)
    {
        for (int i_20 = 0; i_20 < 15;i_20 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_21 = 0; i_21 < 15;i_21 += 1)
                {
                    for (int i_22 = 0; i_22 < 15;i_22 += 1)
                    {
                        {
                            arr_72 [i_19] = ((var_15 >> (((arr_63 [i_19] [8] [i_22]) ? (arr_44 [i_22] [i_20] [i_19]) : var_6))));
                            arr_73 [i_22] [i_22] [14] [i_22] [i_22] = (((((~(~var_15)))) * (((-(arr_11 [i_22]))))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_23 = 4; i_23 < 13;i_23 += 1)
                {
                    for (int i_24 = 2; i_24 < 12;i_24 += 1)
                    {
                        for (int i_25 = 0; i_25 < 1;i_25 += 1)
                        {
                            {
                                var_42 = var_1;
                                var_43 = (((3575188563 ? (((var_14 ? 1 : 22934))) : (arr_12 [i_19 + 2] [i_24 + 3]))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
