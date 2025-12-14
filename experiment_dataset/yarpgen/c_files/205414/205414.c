/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205414
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_6, ((max(((var_1 ? var_0 : var_5)), ((var_6 ? var_7 : var_1)))))));

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    var_11 = min((min(var_7, (((arr_0 [i_0]) & (arr_5 [i_0] [i_0] [1] [i_0]))))), (arr_8 [i_0] [i_0 + 1] [i_2 + 1]));
                    var_12 = ((-((~(max((arr_8 [6] [i_2 - 1] [5]), var_8))))));

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            var_13 = (min(var_13, (((+(((arr_6 [8]) + 2288851446077898820)))))));
                            var_14 &= ((!(arr_6 [i_1])));
                        }
                        for (int i_5 = 0; i_5 < 18;i_5 += 1)
                        {
                            var_15 |= ((((min(var_1, 2147483632))) ? ((max((min((arr_17 [10] [i_2 - 1] [i_2 - 1] [i_1] [i_0]), var_3)), 8259209693523739707))) : ((((((arr_8 [i_2] [i_3] [i_5]) >> (((arr_8 [i_0] [i_2 + 1] [i_3]) - 84))))) ? (arr_5 [i_1] [i_1] [i_1] [i_1]) : (arr_15 [i_0 - 2] [8] [i_2 + 1] [i_2 + 1] [i_5])))));
                            var_16 = ((!((max((arr_10 [i_0 - 2] [i_0 - 2]), ((((arr_6 [i_0 - 2]) || var_1))))))));
                            var_17 = (((arr_4 [i_2] [i_2] [i_2]) ? -16 : ((((var_9 == (arr_13 [i_3] [i_2 + 1] [15] [i_3] [i_0 - 1] [i_3])))))));
                        }
                        /* vectorizable */
                        for (int i_6 = 3; i_6 < 17;i_6 += 1)
                        {
                            var_18 = ((!(arr_6 [i_2 - 1])));
                            var_19 = (+(((arr_4 [i_1] [i_3] [i_6]) ? (arr_15 [i_0] [i_1] [i_2] [i_3] [13]) : (arr_16 [i_6] [4] [i_2] [4] [i_0]))));
                        }
                        for (int i_7 = 3; i_7 < 17;i_7 += 1)
                        {
                            var_20 = ((((min(var_6, (arr_20 [i_2])))) ? ((((!((min((arr_0 [i_1]), (arr_16 [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7])))))))) : (min(13, ((min(65535, 1)))))));
                            var_21 = ((!(arr_9 [i_0] [i_0] [i_2])));
                            var_22 = ((!(~var_7)));
                            var_23 *= (arr_11 [i_3] [i_2] [8] [i_0]);
                        }
                        var_24 = (min(var_24, (arr_14 [i_0])));
                        var_25 = (max(7, -4294967286));
                        var_26 = (min((arr_6 [i_0 + 1]), (max((arr_9 [i_0 + 1] [i_2] [i_2 - 1]), (arr_14 [i_0 + 1])))));
                    }
                }
            }
        }
        var_27 = ((~((3050 ? -5488650535065694642 : 115))));
        var_28 &= -1;
    }
    /* vectorizable */
    for (int i_8 = 1; i_8 < 19;i_8 += 1)
    {
        var_29 = 1969532798;

        for (int i_9 = 0; i_9 < 22;i_9 += 1)
        {
            var_30 = ((!(arr_29 [i_8 + 3])));
            var_31 = ((-(~-2220953587914518291)));
            var_32 -= (((arr_28 [i_8 + 1] [i_8 + 1]) << (((arr_29 [i_8 + 1]) + 77))));
            var_33 = (arr_28 [16] [5]);
            var_34 = (-(arr_25 [i_8 + 1]));
        }
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            var_35 = ((((!(arr_23 [17]))) ? (arr_27 [i_10] [i_10] [i_10]) : (arr_22 [i_8 - 1])));
            var_36 = ((3924965098 - (arr_28 [2] [i_8 - 1])));
            var_37 |= ((!(arr_30 [i_8 + 2] [i_8 - 1] [i_8 + 2])));
            var_38 |= ((2841285889 ? 24327 : 17687190576393244600));
            var_39 = (!-39);
        }
        for (int i_11 = 1; i_11 < 18;i_11 += 1)
        {

            for (int i_12 = 0; i_12 < 22;i_12 += 1)
            {
                var_40 = (arr_33 [i_8 - 1]);
                var_41 = ((!(arr_23 [i_11 + 2])));
            }
            var_42 = (arr_29 [i_8]);
            var_43 *= (arr_34 [i_11 + 2] [i_11 + 2]);
            var_44 = ((~(arr_31 [i_11 + 2] [i_11] [i_8 + 2])));
        }
        for (int i_13 = 0; i_13 < 22;i_13 += 1)
        {
            var_45 = var_2;

            for (int i_14 = 1; i_14 < 21;i_14 += 1)
            {
                var_46 = ((~(arr_31 [2] [i_14 + 1] [i_14 - 1])));
                var_47 = ((-(arr_26 [i_13] [i_14])));
                var_48 = (((arr_31 [i_8 + 2] [i_8 + 2] [i_14 + 1]) >> (arr_31 [i_8] [i_8 + 1] [i_14 + 1])));
                var_49 *= (arr_38 [i_13] [i_13]);
            }
            for (int i_15 = 0; i_15 < 22;i_15 += 1)
            {
                var_50 = var_5;
                var_51 = var_4;
            }

            for (int i_16 = 0; i_16 < 22;i_16 += 1)
            {
                var_52 |= (arr_43 [i_8 + 3] [i_8 + 1] [i_8 + 3]);
                var_53 = (~4320307515467034285);
                var_54 = arr_25 [i_8 + 1];
            }
            for (int i_17 = 0; i_17 < 22;i_17 += 1)
            {
                var_55 = 65535;
                var_56 |= (arr_37 [5] [i_8 + 2]);

                for (int i_18 = 0; i_18 < 22;i_18 += 1) /* same iter space */
                {
                    var_57 = ((-(~57740)));
                    var_58 *= ((!(!18446744073709551615)));
                }
                for (int i_19 = 0; i_19 < 22;i_19 += 1) /* same iter space */
                {
                    var_59 = (max(var_59, (!var_2)));
                    var_60 = (((arr_45 [i_13] [i_13] [i_13]) ? (((15242 ? (arr_32 [i_13] [i_17]) : 54))) : ((0 ? (arr_46 [11] [i_13] [i_17] [i_19]) : var_9))));
                }
                for (int i_20 = 0; i_20 < 22;i_20 += 1) /* same iter space */
                {
                    var_61 = 54946;
                    var_62 |= 0;
                }
                var_63 = var_1;
            }
            for (int i_21 = 0; i_21 < 22;i_21 += 1)
            {
                var_64 = (arr_26 [i_8 - 1] [i_13]);
                var_65 &= var_8;
            }
            var_66 = (arr_26 [i_8] [i_13]);
        }
        var_67 = (arr_36 [i_8 + 1]);
        var_68 = (arr_60 [i_8 + 1] [i_8] [i_8 + 3] [i_8]);
    }
    var_69 = 2477960478287300408;
    #pragma endscop
}
