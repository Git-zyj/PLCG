/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29212
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 8;i_3 += 1)
                {
                    {
                        arr_14 [i_0] = ((((!(min(1, (arr_12 [i_1])))))));
                        var_20 ^= 1;
                        arr_15 [9] [i_1] [i_2] [i_0] [i_3 + 2] = var_13;
                    }
                }
            }
        }
        arr_16 [i_0] [i_0] = ((-var_0 % (arr_1 [i_0])));

        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            /* LoopNest 3 */
            for (int i_5 = 2; i_5 < 9;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 11;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        {
                            var_21 ^= var_7;
                            arr_29 [i_0] [i_6] [i_0] [i_4] [i_0] = (((((((((1 < (arr_18 [i_4] [i_5] [i_7])))) == (((!(arr_28 [i_0 - 2] [i_5])))))))) - var_0));
                            arr_30 [i_0] [i_6] [i_0] = (((min(14636, var_4))) && ((-1 && (arr_23 [i_0 - 1] [i_0 + 2]))));
                        }
                    }
                }
            }
            arr_31 [i_0] = (min(var_19, 5485622883845788104));
        }
        for (int i_8 = 1; i_8 < 1;i_8 += 1) /* same iter space */
        {
            arr_35 [i_0 + 1] [i_0] = var_16;

            for (int i_9 = 0; i_9 < 0;i_9 += 1)
            {
                arr_38 [i_0] = -5788058781765184216;
                var_22 = (max(var_22, var_12));
                arr_39 [i_0] [i_0] [i_0] = 85;
            }
            for (int i_10 = 0; i_10 < 11;i_10 += 1)
            {
                arr_44 [i_0] [i_10] = ((!(arr_4 [i_0] [i_8] [i_10])));
                var_23 ^= var_0;
            }
        }
        for (int i_11 = 1; i_11 < 1;i_11 += 1) /* same iter space */
        {
            arr_47 [1] [i_0] = ((~(arr_41 [i_0 - 1] [i_0] [i_11 - 1])));
            arr_48 [i_0] = var_6;
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                for (int i_13 = 3; i_13 < 7;i_13 += 1)
                {
                    {
                        arr_57 [i_0] [i_0] [9] [i_13] = (arr_56 [i_0]);
                        var_24 = (max(var_24, 20709));

                        for (int i_14 = 0; i_14 < 11;i_14 += 1)
                        {
                            arr_61 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (((!(-102 && 64))) && 3661923509);
                            arr_62 [i_11] [i_0] [i_0] [i_11] = var_17;
                        }
                        var_25 ^= var_18;
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_15 = 0; i_15 < 1;i_15 += 1)
            {
                for (int i_16 = 2; i_16 < 10;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 11;i_17 += 1)
                    {
                        {
                            var_26 ^= (arr_53 [8] [i_15] [i_16] [8]);
                            var_27 ^= 921746782382036303;
                            var_28 = 1;
                        }
                    }
                }
            }

            for (int i_18 = 0; i_18 < 11;i_18 += 1)
            {
                var_29 = (((((arr_20 [i_0] [i_0]) && (max((arr_66 [i_0] [10] [i_0] [i_0]), 1))))) != (arr_3 [3]));
                var_30 = (!1);
            }
        }
    }
    for (int i_19 = 0; i_19 < 1;i_19 += 1)
    {

        for (int i_20 = 1; i_20 < 13;i_20 += 1)
        {
            /* LoopNest 2 */
            for (int i_21 = 0; i_21 < 14;i_21 += 1)
            {
                for (int i_22 = 0; i_22 < 14;i_22 += 1)
                {
                    {
                        var_31 = (((((2040221166 && 2035082732964329045) ? var_17 : (arr_76 [i_21] [i_20]))) + 6));
                        var_32 = 1;
                        var_33 ^= -4978379682369763588;
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_23 = 2; i_23 < 12;i_23 += 1)
            {
                for (int i_24 = 0; i_24 < 14;i_24 += 1)
                {
                    for (int i_25 = 1; i_25 < 1;i_25 += 1)
                    {
                        {
                            var_34 = var_0;
                            arr_93 [i_19] [i_20] [i_23] [i_24] [i_25] = 58453;
                            var_35 ^= (((~-3169888424706754682) % ((~(arr_81 [i_25])))));
                            arr_94 [i_20] = 8384512;
                        }
                    }
                }
            }
        }
        for (int i_26 = 0; i_26 < 1;i_26 += 1)
        {
            arr_99 [i_19] [i_19] [i_26] = var_0;
            arr_100 [i_19] [i_19] [i_26] = var_18;
        }
        for (int i_27 = 0; i_27 < 14;i_27 += 1)
        {
            arr_103 [i_27] = (max(var_18, -102));
            var_36 = (min(var_36, 15441491963363804974));
            var_37 = (((((arr_77 [i_19] [i_19]) / (arr_95 [i_27]))) == (max((arr_90 [i_19]), (arr_95 [i_27])))));
            arr_104 [i_19] [i_27] = ((var_6 && (((var_17 % -59) != 1))));
            arr_105 [i_27] [i_27] [i_27] = (-32760 && 184);
        }
        arr_106 [i_19] = (((((~(arr_80 [1] [i_19] [i_19])))) ? -67 : -7));
        var_38 = (min(var_38, (((13877901781522534395 < ((((var_8 / (arr_75 [i_19]))) - -85)))))));
        var_39 ^= ((+(((((max((arr_81 [i_19]), (arr_80 [i_19] [i_19] [i_19])))) < var_16)))));
    }
    for (int i_28 = 2; i_28 < 23;i_28 += 1)
    {
        var_40 = (min(-var_1, ((((arr_107 [10]) ? (~11) : (((!(arr_109 [1])))))))));
        var_41 = (arr_107 [i_28]);
        /* LoopNest 2 */
        for (int i_29 = 0; i_29 < 24;i_29 += 1)
        {
            for (int i_30 = 0; i_30 < 24;i_30 += 1)
            {
                {
                    var_42 = (min(5138529731229109676, 1));

                    for (int i_31 = 0; i_31 < 24;i_31 += 1) /* same iter space */
                    {
                        arr_119 [i_28] [i_29] [i_30] [i_31] [22] = (((((0 ? 38040 : 78))) / ((266511276 - (!1)))));
                        arr_120 [i_28] [i_31] [i_30] [i_30] [i_28] = ((~((((min((arr_116 [i_28] [i_29] [i_29] [i_31] [i_30]), 2181794105)) == (((min(42822, var_15)))))))));
                    }
                    for (int i_32 = 0; i_32 < 24;i_32 += 1) /* same iter space */
                    {
                        var_43 = -7;
                        var_44 = 0;
                        var_45 = (min(var_45, var_13));
                    }
                }
            }
        }
        arr_125 [i_28] = ((var_18 ? var_2 : (max(4289695763, ((-3399 ? 2938508864 : (arr_123 [11])))))));

        /* vectorizable */
        for (int i_33 = 4; i_33 < 23;i_33 += 1)
        {
            var_46 = (((arr_116 [i_28] [i_28 - 1] [i_28 - 1] [i_28] [3]) >> (-var_18 + 69)));
            arr_128 [i_28] = ((1356458432 + (arr_110 [i_28] [i_28 + 1])));
            arr_129 [i_28] [i_28] = ((+((((arr_124 [i_28] [i_28 - 2]) && (arr_122 [i_28] [i_28] [i_28] [i_28] [i_33] [i_33]))))));
            var_47 = var_14;
        }
    }
    var_48 = (((1 - 0) - var_10));
    var_49 ^= 31741;
    #pragma endscop
}
