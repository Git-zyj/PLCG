/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230702
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (~1);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_19 = (((((~(arr_3 [i_0])))) ? 19 : (((var_8 % (arr_2 [i_0]))))));
        arr_4 [i_0] [i_0] = ((!(var_3 + -111)));
        arr_5 [i_0] = (+(((arr_2 [i_0]) % var_4)));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 12;i_3 += 1)
                {
                    {
                        arr_17 [i_3] [i_2 - 1] [i_0] [i_1] [i_0] = var_2;
                        arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] = (((((var_16 ? (arr_1 [i_0] [i_2]) : var_12))) ? (((var_15 ? 1862 : 63679))) : var_6));
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
    {
        arr_21 [i_4] [i_4] = ((-((var_2 ? 0 : (arr_10 [i_4] [i_4])))));
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {
                    {
                        arr_30 [i_4] [i_6] [i_6] [i_6] [i_7] [i_6] = (arr_29 [i_4] [i_4] [i_6] [4]);
                        var_20 = (~(arr_0 [i_6] [1]));

                        for (int i_8 = 0; i_8 < 0;i_8 += 1)
                        {
                            var_21 = (((((-(arr_11 [i_8 + 1])))) ? ((max(19, (arr_11 [i_8 + 1])))) : (((arr_11 [i_8 + 1]) - var_6))));
                            var_22 = (~((-(arr_14 [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8 + 1]))));
                        }
                        for (int i_9 = 0; i_9 < 15;i_9 += 1)
                        {
                            arr_36 [i_6] [i_6] [i_4] [i_7] [i_6] [i_6] = ((((~(arr_2 [i_5]))) * 1));
                            arr_37 [i_4] [i_5] [i_6] [i_7] [i_9] = ((((!(arr_25 [i_9] [i_9])))));
                            arr_38 [i_4] [i_4] [i_5] [i_4] [i_4] [i_9] = (((((~(arr_1 [i_6] [i_6])))) ? ((~(arr_34 [i_4] [i_7] [i_6] [i_5] [i_4]))) : (!63665)));
                        }
                        for (int i_10 = 0; i_10 < 15;i_10 += 1)
                        {
                            arr_42 [i_4] [7] [7] [i_7] [i_10] = (arr_25 [i_4] [i_10]);
                            arr_43 [i_10] = var_10;
                        }
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_11 = 0; i_11 < 15;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 15;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 1;i_13 += 1)
                {
                    {

                        for (int i_14 = 0; i_14 < 15;i_14 += 1)
                        {
                            var_23 = (max((max(((((arr_22 [9] [i_11]) > (arr_12 [i_4] [i_14] [10])))), (min((arr_22 [10] [i_13]), var_13)))), var_5));
                            var_24 = ((min((((0 ? 253 : 139)), (arr_52 [i_4] [i_11] [i_12] [i_13] [i_13] [i_14])))));
                            arr_54 [i_4] [i_11] [i_14] = (arr_33 [7] [13] [i_4]);
                            arr_55 [i_11] [10] [10] [i_11] [i_11] = (arr_33 [i_12] [i_11] [i_12]);
                        }
                        for (int i_15 = 0; i_15 < 1;i_15 += 1) /* same iter space */
                        {
                            arr_59 [i_15] [i_12] [i_4] [i_15] [i_15] [8] = (max((arr_24 [i_12] [i_15]), ((((arr_0 [i_15] [i_11]) >= (arr_49 [i_15] [i_13] [10] [i_12] [i_11] [i_4]))))));
                            var_25 = (max((max((~var_5), (max((arr_32 [i_4] [i_4] [i_12] [i_12] [i_12] [i_15] [0]), var_13)))), (arr_27 [i_4] [i_4] [i_12] [2])));
                            arr_60 [1] [i_15] [i_12] [i_13] [i_13] [i_15] [i_15] = (max((arr_8 [i_13] [i_12]), (min((arr_52 [i_15] [2] [0] [i_12] [i_11] [i_4]), (arr_52 [i_15] [1] [i_15] [11] [i_15] [i_15])))));
                            arr_61 [i_15] [i_15] = (min(1, 1359085319));
                            var_26 = (((((((1 ? 1 : 4294967272))) ? ((1 ? (arr_26 [i_13] [i_11] [1]) : (arr_57 [i_15]))) : (max(1, var_6)))) >= (1 > 1858)));
                        }
                        for (int i_16 = 0; i_16 < 1;i_16 += 1) /* same iter space */
                        {
                            arr_64 [i_4] [i_16] [i_16] = ((var_1 ? var_3 : ((max(1878, 1870)))));
                            var_27 = ((((530642690 ? 1 : 1)) > (arr_52 [i_4] [i_4] [i_11] [i_4] [i_16] [i_12])));
                            arr_65 [i_16] [i_13] [i_12] [i_4] [i_16] = (((var_8 >= var_5) ? ((1287711839 & (-9223372036854775807 - 1))) : var_3));
                            var_28 = var_9;
                        }
                        for (int i_17 = 1; i_17 < 1;i_17 += 1)
                        {
                            arr_68 [i_17] [i_11] [1] [i_17] [0] = (arr_24 [i_17 - 1] [i_17 - 1]);
                            var_29 = min(var_2, (var_17 + var_17));
                            arr_69 [i_17] [i_11] [i_13] = (((((((max((arr_12 [i_11] [i_12] [i_17]), (arr_8 [i_4] [i_4])))) ? ((var_8 & (arr_20 [i_11] [i_11]))) : (arr_40 [i_11] [i_11] [i_12])))) ? (((var_16 ? ((max(var_12, (arr_2 [i_17])))) : (arr_3 [i_17])))) : var_9));
                        }
                        var_30 = ((~(arr_51 [3] [i_12] [i_4] [i_13] [i_4])));
                        var_31 = var_13;
                        arr_70 [10] [i_11] [i_12] = 63674;
                    }
                }
            }
        }
        arr_71 [0] = arr_23 [i_4];
    }
    /* vectorizable */
    for (int i_18 = 0; i_18 < 11;i_18 += 1)
    {
        arr_76 [i_18] [i_18] = var_16;
        arr_77 [i_18] = var_14;
        var_32 = (arr_6 [i_18] [i_18] [14]);
        arr_78 [i_18] = (~var_11);
    }
    for (int i_19 = 1; i_19 < 22;i_19 += 1)
    {
        var_33 = min((2472207240400848864 >= 8154), ((-111 ? (arr_82 [i_19 + 2]) : (arr_82 [i_19 + 1]))));
        var_34 = ((78 | 6391102735943962799) > (arr_79 [i_19]));
    }
    #pragma endscop
}
