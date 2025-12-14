/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238627
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 *= max(((((min(4294967295, 8)) == var_4))), var_3);
    var_19 ^= min(var_8, 46608);
    var_20 = 2181759206;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    var_21 = (!var_16);
                    var_22 = ((arr_5 [i_0]) & (arr_7 [i_2] [i_1] [i_0]));

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        var_23 = (!var_16);
                        arr_12 [i_0] [i_1] [i_1] [i_3] [i_0] = (((arr_11 [i_2] [i_2 + 1] [i_2 + 2] [i_2]) > -7));

                        for (int i_4 = 4; i_4 < 16;i_4 += 1)
                        {
                            var_24 ^= 4294967279;
                            var_25 = (arr_2 [i_0] [i_1]);
                            var_26 ^= var_6;
                        }

                        for (int i_5 = 2; i_5 < 15;i_5 += 1)
                        {
                            var_27 = ((6 ? 729742854 : (arr_10 [i_3] [i_3] [i_3] [i_3] [i_2 + 1] [i_1])));
                            arr_20 [i_3] [i_3] [i_3] [i_3] = ((var_3 ? 10173277200939938399 : (arr_16 [i_0] [i_1] [i_2] [i_1] [i_5 - 2] [i_2 + 2])));
                        }
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            var_28 = (var_6 & var_12);
                            var_29 = (min(var_29, 32767));
                        }
                        for (int i_7 = 3; i_7 < 16;i_7 += 1)
                        {
                            var_30 = ((!(arr_13 [i_0] [i_2] [i_7 - 3] [i_3] [i_7] [i_0] [i_3])));
                            var_31 += var_14;
                        }
                        for (int i_8 = 0; i_8 < 17;i_8 += 1)
                        {
                            var_32 = ((var_11 ? 2181759210 : var_8));
                            arr_28 [i_3] [i_1] [i_2] [i_3] [i_8] = (!var_15);
                        }

                        for (int i_9 = 0; i_9 < 17;i_9 += 1)
                        {
                            var_33 = 2113208086;
                            arr_31 [i_0] [i_0] [i_0] [i_0] [i_0] = arr_8 [i_2 - 1] [i_1] [i_2];
                            arr_32 [i_0] [i_1] [i_2] [i_3] [i_3] [i_9] = var_6;
                            var_34 = ((-((var_8 ? var_3 : var_10))));
                        }
                    }
                    for (int i_10 = 2; i_10 < 15;i_10 += 1)
                    {
                        arr_35 [i_0] [i_0] [i_0] [i_0] = -var_6;
                        arr_36 [i_0] [i_1] [i_1] [i_2] [i_10] = 8533575916320859277;
                        var_35 = (((((var_15 ? 23 : 2452215028093544911))) ? 0 : (arr_16 [i_10] [i_10] [i_10] [i_10] [i_10 - 2] [i_1])));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 17;i_11 += 1)
        {
            for (int i_12 = 3; i_12 < 15;i_12 += 1)
            {
                {
                    var_36 = var_6;
                    var_37 -= (((arr_30 [i_12 + 2] [i_12] [i_12]) ? -21456 : (arr_30 [i_12 + 1] [i_11] [i_11])));
                }
            }
        }
    }
    for (int i_13 = 0; i_13 < 22;i_13 += 1)
    {

        for (int i_14 = 0; i_14 < 22;i_14 += 1)
        {
            var_38 ^= var_17;

            /* vectorizable */
            for (int i_15 = 3; i_15 < 18;i_15 += 1)
            {
                arr_49 [i_15] = 38;
                var_39 += 11732;
                var_40 = (min(var_40, -var_4));
                var_41 = ((11195857904032747289 ? var_6 : ((10173277200939938399 ? var_3 : 11195857904032747289))));

                for (int i_16 = 0; i_16 < 22;i_16 += 1)
                {
                    arr_52 [i_13] [i_14] [i_15] [i_15] [i_15] [i_16] = 21514;
                    arr_53 [i_15] = var_10;
                }
            }
            for (int i_17 = 0; i_17 < 22;i_17 += 1)
            {
                var_42 = (var_16 & (min((((arr_43 [i_13] [i_13]) ? 46608 : var_2)), var_11)));

                for (int i_18 = 0; i_18 < 22;i_18 += 1)
                {
                    var_43 += ((((max(var_11, var_16)))));
                    var_44 = var_6;
                }
                /* vectorizable */
                for (int i_19 = 0; i_19 < 22;i_19 += 1)
                {
                    arr_60 [i_19] [i_17] [i_14] [i_13] = ((!(arr_57 [i_19] [i_13])));
                    var_45 = var_11;
                    var_46 = -var_5;
                }
                for (int i_20 = 0; i_20 < 22;i_20 += 1)
                {
                    arr_64 [i_20] [i_17] [i_14] [i_14] [i_13] [i_13] = (max((min((min(var_12, var_6)), (min(70368744176640, 38)))), var_5));
                    arr_65 [i_13] [i_14] = (min((max(((min(var_16, var_12))), var_9)), 0));
                }
            }
            for (int i_21 = 0; i_21 < 22;i_21 += 1)
            {
                var_47 = (((min(((var_11 ? var_14 : var_14)), 30653)) * (((var_8 ? var_4 : 44022)))));
                var_48 = ((max((arr_63 [i_21] [i_14] [i_14] [i_13]), var_5)));
                /* LoopNest 2 */
                for (int i_22 = 0; i_22 < 22;i_22 += 1)
                {
                    for (int i_23 = 0; i_23 < 22;i_23 += 1)
                    {
                        {
                            var_49 = (~((var_17 ? var_10 : (arr_46 [i_13] [i_13] [i_13]))));
                            var_50 *= ((~((~((min(28466, var_11)))))));
                        }
                    }
                }
            }
        }
        var_51 ^= 37070;
    }
    /* vectorizable */
    for (int i_24 = 0; i_24 < 17;i_24 += 1)
    {
        arr_78 [i_24] = (!163);
        var_52 = (((arr_51 [i_24] [i_24] [i_24]) | 7250886169676804326));
        var_53 &= ((var_3 ? var_9 : (arr_15 [i_24] [i_24] [i_24])));
        arr_79 [i_24] [i_24] = var_4;
        /* LoopNest 2 */
        for (int i_25 = 1; i_25 < 14;i_25 += 1)
        {
            for (int i_26 = 1; i_26 < 13;i_26 += 1)
            {
                {
                    var_54 = ((var_8 ? (~445870550) : var_5));
                    var_55 = var_8;
                    var_56 += var_15;
                    var_57 = (!var_5);
                }
            }
        }
    }
    #pragma endscop
}
