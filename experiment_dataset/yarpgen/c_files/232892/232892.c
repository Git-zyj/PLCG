/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232892
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_19 = (-1 | var_5);
        var_20 = arr_1 [i_0] [i_0 + 2];
        var_21 = 127;
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        arr_6 [i_1] = var_12;
        var_22 ^= 303763421;

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            arr_10 [i_1] [2] = (((min(8276298416137589316, 18446744073709551615)) ^ (arr_8 [i_2])));
            var_23 &= var_12;
            var_24 = (max((((max(-20965, 8276298416137589316)) + (arr_7 [i_2] [i_1]))), 1073741823));
            arr_11 [i_1] = var_3;
        }

        for (int i_3 = 1; i_3 < 11;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                var_25 = (max(var_25, ((min((arr_12 [i_3 - 1] [i_3 - 1]), -8440)))));
                var_26 = (((min((arr_13 [i_4] [i_3 + 1]), (arr_13 [i_3] [i_4]))) < ((((!((max(2047, 35100)))))))));
                arr_16 [i_3 + 1] [i_3 + 1] [4] = (min(2047, -7560108973323040924));
                var_27 += (((arr_15 [i_4] [i_3 - 1] [i_1] [i_1]) ^ ((((!(arr_5 [3])))))));
            }
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                arr_19 [i_1] [1] [i_3] [i_5] = var_7;
                var_28 = (min(var_28, (((~((max(1, 16))))))));
                var_29 = (((((min((min(var_18, 2047)), 255)))) ^ (min(var_10, (max(-40, (arr_17 [10] [1] [5])))))));
            }
            arr_20 [i_3 - 1] = arr_4 [i_3 + 1];
            var_30 = (min(var_30, ((max((arr_14 [2] [8] [8] [8]), var_8)))));
        }
        for (int i_6 = 1; i_6 < 10;i_6 += 1)
        {

            for (int i_7 = 0; i_7 < 0;i_7 += 1)
            {

                for (int i_8 = 1; i_8 < 8;i_8 += 1)
                {

                    for (int i_9 = 1; i_9 < 9;i_9 += 1)
                    {
                        arr_30 [i_7] [i_8 + 2] = (arr_9 [10] [i_7 + 1] [i_7 + 1]);
                        var_31 = (((53925 | 1457698039) | (((max(((((arr_26 [i_1] [i_6 + 1] [i_7 + 1] [i_7] [i_8] [i_7 + 1]) || (arr_28 [0] [i_6 + 2] [0] [i_8 + 3] [i_8 + 2])))), 18446744073709551615))))));
                        var_32 |= (-32767 - 1);
                        var_33 = -7031;
                        var_34 -= (max((min((min((arr_15 [i_9 + 1] [i_8] [i_1] [i_1]), var_0)), ((((arr_4 [i_1]) || var_0))))), ((min((var_17 < 2), (((-127 - 1) || 1)))))));
                    }
                    for (int i_10 = 0; i_10 < 12;i_10 += 1)
                    {
                        var_35 = (max(((((max(922319775, (arr_32 [2] [7] [i_7] [i_8 - 1] [i_8 - 1] [7]))) < (arr_24 [i_1] [i_1] [8] [i_1])))), (arr_31 [6] [6] [5])));
                        var_36 = ((min((arr_26 [i_8 + 1] [i_7] [i_7 + 1] [2] [i_7 + 1] [i_6 + 2]), (arr_26 [i_8 + 4] [i_7] [i_7 + 1] [i_6] [i_6 + 1] [i_6 + 1]))));
                    }
                    for (int i_11 = 0; i_11 < 12;i_11 += 1)
                    {
                        var_37 = 234;
                        var_38 = 20104;
                        var_39 = -22031;
                    }
                    var_40 = (((arr_4 [i_1]) | 1));
                    var_41 = ((~(((arr_13 [i_1] [i_1]) | (arr_21 [i_7 + 1] [i_8 + 4])))));
                }
                var_42 = ((!((max((min((arr_13 [i_7 + 1] [8]), var_17)), ((max((arr_24 [i_1] [i_6] [i_1] [i_1]), -12347))))))));
                arr_35 [i_1] [i_1] [10] = (arr_9 [i_1] [9] [i_7]);
            }
            var_43 = (237 * 0);
        }
        /* vectorizable */
        for (int i_12 = 0; i_12 < 12;i_12 += 1)
        {
            /* LoopNest 2 */
            for (int i_13 = 1; i_13 < 11;i_13 += 1)
            {
                for (int i_14 = 1; i_14 < 11;i_14 += 1)
                {
                    {
                        arr_44 [i_1] [i_1] [i_13 - 1] [i_14] [i_1] = (arr_24 [i_14] [i_13] [0] [i_1]);
                        arr_45 [i_14] [i_14] [i_13 - 1] [i_14 - 1] = (arr_39 [i_1]);
                    }
                }
            }
            var_44 = var_13;
        }
    }
    for (int i_15 = 1; i_15 < 17;i_15 += 1)
    {
        var_45 = 1;
        var_46 = (max(var_46, ((((arr_47 [i_15]) ^ 1)))));
    }
    var_47 = (max(var_6, var_15));
    var_48 *= var_16;
    #pragma endscop
}
