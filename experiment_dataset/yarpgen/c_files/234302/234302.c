/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234302
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                var_10 ^= (arr_0 [i_2]);
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        {
                            var_11 = (max(var_11, (((9223372036854775807 ^ (arr_3 [i_2] [i_2]))))));
                            var_12 = var_6;
                        }
                    }
                }

                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    var_13 = ((-(arr_1 [i_0] [5])));
                    var_14 = (0 ^ 61);
                    arr_17 [i_1] [i_1] [i_1] [i_5] = arr_12 [0] [i_1] [i_0] [i_5] [i_5] [i_1] [i_5];
                    var_15 *= (((arr_9 [i_0]) < (arr_4 [i_0] [i_2] [i_5] [i_5])));
                    var_16 = ((~(arr_5 [i_1] [i_2] [i_1] [i_1])));
                }
                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    var_17 = (max(var_17, 1928943153410208891));
                    var_18 = (((arr_15 [i_0] [i_1] [i_2] [i_1]) < (arr_15 [i_1] [i_2] [9] [i_1])));
                    var_19 = 1928943153410208894;
                }
                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {

                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        var_20 = var_9;
                        var_21 = ((!(arr_6 [i_8] [i_1] [i_1])));
                        var_22 = (max(var_22, -var_2));
                        arr_25 [i_1] [i_1] [i_2] [i_7] [i_1] = ((-(((0 < (arr_24 [i_0] [i_1] [i_0] [i_1] [i_8]))))));
                        arr_26 [i_0] [i_1] [13] = (((!var_5) <= (7733745559521409075 == -353278692)));
                    }
                    for (int i_9 = 0; i_9 < 14;i_9 += 1)
                    {
                        var_23 ^= (arr_1 [i_0] [i_0]);
                        var_24 = (min(var_24, 1277573849));
                        var_25 = (min(var_25, var_6));
                        arr_30 [i_1] [i_2] [i_1] [i_1] = (-2406362539572008306 != 217);
                        var_26 = ((((arr_10 [i_0] [i_0] [i_2] [i_2] [i_9]) / var_2)));
                    }
                    for (int i_10 = 0; i_10 < 14;i_10 += 1)
                    {
                        var_27 = arr_27 [i_10] [i_7] [i_2] [i_1] [i_0];
                        var_28 = (min(var_28, var_4));
                    }
                    for (int i_11 = 0; i_11 < 14;i_11 += 1)
                    {
                        var_29 = (~-1928943153410208897);
                        arr_37 [i_11] [i_1] [i_1] [i_0] = 1928943153410208875;
                    }
                    arr_38 [i_1] [i_1] [i_1] [i_7] = (-424347085 / 1928943153410208896);
                }
                arr_39 [i_1] [i_1] [i_2] [i_2] = (((arr_23 [i_0]) / (arr_35 [i_1] [i_2] [i_2] [i_1] [i_2] [0] [i_2])));
            }
            for (int i_12 = 0; i_12 < 14;i_12 += 1)
            {
                arr_44 [i_0] [i_1] [i_1] = var_3;

                for (int i_13 = 0; i_13 < 14;i_13 += 1)
                {
                    var_30 = (arr_14 [i_0] [i_1] [i_12] [i_13] [i_0]);
                    var_31 = (arr_22 [1] [1]);
                }
                for (int i_14 = 0; i_14 < 14;i_14 += 1) /* same iter space */
                {
                    arr_52 [i_1] [1] = ((-353278692 ? (arr_3 [i_0] [i_1]) : (arr_31 [i_0] [i_1] [i_12] [i_1] [i_14])));
                    var_32 = ((-(arr_8 [i_14] [i_12] [i_0] [i_0])));
                    var_33 = (arr_1 [i_0] [i_12]);

                    for (int i_15 = 0; i_15 < 14;i_15 += 1) /* same iter space */
                    {
                        var_34 ^= arr_45 [i_0];
                        var_35 = (((arr_24 [0] [10] [0] [0] [i_15]) && (arr_24 [i_0] [i_0] [i_12] [i_14] [1])));
                        var_36 = (((arr_34 [i_0] [i_1] [i_12] [i_14] [i_15]) ? (arr_11 [i_15] [i_15] [i_12] [i_12] [i_1] [i_0]) : (arr_11 [i_0] [1] [1] [i_14] [i_15] [i_15])));
                    }
                    for (int i_16 = 0; i_16 < 14;i_16 += 1) /* same iter space */
                    {
                        arr_57 [i_1] [i_1] = (((arr_20 [i_1] [i_1] [i_12] [i_14] [10]) & (arr_35 [i_1] [i_0] [i_1] [i_0] [i_14] [i_14] [i_16])));
                        var_37 = (arr_56 [8] [1] [i_1] [i_1] [8] [1]);
                        var_38 = var_2;
                    }
                }
                for (int i_17 = 0; i_17 < 14;i_17 += 1) /* same iter space */
                {
                    arr_61 [i_1] = var_1;
                    var_39 = (((((((arr_27 [i_12] [i_17] [i_12] [i_1] [i_0]) < var_2)))) <= (arr_60 [i_0] [i_0] [11] [2] [2] [i_17])));

                    for (int i_18 = 0; i_18 < 14;i_18 += 1)
                    {
                        arr_65 [i_1] [i_1] [9] = (~-58);
                        var_40 = (((arr_5 [i_0] [i_0] [i_17] [i_1]) >= 11291496504623160199));
                        var_41 = (((arr_7 [i_0] [0] [0] [i_0] [i_17] [i_18]) ? (arr_7 [i_0] [i_0] [9] [i_12] [i_17] [1]) : var_8));
                    }
                    var_42 = ((~(arr_51 [i_1] [3] [i_12] [4])));
                }
            }
            /* LoopNest 2 */
            for (int i_19 = 0; i_19 < 1;i_19 += 1)
            {
                for (int i_20 = 0; i_20 < 14;i_20 += 1)
                {
                    {
                        var_43 = (~var_2);
                        var_44 = (!-678915526296193828);
                    }
                }
            }
            arr_71 [i_0] [i_1] [i_1] = ((-(arr_51 [i_1] [i_1] [i_1] [i_1])));
            var_45 += ((18446744073709551612 / (arr_60 [4] [i_1] [i_1] [i_0] [1] [i_0])));
        }
        var_46 = (arr_0 [i_0]);
        arr_72 [i_0] [i_0] = ((((arr_67 [i_0] [i_0] [i_0]) == (arr_67 [i_0] [i_0] [i_0]))) ? (((var_6 < (arr_67 [i_0] [i_0] [i_0])))) : ((((arr_67 [12] [i_0] [i_0]) == var_2))));
    }
    for (int i_21 = 0; i_21 < 1;i_21 += 1)
    {
        arr_77 [i_21] = var_4;
        var_47 = (arr_75 [i_21]);
    }
    var_48 *= (max(-799293935, 54993));
    var_49 = (!var_8);
    #pragma endscop
}
