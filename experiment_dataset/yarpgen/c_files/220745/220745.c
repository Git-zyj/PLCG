/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220745
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 65535;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [4] [i_0] = (arr_7 [0] [i_0] [i_2] [i_4]);
                                arr_15 [i_0] [0] [i_2] [i_0] [i_3] [i_0] [i_0] = (((arr_7 [i_0] [i_0] [i_4] [i_3]) ? (arr_12 [i_0 - 1] [i_2 - 1]) : 1465125000));
                                var_21 = ((((1 ? var_18 : var_0))));
                                var_22 = ((15 ? (((~(((arr_11 [i_4] [i_3] [i_1]) ? (arr_9 [i_1] [i_2] [i_3] [i_4]) : 1465124991))))) : ((((max((arr_12 [1] [i_4]), 1465124978))) ? (var_4 & 22865) : (((var_6 ? var_7 : (arr_9 [i_0] [i_1] [7] [1]))))))));
                                var_23 = (max(var_23, (((0 >= (max(var_10, var_7)))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_24 = (max(var_24, ((max((max((arr_8 [i_1] [16] [i_2] [10] [14] [i_2 - 1]), var_8)), var_0)))));
                                var_25 = ((~((-(arr_7 [i_0] [i_0] [i_0] [i_2 - 1])))));
                                var_26 = (max(((max((arr_17 [6] [i_2 - 1] [i_2 - 1] [16] [i_2]), (arr_7 [7] [i_0] [i_2 - 1] [i_2])))), ((var_18 - (arr_7 [i_2] [i_0] [i_2 - 1] [i_2])))));
                            }
                        }
                    }

                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {

                        for (int i_8 = 0; i_8 < 19;i_8 += 1)
                        {
                            arr_27 [i_7] [i_0] [0] = var_3;
                            var_27 = 255;
                            arr_28 [i_0] [i_1] = ((((-(arr_8 [i_0] [i_0] [i_1] [i_0] [3] [i_0]))) + (max(var_6, var_3))));
                        }
                        for (int i_9 = 0; i_9 < 19;i_9 += 1)
                        {
                            arr_31 [i_0] [i_1] [i_0] [i_7] [i_9] = (min((min((arr_12 [8] [i_0 + 3]), (arr_30 [i_0] [i_0 - 2] [i_9]))), ((((arr_30 [1] [i_0 + 3] [i_2]) ? var_6 : (arr_12 [i_9] [i_0 + 3]))))));
                            var_28 = var_6;
                        }
                        var_29 = 19624;
                        var_30 = (min(var_30, ((min((((arr_0 [i_7] [i_7]) ? (arr_0 [i_7] [i_7]) : (arr_0 [i_7] [i_7]))), (~1))))));
                    }
                    for (int i_10 = 0; i_10 < 19;i_10 += 1)
                    {
                        arr_36 [i_10] [i_0] [i_0] [i_0] = (max(((var_10 >> (((min(var_18, 133318157)) - 133318151)))), ((min((arr_6 [i_0] [i_1] [i_2 - 1] [i_10]), 2048)))));
                        arr_37 [i_0] [i_0] [i_1] [i_0] = (max(var_7, (max((arr_30 [i_1] [11] [i_2 - 1]), 201))));

                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 19;i_11 += 1)
                        {
                            arr_40 [12] [i_1] [i_0] [12] [15] [i_0] = ((-(arr_2 [i_2 + 1])));
                            arr_41 [i_2] [i_1] [i_2] [10] [i_1] [i_0] [i_2] = var_11;
                            var_31 = 141;
                        }
                        for (int i_12 = 0; i_12 < 1;i_12 += 1)
                        {
                            var_32 = ((!((min((arr_23 [i_10] [1] [0] [i_0 + 2] [i_2 - 1] [i_0]), var_14)))));
                            var_33 = (min(var_33, var_15));
                            var_34 = (min(var_34, ((((((((!var_4) || ((((arr_39 [i_0] [i_1] [i_2]) ? 1408772149 : var_14))))))) == 33554431)))));
                        }
                    }
                    /* vectorizable */
                    for (int i_13 = 0; i_13 < 19;i_13 += 1)
                    {

                        for (int i_14 = 2; i_14 < 18;i_14 += 1)
                        {
                            arr_49 [i_0] = -2413004465;
                            var_35 = var_12;
                            var_36 = (((arr_24 [i_0 + 3] [i_0]) | 332212409));
                        }
                        for (int i_15 = 0; i_15 < 19;i_15 += 1)
                        {
                            arr_54 [i_0] [i_15] = ((~(((var_11 != (arr_19 [8]))))));
                            arr_55 [i_0] [i_1] [i_2] [i_0] [i_0] = -33554448;
                            arr_56 [i_0] [i_1] [2] [i_13] |= 2413004454;
                            arr_57 [11] [i_1] [i_0] [i_2] [0] [i_2] [i_15] = (((arr_13 [i_2 - 1] [i_2 - 1] [13] [i_0] [i_0 + 3]) < (arr_13 [i_2 + 1] [i_0] [11] [i_0] [i_0 + 4])));
                        }
                        var_37 = ((((((arr_17 [2] [i_2] [i_1] [i_1] [14]) ? -2063 : 4055351591202457113))) ? (1023 & 12673648912120768047) : var_5));
                    }
                    /* vectorizable */
                    for (int i_16 = 1; i_16 < 17;i_16 += 1)
                    {
                        var_38 = (97 >= var_8);
                        arr_61 [i_0] [i_2] [i_1] [i_0] = (((4584 & var_19) ? 18 : 131));
                        arr_62 [3] [i_0] [i_2] [3] = (arr_4 [i_16 - 1]);
                        arr_63 [i_0] [i_1] [i_2] [14] = (1 | 125);
                    }
                    var_39 = var_5;
                }
                var_40 = (min((arr_9 [i_0 + 2] [i_1] [i_1] [i_0]), (((((arr_52 [5] [14] [13] [5]) && 4294967295))))));
                arr_64 [i_0] [11] = 141;
            }
        }
    }
    #pragma endscop
}
