/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39184
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((((max(var_1, var_11))) ? (max(var_4, 95)) : var_6))) ? ((~((95 ? -163464036 : 18446744073709551615)))) : (~var_11)));

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        arr_4 [i_0] &= ((-((((arr_2 [i_0]) ? -1819011140 : var_3)))));
        arr_5 [i_0] [i_0] = (((((17592186044415 ? ((~(arr_3 [i_0 - 1] [i_0 - 1]))) : 171))) ? (((163464015 ? 225972490 : 1))) : (((((var_9 << (2962613067 - 2962613067)))) ? var_9 : 65509))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_18 = ((~(var_1 & var_8)));
        arr_8 [i_1] [i_1] = (((((1 ? var_10 : (arr_7 [i_1])))) < var_1));
        arr_9 [i_1] [i_1] = 62;
    }
    /* vectorizable */
    for (int i_2 = 3; i_2 < 18;i_2 += 1) /* same iter space */
    {
        var_19 &= (((((arr_10 [i_2]) ? (arr_1 [i_2] [i_2]) : var_3)) * var_5));
        var_20 = (59 && 966783599);
        arr_12 [i_2] = ((~((var_8 | (arr_11 [16] [16])))));
        arr_13 [i_2] = (((((18446726481523507201 ? var_13 : 8192))) ? (~1891963405) : (arr_3 [i_2 - 1] [i_2 - 2])));

        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            var_21 ^= (arr_3 [i_2 - 3] [i_2 - 3]);
            arr_16 [i_2] [i_3] [11] = (((arr_14 [i_2 + 1] [i_3] [i_3]) ? (arr_11 [i_2 + 3] [i_2 + 3]) : (arr_15 [i_2 - 3])));
        }
    }
    for (int i_4 = 3; i_4 < 18;i_4 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
        {
            var_22 |= (((((var_12 ? (arr_2 [i_4]) : var_0))) ? (arr_14 [i_4] [i_4] [i_4 + 3]) : (arr_0 [i_4 - 3] [i_4 + 1])));
            arr_24 [i_4] [i_4] [i_4] = (~var_13);
            /* LoopNest 3 */
            for (int i_6 = 1; i_6 < 19;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 20;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 21;i_8 += 1)
                    {
                        {
                            var_23 ^= 211;
                            arr_32 [i_8] [i_8] [i_7] [i_6] [12] [i_8] [10] |= (((var_5 * 17592186044414) - -var_15));
                        }
                    }
                }
            }
        }
        for (int i_9 = 0; i_9 < 21;i_9 += 1) /* same iter space */
        {
            arr_36 [i_4] [i_4] = ((-(arr_33 [i_4])));
            var_24 = (arr_26 [i_4 + 1] [i_4] [0] [i_4]);
            var_25 = ((163464035 ? (((-(var_4 % var_12)))) : var_5));

            /* vectorizable */
            for (int i_10 = 1; i_10 < 19;i_10 += 1)
            {
                arr_41 [i_4] = ((var_7 < (arr_34 [i_4 - 3] [i_4 - 3] [i_4 + 1])));
                var_26 = (~520093696);
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 21;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 21;i_12 += 1)
                    {
                        {
                            arr_47 [i_4 + 1] [i_4 + 1] [i_4] [13] [i_4] = ((-(arr_40 [i_4] [i_11])));
                            arr_48 [i_4] [2] = (var_5 ? ((var_11 ? 8 : var_7)) : (arr_21 [i_4]));
                        }
                    }
                }
                arr_49 [i_9] [i_9] |= (arr_30 [i_4] [i_10 + 2] [i_4 + 3]);
            }
        }
        for (int i_13 = 0; i_13 < 21;i_13 += 1) /* same iter space */
        {
            arr_54 [i_4] = var_11;

            for (int i_14 = 3; i_14 < 19;i_14 += 1)
            {
                arr_59 [i_4] [i_4] = 92;
                arr_60 [i_14] [i_4] [i_4] [i_4] = ((!(arr_22 [i_4 - 3] [i_4 + 1])));
                arr_61 [i_4] = (((~var_10) <= -4294967295));
                arr_62 [i_4] = (arr_56 [i_4] [i_13] [18] [i_14 - 3]);
            }
            var_27 = (min(((((!4159396731) != (arr_22 [i_4] [i_4])))), var_12));
        }
        /* vectorizable */
        for (int i_15 = 0; i_15 < 21;i_15 += 1) /* same iter space */
        {
            arr_65 [i_4] [i_4 - 2] = ((-((var_16 ? var_16 : var_15))));
            /* LoopNest 2 */
            for (int i_16 = 0; i_16 < 21;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 21;i_17 += 1)
                {
                    {
                        arr_72 [i_4] [i_15] [i_15] [i_4] [i_16] [i_17] = (arr_27 [i_4] [1] [i_4] [i_4] [i_17]);
                        var_28 = (max(var_28, (((((83 ? 0 : var_4)) <= ((((arr_27 [i_16] [i_16] [i_16] [i_16] [i_16]) < (arr_67 [i_17] [i_15] [i_4])))))))));
                        arr_73 [i_4] [i_4] [i_4] = (~-var_5);
                    }
                }
            }
        }
        var_29 += ((((max((arr_46 [i_4 - 3] [i_4]), 95))) ? (125 || var_2) : -var_5));
        arr_74 [i_4] [i_4] = (arr_0 [i_4] [i_4]);
    }
    var_30 |= var_5;
    var_31 += (max(var_11, ((125 ? 11 : 46))));
    #pragma endscop
}
