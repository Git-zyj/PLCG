/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238609
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = -var_9;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_18 = var_5;
            var_19 = (min(var_19, (arr_3 [i_1] [i_1])));
            arr_7 [i_0] [i_1] [i_0] = (arr_5 [i_0]);
        }
        var_20 = (max(86, 20));
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {

        for (int i_3 = 1; i_3 < 18;i_3 += 1)
        {
            var_21 = (min((arr_14 [i_3 + 2] [i_3 + 2] [i_2]), (arr_13 [18] [i_3 + 1] [i_3 + 1])));
            arr_16 [i_3] [i_3] = (((arr_15 [i_3]) != (((~((((arr_12 [i_2] [i_3] [i_3]) != var_3))))))));
        }
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            var_22 = (max(((~(arr_10 [i_2]))), ((((arr_13 [i_2] [i_4] [i_4]) == (arr_17 [i_2] [i_2]))))));
            arr_19 [i_2] [i_2] = (((((var_3 << (((arr_14 [i_2] [14] [i_2]) - 14))))) ? (((+(((arr_18 [i_2] [i_4] [i_4]) ^ var_3))))) : (((var_2 << (112 - 112))))));
            var_23 = ((+((max((arr_11 [i_2]), var_16)))));
            /* LoopNest 3 */
            for (int i_5 = 2; i_5 < 19;i_5 += 1)
            {
                for (int i_6 = 3; i_6 < 19;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        {
                            arr_28 [i_2] [i_5] [i_6] [i_6 - 2] [i_7] [i_4] = (min((arr_9 [i_2]), ((1 ? 4294967285 : 16777214))));
                            arr_29 [i_2] [1] [i_5] [i_6] [i_7] = var_4;
                            arr_30 [i_2] [i_6] [i_2] [i_2] [i_6] [i_2] [i_2] = (arr_25 [i_2] [i_2] [i_5] [i_6] [i_7]);
                            var_24 = ((min((((var_7 ? (arr_25 [0] [9] [i_5] [i_6] [i_7]) : (arr_8 [i_5])))), ((6070306837431812768 ? 4398046511103 : 1877800005)))));
                        }
                    }
                }
            }

            for (int i_8 = 0; i_8 < 20;i_8 += 1)
            {
                var_25 = (min((max((arr_17 [i_2] [i_4]), var_5)), (((arr_17 [i_2] [i_4]) ? (arr_17 [i_2] [i_2]) : var_10))));

                for (int i_9 = 0; i_9 < 20;i_9 += 1)
                {
                    var_26 = (min(var_26, (1877800021 / 1900362372)));
                    arr_37 [i_2] [i_4] = (arr_12 [i_2] [i_4] [i_8]);
                    var_27 += (arr_27 [i_2]);
                    arr_38 [i_2] [i_9] [i_8] [i_9] [i_9] [i_4] = (arr_24 [i_2] [i_4] [i_2] [15] [i_9] [15]);
                }
                /* vectorizable */
                for (int i_10 = 0; i_10 < 20;i_10 += 1)
                {
                    var_28 = (((arr_25 [i_2] [i_4] [i_8] [i_10] [i_2]) != (~4398046511125)));
                    arr_42 [i_2] [i_10] [i_2] [i_10] = (((arr_34 [i_2] [i_4] [i_8] [i_4] [i_2]) ? (arr_35 [i_2] [i_8]) : (arr_20 [i_10] [i_8] [i_4] [i_2])));
                }
            }
            /* vectorizable */
            for (int i_11 = 1; i_11 < 18;i_11 += 1)
            {
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 20;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 20;i_13 += 1)
                    {
                        {
                            arr_52 [i_2] [i_4] [i_11] [i_2] [i_12] [i_13] = 127;
                            arr_53 [i_2] [i_2] [i_11] [i_11] = 236;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 20;i_14 += 1)
                {
                    for (int i_15 = 1; i_15 < 19;i_15 += 1)
                    {
                        {
                            var_29 = (min(var_29, (((arr_47 [11] [i_15 - 1] [i_15 + 1] [i_11 - 1]) ? (arr_47 [i_15 - 1] [i_15 + 1] [i_15 - 1] [i_11 + 2]) : (arr_47 [i_15] [i_15 - 1] [i_15 + 1] [i_11 + 1])))));
                            var_30 = (((~27) ? (arr_33 [i_15 + 1]) : (((~(arr_50 [i_2] [i_2] [i_11] [i_14] [i_15]))))));
                            var_31 = var_3;
                        }
                    }
                }
                arr_59 [i_2] = 11574;
            }
            for (int i_16 = 0; i_16 < 20;i_16 += 1)
            {
                arr_64 [i_2] [i_4] [i_16] = ((var_3 ? (((arr_12 [i_16] [i_2] [i_2]) + (((arr_55 [i_4]) ? var_1 : (arr_8 [i_16]))))) : (!15899455160986420481)));
                arr_65 [i_16] = (arr_27 [i_16]);
                arr_66 [i_2] [i_4] [i_16] [i_16] = ((((((~-4398046511097) ? (max((arr_62 [i_2] [i_2] [i_2] [i_2]), var_7)) : 4398046511085))) ? ((~(arr_33 [i_16]))) : var_14));
            }
        }
        var_32 = (~-121);
        /* LoopNest 2 */
        for (int i_17 = 0; i_17 < 20;i_17 += 1)
        {
            for (int i_18 = 1; i_18 < 19;i_18 += 1)
            {
                {
                    var_33 += (((~(max((arr_44 [i_2]), var_2)))));
                    var_34 = max(((((arr_39 [i_2] [i_17] [i_17] [i_18]) ? (arr_39 [i_18 + 1] [i_18 + 1] [i_17] [i_2]) : (arr_39 [i_2] [i_17] [i_17] [i_18])))), (((arr_12 [i_18 + 1] [i_18 + 1] [i_18 - 1]) ? var_7 : (arr_60 [i_18 - 1] [i_18 - 1] [i_18 - 1]))));
                    arr_74 [i_18] = (arr_18 [i_17] [i_17] [i_17]);
                    var_35 = (arr_43 [i_2] [i_17] [i_18]);
                }
            }
        }
        var_36 = (max(var_5, (max((arr_71 [i_2] [i_2] [i_2] [i_2]), (~47)))));
    }
    for (int i_19 = 0; i_19 < 13;i_19 += 1)
    {
        arr_77 [i_19] = min(123, ((23 ? var_15 : 59)));
        arr_78 [i_19] [i_19] = (arr_70 [i_19] [i_19] [i_19] [i_19]);
    }
    var_37 = -1;
    #pragma endscop
}
