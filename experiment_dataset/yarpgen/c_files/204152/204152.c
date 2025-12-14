/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204152
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_4;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_18 = (max(var_18, ((((((arr_0 [i_0]) + 50969)) / var_15)))));
        var_19 = var_8;
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        var_20 = (max(var_20, ((((arr_3 [i_1] [i_1]) & (arr_3 [i_1] [i_1]))))));
        var_21 = ((((((arr_3 [i_1] [i_1]) ? (((var_16 >= (arr_0 [i_1])))) : (((arr_0 [i_1]) ? var_16 : (arr_3 [i_1] [12])))))) ? (((max((arr_2 [i_1]), var_6)) & (var_5 - 10899))) : -var_0));
        arr_4 [i_1] &= var_3;
        arr_5 [i_1] = var_1;
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
    {
        arr_10 [i_2] = (var_0 / var_10);

        for (int i_3 = 2; i_3 < 9;i_3 += 1)
        {
            arr_15 [i_3 + 4] [i_2] = (arr_9 [i_2] [i_3]);

            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                arr_18 [i_4] [10] [10] [10] = ((((((arr_2 [3]) ? -1 : var_9))) ? 16128 : (arr_14 [i_3 + 3] [i_4])));
                arr_19 [i_2] = ((19180 ? -744427667 : 0));

                for (int i_5 = 1; i_5 < 12;i_5 += 1)
                {
                    arr_22 [i_5] [i_5] [i_4] [i_4] = (((arr_16 [i_2] [i_2] [i_5 + 1] [i_5 - 1]) ? var_2 : ((var_5 ? var_16 : 744427694))));

                    for (int i_6 = 2; i_6 < 12;i_6 += 1)
                    {
                        var_22 = (min(var_22, (arr_1 [i_3 + 1] [18])));
                        var_23 += (((arr_1 [i_3] [i_3 - 2]) || (((~(arr_9 [i_4] [i_4]))))));
                    }
                }
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    var_24 *= (((arr_27 [i_2] [i_3 + 4] [1] [i_3 + 4]) ? (!1) : ((((arr_2 [i_2]) != var_10)))));
                    arr_29 [i_7] [i_2] = 1861721052;
                    var_25 = (arr_26 [i_2] [i_4] [i_4] [i_4] [i_4] [i_7]);
                }
            }
            for (int i_8 = 0; i_8 < 13;i_8 += 1)
            {
                arr_33 [i_2] [i_3 - 2] [i_8] [i_8] = var_2;
                var_26 *= ((7641281555441569964 && (((var_6 ? var_3 : var_15)))));
            }
            for (int i_9 = 0; i_9 < 13;i_9 += 1)
            {
                arr_38 [i_2] [i_9] = (((arr_24 [i_2] [i_2] [i_3 - 2] [i_9] [i_9] [3] [i_9]) || ((((arr_35 [i_2]) ? (arr_30 [i_2] [i_3]) : var_7)))));
                var_27 = (min(var_27, ((((arr_9 [i_3 - 1] [i_3]) ? var_5 : (arr_27 [i_2] [i_3 + 2] [12] [i_3]))))));
            }
        }
        for (int i_10 = 0; i_10 < 13;i_10 += 1)
        {
            arr_41 [i_10] = 19164;
            arr_42 [i_2] [i_2] [i_10] = (((~(arr_36 [i_2] [i_10] [i_10]))));
            arr_43 [i_2] [4] &= ((var_14 ? (arr_2 [i_2]) : 200));
        }
        for (int i_11 = 0; i_11 < 13;i_11 += 1)
        {

            for (int i_12 = 0; i_12 < 13;i_12 += 1)
            {
                var_28 = (arr_46 [i_2] [10] [2]);
                var_29 *= ((((((arr_1 [i_2] [i_11]) ? var_16 : var_8))) ? var_13 : (95 + var_0)));
            }
            for (int i_13 = 0; i_13 < 13;i_13 += 1)
            {
                arr_55 [i_11] [i_2] [i_11] [1] = (arr_30 [i_2] [i_2]);
                arr_56 [i_2] [i_11] [i_11] = (((arr_30 [i_2] [i_11]) ? (((arr_34 [i_2]) ^ var_3)) : var_3));
            }
            /* LoopNest 3 */
            for (int i_14 = 0; i_14 < 13;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 13;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 13;i_16 += 1)
                    {
                        {
                            arr_65 [i_2] [i_11] [i_14] [i_11] [i_16] [i_16] = ((arr_54 [i_11] [i_11] [i_15] [i_16]) ? 2147483647 : var_13);
                            arr_66 [1] [3] [i_11] [i_2] [i_11] [i_2] [i_2] = (((arr_50 [i_11]) ? 8290136172985007037 : (arr_30 [i_11] [i_14])));
                        }
                    }
                }
            }
        }
        var_30 = (arr_20 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]);
        arr_67 [i_2] = (((8511874254685063800 & var_11) ? (arr_9 [i_2] [0]) : (((((arr_35 [i_2]) >= (arr_23 [i_2] [i_2] [i_2] [i_2] [i_2])))))));
        arr_68 [i_2] [i_2] = (((arr_50 [1]) < ((var_4 ? (arr_52 [i_2] [1] [i_2]) : (arr_45 [i_2] [i_2] [i_2])))));
    }
    var_31 = (max(var_31, ((min(((var_0 ? var_9 : var_0)), var_10)))));
    #pragma endscop
}
