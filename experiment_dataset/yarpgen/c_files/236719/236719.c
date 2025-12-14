/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236719
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= 35494;
    var_13 = ((var_10 || (((max(4094, 50))))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_14 = (min(var_14, (((+((max((arr_2 [i_0]), -28931))))))));
        var_15 ^= (((((min(70, 17978)))) != 24200));
        var_16 = (min(var_16, (arr_0 [14] [i_0])));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_17 = 4095;
        arr_7 [i_1] |= min((min((arr_4 [i_1]), (arr_5 [i_1]))), (arr_5 [i_1]));
    }

    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            var_18 = ((17832560082524799071 ? (!614183991184752544) : ((max(var_3, (614183991184752544 == 29577))))));
            arr_16 [i_2] [9] [i_3] = 546376252;

            /* vectorizable */
            for (int i_4 = 2; i_4 < 14;i_4 += 1)
            {
                arr_19 [i_2] [6] [6] = ((~(arr_12 [i_2] [i_4 + 1] [i_4])));

                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    arr_22 [i_3] [i_5] = (arr_21 [i_2] [i_4 - 1] [i_2] [i_5]);
                    arr_23 [i_5] [i_4 - 1] [i_4 - 1] = ((var_5 ? (arr_12 [2] [i_3] [i_4 - 1]) : (arr_12 [i_2] [i_2] [i_5])));
                    arr_24 [i_2] [i_3] [i_3] [i_5] = (((arr_12 [i_2] [i_3] [i_4]) & (arr_12 [i_2] [i_3] [i_5])));
                }
                var_19 = (min(var_19, (((-(arr_11 [i_4 - 2] [i_4 + 1]))))));
            }
            /* vectorizable */
            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                arr_27 [i_2] [9] [i_6] = 0;
                /* LoopNest 2 */
                for (int i_7 = 4; i_7 < 13;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        {
                            var_20 = ((614183991184752570 ? (arr_10 [i_7 - 3]) : var_11));
                            var_21 += ((~(arr_32 [i_7 - 4] [i_7 - 1] [i_7 + 1] [i_8] [i_7 - 1] [i_7 - 1] [1])));
                            var_22 = arr_15 [i_8];
                            var_23 *= 32767;
                            var_24 = -var_5;
                        }
                    }
                }
            }
            for (int i_9 = 0; i_9 < 15;i_9 += 1)
            {
                arr_37 [i_3] [i_9] = ((((min(var_3, (arr_34 [i_2] [i_2] [i_3] [i_9] [i_2] [i_9])))) && ((max((arr_25 [i_2] [i_3]), (arr_36 [i_3]))))));
                arr_38 [i_3] [7] &= (arr_3 [i_9]);
            }
            arr_39 [i_2] = 22268;
        }
        /* vectorizable */
        for (int i_10 = 0; i_10 < 15;i_10 += 1)
        {
            var_25 = (min(var_25, (arr_33 [i_2] [i_2] [i_2] [i_10] [i_2])));

            for (int i_11 = 0; i_11 < 15;i_11 += 1)
            {
                arr_47 [i_11] = arr_33 [i_2] [12] [i_2] [i_2] [i_11];
                arr_48 [i_2] [3] [3] [i_11] = 17832560082524799060;
                var_26 = (arr_44 [i_2] [i_10] [12] [i_11]);
            }
            for (int i_12 = 2; i_12 < 14;i_12 += 1)
            {
                arr_51 [i_2] [i_10] [i_12 + 1] = (arr_50 [i_12 - 1] [i_12] [i_12 - 1] [i_12]);
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 15;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 15;i_14 += 1)
                    {
                        {
                            var_27 = (arr_25 [i_2] [i_14]);
                            arr_57 [4] [i_12 - 2] [2] = (~1);
                        }
                    }
                }

                for (int i_15 = 0; i_15 < 15;i_15 += 1)
                {
                    var_28 = ((6424 ? 1117974916 : (arr_55 [7] [i_12 - 2] [12] [i_12 - 2] [i_12 - 2] [i_12 - 2])));

                    for (int i_16 = 0; i_16 < 15;i_16 += 1)
                    {
                        var_29 = (((arr_42 [i_12 + 1] [i_12 - 1] [14]) >= (arr_42 [i_12 + 1] [i_12 - 1] [2])));
                        var_30 = (min(var_30, 18));
                        arr_62 [i_15] [i_15] = ((15113 ? ((((arr_44 [8] [i_10] [i_12 - 2] [i_16]) < var_8))) : 48));
                        arr_63 [i_2] [i_15] = (arr_25 [i_2] [i_2]);
                        arr_64 [i_2] [i_10] [i_15] [2] [1] = var_11;
                    }
                    for (int i_17 = 3; i_17 < 13;i_17 += 1)
                    {
                        var_31 = (arr_67 [i_2] [i_10] [i_12 - 1] [11] [i_10] [i_15] [i_17 - 1]);
                        arr_68 [i_15] = (arr_0 [i_2] [i_10]);
                        arr_69 [i_2] [3] [i_12 + 1] [i_15] [i_15] [i_15] [i_15] = ((!(arr_15 [i_12 - 2])));
                    }
                }
                var_32 = (((arr_54 [10] [i_10] [i_10] [i_10] [i_12 + 1] [i_12 + 1]) ? 0 : (arr_54 [i_10] [i_10] [12] [i_12] [i_12 - 2] [i_12 - 1])));
            }
        }
        arr_70 [i_2] [i_2] = (min((arr_4 [i_2]), ((var_5 ? (arr_11 [i_2] [i_2]) : 32704))));
        var_33 = ((((max((((arr_13 [i_2] [i_2] [i_2]) - (arr_4 [i_2]))), (((arr_9 [i_2] [i_2]) ? (arr_58 [i_2]) : -1))))) > (arr_9 [9] [i_2])));
        var_34 = ((-(min(1542397321, 48))));
    }
    #pragma endscop
}
