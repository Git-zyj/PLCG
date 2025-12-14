/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4241
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_3, ((((((var_19 ? var_1 : 12972))) ? (0 <= var_14) : var_8)))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_21 = (arr_0 [i_0] [i_0]);

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_22 = (((((!((min(var_13, (arr_2 [i_0]))))))) - ((min(76, (265400732421165876 != 1566463659))))));
            var_23 = (((min(-211, 1)) | ((-(arr_3 [i_0])))));
        }
        for (int i_2 = 3; i_2 < 13;i_2 += 1)
        {
            arr_7 [i_2] [i_0] [i_0] = (~181);
            var_24 = (min(29, (((arr_3 [i_0]) ? var_3 : 24559))));
        }
    }
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {

        /* vectorizable */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            var_25 = (arr_0 [i_4] [14]);
            var_26 = ((((((arr_1 [i_3] [i_4]) ? var_1 : (arr_4 [2] [0])))) ? var_4 : ((var_17 ? -539984008 : 0))));

            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                var_27 = (((arr_6 [i_5] [i_4] [i_3]) ? (((arr_9 [1]) ? (arr_11 [i_5] [i_4] [i_3]) : 1)) : (arr_11 [3] [i_4] [i_4])));
                var_28 = ((0 ? (arr_2 [i_3]) : (arr_4 [i_3] [i_3])));

                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {

                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        var_29 = (((arr_6 [i_7] [i_5] [i_3]) ? -1 : (arr_6 [i_3] [i_5] [i_7])));
                        arr_19 [i_3] [i_4] [i_5] [i_4] [i_4] = 1485873426;
                        var_30 = ((!(arr_6 [i_7] [1] [i_3])));
                        var_31 = (((arr_6 [i_4] [i_4] [i_6]) || (arr_14 [i_7] [i_4] [i_3])));
                    }
                    arr_20 [i_3] [i_4] [i_5] [i_6] = (arr_1 [i_5] [i_6]);
                }
                for (int i_8 = 0; i_8 < 14;i_8 += 1)
                {
                    var_32 = ((137 + (~var_11)));
                    var_33 = (var_16 >= var_12);
                }

                for (int i_9 = 0; i_9 < 14;i_9 += 1)
                {
                    arr_27 [6] [i_4] [8] [i_9] = ((90 ? (arr_21 [i_4] [i_4] [i_5]) : (arr_21 [i_3] [i_3] [i_3])));
                    var_34 -= ((~((((arr_21 [i_3] [i_5] [i_9]) >= (arr_21 [i_3] [i_3] [i_3]))))));
                }

                for (int i_10 = 0; i_10 < 14;i_10 += 1) /* same iter space */
                {
                    arr_30 [i_10] [i_5] [10] [i_3] = 112;
                    arr_31 [i_3] [i_3] [i_3] [i_3] = var_6;
                    var_35 = ((((1259301631732291703 ? (arr_28 [i_10]) : (arr_1 [i_3] [i_3]))) <= var_17));
                    arr_32 [i_3] [3] [i_3] [2] = var_17;
                }
                for (int i_11 = 0; i_11 < 14;i_11 += 1) /* same iter space */
                {
                    var_36 -= (arr_9 [i_11]);
                    var_37 -= ((~(arr_12 [i_3] [i_4] [i_3])));
                    var_38 = ((((arr_6 [i_5] [4] [i_3]) - (arr_13 [i_3]))));
                }
                for (int i_12 = 0; i_12 < 14;i_12 += 1) /* same iter space */
                {
                    var_39 ^= (((arr_4 [i_3] [i_12]) ? (arr_4 [8] [i_4]) : (arr_4 [i_12] [i_5])));
                    var_40 -= (((arr_2 [i_4]) ? (~var_4) : (~var_19)));
                }
            }
            for (int i_13 = 0; i_13 < 14;i_13 += 1)
            {
                /* LoopNest 2 */
                for (int i_14 = 1; i_14 < 1;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 14;i_15 += 1)
                    {
                        {
                            var_41 = (arr_40 [i_14 - 1] [i_14] [i_4] [i_3] [i_14] [0]);
                            var_42 = (((var_13 & 1) ? (arr_29 [i_15] [i_15] [1] [i_14 - 1] [1] [i_14 - 1]) : ((var_5 ? 17187442441977259894 : (arr_28 [12])))));
                        }
                    }
                }
                arr_45 [1] [i_4] [i_4] = arr_39 [i_13] [i_4] [i_13] [i_4];
            }
            var_43 = (arr_42 [i_3]);
            /* LoopNest 3 */
            for (int i_16 = 3; i_16 < 12;i_16 += 1)
            {
                for (int i_17 = 4; i_17 < 10;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 14;i_18 += 1)
                    {
                        {
                            var_44 = (((arr_40 [i_17] [i_17 + 3] [i_17 + 3] [i_17 + 4] [i_18] [i_17]) >= (((arr_12 [13] [3] [i_16 + 1]) ? (arr_12 [i_3] [i_3] [6]) : (arr_2 [5])))));
                            arr_55 [i_18] [i_18] [i_18] [i_16] [i_18] [i_3] [i_3] = (((((~(arr_11 [i_18] [i_18] [i_18])))) - ((24549 ? (arr_10 [4] [i_17]) : var_6))));
                            arr_56 [i_3] [i_4] [i_18] [3] [i_17 + 2] [i_18] = (arr_16 [11] [i_17 + 1] [i_17 + 2] [i_16 - 2]);
                        }
                    }
                }
            }
        }
        var_45 = (min(((((arr_52 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]) <= 1))), (var_7 <= var_6)));
    }
    #pragma endscop
}
