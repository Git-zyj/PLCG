/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192953
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 1) /* same iter space */
    {
        var_18 += ((/* implicit */unsigned long long int) (unsigned short)65524);
        var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) max((((/* implicit */int) ((unsigned char) (+(arr_3 [(unsigned short)10]))))), ((~(((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))))))));
        var_20 = (((_Bool)1) ? (((/* implicit */unsigned long long int) var_9)) : (min((((((/* implicit */_Bool) (short)5)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))), (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) arr_3 [i_0])) : (arr_0 [i_0] [i_0]))))));
    }
    for (signed char i_1 = 0; i_1 < 11; i_1 += 1) /* same iter space */
    {
        var_21 *= ((/* implicit */unsigned long long int) (-(var_9)));
        arr_6 [4LL] [i_1] |= 4ULL;
        /* LoopSeq 2 */
        for (signed char i_2 = 0; i_2 < 11; i_2 += 2) /* same iter space */
        {
            var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((signed char) (+(((/* implicit */int) ((unsigned char) -7561030355419752865LL)))))))));
            /* LoopSeq 1 */
            for (signed char i_3 = 2; i_3 < 8; i_3 += 2) 
            {
                arr_11 [i_1] [(unsigned short)5] [i_3] = ((/* implicit */signed char) arr_10 [i_3 + 3] [i_3 - 1] [i_3]);
                /* LoopSeq 1 */
                for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 2) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                    {
                        var_23 = arr_8 [i_1] [i_4];
                        arr_16 [i_1] [(_Bool)1] [i_3 + 1] [i_1] [i_4] [i_5 + 1] = ((/* implicit */long long int) (+((+(((/* implicit */int) arr_1 [i_5 + 1]))))));
                        arr_17 [i_1] = ((/* implicit */unsigned long long int) var_10);
                    }
                    var_24 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)58)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (arr_14 [(unsigned short)4] [i_3 - 2] [(unsigned short)4] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) : ((~(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [6ULL]))) / (var_2)))))));
                }
            }
            arr_18 [i_1] [i_2] [i_1] = ((/* implicit */long long int) var_8);
            var_25 += ((/* implicit */short) var_12);
        }
        for (signed char i_6 = 0; i_6 < 11; i_6 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (long long int i_7 = 0; i_7 < 11; i_7 += 2) 
            {
                for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 2) 
                {
                    {
                        var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) ((long long int) (unsigned short)24753))))) ? (((/* implicit */int) ((((/* implicit */long long int) (~(((/* implicit */int) arr_21 [i_7] [i_7]))))) != ((-(arr_13 [i_1] [i_6] [i_7] [i_8])))))) : (((((/* implicit */_Bool) arr_9 [i_1] [i_6] [i_1] [i_8])) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_9 [i_6] [i_6] [i_6] [i_6])))))))));
                        var_27 = ((/* implicit */signed char) arr_15 [i_1] [i_6] [i_6] [i_7] [(unsigned short)0]);
                    }
                } 
            } 
            var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) arr_0 [(short)4] [i_6]))));
            var_29 = ((/* implicit */_Bool) arr_26 [i_6] [i_6] [i_1] [i_1]);
            /* LoopNest 3 */
            for (signed char i_9 = 0; i_9 < 11; i_9 += 2) 
            {
                for (unsigned char i_10 = 2; i_10 < 8; i_10 += 2) 
                {
                    for (unsigned char i_11 = 1; i_11 < 7; i_11 += 2) 
                    {
                        {
                            arr_35 [i_1] [(_Bool)0] [i_1] [(_Bool)1] [i_11 + 4] = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))));
                            var_30 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((var_5), (arr_13 [i_1] [i_9] [i_10] [i_9])))), (18446744073709551615ULL))))));
                            arr_36 [(unsigned short)6] [i_6] [i_11] [i_6] [i_11] [i_1] [i_6] |= ((/* implicit */unsigned long long int) (+(min((((/* implicit */long long int) (unsigned short)47993)), (arr_3 [i_9])))));
                        }
                    } 
                } 
            } 
        }
        /* LoopSeq 2 */
        for (unsigned long long int i_12 = 1; i_12 < 9; i_12 += 2) /* same iter space */
        {
            arr_39 [i_1] [i_12] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_24 [4ULL] [i_12 + 1]), (arr_24 [i_1] [i_12 + 2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)40757))) : ((~(((unsigned long long int) var_14))))));
            /* LoopNest 3 */
            for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
            {
                for (unsigned long long int i_14 = 0; i_14 < 11; i_14 += 4) 
                {
                    for (unsigned char i_15 = 4; i_15 < 7; i_15 += 3) 
                    {
                        {
                            var_31 |= ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) arr_15 [i_12 + 1] [i_13 - 1] [i_13 - 1] [i_13 - 1] [i_15 - 3])) >> (((((/* implicit */int) arr_7 [i_12 + 1] [i_13 - 1])) + (115))))));
                            var_32 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_12))));
                            var_33 += ((/* implicit */signed char) min((13604086056908977947ULL), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_8)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_12] [i_14] [i_12]))) : (((((arr_41 [i_1] [i_1] [i_1]) + (9223372036854775807LL))) >> (((((/* implicit */int) (unsigned short)40782)) - (40729))))))))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned long long int i_16 = 0; i_16 < 11; i_16 += 4) /* same iter space */
            {
                var_34 = ((/* implicit */short) var_2);
                var_35 = ((/* implicit */_Bool) var_0);
            }
            for (unsigned long long int i_17 = 0; i_17 < 11; i_17 += 4) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_18 = 0; i_18 < 11; i_18 += 2) 
                {
                    arr_57 [i_1] [i_18] = ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_1])) ? (((/* implicit */int) (short)15)) : (((/* implicit */int) var_11))))))))) >= (((arr_19 [i_1] [(short)10]) % (((/* implicit */long long int) ((/* implicit */int) arr_46 [i_12] [i_12 - 1] [i_12 + 1]))))));
                    var_36 = ((/* implicit */long long int) (+(max((arr_33 [i_12 + 1] [i_12 + 1] [i_1] [1LL] [i_12 + 1] [i_12 + 1] [i_12 - 1]), (((/* implicit */unsigned long long int) arr_5 [i_12 + 1]))))));
                    var_37 = ((/* implicit */_Bool) max((1435359130491991248ULL), (((/* implicit */unsigned long long int) (short)-23068))));
                }
                arr_58 [i_1] = (signed char)-64;
            }
            var_38 = ((/* implicit */unsigned long long int) ((var_9) != (max((var_1), (((/* implicit */long long int) (signed char)100))))));
        }
        /* vectorizable */
        for (unsigned long long int i_19 = 1; i_19 < 9; i_19 += 2) /* same iter space */
        {
            var_39 = ((/* implicit */short) max((var_39), (((/* implicit */short) (~(((/* implicit */int) arr_43 [i_19 + 1])))))));
            /* LoopSeq 3 */
            for (unsigned long long int i_20 = 4; i_20 < 10; i_20 += 3) 
            {
                arr_63 [i_1] [i_1] [(signed char)4] [(short)7] = ((/* implicit */signed char) (unsigned short)17542);
                /* LoopNest 2 */
                for (unsigned short i_21 = 1; i_21 < 10; i_21 += 4) 
                {
                    for (short i_22 = 0; i_22 < 11; i_22 += 3) 
                    {
                        {
                            var_40 = var_4;
                            var_41 = ((/* implicit */unsigned short) ((signed char) var_12));
                            var_42 = ((/* implicit */signed char) var_9);
                            var_43 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-15))) : (((unsigned long long int) 16061561220147260717ULL))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned short i_23 = 0; i_23 < 11; i_23 += 3) 
                {
                    var_44 = ((/* implicit */unsigned char) var_12);
                    var_45 = ((/* implicit */unsigned long long int) ((unsigned short) (unsigned short)40786));
                    var_46 = ((/* implicit */unsigned long long int) ((((var_16) <= (((/* implicit */unsigned long long int) var_5)))) && (((/* implicit */_Bool) arr_66 [i_1] [i_19] [i_20 - 2] [i_23] [i_23]))));
                    arr_70 [i_1] [i_20 + 1] [2ULL] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((signed char) 9223372036854775807LL)))));
                }
                for (unsigned long long int i_24 = 3; i_24 < 7; i_24 += 2) 
                {
                    var_47 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_50 [i_24 + 1] [i_19 + 2])) ? (arr_25 [i_24 + 1] [i_19 + 2] [i_20] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_50 [i_24 + 1] [i_19 + 2])))));
                    /* LoopSeq 1 */
                    for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                    {
                        var_48 = ((/* implicit */signed char) arr_26 [i_24 + 1] [i_20 - 1] [i_19 - 1] [i_19 - 1]);
                        var_49 = ((/* implicit */unsigned long long int) max((var_49), (((/* implicit */unsigned long long int) ((7561030355419752878LL) % (((/* implicit */long long int) ((/* implicit */int) (unsigned char)14))))))));
                        var_50 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) -7609776513285186074LL)) ? (arr_32 [(signed char)8] [i_19] [(signed char)8] [(signed char)8] [(signed char)8]) : (9223372036854775807LL)));
                    }
                    arr_75 [i_1] = ((((/* implicit */_Bool) 6361982270556392745ULL)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)27892))));
                    arr_76 [i_24] [i_19 + 2] [i_20] [i_24 - 3] [i_1] [i_20 + 1] = ((/* implicit */long long int) ((((/* implicit */long long int) (+(((/* implicit */int) arr_7 [i_20 - 1] [i_24]))))) != ((-(var_4)))));
                }
                arr_77 [i_1] = ((/* implicit */signed char) (-(arr_42 [i_1] [i_20 - 1] [i_20] [i_19 + 1])));
            }
            for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
            {
                var_51 = ((/* implicit */unsigned short) max((var_51), ((unsigned short)40776)));
                /* LoopSeq 3 */
                for (long long int i_27 = 0; i_27 < 11; i_27 += 3) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
                    {
                        var_52 = ((/* implicit */unsigned char) ((long long int) arr_52 [i_19 + 1] [i_19 - 1] [i_19] [i_19 + 1]));
                        var_53 = ((/* implicit */unsigned char) arr_8 [i_1] [i_19 - 1]);
                    }
                    var_54 = ((/* implicit */unsigned char) ((((/* implicit */int) ((signed char) arr_33 [i_26] [i_19] [i_1] [i_27] [8ULL] [i_19] [i_1]))) - (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
                }
                for (long long int i_29 = 0; i_29 < 11; i_29 += 3) /* same iter space */
                {
                    var_55 = ((/* implicit */long long int) max((var_55), (var_10)));
                    /* LoopSeq 1 */
                    for (signed char i_30 = 2; i_30 < 9; i_30 += 2) 
                    {
                        var_56 = ((/* implicit */unsigned long long int) (((((-(((/* implicit */int) (_Bool)1)))) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */int) (signed char)-42)) > (((/* implicit */int) (_Bool)1)))))));
                        arr_92 [i_29] [i_29] [i_26] [i_1] [(_Bool)1] [i_19 - 1] [(signed char)0] = ((/* implicit */unsigned long long int) arr_22 [i_1]);
                        var_57 |= (_Bool)0;
                        var_58 = ((/* implicit */unsigned char) arr_66 [i_1] [(_Bool)1] [i_1] [(_Bool)1] [i_1]);
                        var_59 *= ((/* implicit */_Bool) ((((unsigned long long int) arr_12 [6LL] [6LL] [i_26] [i_30])) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_6))))));
                    }
                }
                for (long long int i_31 = 0; i_31 < 11; i_31 += 3) /* same iter space */
                {
                    var_60 = ((/* implicit */unsigned long long int) min((var_60), (6035800524792933323ULL)));
                    var_61 += ((((/* implicit */_Bool) arr_38 [i_19] [(unsigned short)3] [(unsigned short)3])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (-5422030553285946486LL) : (((/* implicit */long long int) ((/* implicit */int) arr_95 [3LL] [i_19] [3LL] [3LL])))))) : (((var_2) + (12084761803153158867ULL))));
                    var_62 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_32 = 0; i_32 < 11; i_32 += 4) 
                    {
                        var_63 = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) arr_90 [i_19] [(unsigned char)3] [i_19] [(unsigned char)3] [i_19] [10ULL]))) > (-7609776513285186082LL))) ? ((~(-21LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_43 [i_19 + 2])))));
                        var_64 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32766))) > (arr_25 [i_19 - 1] [i_19 + 1] [i_19 + 1] [i_1])));
                        var_65 -= (+(15ULL));
                    }
                    /* LoopSeq 2 */
                    for (signed char i_33 = 0; i_33 < 11; i_33 += 2) 
                    {
                        var_66 *= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_59 [i_19 - 1] [i_19 + 1]))));
                        arr_102 [i_1] [i_1] [i_26] [(signed char)4] [i_31] [i_33] [i_33] |= ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_40 [i_1] [4ULL] [i_33] [i_31])) + (((/* implicit */int) arr_43 [i_1])))) + (((/* implicit */int) (!(((/* implicit */_Bool) 12ULL)))))));
                    }
                    for (long long int i_34 = 0; i_34 < 11; i_34 += 2) 
                    {
                        arr_105 [i_1] [i_1] [i_19] [i_26] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) 4101808546075684117ULL)) ? (9ULL) : (9ULL)));
                        arr_106 [5LL] [i_31] [i_1] [i_31] [i_31] = ((/* implicit */signed char) (-(arr_14 [i_1] [i_19 + 1] [i_34] [i_1])));
                    }
                }
                /* LoopSeq 2 */
                for (unsigned long long int i_35 = 3; i_35 < 8; i_35 += 3) 
                {
                    arr_111 [i_1] [i_19] [i_1] [i_35 - 3] [i_19] [i_26] = ((/* implicit */unsigned short) var_14);
                    var_67 = (short)32754;
                    var_68 = ((/* implicit */unsigned char) 18446744073709551607ULL);
                }
                for (unsigned short i_36 = 0; i_36 < 11; i_36 += 2) 
                {
                    arr_114 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) var_11);
                    var_69 = (!(((/* implicit */_Bool) arr_65 [i_36] [i_1])));
                }
                arr_115 [i_1] [i_1] [(_Bool)1] = ((/* implicit */long long int) ((arr_52 [i_26] [(signed char)4] [i_19 + 2] [i_1]) != (((/* implicit */long long int) ((/* implicit */int) arr_59 [i_19 + 1] [i_26])))));
            }
            for (unsigned short i_37 = 0; i_37 < 11; i_37 += 4) 
            {
                var_70 *= ((/* implicit */short) arr_96 [i_1] [(signed char)4] [i_19] [i_37] [i_1] [(signed char)5]);
                var_71 = ((/* implicit */signed char) max((var_71), (arr_88 [(signed char)2] [i_1] [5ULL] [i_1])));
            }
            /* LoopNest 2 */
            for (_Bool i_38 = 0; i_38 < 1; i_38 += 1) 
            {
                for (signed char i_39 = 0; i_39 < 11; i_39 += 1) 
                {
                    {
                        var_72 = ((/* implicit */long long int) arr_42 [i_1] [i_19] [i_38] [i_39]);
                        var_73 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_21 [i_1] [i_1])) : (((/* implicit */int) arr_73 [i_1] [i_1] [i_38] [i_1] [i_38] [i_19 + 1] [i_1]))));
                        var_74 &= ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)56)) : (((/* implicit */int) arr_27 [(_Bool)1]))));
                    }
                } 
            } 
        }
    }
    for (signed char i_40 = 0; i_40 < 11; i_40 += 1) /* same iter space */
    {
        var_75 -= ((/* implicit */signed char) var_5);
        /* LoopSeq 1 */
        for (unsigned short i_41 = 4; i_41 < 10; i_41 += 2) 
        {
            var_76 += ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_8 [i_40] [i_40]))))), (((((/* implicit */_Bool) arr_33 [i_40] [i_41] [i_41] [i_41 - 3] [i_40] [i_41] [i_41])) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)94)))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_118 [10LL])), (arr_96 [i_40] [i_40] [i_40] [i_40] [i_41] [i_40])))) ? ((-(((/* implicit */int) arr_74 [i_40] [i_40] [7LL] [i_40] [i_40] [i_41 - 2])))) : (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (var_13)))))))));
            arr_129 [i_41] = ((/* implicit */unsigned char) ((max((((((/* implicit */_Bool) (signed char)123)) ? (((/* implicit */unsigned long long int) var_10)) : (var_16))), (((((/* implicit */unsigned long long int) var_9)) ^ (18446744073709551615ULL))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) min((max((((/* implicit */unsigned short) (short)7761)), ((unsigned short)65292))), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_101 [i_40] [i_41] [i_40] [i_41] [i_40])) && (((/* implicit */_Bool) var_17)))))))))));
        }
    }
    var_77 = var_0;
    var_78 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) var_7)) ? (var_17) : (((/* implicit */unsigned long long int) var_4)))), (((/* implicit */unsigned long long int) (+(var_1)))))))));
    var_79 -= ((/* implicit */signed char) ((((/* implicit */_Bool) min((min((var_14), (((/* implicit */unsigned long long int) (signed char)55)))), ((-(var_14)))))) || (((/* implicit */_Bool) var_0))));
}
