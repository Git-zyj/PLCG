/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53931
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += ((1 < var_8) < ((-(var_19 | var_6))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_21 = (arr_4 [i_0] [i_0] [i_1]);
            var_22 *= (arr_2 [i_1]);
        }
        for (int i_2 = 1; i_2 < 17;i_2 += 1)
        {
            var_23 ^= ((((~(arr_4 [i_0] [i_0] [i_2]))) | var_15));
            arr_10 [i_0] [i_0] [i_2] = (((arr_6 [i_2 + 1] [i_2 - 1] [i_2 - 1]) ? var_0 : (arr_1 [i_2 - 1])));
            var_24 = (max(var_24, (((((arr_4 [i_2] [17] [i_0]) & (arr_2 [i_2])))))));
            var_25 = ((arr_1 [i_0]) >= ((var_11 ? var_3 : var_14)));
        }
        /* LoopNest 3 */
        for (int i_3 = 3; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 15;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    {
                        var_26 = (((arr_14 [i_3 - 3] [i_4] [i_4 + 1]) ? (arr_14 [i_3 - 2] [5] [i_4 - 1]) : (arr_8 [i_3 - 3] [i_4 + 1] [i_4 - 1])));
                        var_27 -= var_14;

                        for (int i_6 = 1; i_6 < 16;i_6 += 1)
                        {
                            arr_21 [i_0] [i_6] [i_4] [9] [9] = (arr_14 [i_3] [i_5] [i_3]);
                            var_28 = (min(var_28, (arr_4 [i_6 + 1] [i_6 + 1] [i_6 + 2])));
                            var_29 = -3770757027853435613;
                        }
                        for (int i_7 = 4; i_7 < 16;i_7 += 1)
                        {
                            var_30 = (min(var_30, ((((var_19 ? 81 : (arr_13 [i_0])))))));
                            var_31 = (max(var_31, (arr_15 [i_0] [3] [i_4 - 1] [i_5] [i_7 + 2])));
                        }
                        for (int i_8 = 3; i_8 < 16;i_8 += 1)
                        {
                            var_32 ^= (arr_14 [1] [i_3] [i_3]);
                            var_33 = var_3;
                            arr_28 [i_8] = (((arr_23 [i_8] [i_8] [i_8 - 1] [i_8] [i_8]) ? (arr_23 [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8] [i_8]) : var_3));
                        }
                        var_34 = (((((!(arr_16 [i_3] [i_4])))) < (arr_23 [6] [i_4 + 3] [i_3] [i_4 + 3] [i_3])));
                        arr_29 [i_3] [i_3] [i_3 + 1] [14] = (((arr_14 [i_3 - 1] [i_3 - 3] [i_3 + 1]) + (arr_14 [i_3 - 3] [i_3 + 1] [i_3 - 3])));
                    }
                }
            }
        }

        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {

            for (int i_10 = 1; i_10 < 16;i_10 += 1)
            {
                var_35 = (((arr_30 [i_9]) ? var_12 : ((((var_4 + 2147483647) << (((((arr_17 [i_0]) + 115)) - 15)))))));

                for (int i_11 = 0; i_11 < 18;i_11 += 1)
                {
                    var_36 = (((arr_12 [i_9] [i_10 + 1] [i_11]) ? ((((arr_14 [i_11] [1] [1]) ? (arr_19 [i_9] [i_11] [i_10] [i_11] [6] [i_0] [i_0]) : var_6))) : var_2));
                    var_37 = (48946 | -93);
                }
                for (int i_12 = 3; i_12 < 16;i_12 += 1)
                {
                    var_38 = var_9;
                    var_39 |= ((1 ? (((var_1 ? var_6 : 1))) : ((var_13 ? var_11 : var_15))));
                }
                var_40 = (max(var_40, ((((arr_23 [i_0] [i_0] [i_9] [i_9] [i_10 + 1]) < var_1)))));
                arr_41 [i_0] [i_9] = (!var_6);
            }
            for (int i_13 = 0; i_13 < 18;i_13 += 1)
            {
                var_41 *= ((var_17 ? var_5 : var_0));
                var_42 += ((var_1 < (arr_15 [i_0] [i_0] [i_0] [i_13] [i_0])));
                var_43 = ((-(((arr_3 [i_0] [i_9] [i_13]) ? var_1 : var_11))));
            }
            for (int i_14 = 0; i_14 < 1;i_14 += 1) /* same iter space */
            {
                arr_48 [i_0] [i_9] [i_9] [i_9] = (((arr_46 [i_0] [i_9] [i_9]) < var_5));
                arr_49 [i_0] [i_9] [i_9] [i_0] &= ((arr_4 [i_0] [i_9] [i_14]) ? (arr_4 [i_0] [i_9] [i_9]) : (arr_14 [i_9] [i_9] [i_0]));
                var_44 = -var_18;
            }
            for (int i_15 = 0; i_15 < 1;i_15 += 1) /* same iter space */
            {
                arr_53 [i_0] [i_9] [i_9] = var_16;
                var_45 = (max(var_45, ((((((arr_8 [i_15] [i_9] [i_0]) ? var_6 : (arr_13 [i_0]))) < (arr_1 [i_0]))))));
                var_46 = (max(var_46, (((((arr_44 [i_0] [i_0] [i_15]) ? 3103454351354176439 : (arr_13 [2])))))));
                var_47 -= (!var_4);
                arr_54 [i_0] [i_9] [i_0] [7] = (((arr_20 [i_0] [i_9] [15] [i_15]) ? (arr_20 [i_9] [i_9] [i_15] [i_0]) : var_12));
            }
            arr_55 [i_9] = ((-88 ? var_16 : (var_10 | var_6)));
            arr_56 [i_9] = var_18;
            var_48 *= (((arr_2 [i_9]) ? (-2137358074214854547 ^ var_12) : (((var_2 << (var_7 - 7577482747619675204))))));
        }
        arr_57 [i_0] = var_19;
    }
    for (int i_16 = 0; i_16 < 18;i_16 += 1) /* same iter space */
    {
        arr_62 [i_16] [i_16] = var_7;
        var_49 *= (((((var_17 * (max((arr_16 [i_16] [i_16]), (arr_6 [i_16] [i_16] [i_16])))))) | (min((max((arr_9 [10]), var_13)), var_11))));
    }
    var_50 = ((((max(-0, -2137358074214854526))) ? (min(((1 ? 1 : 1)), 40)) : 239));

    for (int i_17 = 4; i_17 < 22;i_17 += 1)
    {
        var_51 = var_15;
        var_52 = -806205490549728257;
    }
    for (int i_18 = 0; i_18 < 1;i_18 += 1)
    {
        var_53 = (~var_11);
        arr_67 [i_18] = (min((((~var_12) | 1)), (max(((var_12 ? (arr_43 [i_18] [0] [i_18] [i_18]) : var_12)), ((max(var_10, var_14)))))));
        arr_68 [i_18] = (((((-((var_11 ? var_18 : var_13))))) ? (((((var_3 ? var_18 : (arr_27 [i_18] [i_18] [16] [i_18] [2])))) ? (~1) : (min(-1, -2137358074214854526)))) : 1));
        var_54 = var_9;
    }
    for (int i_19 = 0; i_19 < 15;i_19 += 1)
    {
        var_55 = ((-(!-8675167078226171058)));
        var_56 = ((var_8 | ((((arr_52 [i_19] [i_19] [i_19]) >= var_16)))));
        var_57 ^= (max((((arr_22 [i_19] [i_19] [9] [i_19] [i_19] [i_19] [i_19]) ? (~var_7) : -1)), ((min((((arr_61 [i_19] [1]) << 1)), ((max(var_3, (arr_36 [i_19] [0])))))))));
    }
    #pragma endscop
}
