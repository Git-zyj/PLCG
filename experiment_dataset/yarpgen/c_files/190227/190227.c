/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190227
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            arr_4 [i_1] [i_0] [i_0] &= var_13;
            arr_5 [i_0] = (((arr_2 [i_0 + 1]) ? (((((-16543 ? (arr_1 [i_0] [i_0]) : (arr_3 [11] [1])))) ? ((-(arr_2 [i_1]))) : (arr_1 [i_1] [i_0]))) : ((((-1192188454 >= (arr_3 [i_0] [1])))))));
        }
        for (int i_2 = 2; i_2 < 20;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                arr_14 [i_3] [i_3] [i_0] [i_0] = (((arr_2 [i_0 - 1]) ? ((min((max(var_2, var_8)), (arr_10 [i_0] [i_2 + 3])))) : (arr_10 [i_0] [i_2])));
                arr_15 [i_3] [i_0 + 2] = (max(var_5, (arr_1 [i_0 - 1] [i_2 - 1])));
            }
            arr_16 [i_0] = var_3;
        }
        for (int i_4 = 2; i_4 < 22;i_4 += 1)
        {
            arr_20 [i_4] [i_4] = var_8;

            for (int i_5 = 1; i_5 < 1;i_5 += 1)
            {

                for (int i_6 = 1; i_6 < 20;i_6 += 1)
                {
                    arr_27 [i_0] [19] [6] = var_3;
                    arr_28 [i_0] [i_4] [i_0] [i_6] = var_0;
                    arr_29 [i_4] = var_2;
                    var_16 ^= (max((((~((max(47332, (arr_25 [i_6] [i_6 + 2] [i_6] [i_6 - 1] [i_6 + 3] [i_6 + 3]))))))), ((+(min((arr_23 [i_6] [i_5 - 1] [i_4] [17]), (arr_10 [i_0] [i_0])))))));
                    var_17 *= var_3;
                }
                for (int i_7 = 3; i_7 < 21;i_7 += 1)
                {

                    for (int i_8 = 2; i_8 < 21;i_8 += 1)
                    {
                        var_18 = (arr_10 [i_0 - 1] [i_7 - 3]);
                        arr_37 [i_7] [i_4] [i_5 - 1] [11] [i_4] = 31090;
                        arr_38 [i_0 + 2] [0] [i_5] [i_5] [i_7 + 2] [i_7] = ((!((((arr_19 [i_0 + 2] [i_4 + 1]) - (arr_19 [i_0 - 1] [i_0 + 1]))))));
                    }
                    arr_39 [i_0] [i_5] [i_7] [i_0] [i_0] [i_7 - 1] = (-1192188468 + (arr_30 [i_0] [i_4] [i_7] [i_7]));
                }
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 22;i_10 += 1)
                    {
                        {
                            arr_44 [4] [i_4] [i_5] [i_10] [i_10] = (arr_33 [i_0] [i_4] [i_9] [i_10]);
                            var_19 = (((min(4294967295, (arr_2 [i_0 - 1]))) > 65535));
                        }
                    }
                }
                var_20 = var_4;
            }
            for (int i_11 = 1; i_11 < 22;i_11 += 1)
            {
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 23;i_12 += 1)
                {
                    for (int i_13 = 1; i_13 < 22;i_13 += 1)
                    {
                        {
                            arr_53 [i_0 - 1] [i_4] [1] [i_12] [i_13] = (((min((arr_33 [i_4 - 1] [i_11 - 1] [i_13 - 1] [i_13]), (min((arr_45 [i_0] [i_12] [i_13]), var_14)))) / (-18446744073709551615 != -1192188468)));
                            arr_54 [i_13] = ((-((max((arr_50 [i_4] [i_4] [4] [i_13]), (var_10 <= var_11))))));
                            arr_55 [22] [2] &= ((-(arr_10 [i_0 + 2] [i_0 + 2])));
                        }
                    }
                }

                /* vectorizable */
                for (int i_14 = 0; i_14 < 1;i_14 += 1)
                {
                    arr_58 [i_11] = ((-(arr_51 [i_0 - 1] [i_4 - 1] [i_11 + 1] [i_14] [20] [i_11 + 1] [i_11 + 1])));
                    arr_59 [i_0] [7] [i_0] [i_0] = ((-1192188468 ? (arr_6 [i_0 - 1] [i_4 - 1]) : (arr_6 [i_0 + 1] [i_4 - 2])));

                    for (int i_15 = 0; i_15 < 23;i_15 += 1)
                    {
                        var_21 = (min(var_21, var_12));
                        var_22 ^= (((arr_19 [19] [i_0 + 2]) % (arr_51 [i_0] [i_0] [i_0] [i_0] [2] [i_0 + 2] [4])));
                    }
                }
                arr_62 [i_0 + 2] [i_0 + 2] [i_0] [i_0 + 2] = ((((((arr_26 [i_0 - 1]) * (arr_26 [i_4 + 1])))) ? (((arr_26 [i_0 + 1]) ? (arr_26 [i_0 + 1]) : (arr_26 [i_11 - 1]))) : ((var_13 ? (arr_26 [i_4 - 2]) : (arr_26 [i_4 - 1])))));
            }
        }
        arr_63 [i_0] = ((~(arr_12 [i_0] [14])));
        arr_64 [16] = 1;
        var_23 = ((((!(((120 ? var_13 : (arr_3 [i_0 - 1] [i_0 + 2]))))))));
    }
    for (int i_16 = 1; i_16 < 22;i_16 += 1)
    {
        arr_69 [i_16] = ((3 ? 150 : 682828313830139574));
        var_24 = ((-((((!(arr_65 [i_16]))) ? (arr_67 [i_16]) : (arr_68 [i_16])))));
        var_25 = ((!((max((!63541), var_12)))));
    }
    var_26 = var_11;
    #pragma endscop
}
