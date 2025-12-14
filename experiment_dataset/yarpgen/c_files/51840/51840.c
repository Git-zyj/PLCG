/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51840
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_11;
    var_18 = (max((((((min(var_8, (-2147483647 - 1)))) ? (!-2147483636) : ((min(128, 20439)))))), (((var_13 ? var_8 : var_5)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    {
                        var_19 = -1591548211708443180;
                        arr_13 [i_0] [i_1] [i_0] [1] [4] = (arr_8 [i_2 - 2] [i_2 - 2] [i_2] [i_3]);
                        arr_14 [i_0] [i_1] [i_0] [i_0] [9] [i_3] = ((88 ? (arr_3 [i_2] [i_0] [i_0]) : (arr_2 [i_2 + 1])));
                        arr_15 [i_0] [i_1] [i_1] [i_0] [i_0] = 28785;
                    }
                }
            }
        }
        arr_16 [i_0] = var_5;
    }
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        var_20 = (arr_17 [i_4] [i_4]);
        /* LoopNest 3 */
        for (int i_5 = 1; i_5 < 17;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 17;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 15;i_7 += 1)
                {
                    {
                        arr_26 [i_4] [i_4] = ((var_0 * (arr_25 [i_5 - 1])));
                        var_21 = ((((max((arr_19 [i_4]), (arr_21 [i_4] [i_4] [i_6] [i_5])))) / -var_7));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            for (int i_9 = 2; i_9 < 14;i_9 += 1)
            {
                {
                    var_22 = 112;
                    arr_31 [i_4] [i_4] [i_4] [i_9] = (min((!0), (((arr_21 [i_9 + 4] [i_4] [i_4] [i_9]) ? (var_2 == -16651) : (arr_29 [5] [i_9 + 4] [i_9 + 3] [10])))));

                    for (int i_10 = 1; i_10 < 16;i_10 += 1)
                    {
                        arr_36 [i_4] [i_8] [i_9 + 1] [i_4] [i_9 + 1] = (max(var_9, var_0));
                        arr_37 [i_4] [i_4] [i_4] = (min((max((min((arr_33 [i_4] [i_8] [i_9]), var_1)), ((max((arr_33 [i_8] [i_8] [i_10]), (arr_27 [i_4] [i_8] [i_4])))))), (min(((max(var_2, (arr_27 [i_4] [i_8] [i_10])))), (max(var_13, 1784869370975401825))))));
                    }
                    for (int i_11 = 0; i_11 < 18;i_11 += 1)
                    {
                        var_23 = ((max((arr_28 [i_9 + 4] [i_9 - 2] [i_9]), var_5)) <= (arr_28 [i_9 + 4] [i_9 - 2] [i_9]));
                        arr_41 [i_4] [12] [15] [i_11] = (max((arr_25 [i_9 + 3]), 16054));
                    }
                    var_24 = (max(((((max(21622, var_5))) ? ((var_6 ? (arr_27 [i_4] [i_8] [i_9]) : (arr_33 [i_4] [17] [i_9 + 1]))) : (arr_17 [i_9 + 2] [i_4]))), ((min((arr_21 [i_9 + 1] [i_4] [i_4] [i_8]), var_5)))));
                    arr_42 [i_4] [i_4] = var_10;
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_12 = 2; i_12 < 20;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 22;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 22;i_14 += 1)
            {
                {
                    arr_52 [i_12] [i_12] [i_12] = (~(min((~-621529824), var_16)));
                    arr_53 [i_12] = (((((arr_44 [i_12]) ? (arr_45 [i_12] [i_12] [i_12 - 2]) : (arr_43 [i_12]))) | (min((arr_45 [i_12 - 2] [i_12] [i_12 + 2]), 407714278))));
                    arr_54 [i_12] [i_12] = (min((arr_51 [i_12 - 2] [i_13] [i_14] [i_14]), (((((var_10 ? (arr_47 [i_14]) : 18446744073709551614))) ? (min((arr_44 [i_12]), var_13)) : 7936))));
                }
            }
        }
    }

    for (int i_15 = 1; i_15 < 1;i_15 += 1)
    {
        var_25 = (max((((((240 ? (arr_56 [23]) : 2850285113)) % var_3))), (max(((min((arr_55 [i_15]), 115))), var_4))));

        for (int i_16 = 0; i_16 < 24;i_16 += 1)
        {

            /* vectorizable */
            for (int i_17 = 0; i_17 < 24;i_17 += 1)
            {
                arr_64 [i_15] [i_16] = (var_5 >= -512);
                var_26 = (((arr_58 [i_15 - 1]) ? var_16 : (arr_61 [i_15 - 1])));
                arr_65 [i_15] [i_16] [i_15] = 115;
                var_27 = ((((arr_62 [i_17] [13] [i_16] [i_15]) || 167)));
            }

            for (int i_18 = 0; i_18 < 24;i_18 += 1)
            {
                arr_69 [i_15] = ((!(((163 ? (((arr_55 [9]) ? (arr_67 [i_15]) : var_4)) : var_15)))));
                var_28 = (arr_58 [1]);
                arr_70 [i_16] [i_15] = (((arr_67 [i_15 - 1]) ? (((((arr_66 [i_15] [i_15 - 1] [i_15]) && (arr_66 [i_15] [i_15 - 1] [i_15]))))) : (((arr_59 [i_15 - 1] [i_16]) ? (arr_66 [i_15] [i_15 - 1] [i_15]) : (arr_67 [i_15 - 1])))));
            }
            arr_71 [i_15] = ((((max((((arr_63 [i_15 - 1] [i_15] [i_15 - 1] [i_15]) - (arr_58 [i_16]))), (min(var_2, (arr_67 [i_15])))))) ? (min(195, 1323258184)) : (((((var_7 + (arr_68 [5] [5] [5]))))))));
        }
        for (int i_19 = 0; i_19 < 24;i_19 += 1)
        {
            var_29 = (max(((max((arr_56 [i_15 - 1]), var_12))), (min(((max(var_16, (arr_67 [i_19])))), (((arr_57 [i_15] [i_15]) ? var_15 : var_7))))));
            arr_74 [i_15] = 7945;
        }
        for (int i_20 = 0; i_20 < 24;i_20 += 1)
        {

            for (int i_21 = 0; i_21 < 24;i_21 += 1)
            {
                arr_81 [i_15] [i_15] = var_6;
                arr_82 [i_15] = max(var_13, (((max(var_14, (arr_63 [i_15 - 1] [i_20] [i_20] [i_21]))) >> 0)));
                var_30 = (max((arr_75 [i_15] [i_15 - 1]), (((((min(87, 1261638863))) ? var_14 : ((min(-5867, (arr_60 [i_20])))))))));
            }
            for (int i_22 = 0; i_22 < 0;i_22 += 1)
            {
                var_31 = (((min((arr_59 [i_15 - 1] [i_15 - 1]), (-2147483647 - 1))) - (arr_59 [i_15 - 1] [i_15 - 1])));
                arr_85 [i_22] [i_15] [i_15] [i_15] = arr_66 [i_15] [i_15 - 1] [1];
                var_32 = (~(arr_78 [i_15]));
                arr_86 [i_15] [i_20] [i_15] [i_15] = var_15;
                arr_87 [i_15 - 1] [i_20] [i_22] [i_15] = ((((var_10 ? var_15 : var_7)) >= (((min((arr_66 [i_15] [i_20] [i_22]), var_14)) / var_4))));
            }
            arr_88 [i_15] [i_20] [i_15 - 1] = (min((min((arr_75 [i_15] [i_15 - 1]), (arr_75 [i_20] [i_15 - 1]))), (((arr_75 [i_20] [i_15 - 1]) & (arr_75 [i_15 - 1] [i_15 - 1])))));
        }
    }
    #pragma endscop
}
