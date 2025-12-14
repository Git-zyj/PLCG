/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222849
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_14 = (!65531);
                var_15 = ((-(arr_1 [i_1])));
            }
        }
    }

    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 22;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    {

                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            var_16 = (max(22, ((((arr_10 [i_4 - 1] [i_4 - 1]) || (arr_17 [14] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1]))))));
                            var_17 = (arr_8 [i_6]);
                            var_18 = var_5;
                            var_19 = (min(var_19, (((17 || ((!(arr_16 [i_4 + 1] [i_4 + 1] [i_4] [i_4 - 1] [i_6]))))))));
                        }
                        var_20 = (!10);
                        arr_18 [i_2] = ((var_11 == (arr_10 [i_2] [i_2])));
                    }
                }
            }
            var_21 = (arr_8 [i_2]);
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 23;i_8 += 1)
                {
                    {
                        var_22 *= ((((max(((min((arr_16 [i_2] [i_2] [i_2] [i_7] [11]), (arr_19 [i_2] [i_2] [i_2] [i_2])))), (arr_5 [i_2])))) || 65534));

                        for (int i_9 = 1; i_9 < 22;i_9 += 1)
                        {
                            arr_28 [i_2] [i_8] = (min(((var_11 ? (arr_19 [6] [6] [i_2] [i_2]) : -18)), var_3));
                            var_23 = (arr_4 [8] [i_8]);
                        }
                        var_24 = 17;
                        arr_29 [i_2] [i_3] [i_2] [i_8] [i_3] = var_8;
                        var_25 = ((var_6 || ((((arr_23 [i_2]) & (arr_16 [i_2] [i_2] [i_2] [i_2] [i_2]))))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_10 = 1; i_10 < 21;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 23;i_11 += 1)
            {
                {
                    var_26 = (min((min((min(65512, -1314882354)), (((arr_20 [i_2] [i_2] [i_11]) & var_1)))), (arr_15 [i_2] [i_2] [i_2] [i_2] [i_11])));
                    var_27 = max((arr_11 [i_2] [i_10 + 2] [i_2]), (max(54075, 113)));

                    /* vectorizable */
                    for (int i_12 = 0; i_12 < 23;i_12 += 1)
                    {
                        var_28 |= 255;

                        for (int i_13 = 0; i_13 < 23;i_13 += 1)
                        {
                            var_29 = (arr_9 [i_2] [i_2] [i_2] [i_2]);
                            var_30 = ((-(arr_24 [i_2])));
                        }
                        arr_41 [i_2] [i_10] [i_11] [i_10] = (((arr_20 [10] [i_10 + 1] [i_10 + 2]) ? (arr_20 [i_10 + 1] [i_10] [i_10 + 1]) : var_3));
                    }
                    for (int i_14 = 0; i_14 < 23;i_14 += 1)
                    {
                        var_31 -= ((!(((10 ? 63 : 114)))));
                        arr_44 [i_2] [i_10] [i_10] [i_10 + 2] [i_11] [i_14] = min(((+(((arr_4 [i_2] [i_10 + 1]) | 255)))), ((0 ? (~255) : (arr_36 [20] [i_10 + 1] [6]))));
                        var_32 = (+(max((arr_5 [i_10 + 2]), (arr_5 [i_10 + 2]))));
                        var_33 = (((arr_36 [i_2] [i_10 + 1] [i_11]) & 255));
                    }
                    /* vectorizable */
                    for (int i_15 = 1; i_15 < 21;i_15 += 1)
                    {
                        var_34 -= (arr_32 [i_2] [i_11] [i_2] [1]);
                        arr_48 [i_2] [i_10] [i_11] [i_2] [i_2] [i_15] = var_5;
                    }
                    for (int i_16 = 0; i_16 < 23;i_16 += 1)
                    {
                        var_35 *= (arr_46 [6]);
                        arr_52 [i_2] [i_11] [19] = 63;
                    }
                    var_36 *= (((((19 & 89) & (var_12 * -45))) == ((min(var_8, (arr_15 [i_2] [i_10 - 1] [i_10 - 1] [i_10 + 2] [i_2]))))));
                    arr_53 [i_2] [i_10] [i_11] = ((var_13 != (min(var_1, (arr_30 [i_2] [5] [11])))));
                }
            }
        }
    }
    var_37 *= var_0;

    /* vectorizable */
    for (int i_17 = 2; i_17 < 22;i_17 += 1)
    {
        arr_56 [i_17] = (arr_49 [i_17 - 2] [i_17 - 2] [i_17] [i_17] [16] [16]);

        for (int i_18 = 0; i_18 < 23;i_18 += 1)
        {

            for (int i_19 = 0; i_19 < 23;i_19 += 1)
            {
                var_38 = ((-110 ? (arr_24 [i_17 - 1]) : ((-(arr_15 [i_17] [i_17] [i_18] [i_19] [i_19])))));

                for (int i_20 = 1; i_20 < 19;i_20 += 1)
                {
                    arr_63 [i_18] [i_18] = -14;
                    arr_64 [i_17] [i_17] [i_17 - 2] [i_17] [i_17] = var_6;
                }
                for (int i_21 = 0; i_21 < 23;i_21 += 1)
                {
                    arr_67 [i_17] [i_18] [i_21] [i_18] [i_21] = var_4;
                    var_39 = (min(var_39, (((~var_8) ? var_1 : (arr_46 [i_19])))));
                    var_40 = 166;
                }
                arr_68 [i_17 - 2] [21] [i_19] [i_19] = ((93 < (arr_15 [i_19] [i_17 - 1] [i_17] [i_17 - 2] [i_17])));
            }
            var_41 = (((arr_13 [i_17 + 1] [i_18] [i_17] [i_17 + 1] [16] [i_17]) & (arr_27 [i_17 - 2] [i_18])));
        }
        for (int i_22 = 0; i_22 < 23;i_22 += 1)
        {
            arr_71 [20] [20] = ((15 || (~var_6)));
            arr_72 [i_22] [i_17] [i_17] = (((((var_6 ? (arr_27 [22] [i_22]) : var_6))) ? (arr_4 [i_17 + 1] [i_17 - 1]) : 37));
        }
        for (int i_23 = 1; i_23 < 22;i_23 += 1)
        {
            var_42 = (((arr_12 [i_23] [i_23] [i_17 - 1] [i_17]) || 46));
            var_43 = (var_11 ^ var_0);
            var_44 = var_8;
        }
    }
    /* vectorizable */
    for (int i_24 = 0; i_24 < 17;i_24 += 1)
    {

        for (int i_25 = 1; i_25 < 15;i_25 += 1)
        {
            var_45 = (max(var_45, (arr_54 [i_25])));
            /* LoopNest 3 */
            for (int i_26 = 1; i_26 < 16;i_26 += 1)
            {
                for (int i_27 = 0; i_27 < 17;i_27 += 1)
                {
                    for (int i_28 = 1; i_28 < 16;i_28 += 1)
                    {
                        {
                            var_46 = (14 ? 11722813 : -21);
                            var_47 = (min(var_47, var_0));
                        }
                    }
                }
            }
            arr_89 [i_24] [i_25] [i_25] |= (var_8 << (((arr_4 [i_24] [i_25]) - 88470949)));
        }
        /* LoopNest 3 */
        for (int i_29 = 0; i_29 < 17;i_29 += 1)
        {
            for (int i_30 = 3; i_30 < 15;i_30 += 1)
            {
                for (int i_31 = 1; i_31 < 15;i_31 += 1)
                {
                    {
                        var_48 -= ((!(!var_10)));

                        for (int i_32 = 3; i_32 < 16;i_32 += 1)
                        {
                            arr_99 [i_24] [13] = var_6;
                            var_49 = (!var_0);
                        }
                        var_50 = (((var_5 | var_13) | (arr_49 [i_31] [i_31] [i_31 + 1] [i_30 + 2] [i_30] [i_30])));
                    }
                }
            }
        }
        var_51 = (max(var_51, (arr_40 [i_24] [22] [9] [13] [i_24] [22] [4])));
    }
    var_52 &= ((!(((65519 ? (!-1) : var_13)))));
    #pragma endscop
}
