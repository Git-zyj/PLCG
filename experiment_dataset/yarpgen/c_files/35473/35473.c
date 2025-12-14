/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35473
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, 10928320337003522855));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_11 = 56640;
        var_12 += -1051693569;

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            arr_7 [7] [7] [7] = ((var_8 ? ((((!(arr_6 [i_0] [i_1]))))) : 4239787219));
            arr_8 [i_0] = (arr_3 [i_1]);
            arr_9 [12] |= ((!(arr_6 [i_0 + 2] [i_1])));
        }
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 3; i_4 < 9;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 6;i_5 += 1)
                {
                    {
                        var_13 = (max(var_13, (~1048574)));
                        var_14 *= var_5;
                        var_15 = 27041;
                        arr_21 [i_2] [i_2] [i_4] [i_3] = 8;
                    }
                }
            }
            arr_22 [i_2] [i_3] [i_2] = 1174282050;
            var_16 = 55180077;
        }
        for (int i_6 = 2; i_6 < 8;i_6 += 1)
        {
            var_17 -= (arr_16 [i_6] [i_2] [i_2 - 1]);
            var_18 |= (arr_17 [i_2 - 1] [i_2 - 1] [i_6]);
            /* LoopNest 3 */
            for (int i_7 = 3; i_7 < 8;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 9;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 9;i_9 += 1)
                    {
                        {
                            var_19 ^= (arr_14 [i_2] [i_7] [i_2]);
                            arr_36 [i_2] [i_6] [i_7 - 1] [i_6] [i_9] = (arr_10 [i_6 - 1] [i_7 + 2]);
                        }
                    }
                }
            }
            var_20 = var_8;
            arr_37 [i_6] [i_6] [i_2 - 1] = 71916856549572608;
        }
        for (int i_10 = 0; i_10 < 10;i_10 += 1)
        {
            var_21 -= 24354;

            for (int i_11 = 0; i_11 < 10;i_11 += 1)
            {
                arr_45 [i_2] = 20;
                var_22 = (arr_23 [i_11]);
                /* LoopNest 2 */
                for (int i_12 = 2; i_12 < 7;i_12 += 1)
                {
                    for (int i_13 = 1; i_13 < 6;i_13 += 1)
                    {
                        {
                            var_23 = var_5;
                            arr_52 [i_10] [i_10] [i_11] [i_12 - 1] [i_2] [i_11] &= var_5;
                            var_24 = (max(var_24, ((var_0 ? 42674188 : (arr_39 [i_2 - 1] [i_12 + 3])))));
                        }
                    }
                }
            }
            for (int i_14 = 0; i_14 < 10;i_14 += 1)
            {
                var_25 = var_5;
                var_26 = 2676227794;
                arr_55 [i_14] [i_10] [i_10] [i_2 - 1] = var_0;
            }
            for (int i_15 = 0; i_15 < 10;i_15 += 1)
            {
                var_27 = (max(var_27, -8823654065792263209));
                var_28 -= 4239787204;
                arr_58 [0] [i_10] [i_10] = 7518423736706028760;
            }
            for (int i_16 = 0; i_16 < 10;i_16 += 1)
            {

                for (int i_17 = 2; i_17 < 8;i_17 += 1)
                {
                    arr_64 [i_16] [i_16] [i_16] = var_5;
                    var_29 = -13309;
                }
                for (int i_18 = 0; i_18 < 10;i_18 += 1)
                {
                    var_30 = 57350;
                    var_31 ^= (arr_23 [i_2 - 1]);
                    arr_67 [5] [7] [i_10] [i_2 - 1] = var_0;
                }
                var_32 += (arr_56 [i_2]);
                arr_68 [i_2] [i_10] = (arr_62 [i_16] [i_2 - 1] [i_10]);
                var_33 &= (arr_53 [i_16] [i_10] [i_2 - 1] [i_2]);
                var_34 = 0;
            }
            var_35 = var_4;
        }
        var_36 &= ((var_0 ? 4 : (arr_26 [i_2] [i_2 - 1] [i_2 - 1])));
        var_37 = 14466032171675615966;
    }
    var_38 = (min((min(var_0, 0)), ((((min(var_1, 9857)))))));
    #pragma endscop
}
