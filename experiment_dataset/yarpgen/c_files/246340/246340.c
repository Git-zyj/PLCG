/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246340
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_4 [i_0] = ((3362754887 == ((var_6 ? (arr_0 [i_0]) : var_2))));

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                arr_10 [i_1] [i_1] [i_1] [i_1] &= ((-(arr_5 [i_0])));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        {
                            var_13 -= arr_12 [i_4];
                            var_14 = (min(var_14, (arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] [i_0])));
                        }
                    }
                }
                var_15 = (min(var_15, ((((!3339769320) ? (~var_12) : 3339769320)))));
                var_16 = (min(var_16, ((((~var_8) >= (((arr_6 [i_0]) ? (arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : 45)))))));
            }
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                arr_19 [i_0] [i_0] = ((var_2 ? 955197980 : (arr_7 [i_0] [i_0] [i_0])));
                var_17 &= (134217728 == -2032);
            }
            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {
                arr_22 [i_0] [i_1] [i_0] = (arr_18 [i_0]);
                var_18 = (max(var_18, (((((0 ? 40 : var_6)) % (arr_16 [i_0] [i_0] [i_0] [i_0] [i_1] [i_6]))))));
            }
            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                var_19 -= var_10;

                for (int i_8 = 1; i_8 < 20;i_8 += 1)
                {
                    var_20 = (min(var_20, ((((arr_17 [i_8 + 2] [i_7] [i_1] [i_1]) ? var_5 : (((arr_2 [i_0] [i_0]) ? var_5 : (arr_16 [i_0] [i_0] [i_0] [i_0] [17] [i_0]))))))));
                    var_21 = (arr_0 [i_0]);
                    arr_27 [i_1] [i_0] = (((var_3 < var_8) && (arr_26 [i_0])));
                }
                var_22 &= (arr_11 [i_0] [i_0] [i_7] [i_0]);
            }
            var_23 = ((var_9 < (((arr_13 [i_0] [i_1] [i_1] [i_0]) ? var_0 : var_1))));
            arr_28 [i_0] [i_0] = ((((arr_9 [i_0] [i_1]) | var_12)));
            var_24 = 955197980;
        }
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 23;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 23;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 23;i_11 += 1)
                {
                    {

                        for (int i_12 = 1; i_12 < 21;i_12 += 1)
                        {
                            var_25 = (min(var_25, (!var_12)));
                            arr_42 [i_12] [i_11] [i_0] [i_0] [i_0] [i_0] [i_0] = (955197975 + 3820024320);
                            arr_43 [i_9] [i_10] [i_10] [i_0] |= (932212436 == 955197975);
                        }
                        arr_44 [i_11] [i_0] [i_0] [i_0] = (arr_12 [i_0]);
                        arr_45 [i_0] [i_9] [i_0] [i_11] [i_9] = ((-(arr_35 [i_0] [i_9] [i_10] [i_11])));
                        var_26 &= ((-(arr_14 [i_11] [i_10] [i_9] [i_0])));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_13 = 0; i_13 < 23;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 23;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 23;i_15 += 1)
                {
                    {
                        var_27 = (!var_8);
                        arr_52 [i_0] [i_13] [i_0] [i_13] = -var_11;
                        var_28 = (min(var_28, (arr_5 [i_13])));
                        arr_53 [22] [i_0] [i_15] = (((((3800669711 ? 474942975 : -378))) ? (((~(arr_17 [i_15] [i_14] [i_13] [i_0])))) : var_12));
                    }
                }
            }
        }

        for (int i_16 = 0; i_16 < 23;i_16 += 1) /* same iter space */
        {
            arr_58 [i_0] [i_0] [i_0] = (((arr_38 [i_16] [i_16] [i_0] [i_0]) > (arr_8 [i_0])));
            /* LoopNest 2 */
            for (int i_17 = 0; i_17 < 23;i_17 += 1)
            {
                for (int i_18 = 2; i_18 < 22;i_18 += 1)
                {
                    {
                        var_29 = (((var_2 ? (arr_18 [i_0]) : (arr_3 [i_0]))));
                        var_30 = ((((((arr_61 [i_0] [i_16] [i_0] [i_18 - 2]) ? (arr_0 [i_0]) : 0))) ? (arr_23 [i_18] [i_0] [i_0]) : ((var_11 ? var_4 : var_3))));
                    }
                }
            }

            for (int i_19 = 0; i_19 < 23;i_19 += 1)
            {
                arr_65 [i_0] [i_16] [i_16] [i_19] = (arr_39 [i_19] [i_19] [i_0] [i_19] [i_19]);
                var_31 = 1;
            }
            for (int i_20 = 0; i_20 < 23;i_20 += 1)
            {
                var_32 = var_9;
                var_33 = ((3339769301 ? 3339769318 : 3339769333));
            }
            for (int i_21 = 2; i_21 < 22;i_21 += 1) /* same iter space */
            {
                var_34 *= ((1022 ? 41 : -13564));
                var_35 += (arr_15 [i_21]);
                var_36 &= -19370;
            }
            for (int i_22 = 2; i_22 < 22;i_22 += 1) /* same iter space */
            {
                var_37 = 16497;
                arr_76 [i_0] [i_16] [i_16] [i_0] = var_7;
            }
            var_38 = (arr_39 [i_0] [i_0] [i_0] [i_0] [6]);
        }
        for (int i_23 = 0; i_23 < 23;i_23 += 1) /* same iter space */
        {
            var_39 = (arr_57 [i_0] [i_0]);
            var_40 = 16055;

            for (int i_24 = 0; i_24 < 23;i_24 += 1)
            {
                arr_83 [i_0] [i_0] [i_0] = arr_56 [i_0] [i_23] [i_24];
                arr_84 [i_0] [7] [i_23] [i_0] = 396365122;
            }
            for (int i_25 = 0; i_25 < 23;i_25 += 1)
            {
                var_41 = (min(var_41, 474942957));
                var_42 = (arr_72 [i_0] [i_23] [i_25] [i_0]);
                var_43 = (max(var_43, (arr_60 [i_25] [i_0])));
            }
            /* LoopNest 2 */
            for (int i_26 = 0; i_26 < 23;i_26 += 1)
            {
                for (int i_27 = 0; i_27 < 23;i_27 += 1)
                {
                    {
                        arr_92 [i_0] [i_0] [i_23] [i_26] [i_23] = 41;
                        arr_93 [i_0] [i_26] [i_0] [i_23] [i_0] = (~var_10);
                        arr_94 [i_0] [i_0] [11] [i_0] = (((!var_7) & 26283));
                    }
                }
            }
        }
    }
    for (int i_28 = 1; i_28 < 21;i_28 += 1)
    {
        arr_98 [i_28] [i_28] = (max(((var_11 - ((var_8 - (arr_24 [12]))))), ((-(-127 - 1)))));
        var_44 = ((((((((arr_68 [i_28] [i_28] [22] [2]) ? var_2 : var_10))))) * (((3589257069 || var_9) ? 474942957 : (var_3 & 3718074575)))));
        var_45 = (max(0, (max(((max(39252, (arr_3 [i_28])))), 18446744073709551587))));
        var_46 = var_12;
    }
    for (int i_29 = 2; i_29 < 15;i_29 += 1)
    {
        /* LoopNest 2 */
        for (int i_30 = 0; i_30 < 17;i_30 += 1)
        {
            for (int i_31 = 0; i_31 < 17;i_31 += 1)
            {
                {

                    for (int i_32 = 0; i_32 < 17;i_32 += 1) /* same iter space */
                    {
                        arr_112 [i_29] [i_30] [i_32] [i_32] = 245;
                        arr_113 [i_29] [i_30] [i_32] [i_32] = ((130 * ((-(((arr_68 [10] [i_29 - 2] [i_29] [i_32]) ? var_4 : var_0))))));
                    }
                    for (int i_33 = 0; i_33 < 17;i_33 += 1) /* same iter space */
                    {
                        var_47 *= var_3;
                        var_48 = (max(var_48, ((min((((3362754913 >= var_6) / var_8)), (((((var_11 ? 3820024310 : (arr_36 [i_33] [i_30] [i_30])))) ? 611419152 : (((arr_17 [17] [i_30] [i_31] [i_33]) - var_9)))))))));
                        var_49 += (((arr_7 [i_29 - 1] [i_31] [i_29 - 1]) - (max((arr_71 [i_29] [i_29] [i_29 + 2]), (arr_50 [i_29 - 2] [i_29] [i_29 - 1] [i_29 + 2])))));
                    }
                    var_50 = (min(var_50, ((((3362754887 - 115) ? (max((((~(arr_74 [i_31] [i_31] [i_31])))), (min(var_0, 12179)))) : (((~(255 != 29)))))))));
                }
            }
        }
        var_51 = max((((var_4 ? var_5 : (arr_74 [i_29] [i_29 - 2] [i_29 + 1])))), (max((arr_74 [i_29] [i_29 + 1] [i_29]), 474942957)));
    }
    var_52 ^= ((var_10 ? var_6 : ((((max(var_10, -24214)))))));
    #pragma endscop
}
