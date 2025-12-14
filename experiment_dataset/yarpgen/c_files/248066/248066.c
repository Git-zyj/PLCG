/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248066
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += ((((min(var_2, var_5)) & (min(9223372036854775798, -2407457973857026777)))));
    var_16 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_17 = (~(arr_3 [i_0] [i_1]));
                var_18 = var_6;
                var_19 = (min(var_19, (arr_3 [i_0] [i_0])));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                {

                    for (int i_5 = 2; i_5 < 17;i_5 += 1) /* same iter space */
                    {
                        arr_12 [i_2] [i_2] [i_4] [i_5 + 1] [i_2] = ((arr_11 [i_2] [i_2] [i_3] [17] [i_5 - 2] [17]) ? ((~(arr_7 [i_5]))) : (arr_7 [i_3]));

                        for (int i_6 = 3; i_6 < 19;i_6 += 1)
                        {
                            arr_15 [i_2] [i_5] [i_6] = ((-(((!(arr_10 [i_6 - 2] [i_6 - 2] [i_6] [i_6 - 2] [i_6]))))));
                            var_20 = (min(var_20, (arr_13 [i_4] [i_3] [i_5] [i_2] [i_6 - 3] [i_2])));
                        }
                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            var_21 = arr_9 [i_2] [i_2] [i_2] [i_2];
                            var_22 = (min(var_22, var_4));
                            var_23 |= (~var_12);
                            var_24 = (min(var_24, 9223372036854775797));
                        }
                    }
                    for (int i_8 = 2; i_8 < 17;i_8 += 1) /* same iter space */
                    {
                        arr_23 [i_8 + 3] [i_8] [i_8] [7] = (((((~(arr_4 [i_2]))) ? (arr_18 [i_8 + 1] [i_8] [i_8 - 1] [i_8 + 2] [i_8 + 1] [i_8 + 1] [i_4]) : (arr_17 [i_4] [i_8]))));

                        for (int i_9 = 1; i_9 < 18;i_9 += 1)
                        {
                            var_25 = (+(((arr_16 [i_3] [i_2] [i_9 + 2] [i_8 - 2] [i_9]) ? var_9 : (~var_8))));
                            var_26 = (~-9223372036854775807);
                            arr_27 [9] [i_3] [i_3] [i_3] [i_3] = min((((arr_6 [i_2]) ? (arr_18 [i_8 - 1] [i_3] [i_3] [i_8] [i_9 + 1] [i_2] [i_4]) : 21)), ((((((arr_26 [i_2] [i_3] [i_4] [i_9 + 1]) ? 2 : (arr_9 [i_2] [i_3] [i_4] [i_8])))) ? var_8 : (max((arr_10 [i_8 - 2] [i_8 - 2] [i_4] [i_8 - 2] [i_9 + 2]), -164431661161213454)))));
                            var_27 |= arr_20 [i_2] [i_3] [i_3] [i_3] [i_3];
                        }
                        for (int i_10 = 0; i_10 < 20;i_10 += 1)
                        {
                            arr_32 [i_10] [i_8] [i_4] [i_3] [i_2] = (~(arr_17 [i_8 - 1] [i_8 + 1]));
                            arr_33 [i_2] [i_3] [8] [i_2] [i_3] = 0;
                            var_28 = arr_25 [i_2] [i_2] [i_2];
                            arr_34 [i_8] [i_8 + 2] [i_8] [i_8 - 1] = var_3;
                        }
                        for (int i_11 = 0; i_11 < 20;i_11 += 1)
                        {
                            var_29 = (max(var_29, ((max(-var_3, (arr_16 [i_8 + 3] [i_8 + 3] [i_4] [i_4] [i_3]))))));
                            var_30 = var_4;
                            arr_37 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = (-((-(arr_25 [i_8 - 2] [i_8 + 3] [i_8 - 1]))));
                            arr_38 [i_2] [8] = min(var_7, (((~(arr_21 [i_2])))));
                        }
                        var_31 += var_4;
                        arr_39 [i_2] [i_2] [i_2] = (-((+(min((arr_18 [i_2] [i_2] [i_4] [i_4] [i_4] [i_4] [i_8]), var_2)))));
                    }
                    for (int i_12 = 0; i_12 < 20;i_12 += 1)
                    {
                        var_32 = ((-(((!(arr_24 [i_2] [i_2] [i_2] [i_2] [i_2]))))));
                        var_33 = 4503599627370496;
                    }
                    var_34 = (+(min((arr_29 [i_3] [i_2] [i_2] [i_2]), ((var_1 ? (arr_5 [i_4] [i_3]) : (arr_35 [i_2] [9] [9]))))));
                    arr_42 [i_2] [i_2] [i_2] = (((max((arr_16 [i_2] [i_2] [i_3] [i_4] [i_3]), var_0))) ? (~var_8) : (arr_25 [i_2] [i_2] [i_4]));
                    arr_43 [i_4] = (-(((arr_31 [i_4] [i_4] [i_3] [i_2] [i_2]) ? (arr_31 [i_2] [i_2] [i_2] [i_2] [i_2]) : (arr_17 [i_3] [i_4]))));

                    for (int i_13 = 3; i_13 < 18;i_13 += 1)
                    {
                        arr_46 [i_2] = (-(arr_6 [i_2]));
                        var_35 = (min(var_35, ((2080963908577343932 * (!var_11)))));
                        var_36 = (~(((arr_11 [i_2] [i_3] [i_4] [i_13] [i_13 + 2] [i_13 + 2]) ? (arr_11 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]) : (arr_11 [i_2] [i_2] [i_3] [i_4] [i_4] [i_13 - 3]))));
                    }
                    /* vectorizable */
                    for (int i_14 = 0; i_14 < 20;i_14 += 1)
                    {
                        var_37 = 8027948630635990262;
                        var_38 ^= (arr_25 [i_2] [i_3] [i_4]);
                        var_39 = var_11;
                    }
                }
            }
        }
    }
    var_40 |= 23655021513023232;
    #pragma endscop
}
