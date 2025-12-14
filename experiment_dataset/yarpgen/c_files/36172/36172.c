/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36172
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_9 [3] [8] [1] &= (((max(var_7, var_3))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_15 *= 43989;
                                var_16 = var_13;
                                var_17 -= (!var_2);
                            }
                        }
                    }
                    var_18 &= -var_8;
                }
            }
        }
        var_19 ^= (min(65535, ((((arr_7 [i_0] [i_0] [i_0] [i_0]) != var_3)))));
    }
    for (int i_5 = 0; i_5 < 13;i_5 += 1)
    {

        for (int i_6 = 2; i_6 < 12;i_6 += 1) /* same iter space */
        {
            var_20 *= arr_14 [i_5];
            arr_18 [i_6 - 1] [i_5] &= ((~(arr_3 [i_6] [20] [i_5])));

            for (int i_7 = 1; i_7 < 12;i_7 += 1)
            {
                var_21 = -7628210965185767999;
                var_22 &= 65535;
            }
            for (int i_8 = 1; i_8 < 10;i_8 += 1)
            {
                var_23 |= (((!var_6) <= 1));
                /* LoopNest 2 */
                for (int i_9 = 2; i_9 < 10;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 13;i_10 += 1)
                    {
                        {
                            var_24 = (max(var_24, (!0)));
                            arr_29 [2] [2] [i_8] [2] [i_10] |= ((((arr_27 [i_8 + 3] [i_8] [i_6 - 1] [i_6 + 1] [2]) ? 1 : 791865559)));
                            var_25 = (min(var_25, ((((max((arr_7 [i_5] [1] [i_9 - 2] [18]), var_8)) % var_4)))));
                        }
                    }
                }
                arr_30 [i_5] |= (~26185);
            }
            for (int i_11 = 1; i_11 < 11;i_11 += 1)
            {
                var_26 *= var_9;
                arr_35 [i_5] [i_5] |= (!-7958);

                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    arr_39 [i_12] [i_6] [i_5] [i_5] |= ((!((min(var_7, ((var_8 ? var_13 : 0)))))));
                    var_27 = (min(var_27, var_6));
                }
                var_28 ^= (arr_25 [i_6] [i_11]);
                var_29 = (min(var_29, (0 % 12119)));
            }
        }
        for (int i_13 = 2; i_13 < 12;i_13 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_14 = 0; i_14 < 13;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 13;i_15 += 1)
                {
                    {
                        arr_48 [i_5] [i_14] [i_13] [i_5] &= var_13;
                        arr_49 [i_5] [i_5] [12] [12] [12] [i_5] |= 26185;
                        var_30 += max(1984, 65535);
                    }
                }
            }
            var_31 -= 73;
        }
        var_32 ^= (((arr_42 [i_5] [i_5] [i_5]) >= 20));

        for (int i_16 = 0; i_16 < 13;i_16 += 1)
        {
            var_33 ^= ((((min((arr_41 [i_16]), 0))) ? (arr_41 [i_16]) : ((max(65535, 1)))));
            arr_53 [i_16] [i_16] |= var_5;
        }
        for (int i_17 = 0; i_17 < 13;i_17 += 1)
        {
            var_34 ^= ((!((max(var_11, (min(26185, 5794)))))));
            var_35 -= (min((arr_47 [i_17] [i_17] [i_17] [i_5]), (arr_47 [i_5] [i_5] [i_5] [i_17])));
        }
        for (int i_18 = 3; i_18 < 12;i_18 += 1)
        {
            var_36 *= 10168;
            var_37 *= 255;
        }
        for (int i_19 = 1; i_19 < 12;i_19 += 1)
        {
            /* LoopNest 2 */
            for (int i_20 = 0; i_20 < 13;i_20 += 1)
            {
                for (int i_21 = 0; i_21 < 1;i_21 += 1)
                {
                    {
                        arr_67 [8] [i_19 - 1] [i_20] [8] [i_21] &= var_0;
                        var_38 |= ((((max(0, (~var_4)))) ? (13539302676382678106 ^ -86) : (((~(arr_25 [i_5] [i_5]))))));
                        var_39 ^= ((((arr_24 [i_19] [i_19 - 1] [i_5]) ? (arr_24 [2] [i_19 + 1] [i_20]) : var_13)));
                    }
                }
            }
            var_40 |= 1;
        }
        /* LoopNest 2 */
        for (int i_22 = 0; i_22 < 13;i_22 += 1)
        {
            for (int i_23 = 2; i_23 < 11;i_23 += 1)
            {
                {
                    var_41 ^= var_8;
                    /* LoopNest 2 */
                    for (int i_24 = 0; i_24 < 13;i_24 += 1)
                    {
                        for (int i_25 = 0; i_25 < 13;i_25 += 1)
                        {
                            {
                                arr_77 [i_23 + 1] [1] [i_24] [i_23 + 1] [0] [0] &= var_11;
                                arr_78 [i_25] [i_24] [i_23 + 1] [i_22] [i_22] [i_5] [i_5] &= (min((min((max((arr_40 [i_5] [i_24] [i_24]), (arr_17 [i_5] [i_5] [i_5]))), (arr_11 [i_5] [i_22] [1] [i_22]))), ((((arr_28 [i_24] [i_24] [i_23 + 1] [i_23] [i_23 + 2]) ? (arr_8 [17] [i_23 + 2] [i_23 + 2] [1]) : (arr_46 [i_23 + 1] [i_23] [i_23 - 1] [i_24]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_42 |= 240;
    var_43 &= var_13;
    var_44 &= 1715235237;
    #pragma endscop
}
