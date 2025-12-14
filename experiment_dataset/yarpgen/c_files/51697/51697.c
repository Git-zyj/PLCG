/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51697
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_12;
    var_14 *= ((var_11 ? ((((((var_8 << (2147483638 - 2147483636)))) ? 2956920673 : var_5))) : ((-var_8 ? (min(var_9, var_1)) : ((max(-83, 1838777450)))))));
    var_15 = (min(var_15, (((((-1814758580 >= (var_8 == var_10))))))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] = (arr_0 [i_0]);
        var_16 = ((var_5 ? ((((((min((arr_2 [i_0]), var_11))) && (arr_0 [i_0]))))) : (((var_7 && (arr_1 [i_0]))))));
        var_17 = 255;
        arr_4 [2] = var_6;
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                {
                    arr_13 [i_3] [1] = (min(((-((((arr_5 [i_2]) < (arr_6 [i_1])))))), var_5));
                    arr_14 [i_1] [17] = arr_9 [i_1] [i_2 + 4];
                }
            }
        }

        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {

            /* vectorizable */
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                var_18 = (max(var_18, ((((((arr_16 [i_1] [3]) ? var_12 : 255)) - ((~(arr_10 [i_1] [i_5]))))))));
                arr_19 [i_5] [i_4] [i_5] = (((arr_7 [i_1] [9] [i_5]) ? (arr_7 [10] [i_4] [i_4]) : var_2));
            }
            arr_20 [i_1] [i_4] = (((arr_6 [i_1]) / (((max((arr_18 [i_4] [i_4] [i_4]), var_8))))));
            var_19 = (((((65530 ? -1 : 2418425993))) ? 9223372036854775800 : (~1584743995)));
        }
        for (int i_6 = 2; i_6 < 19;i_6 += 1)
        {
            arr_25 [i_1] [i_6] = (max(((-(arr_10 [i_6 + 1] [i_6 - 1]))), (((var_11 > 154721208) ? ((~(arr_23 [i_6]))) : (arr_16 [i_6 + 1] [i_6 + 1])))));

            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                arr_29 [i_6] [15] [i_1] [16] = arr_16 [i_7] [i_7];
                arr_30 [i_7] [i_6] [i_1] [i_1] = var_10;
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 20;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 20;i_9 += 1)
                    {
                        {
                            arr_36 [i_6] [i_8] [i_6] [i_6] = (min(((max((arr_24 [i_6 - 1] [i_6 + 1] [i_6]), (arr_24 [i_6 - 2] [i_6 - 2] [i_1])))), (3940667905056480687 ^ -1)));
                            var_20 += var_6;
                        }
                    }
                }
                var_21 ^= (arr_23 [18]);
            }
            for (int i_10 = 0; i_10 < 20;i_10 += 1)
            {
                var_22 = ((-((31 ? var_12 : (((arr_23 [i_6]) ? 10 : 1))))));
                var_23 |= 1584743995;
                var_24 = min((13 && 9457799999708220015), 4039514954);
            }
            for (int i_11 = 0; i_11 < 20;i_11 += 1)
            {
                var_25 = (max(var_25, ((min(((((((var_4 ? (arr_10 [i_6] [i_11]) : (arr_28 [i_1] [i_1] [i_6] [i_11])))) ? (((-8106009167343808234 != (arr_40 [i_1] [i_1])))) : ((min(var_10, var_11)))))), (((arr_6 [i_6 - 1]) ? 1270462005 : (min((arr_21 [i_1] [i_6 - 2]), 2147483647)))))))));
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 20;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 20;i_13 += 1)
                    {
                        {
                            arr_48 [i_1] [i_1] [i_11] [i_12] [i_1] [i_1] [i_1] = (((((arr_9 [i_6 - 2] [i_6 - 1]) > (arr_38 [i_1] [i_1] [i_6 - 1] [i_6 - 2]))) ? ((min((arr_47 [i_6 + 1] [i_6 - 1]), var_0))) : (arr_38 [i_1] [i_6] [i_6 - 2] [i_6 + 1])));
                            arr_49 [i_13] [i_13] [i_13] [i_13] [i_6 - 2] = (arr_38 [i_11] [15] [i_6] [i_13]);
                            arr_50 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [3] = var_12;
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_14 = 0; i_14 < 20;i_14 += 1)
        {

            for (int i_15 = 0; i_15 < 20;i_15 += 1)
            {
                var_26 = (min(var_26, (arr_7 [i_1] [i_14] [i_15])));
                var_27 = (max(var_27, (arr_23 [i_1])));

                for (int i_16 = 0; i_16 < 20;i_16 += 1)
                {
                    arr_61 [i_14] = 2480208716;
                    var_28 += ((arr_52 [i_14] [i_15] [i_1]) ? (arr_52 [i_16] [18] [i_16]) : 61);

                    for (int i_17 = 0; i_17 < 20;i_17 += 1)
                    {
                        var_29 = var_12;
                        var_30 = (2147483621 || var_6);
                    }
                    arr_65 [i_14] = (((var_5 + (arr_8 [i_14]))));
                }
            }
            var_31 = (arr_17 [i_14] [i_14] [i_14]);
        }
        var_32 = (min(var_32, (((~(arr_62 [i_1] [i_1] [16] [5] [i_1]))))));
    }
    /* LoopNest 2 */
    for (int i_18 = 0; i_18 < 24;i_18 += 1)
    {
        for (int i_19 = 0; i_19 < 24;i_19 += 1)
        {
            {
                var_33 = ((((((arr_70 [i_18] [i_19]) ? (1 != 6) : var_2))) ? ((3157825992 * ((var_2 ? 2710223301 : (arr_71 [i_18] [i_18] [i_18]))))) : 4095));
                var_34 *= (840018840 & 1);
                arr_72 [i_18] [i_19] = (((((-(arr_70 [i_19] [i_19])))) ? (((var_4 != ((~(-2147483647 - 1)))))) : (arr_70 [i_19] [i_19])));
            }
        }
    }
    #pragma endscop
}
