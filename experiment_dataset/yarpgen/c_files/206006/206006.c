/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206006
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {
                    var_17 -= (((arr_7 [i_2 - 2] [i_1] [i_2]) % (1 << 1)));
                    arr_11 [i_2] = (min((arr_0 [i_2 + 1]), (arr_2 [i_1])));
                    var_18 -= (max(5355539905272766509, 0));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        arr_16 [3] = 0;
        arr_17 [i_3] = (arr_6 [i_3] [i_3] [i_3]);
        var_19 = 15193719500228478730;
    }
    for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
    {
        arr_20 [i_4] [i_4] |= (max(((((3202546505 || 3202546505) % ((max(1, 1)))))), var_4));

        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            arr_25 [6] [i_4] [i_5] |= (arr_10 [i_4] [i_4] [i_4] [i_4]);
            var_20 = (40798 << 0);
        }
        for (int i_6 = 3; i_6 < 9;i_6 += 1)
        {

            /* vectorizable */
            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {
                arr_34 [5] [i_6] [i_6] = ((1 ? 1 : 24));
                var_21 = ((((arr_31 [i_4] [i_6] [9]) >> 0)));
                var_22 += (arr_3 [i_4]);
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 10;i_9 += 1)
                    {
                        {
                            var_23 -= var_16;
                            var_24 = ((!1) ? -2085348313259365193 : 65535);
                            var_25 = ((~(arr_14 [i_6 - 1])));
                        }
                    }
                }
            }

            /* vectorizable */
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                var_26 = 1;
                /* LoopNest 2 */
                for (int i_11 = 4; i_11 < 9;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        {
                            var_27 ^= (arr_28 [i_6] [i_6 + 1]);
                            var_28 = ((1 & var_7) | (~21));
                            arr_47 [i_6] [i_6] = ((1 % (~24)));
                            var_29 = (arr_22 [i_6 - 3] [i_6 - 3]);
                        }
                    }
                }
                var_30 = ((var_1 % (((var_12 || (arr_6 [i_4] [i_4] [i_10]))))));
                var_31 = ((var_13 | (arr_33 [i_4] [i_4] [i_6 + 1] [i_6])));
                var_32 -= -var_6;
            }
        }
        for (int i_13 = 0; i_13 < 10;i_13 += 1)
        {
            var_33 ^= var_5;
            var_34 |= (arr_18 [i_4]);
            var_35 ^= (min((arr_23 [i_4] [i_4] [1]), var_5));
            var_36 = ((0 ? 51 : -5355539905272766510));
        }
        var_37 += (arr_24 [i_4]);
    }
    for (int i_14 = 0; i_14 < 10;i_14 += 1) /* same iter space */
    {
        arr_53 [i_14] = (max(1, 16822946699065749293));
        var_38 = (arr_45 [2] [i_14] [i_14] [i_14] [i_14] [2]);
    }
    for (int i_15 = 1; i_15 < 22;i_15 += 1)
    {
        var_39 &= (arr_55 [i_15 + 2]);
        arr_56 [i_15] = -0;

        for (int i_16 = 2; i_16 < 23;i_16 += 1)
        {
            arr_61 [i_16] [i_16] [i_15] = (((((1 ? (1 >> 1) : 0))) ? -0 : (0 + 65520)));

            for (int i_17 = 1; i_17 < 22;i_17 += 1)
            {
                var_40 *= var_11;
                var_41 = var_4;
                arr_66 [i_15 + 2] [1] [i_17] |= 0;
                arr_67 [i_15] [i_17 + 2] = (max((arr_55 [i_15]), var_7));
                var_42 = (((min(((0 << (((arr_54 [i_16]) - 235)))), (((!(arr_55 [17])))))) >> (((arr_58 [i_15 + 1]) * (arr_58 [i_15 - 1])))));
            }
            for (int i_18 = 2; i_18 < 24;i_18 += 1)
            {
                arr_70 [i_15] [i_16] [24] = arr_55 [1];
                arr_71 [i_15] [i_16 - 2] [22] = max(var_9, ((8540085016733049761 ? var_6 : 3202546509)));
            }
            var_43 = (max((min(var_14, (arr_63 [i_15 + 3] [i_15 + 1]))), ((((18446744073709551615 ? 65527 : (arr_57 [i_16] [i_15] [1])))))));
            /* LoopNest 2 */
            for (int i_19 = 0; i_19 < 25;i_19 += 1)
            {
                for (int i_20 = 0; i_20 < 1;i_20 += 1)
                {
                    {
                        var_44 += ((((-(((arr_64 [1] [i_16] [1]) & (arr_59 [2] [2] [6])))))) - ((((((arr_54 [1]) ^ var_0))) * (((arr_60 [1] [18] [18]) % 18446744073709551615)))));
                        arr_76 [i_15] [2] [i_16] [23] [i_15] |= (arr_72 [i_15] [i_15] [i_15] [i_15]);
                    }
                }
            }
            var_45 = arr_73 [i_16] [4] [i_15] [i_15];
        }
        for (int i_21 = 0; i_21 < 1;i_21 += 1)
        {
            var_46 = var_13;
            var_47 = (max(-3885239369018191932, (max(1, (min(1, 1623797374643802297))))));
        }
    }
    var_48 = 256101909526246107;
    var_49 = (max((((var_13 ^ (var_3 / var_2)))), (min(13436324878376315396, 1))));
    #pragma endscop
}
