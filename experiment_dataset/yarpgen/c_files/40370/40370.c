/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40370
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_9 [i_0] = (-(arr_6 [i_0]));
                    arr_10 [i_0] [i_1] [i_0] = 6917529027641081856;
                    var_20 -= var_2;
                }
            }
        }
        arr_11 [i_0] [i_0] = (arr_3 [i_0]);
        arr_12 [i_0] [i_0] = (arr_8 [i_0] [i_0] [9]);
        var_21 = 128;
    }
    for (int i_3 = 3; i_3 < 24;i_3 += 1)
    {
        arr_15 [i_3] [i_3] = (var_19 ^ -657941571);
        arr_16 [i_3] = -161;
        /* LoopNest 3 */
        for (int i_4 = 1; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    {
                        var_22 = (max(34636, (((arr_24 [19] [i_3 - 2] [i_3] [i_3 + 1]) - 30891))));
                        var_23 = ((30902 ? (30900 - 2147483647) : -8695086950219518911));
                        arr_25 [i_3] [i_5] [i_4] [i_3] = (((min(2097151, (30902 > 137438953468))) == 8191));
                    }
                }
            }
        }
    }
    for (int i_7 = 1; i_7 < 12;i_7 += 1)
    {

        for (int i_8 = 1; i_8 < 12;i_8 += 1)
        {
            arr_32 [i_7] [i_8] = 1536;
            var_24 = ((!((max(var_17, (arr_31 [i_7] [i_7]))))));
            arr_33 [i_7] [i_7] = ((230 ? -4772363328613979868 : 14));
            var_25 = ((max(241, 16114540628173591270)));
        }
        for (int i_9 = 3; i_9 < 13;i_9 += 1)
        {

            for (int i_10 = 1; i_10 < 12;i_10 += 1)
            {
                var_26 = (((arr_2 [i_7 + 2]) ? (min(14093164712558735118, 34637)) : 4096));
                /* LoopNest 2 */
                for (int i_11 = 1; i_11 < 12;i_11 += 1)
                {
                    for (int i_12 = 2; i_12 < 14;i_12 += 1)
                    {
                        {
                            arr_47 [i_7] [i_12 - 2] = (((max(var_9, ((min(var_18, (arr_4 [i_12])))))) * -3041947039379052505));
                            var_27 = var_10;
                            var_28 = (min(var_28, (arr_30 [10] [10])));
                            arr_48 [i_7] [i_7] [i_9] [3] [1] [i_10] = var_1;
                        }
                    }
                }
            }
            for (int i_13 = 1; i_13 < 13;i_13 += 1)
            {
                var_29 = var_12;
                var_30 = (max(var_30, (!63736)));
            }
            for (int i_14 = 1; i_14 < 1;i_14 += 1)
            {
                arr_54 [i_7] [i_9 + 2] = (((14169 ? -1838588375 : 182)));
                arr_55 [i_7] [i_9 - 1] [i_14] [i_14] = var_1;
            }
            arr_56 [i_7] [i_7] = -1;
            arr_57 [i_7] = (arr_40 [i_7] [i_9 + 1] [i_9]);
        }
        /* LoopNest 3 */
        for (int i_15 = 0; i_15 < 15;i_15 += 1)
        {
            for (int i_16 = 2; i_16 < 14;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 15;i_17 += 1)
                {
                    {
                        arr_65 [i_7] [i_15] [i_16 - 2] [i_17] [i_7] [i_17] = var_19;
                        var_31 = ((65527 ? ((min(-1, (~83)))) : var_9));
                        var_32 = (((((min((arr_62 [i_16 - 1] [i_16] [i_7 + 1]), var_1)) + 2147483647)) >> (((var_2 + var_13) + 30516))));
                    }
                }
            }
        }
    }
    for (int i_18 = 0; i_18 < 18;i_18 += 1)
    {
        arr_69 [i_18] = (arr_13 [i_18]);
        arr_70 [i_18] = 18;
        var_33 = (18 ? -1 : -1536);
        var_34 = ((+((var_8 ? (!4353579361150816497) : (arr_24 [i_18] [i_18] [i_18] [i_18])))));
    }
    /* LoopNest 3 */
    for (int i_19 = 0; i_19 < 24;i_19 += 1)
    {
        for (int i_20 = 0; i_20 < 24;i_20 += 1)
        {
            for (int i_21 = 0; i_21 < 24;i_21 += 1)
            {
                {
                    arr_79 [i_21] = max(var_2, ((~(max(61440, var_12)))));
                    /* LoopNest 2 */
                    for (int i_22 = 1; i_22 < 22;i_22 += 1)
                    {
                        for (int i_23 = 2; i_23 < 22;i_23 += 1)
                        {
                            {
                                var_35 = (min((arr_14 [i_22 + 2] [i_21]), (max(1535, 14093164712558735119))));
                                var_36 = ((((min((max((arr_71 [i_19]), 22)), (arr_74 [i_19] [i_20] [i_21])))) ? var_13 : var_14));
                                arr_84 [i_21] [i_21] = (max(-126, 14093164712558735128));
                                arr_85 [i_19] [i_20] [i_21] [i_20] [i_22 + 2] [i_22] [1] = (arr_20 [i_19] [i_20] [24] [i_21]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
