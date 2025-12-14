/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240038
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_10 ^= (!39419);
                var_11 = arr_1 [i_1] [6];
                var_12 = (arr_4 [3] [i_1]);
            }
        }
    }
    var_13 = (min(var_13, -109));

    /* vectorizable */
    for (int i_2 = 0; i_2 < 14;i_2 += 1) /* same iter space */
    {
        var_14 = (max(var_14, (arr_7 [i_2])));
        var_15 = 9034389727758251546;

        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            var_16 = ((!(arr_9 [9] [3])));
            var_17 = var_9;
        }
        for (int i_4 = 1; i_4 < 10;i_4 += 1)
        {
            arr_15 [8] [i_2] = (-1611021297 || 26117);
            arr_16 [13] = ((~(arr_14 [i_2] [i_2])));
            var_18 = (~3436734347);
            var_19 = (max(var_19, (39418 > 1593193278)));
            arr_17 [i_2] [i_2] [i_4] = (arr_13 [i_4 + 3] [i_4 + 3] [i_4]);
        }
    }
    for (int i_5 = 0; i_5 < 14;i_5 += 1) /* same iter space */
    {
        var_20 = ((-((-(arr_14 [i_5] [i_5])))));
        var_21 = max(((max(((((arr_8 [7]) && 1111))), (min(940221793, -5371))))), (arr_7 [i_5]));
        arr_21 [3] = (max((arr_12 [6] [i_5] [i_5]), (arr_18 [i_5])));
    }
    for (int i_6 = 0; i_6 < 14;i_6 += 1) /* same iter space */
    {
        var_22 *= (arr_12 [i_6] [i_6] [i_6]);
        var_23 = ((~((39419 ? 1655625044 : var_5))));
        /* LoopNest 3 */
        for (int i_7 = 2; i_7 < 13;i_7 += 1)
        {
            for (int i_8 = 3; i_8 < 13;i_8 += 1)
            {
                for (int i_9 = 2; i_9 < 13;i_9 += 1)
                {
                    {
                        var_24 = 281474976710655;
                        arr_32 [i_6] [i_8] = (max((16320 < 22784), (!39411)));
                        var_25 = (min(var_25, (((-3 < ((127 ? ((max(-953, 1574606018))) : 15740723765608160292)))))));
                        var_26 = (((((min(49216, (arr_25 [i_6] [i_8 + 1] [i_7 - 1]))))) * (((((arr_28 [8] [8]) * 1611021282)) << (((max(0, 3840)) - 3815))))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 14;i_10 += 1)
        {
            for (int i_11 = 3; i_11 < 13;i_11 += 1)
            {
                {
                    var_27 = 181;
                    var_28 ^= ((!((min((0 < -1611021282), (min(var_8, (arr_10 [13] [i_10]))))))));

                    for (int i_12 = 0; i_12 < 14;i_12 += 1)
                    {
                        arr_43 [i_6] = (min((~508320546), (arr_23 [8] [i_10])));
                        var_29 = 5151640249976783317;
                    }
                    var_30 = (!969921198);
                    /* LoopNest 2 */
                    for (int i_13 = 1; i_13 < 13;i_13 += 1)
                    {
                        for (int i_14 = 2; i_14 < 11;i_14 += 1)
                        {
                            {
                                var_31 ^= (max(((~(arr_41 [i_11 - 1] [i_13 - 1] [i_14] [i_13 + 1]))), (min((arr_41 [i_11 + 1] [i_13 - 1] [i_10] [i_13]), -114894140))));
                                var_32 = 2312944260;
                                var_33 = var_6;
                                var_34 *= ((1167596994 ? (((20685 ? 16320 : (min((arr_45 [i_6] [10] [i_11 - 2] [i_13]), 44851))))) : ((-1220735711 ? var_0 : 18446744073709551615))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_15 = 2; i_15 < 16;i_15 += 1)
    {
        var_35 = (max(var_35, -64));
        var_36 ^= (arr_49 [i_15 - 2]);
        var_37 = (((arr_50 [i_15] [i_15 - 1]) || var_5));
    }
    /* LoopNest 2 */
    for (int i_16 = 2; i_16 < 24;i_16 += 1)
    {
        for (int i_17 = 0; i_17 < 25;i_17 += 1)
        {
            {
                var_38 = ((+(min((arr_56 [i_17]), (arr_55 [i_16])))));
                /* LoopNest 3 */
                for (int i_18 = 1; i_18 < 23;i_18 += 1)
                {
                    for (int i_19 = 1; i_19 < 22;i_19 += 1)
                    {
                        for (int i_20 = 1; i_20 < 21;i_20 += 1)
                        {
                            {
                                var_39 = (16322 ^ 2009242904);
                                var_40 = 8423;
                            }
                        }
                    }
                }
                var_41 = (max(var_41, (arr_62 [i_16] [i_17] [i_17] [i_17])));
                var_42 = (min(var_42, -95));
            }
        }
    }
    var_43 = (min(-114894117, ((((min(var_5, var_4)) >= (max(0, 1048575)))))));
    #pragma endscop
}
