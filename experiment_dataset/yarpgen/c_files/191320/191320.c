/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191320
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (57 && 3930913806);
    var_17 = (((max(var_10, ((min(var_12, var_7)))))));

    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 8;i_2 += 1)
            {
                {
                    var_18 = ((max(101, 48)));
                    var_19 = (max(var_19, var_0));
                    arr_6 [i_1] [i_0 + 1] [i_1] = 9223372036854775807;
                    var_20 = (((min(var_1, (!var_14)))));
                }
            }
        }
        arr_7 [i_0] &= ((var_8 ? (max((arr_1 [i_0 - 2]), (arr_1 [i_0 - 2]))) : (((-(arr_3 [i_0 - 2] [i_0] [i_0 - 3]))))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        arr_10 [i_3] = (((var_13 && var_11) >> (((arr_9 [i_3]) - 23420))));
        arr_11 [0] = -21275;

        for (int i_4 = 3; i_4 < 16;i_4 += 1) /* same iter space */
        {
            var_21 = (max(var_21, (arr_8 [i_4])));
            arr_14 [i_4] [i_4] [14] = (((((arr_8 [i_3]) ? 57 : (arr_8 [15]))) >> (21352 - 21320)));
            var_22 = (arr_13 [i_3]);
        }
        for (int i_5 = 3; i_5 < 16;i_5 += 1) /* same iter space */
        {

            for (int i_6 = 2; i_6 < 16;i_6 += 1)
            {
                arr_21 [i_6 - 1] [13] [i_5] [i_3] = -1926498100330975876;
                var_23 -= var_4;
                arr_22 [i_3] [2] [i_3] = ((arr_17 [i_5 - 1] [i_5 - 1]) ? var_0 : (arr_17 [i_5 - 1] [i_5]));
            }
            /* LoopNest 3 */
            for (int i_7 = 1; i_7 < 16;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 17;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 17;i_9 += 1)
                    {
                        {
                            var_24 = 1;
                            arr_34 [i_3] |= ((-(arr_9 [i_9])));
                            var_25 ^= 32;
                        }
                    }
                }
            }
        }
        for (int i_10 = 3; i_10 < 16;i_10 += 1) /* same iter space */
        {
            var_26 = (((var_10 ? 299430639 : var_12)));

            for (int i_11 = 2; i_11 < 16;i_11 += 1)
            {
                var_27 = 1926498100330975876;

                for (int i_12 = 0; i_12 < 17;i_12 += 1) /* same iter space */
                {
                    arr_42 [i_3] [i_11] [i_3] [i_3] = (arr_30 [i_12] [i_11 - 1] [i_10] [i_10] [i_3]);
                    arr_43 [i_12] [i_11] [i_11] [i_11] [i_11] [i_3] = (((arr_23 [i_11] [i_10 - 1] [i_11] [i_12]) >> (arr_23 [5] [i_10 - 2] [i_10] [i_10 - 2])));
                    var_28 = ((-((3965919838 >> (var_0 - 706276207)))));
                }
                for (int i_13 = 0; i_13 < 17;i_13 += 1) /* same iter space */
                {
                    var_29 = var_1;
                    var_30 = (!48);
                }
                for (int i_14 = 0; i_14 < 17;i_14 += 1) /* same iter space */
                {
                    var_31 = 8184;
                    var_32 = (~1926498100330975876);
                    var_33 = var_0;
                    var_34 ^= var_1;
                }
            }
        }
        for (int i_15 = 3; i_15 < 16;i_15 += 1) /* same iter space */
        {
            var_35 = (arr_31 [i_3] [10] [i_3]);
            arr_51 [i_3] [i_3] [i_15] = ((~(arr_46 [i_3] [i_15] [4] [i_15 - 2])));
        }
    }
    for (int i_16 = 0; i_16 < 23;i_16 += 1)
    {
        arr_56 [i_16] = -8408845517986059450;
        /* LoopNest 2 */
        for (int i_17 = 2; i_17 < 22;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 23;i_18 += 1)
            {
                {
                    var_36 = min(((max((min(48468, var_6)), ((max(1, (arr_54 [i_17]))))))), ((var_3 ? (~var_0) : 3692)));
                    var_37 = (max(1926498100330975869, ((max(((var_6 ? var_14 : var_2)), (((arr_57 [i_18] [i_17]) ^ var_4)))))));
                }
            }
        }
        var_38 = ((((max((arr_52 [i_16]), var_14))) >> ((((var_15 ? (arr_57 [i_16] [i_16]) : (arr_55 [i_16] [i_16]))) - 11180))));
    }
    for (int i_19 = 0; i_19 < 24;i_19 += 1)
    {
        var_39 = (max((((!(arr_63 [i_19] [i_19])))), (max(var_13, (arr_63 [i_19] [i_19])))));
        var_40 = ((((max(48012, 4691836384070128511))) && (arr_61 [i_19] [i_19])));
    }
    #pragma endscop
}
