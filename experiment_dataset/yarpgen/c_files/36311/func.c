/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36311
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_10 |= ((/* implicit */unsigned short) max((((((/* implicit */long long int) ((2924374037U) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-11)))))) * (((long long int) (short)7)))), (((arr_2 [i_0]) & (arr_2 [i_0])))));
        var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_0 [i_0]) - (arr_0 [i_0])))) ? (((/* implicit */int) ((unsigned short) arr_0 [i_0]))) : (((int) arr_0 [i_0]))));
        var_12 *= ((/* implicit */signed char) ((long long int) ((long long int) ((long long int) var_1))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 22; i_1 += 4) 
    {
        var_13 = ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1)))) > (((((/* implicit */_Bool) var_3)) ? (var_0) : (((/* implicit */int) var_4)))));
        var_14 = ((((/* implicit */_Bool) var_4)) ? (arr_3 [i_1] [i_1]) : (((/* implicit */long long int) arr_4 [i_1] [i_1])));
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 3; i_2 < 21; i_2 += 4) 
        {
            var_15 ^= ((/* implicit */long long int) ((arr_5 [i_2 - 1] [i_2 - 3] [i_2 - 3]) > (((/* implicit */long long int) ((unsigned int) (short)18)))));
            arr_9 [i_1] = ((/* implicit */unsigned short) (~(arr_3 [i_2 + 1] [i_2])));
            arr_10 [i_2] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) var_0))) ? (((unsigned int) var_7)) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
        }
        /* LoopSeq 4 */
        for (long long int i_3 = 0; i_3 < 22; i_3 += 2) 
        {
            var_16 = arr_8 [i_1] [i_1] [i_1];
            var_17 = ((/* implicit */long long int) ((int) ((unsigned int) (short)-19)));
        }
        for (long long int i_4 = 0; i_4 < 22; i_4 += 4) 
        {
            arr_15 [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_4])) ? (((((/* implicit */int) var_4)) / (((/* implicit */int) arr_6 [i_1] [i_1] [i_1])))) : (((/* implicit */int) var_3))));
            var_18 = ((/* implicit */unsigned char) -1LL);
            var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_1)))) : (((((/* implicit */_Bool) arr_13 [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)112))) : (var_8))))))));
        }
        for (unsigned short i_5 = 0; i_5 < 22; i_5 += 4) /* same iter space */
        {
            /* LoopSeq 4 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                arr_23 [i_1] [i_6] [i_6] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)98)) ? (((/* implicit */int) (signed char)-11)) : (((/* implicit */int) (_Bool)1))));
                var_20 = ((/* implicit */unsigned int) ((signed char) var_4));
            }
            for (short i_7 = 0; i_7 < 22; i_7 += 1) /* same iter space */
            {
                var_21 = ((/* implicit */long long int) ((signed char) arr_5 [i_1] [i_5] [i_7]));
                var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) (signed char)-6)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (var_0)))) : (arr_8 [i_1] [i_5] [i_7]))))));
                var_23 = ((unsigned short) var_0);
                var_24 |= arr_25 [i_5] [i_5] [i_7];
                arr_26 [i_1] [i_5] [i_1] |= ((/* implicit */unsigned long long int) ((var_2) / (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_5])))));
            }
            for (short i_8 = 0; i_8 < 22; i_8 += 1) /* same iter space */
            {
                /* LoopSeq 3 */
                for (short i_9 = 2; i_9 < 20; i_9 += 2) 
                {
                    var_25 *= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_8] [i_9])) ? (((/* implicit */int) (short)-18)) : (((/* implicit */int) var_6))))) ? (((6040651612335626329LL) >> (((17911291456182784189ULL) - (17911291456182784126ULL))))) : (arr_25 [i_8] [i_5] [i_1])));
                    /* LoopSeq 1 */
                    for (short i_10 = 4; i_10 < 21; i_10 += 1) 
                    {
                        arr_36 [i_1] [i_1] [i_1] &= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_3))) > (arr_8 [i_1] [i_1] [i_1])));
                        var_26 ^= ((((/* implicit */_Bool) arr_32 [i_9] [i_9] [i_9 - 2] [i_10 + 1] [i_10 - 3])) ? (arr_12 [i_9 + 2] [i_9 - 1] [i_10 - 4]) : (((/* implicit */long long int) ((/* implicit */int) var_7))));
                        var_27 |= ((/* implicit */signed char) 1604821505U);
                        arr_37 [i_1] [i_8] [i_10] = ((/* implicit */unsigned int) ((short) arr_31 [i_10] [i_10 - 3] [i_10 + 1] [i_10] [i_10] [i_10]));
                    }
                }
                for (unsigned char i_11 = 0; i_11 < 22; i_11 += 3) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (short i_12 = 0; i_12 < 22; i_12 += 3) 
                    {
                        var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_1]))) : (((unsigned long long int) arr_24 [i_11] [i_5] [i_5] [i_1])))))));
                        var_29 = ((((/* implicit */_Bool) 1604821505U)) ? (((/* implicit */int) (short)-25467)) : (((/* implicit */int) var_5)));
                        var_30 = ((((/* implicit */_Bool) 1694462046U)) ? (2690145791U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)6))));
                    }
                    for (unsigned long long int i_13 = 0; i_13 < 22; i_13 += 3) 
                    {
                        var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_19 [i_1] [i_13] [i_1])) ? (((/* implicit */int) arr_32 [i_13] [i_11] [i_8] [i_5] [i_1])) : (((/* implicit */int) var_4))));
                        var_32 = ((((/* implicit */_Bool) arr_35 [i_1] [i_5] [i_13] [i_13])) && (((/* implicit */_Bool) arr_35 [i_1] [i_8] [i_13] [i_8])));
                    }
                    for (unsigned short i_14 = 0; i_14 < 22; i_14 += 1) 
                    {
                        var_33 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_33 [i_1] [i_5] [i_8] [i_8] [i_1] [i_8])) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)9535)) : (((/* implicit */int) var_9)))) : (((/* implicit */int) arr_32 [i_1] [i_5] [i_8] [i_11] [i_11]))));
                        arr_48 [i_1] [i_14] [i_8] [i_8] [i_11] [i_11] [i_14] = ((((/* implicit */_Bool) var_3)) ? (arr_25 [i_11] [i_1] [i_1]) : (arr_25 [i_1] [i_8] [i_14]));
                    }
                    /* LoopSeq 2 */
                    for (short i_15 = 0; i_15 < 22; i_15 += 2) 
                    {
                        var_34 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)-6)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)42893))) : (arr_13 [i_1]))) << (((((((/* implicit */_Bool) var_6)) ? (14681302881614170752ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) - (14681302881614170719ULL)))));
                        arr_51 [i_1] [i_1] [i_5] [i_5] [i_8] [i_11] [i_15] = ((/* implicit */short) arr_18 [i_5]);
                    }
                    for (unsigned short i_16 = 0; i_16 < 22; i_16 += 4) 
                    {
                        var_35 = ((/* implicit */unsigned char) max((var_35), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6)))) : (((/* implicit */int) arr_30 [i_8] [i_8])))))));
                        arr_55 [i_1] [i_1] [i_1] [i_16] = ((/* implicit */int) ((unsigned long long int) (signed char)-10));
                        var_36 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_53 [i_5] [i_11] [i_16])) ? (((/* implicit */int) ((unsigned short) var_4))) : (((/* implicit */int) arr_30 [i_11] [i_16]))));
                    }
                }
                for (unsigned char i_17 = 0; i_17 < 22; i_17 += 3) /* same iter space */
                {
                    var_37 = ((/* implicit */unsigned short) ((unsigned long long int) 207725211072907229LL));
                    var_38 ^= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1693537311988211329ULL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5))))) - (arr_16 [i_5] [i_17])));
                }
                var_39 = ((/* implicit */unsigned short) min((var_39), (((/* implicit */unsigned short) ((arr_12 [i_8] [i_8] [i_8]) + (arr_12 [i_5] [i_5] [i_5]))))));
                var_40 = ((/* implicit */long long int) min((var_40), (((/* implicit */long long int) ((((long long int) arr_8 [i_1] [i_5] [i_8])) <= (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_5)))))))));
            }
            for (short i_18 = 3; i_18 < 19; i_18 += 3) 
            {
                arr_62 [i_1] [i_1] [i_18] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_18 + 2])) ? (((/* implicit */int) arr_7 [i_18 - 3])) : (((/* implicit */int) var_6))));
                var_41 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) + (14681302881614170759ULL))));
                var_42 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) 2080768)) + (3765441192095380891ULL)));
                arr_63 [i_18] [i_18 - 2] = ((/* implicit */long long int) ((arr_25 [i_5] [i_5] [i_18]) > (((/* implicit */long long int) ((/* implicit */int) arr_56 [i_5] [i_5] [i_18] [i_18 - 3] [i_18] [i_18 - 1])))));
            }
            arr_64 [i_1] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) arr_14 [i_1] [i_5] [i_5])) ? (arr_14 [i_5] [i_5] [i_1]) : (arr_14 [i_1] [i_5] [i_5])));
        }
        for (unsigned short i_19 = 0; i_19 < 22; i_19 += 4) /* same iter space */
        {
            var_43 = ((/* implicit */_Bool) ((unsigned char) arr_47 [i_1] [i_19] [i_19]));
            var_44 *= ((/* implicit */unsigned short) ((var_7) ? (((/* implicit */int) arr_68 [i_1] [i_19])) : (((/* implicit */int) var_1))));
            arr_69 [i_19] = ((/* implicit */int) ((unsigned char) 5978083178518883289ULL));
        }
        /* LoopSeq 3 */
        for (long long int i_20 = 0; i_20 < 22; i_20 += 2) 
        {
            var_45 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_46 [i_20] [i_20] [i_20] [i_1] [i_1]) ? (((/* implicit */int) (signed char)111)) : (((/* implicit */int) var_9))))) ? (((((/* implicit */int) var_6)) + (((/* implicit */int) var_1)))) : (((((/* implicit */_Bool) (unsigned short)38413)) ? (((/* implicit */int) (signed char)111)) : (((/* implicit */int) (signed char)55))))));
            /* LoopSeq 2 */
            for (int i_21 = 0; i_21 < 22; i_21 += 2) /* same iter space */
            {
                var_46 = ((/* implicit */_Bool) ((signed char) var_5));
                /* LoopSeq 4 */
                for (signed char i_22 = 1; i_22 < 19; i_22 += 2) 
                {
                    var_47 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) var_1))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -4665671516507692053LL))))) : (((/* implicit */int) var_4))));
                    var_48 = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (arr_53 [i_1] [i_20] [i_21])));
                }
                for (unsigned short i_23 = 0; i_23 < 22; i_23 += 2) 
                {
                    var_49 = ((/* implicit */int) ((arr_60 [i_23] [i_20] [i_21] [i_23]) == (arr_60 [i_20] [i_20] [i_21] [i_23])));
                    arr_82 [i_1] [i_20] [i_21] [i_21] [i_1] [i_21] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_57 [i_23] [i_21] [i_20] [i_1])) ? (arr_53 [i_20] [i_1] [i_21]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_1] [i_1] [i_1] [i_21] [i_23])))));
                    var_50 = ((/* implicit */int) min((var_50), (((/* implicit */int) ((unsigned short) arr_25 [i_1] [i_20] [i_1])))));
                    var_51 = ((/* implicit */long long int) ((int) (unsigned short)49091));
                }
                for (unsigned int i_24 = 0; i_24 < 22; i_24 += 4) 
                {
                    var_52 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_74 [i_21] [i_20] [i_1])) || (((/* implicit */_Bool) arr_74 [i_1] [i_20] [i_24]))));
                    var_53 = ((/* implicit */unsigned short) min((var_53), (((/* implicit */unsigned short) ((((/* implicit */int) arr_34 [i_24])) & (((/* implicit */int) var_5)))))));
                }
                for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_26 = 4; i_26 < 19; i_26 += 2) /* same iter space */
                    {
                        var_54 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_83 [i_26 - 3] [i_26 + 2] [i_26 - 3] [i_26 + 2])) ? (((long long int) arr_72 [i_1])) : (((/* implicit */long long int) ((/* implicit */int) var_5)))));
                        var_55 += ((/* implicit */long long int) ((int) 900251926U));
                        arr_91 [i_1] &= ((/* implicit */long long int) ((unsigned char) arr_46 [i_1] [i_20] [i_21] [i_26 + 2] [i_26]));
                    }
                    for (long long int i_27 = 4; i_27 < 19; i_27 += 2) /* same iter space */
                    {
                        var_56 = ((/* implicit */unsigned short) max((var_56), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (arr_16 [i_1] [i_20]) : (arr_16 [i_27 + 3] [i_25]))))));
                        arr_95 [i_1] [i_1] [i_20] [i_1] [i_25] [i_25] [i_1] = ((/* implicit */unsigned short) ((var_0) + (((/* implicit */int) ((unsigned char) arr_27 [i_1] [i_1] [i_21])))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned short i_28 = 0; i_28 < 22; i_28 += 4) 
                    {
                        arr_98 [i_21] [i_21] [i_21] [i_25] [i_20] |= ((/* implicit */unsigned short) var_8);
                        arr_99 [i_1] [i_25] [i_21] [i_21] [i_20] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_97 [i_25]) + (((/* implicit */long long int) ((/* implicit */int) (signed char)-116)))))) ? (arr_80 [i_20]) : (((/* implicit */int) arr_40 [i_1] [i_1] [i_1] [i_1] [i_1]))));
                        var_57 |= ((/* implicit */unsigned short) ((unsigned long long int) var_3));
                    }
                    for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
                    {
                        var_58 = ((/* implicit */signed char) ((long long int) arr_50 [i_1] [i_1] [i_1] [i_1] [i_1]));
                        var_59 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_70 [i_25] [i_29])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (arr_70 [i_1] [i_21])));
                    }
                    var_60 = ((/* implicit */int) ((((/* implicit */_Bool) arr_92 [i_1] [i_20] [i_21] [i_25] [i_25] [i_1])) ? (var_8) : (((/* implicit */unsigned long long int) var_2))));
                }
            }
            for (int i_30 = 0; i_30 < 22; i_30 += 2) /* same iter space */
            {
                var_61 &= ((/* implicit */unsigned char) (((_Bool)1) ? (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned long long int) arr_13 [i_20])) : (9592954935857305657ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                var_62 = ((/* implicit */signed char) ((arr_93 [i_30] [i_30] [i_1] [i_20] [i_1] [i_1] [i_1]) + (arr_14 [i_1] [i_1] [i_1])));
            }
        }
        for (signed char i_31 = 1; i_31 < 20; i_31 += 2) 
        {
            var_63 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_78 [i_31 + 2] [i_31] [i_31 + 2] [i_31 - 1] [i_31 - 1] [i_31])) != (((/* implicit */int) arr_31 [i_31 - 1] [i_31 + 1] [i_31 - 1] [i_31 + 1] [i_31 + 1] [i_31 + 1]))));
            var_64 = ((/* implicit */long long int) max((var_64), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_50 [i_1] [i_31 + 2] [i_31 + 2] [i_31 + 2] [i_31])) != (arr_77 [i_1] [i_31 + 2] [i_31] [i_31 + 2] [i_31]))))));
        }
        for (unsigned int i_32 = 0; i_32 < 22; i_32 += 2) 
        {
            arr_113 [i_1] [i_32] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((1375183173) + (((/* implicit */int) (short)-7805))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_29 [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_101 [i_32] [i_1] [i_1] [i_1] [i_1])) : (-1349883286)))) : (((((/* implicit */_Bool) arr_29 [i_1] [i_1] [i_32])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (2700415268190498018LL)))));
            arr_114 [i_1] [i_1] [i_32] = ((unsigned short) arr_18 [i_32]);
        }
    }
    for (unsigned long long int i_33 = 0; i_33 < 11; i_33 += 2) 
    {
        var_65 = ((/* implicit */unsigned char) min((var_65), (((/* implicit */unsigned char) ((signed char) arr_52 [i_33] [i_33] [i_33] [i_33] [i_33] [i_33] [i_33])))));
        var_66 = ((/* implicit */int) max((min((((/* implicit */unsigned long long int) arr_102 [i_33] [i_33])), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) | (1592741276603667137ULL))))), (((/* implicit */unsigned long long int) ((unsigned short) (short)-14714)))));
        arr_118 [i_33] = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (-6635856254213968334LL) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_5))))) : (((((/* implicit */_Bool) var_6)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))));
    }
    var_67 = ((/* implicit */long long int) max((var_0), (((/* implicit */int) ((((/* implicit */int) ((unsigned short) var_0))) <= (((/* implicit */int) var_4)))))));
    var_68 = ((/* implicit */long long int) min((var_68), (((/* implicit */long long int) ((((/* implicit */int) max((var_6), (((/* implicit */unsigned char) var_1))))) + (((/* implicit */int) var_7)))))));
    var_69 = var_1;
}
