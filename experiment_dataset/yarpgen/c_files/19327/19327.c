/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19327
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = -1185617348;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        arr_11 [i_1] [i_1] [i_1] [i_2] [i_3 + 1] = (~(!-547165667));
                        arr_12 [i_1] [10] [6] [i_0] [i_1] = ((((((arr_4 [4]) || (arr_10 [i_1])))) < 1175));
                    }
                    var_15 = (max(var_15, (((!(arr_10 [0]))))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            {
                                arr_19 [i_1] [i_2] = (arr_10 [i_1]);
                                arr_20 [i_1] = ((!(arr_5 [i_1] [i_1])));
                                var_16 = var_4;
                                arr_21 [i_0] [i_0] [i_0] [i_1] [i_0] = (max(var_6, (min((!var_1), ((-(arr_8 [i_0] [i_0] [4] [i_1])))))));
                            }
                        }
                    }
                }
            }
        }
        arr_22 [i_0] = 23692;
    }
    var_17 = 20155;
    var_18 = var_6;

    for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
    {
        arr_26 [i_6] = min(547165685, 4294967295);
        var_19 = (arr_2 [i_6]);
        arr_27 [i_6] = arr_9 [i_6] [i_6];
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 10;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 9;i_8 += 1)
            {
                {
                    var_20 = -1185617363;
                    arr_33 [i_6] [i_8] [i_6] [i_6] = (!-547165667);
                }
            }
        }
        var_21 -= var_0;
    }
    for (int i_9 = 0; i_9 < 10;i_9 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 10;i_10 += 1)
        {
            for (int i_11 = 3; i_11 < 6;i_11 += 1)
            {
                {
                    arr_42 [i_9] [i_9] = (max((244713308 < var_13), (max((arr_8 [i_11 + 1] [i_11 + 1] [i_11] [i_9]), (arr_36 [i_10] [i_11] [i_11])))));

                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        var_22 = (arr_7 [i_10] [i_9] [1]);
                        arr_47 [i_9] [i_10] [i_9] = ((!(((((!(arr_6 [i_10] [i_10])))) < (((arr_16 [i_11 - 1] [i_11 - 1]) % var_1))))));

                        /* vectorizable */
                        for (int i_13 = 0; i_13 < 10;i_13 += 1)
                        {
                            var_23 = (arr_28 [i_11 + 2]);
                            arr_50 [i_9] [i_10] [i_12] = (-(arr_8 [i_10] [11] [i_11 - 2] [i_9]));
                            arr_51 [i_9] [i_10] [i_11] [i_12] [i_13] = (((-3450706729000811153 < (arr_15 [i_9] [i_10] [i_10] [i_10] [i_13] [i_11]))));
                        }

                        for (int i_14 = 0; i_14 < 10;i_14 += 1)
                        {
                            arr_55 [i_14] [i_14] [i_9] = (~var_2);
                            var_24 = (max(var_24, (~1874075514)));
                            var_25 = (((max((min(var_8, 2147483647)), (~50080))) & (max(((max(var_10, (arr_10 [i_9])))), (arr_41 [i_9] [i_9] [i_9] [i_9])))));
                            var_26 = var_5;
                            var_27 += (min((max((arr_53 [i_11 - 1] [i_11 - 1] [i_11] [i_11 + 3] [i_11 + 1]), (arr_36 [i_9] [i_11 + 3] [i_11 + 3]))), (arr_53 [i_11 - 2] [i_11 + 4] [i_11 - 2] [i_11 + 1] [i_11 + 2])));
                        }
                    }
                    var_28 ^= (arr_44 [i_9]);
                    var_29 += 1;
                }
            }
        }
        arr_56 [i_9] [i_9] = (max(127, 2420891782));
        arr_57 [i_9] = ((~(arr_46 [i_9] [i_9])));
    }
    for (int i_15 = 0; i_15 < 10;i_15 += 1) /* same iter space */
    {
        var_30 ^= (!((min(4294967275, (max(1, 503187988))))));

        for (int i_16 = 0; i_16 < 10;i_16 += 1)
        {
            arr_62 [i_15] [i_15] [i_15] = (~(arr_48 [i_15] [i_15] [i_15] [2]));

            for (int i_17 = 0; i_17 < 10;i_17 += 1)
            {
                arr_67 [i_15] [i_16] [3] [3] |= (min((max(1906026563, 1874075541)), (((!(arr_10 [6]))))));
                arr_68 [i_17] [i_16] [i_15] = 1226799358;
                /* LoopNest 2 */
                for (int i_18 = 3; i_18 < 8;i_18 += 1)
                {
                    for (int i_19 = 2; i_19 < 9;i_19 += 1)
                    {
                        {
                            arr_76 [0] [0] [0] |= (((arr_13 [i_15] [i_16] [i_17] [i_18 - 1]) | ((-((~(arr_0 [i_19])))))));
                            arr_77 [i_15] [i_16] [i_19] [i_16] [i_16] [i_19 + 1] [i_19] = 511;
                            arr_78 [i_15] [i_15] [i_17] [i_19] [0] |= ((var_1 && (var_5 < -1633652026064828055)));
                            var_31 = (~var_12);
                            arr_79 [i_15] [i_19] [5] [i_19] = (min((6512349380803003224 == var_8), 13404));
                        }
                    }
                }
            }
            /* vectorizable */
            for (int i_20 = 0; i_20 < 10;i_20 += 1)
            {
                /* LoopNest 2 */
                for (int i_21 = 0; i_21 < 10;i_21 += 1)
                {
                    for (int i_22 = 0; i_22 < 10;i_22 += 1)
                    {
                        {
                            var_32 = (max(var_32, (arr_44 [i_15])));
                            var_33 = var_2;
                            arr_87 [i_22] = var_9;
                            var_34 = (arr_73 [i_20] [i_16] [i_20] [2] [i_20] [i_20]);
                        }
                    }
                }
                var_35 = (((var_10 * 1) < var_5));
            }
            for (int i_23 = 0; i_23 < 10;i_23 += 1)
            {
                var_36 = (~var_10);
                var_37 = (max(var_37, -974091592));
                var_38 = (max(var_38, (!var_10)));
            }
            var_39 = (max(var_39, 468336096));
        }
        for (int i_24 = 3; i_24 < 6;i_24 += 1) /* same iter space */
        {
            var_40 = ((((min(2207008473, (var_5 > 50)))) && (arr_65 [i_24 + 1] [i_24 - 3] [i_24 - 3] [i_24 + 4])));
            var_41 *= (min(((var_6 * (max(2674772767, (arr_66 [i_15]))))), var_7));
        }
        /* vectorizable */
        for (int i_25 = 3; i_25 < 6;i_25 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_26 = 0; i_26 < 10;i_26 += 1)
            {
                for (int i_27 = 0; i_27 < 10;i_27 += 1)
                {
                    {
                        var_42 = (arr_80 [6] [6] [i_25 + 3]);
                        var_43 = (arr_53 [i_25] [i_25] [3] [3] [i_26]);

                        for (int i_28 = 0; i_28 < 10;i_28 += 1)
                        {
                            var_44 = (max(var_44, (((var_4 >= (arr_30 [i_15] [i_25 - 1] [i_25] [6]))))));
                            arr_102 [i_26] [i_26] [i_26] [i_26] [i_28] = (((!(arr_48 [i_25] [7] [i_28] [i_27]))));
                            arr_103 [i_15] [8] [i_15] [i_27] [i_26] [i_15] = ((arr_31 [i_25 + 2] [i_26] [i_25 + 2]) && 8191);
                            var_45 = (arr_15 [i_26] [i_26] [i_26] [1] [i_25 - 3] [i_26]);
                            var_46 &= (((arr_64 [i_25 - 2] [i_26]) == -1412024035));
                        }
                        for (int i_29 = 0; i_29 < 10;i_29 += 1)
                        {
                            var_47 = -571381891;
                            arr_108 [i_15] [i_25] [i_26] [i_26] [i_15] [i_26] [i_26] = (~var_6);
                            var_48 += 23937;
                        }
                        var_49 = (max(var_49, ((((((((arr_91 [i_15] [i_25 - 1] [i_27]) | var_1)) + 2147483647)) << (((((((~9223372036854775807) - -9223372036854775787)) + 37)) - 16)))))));
                    }
                }
            }
            var_50 = (arr_24 [i_15] [i_25 + 3]);
        }
        var_51 = (max(var_51, var_1));
    }
    #pragma endscop
}
