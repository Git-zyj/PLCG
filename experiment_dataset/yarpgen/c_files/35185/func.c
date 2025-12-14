/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35185
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
    var_13 = ((/* implicit */unsigned long long int) var_2);
    var_14 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */short) (unsigned char)196))));
    var_15 = ((/* implicit */unsigned long long int) var_11);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            var_16 *= ((/* implicit */unsigned long long int) ((unsigned int) (signed char)0));
            var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) 18446744073709551615ULL))));
            /* LoopSeq 1 */
            for (signed char i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 1) 
                {
                    var_18 = ((/* implicit */signed char) arr_2 [i_0] [i_1] [(unsigned char)11]);
                    var_19 = ((/* implicit */unsigned char) arr_0 [i_1]);
                }
                var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)82)))))));
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 4) 
                {
                    for (unsigned int i_5 = 0; i_5 < 25; i_5 += 3) 
                    {
                        {
                            arr_14 [12ULL] [i_1] [i_2] [i_4] [9ULL] = ((/* implicit */long long int) arr_7 [i_0] [i_1] [i_0] [i_5]);
                            var_21 = ((/* implicit */unsigned short) ((unsigned char) arr_3 [i_2] [i_1] [i_5]));
                        }
                    } 
                } 
            }
        }
        var_22 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [i_0]))));
    }
    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_7 = 0; i_7 < 23; i_7 += 4) 
        {
            /* LoopNest 2 */
            for (signed char i_8 = 0; i_8 < 23; i_8 += 1) 
            {
                for (unsigned int i_9 = 0; i_9 < 23; i_9 += 1) 
                {
                    {
                        var_23 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-35)) ? (2521445689U) : (((/* implicit */unsigned int) ((/* implicit */int) min(((_Bool)1), ((_Bool)1)))))))) ? (min((min((((/* implicit */unsigned long long int) (signed char)83)), (9366893104622134521ULL))), (((/* implicit */unsigned long long int) arr_10 [i_6 - 1])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_7] [i_9])))));
                        arr_24 [i_7] &= arr_11 [i_6] [i_7];
                        var_24 = ((/* implicit */unsigned long long int) max((var_24), (var_5)));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_10 = 0; i_10 < 23; i_10 += 3) 
                        {
                            var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) (signed char)120))));
                            var_26 = 18446744073709551608ULL;
                            var_27 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (signed char)(-127 - 1))))) ? (((((/* implicit */int) arr_0 [i_6 - 1])) >> (((((((/* implicit */int) arr_18 [i_6] [i_7])) | (((/* implicit */int) (short)-31052)))) + (30734))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_28 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 - 1])) || (((/* implicit */_Bool) arr_4 [i_6 - 1] [i_6 - 1])))))));
                            arr_29 [i_6] [i_8] [i_8] [i_9] [i_10] = ((/* implicit */unsigned char) arr_16 [i_6 - 1]);
                        }
                        for (unsigned long long int i_11 = 0; i_11 < 23; i_11 += 3) 
                        {
                            arr_33 [i_6] [i_8] [i_7] [i_7] [i_6] [i_7] [i_11] = ((((/* implicit */int) arr_1 [i_6 - 1] [19ULL])) == (((((/* implicit */_Bool) 10359292822838562771ULL)) ? (((/* implicit */int) (short)32766)) : (((/* implicit */int) (signed char)-32)))));
                            var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_7 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_11]), (var_4)))) ? (((((/* implicit */_Bool) arr_28 [i_6 - 1] [i_7] [i_8] [i_9] [i_11])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_6 - 1] [i_6 - 1]))) : (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (unsigned short)40462)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_6] [i_6 - 1] [i_6] [i_6 - 1] [i_6 - 1]))))))));
                            var_29 = ((/* implicit */signed char) arr_8 [i_8]);
                            arr_34 [i_6 - 1] [0U] [i_8] [i_7] [i_9] [i_11] &= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_15 [i_6 - 1] [i_6 - 1])), (arr_11 [i_6 - 1] [i_7])));
                            var_30 = ((/* implicit */unsigned long long int) var_11);
                        }
                        var_31 |= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)32618)) ? (((/* implicit */int) (unsigned char)141)) : (((/* implicit */int) (short)-4454))));
                    }
                } 
            } 
            arr_35 [i_6 - 1] [i_6 - 1] |= ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 11579069015310029573ULL)) ? (289619796006576579ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (max((var_4), (((/* implicit */unsigned long long int) 5049002278826322203LL)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2U)) ? (((/* implicit */int) (unsigned short)40602)) : (((/* implicit */int) (unsigned short)32618))))))), (arr_32 [i_6] [i_6] [i_6] [i_6 - 1] [i_7] [i_7] [i_6])));
        }
        arr_36 [i_6] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)127)) * (((/* implicit */int) arr_2 [(unsigned short)0] [i_6 - 1] [i_6 - 1]))))) & (min((((/* implicit */unsigned long long int) (signed char)97)), (arr_4 [i_6] [i_6])))));
        /* LoopSeq 2 */
        for (short i_12 = 2; i_12 < 22; i_12 += 2) 
        {
            arr_40 [i_12] &= ((/* implicit */unsigned short) ((unsigned long long int) (+(arr_11 [i_6 - 1] [i_12]))));
            /* LoopSeq 2 */
            for (unsigned char i_13 = 0; i_13 < 23; i_13 += 3) /* same iter space */
            {
                var_32 = ((/* implicit */long long int) ((signed char) min((arr_20 [i_6] [i_12 - 1]), (arr_13 [i_6] [i_6] [14ULL] [i_13] [14ULL] [i_13]))));
                arr_43 [i_12 + 1] [i_12 + 1] = min(((signed char)46), ((signed char)-19));
            }
            for (unsigned char i_14 = 0; i_14 < 23; i_14 += 3) /* same iter space */
            {
                /* LoopSeq 1 */
                for (signed char i_15 = 0; i_15 < 23; i_15 += 2) 
                {
                    var_33 = arr_37 [i_6 - 1] [i_12] [i_15];
                    var_34 = ((/* implicit */unsigned long long int) max((var_34), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 0ULL)) ? (4503599610593280ULL) : (0ULL))) <= (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_46 [i_6 - 1] [i_12] [i_14] [i_15]))))))))));
                }
                /* LoopSeq 4 */
                for (unsigned int i_16 = 0; i_16 < 23; i_16 += 2) 
                {
                    arr_50 [i_6 - 1] [i_6 - 1] [i_14] [i_16] = (-(var_10));
                    var_35 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(0ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (min((0ULL), (((/* implicit */unsigned long long int) (unsigned char)180))))));
                }
                for (short i_17 = 0; i_17 < 23; i_17 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_18 = 0; i_18 < 23; i_18 += 2) /* same iter space */
                    {
                        var_36 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned char)7)) && (((/* implicit */_Bool) (signed char)(-127 - 1))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_12] [i_17])) && (((/* implicit */_Bool) arr_3 [i_6 - 1] [i_17] [i_14]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_31 [i_6] [16ULL] [i_17] [i_18])))))))));
                        var_37 = ((/* implicit */unsigned short) arr_27 [i_6 - 1] [i_6 - 1] [i_12 + 1] [i_12] [i_12 - 1] [i_6 - 1] [i_6 - 1]);
                        var_38 = ((/* implicit */unsigned int) max((((1ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_12]))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 14202409128699282275ULL)))))));
                    }
                    for (unsigned short i_19 = 0; i_19 < 23; i_19 += 2) /* same iter space */
                    {
                        var_39 = ((/* implicit */unsigned int) min((var_39), (((/* implicit */unsigned int) arr_25 [i_6] [i_12] [i_14] [i_17] [i_14]))));
                        var_40 = ((/* implicit */unsigned long long int) min((var_40), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_10 [i_6 - 1])))))));
                        arr_58 [i_12] [i_14] [i_12] &= ((signed char) var_2);
                        arr_59 [i_6] [i_12 - 1] [i_17] [i_17] [i_19] [i_19] = ((/* implicit */_Bool) arr_47 [i_6] [i_6] [i_14] [i_17] [i_17]);
                    }
                    arr_60 [i_6] [i_12 - 2] [i_14] [i_17] = ((/* implicit */unsigned long long int) var_11);
                }
                /* vectorizable */
                for (unsigned long long int i_20 = 0; i_20 < 23; i_20 += 4) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_21 = 0; i_21 < 23; i_21 += 1) 
                    {
                        var_41 = ((/* implicit */long long int) ((arr_12 [i_6] [i_6 - 1]) ? (((/* implicit */int) arr_12 [0LL] [i_6 - 1])) : (((/* implicit */int) (_Bool)1))));
                        arr_66 [i_6] [i_12] [22U] [i_21] = ((/* implicit */short) ((((/* implicit */unsigned long long int) 0U)) | (1ULL)));
                        arr_67 [i_12] [i_12] = ((/* implicit */signed char) (-(arr_7 [i_6] [i_6 - 1] [i_6 - 1] [i_6 - 1])));
                        var_42 = ((/* implicit */signed char) arr_49 [i_6] [i_6 - 1] [i_6 - 1] [i_12 - 2] [i_20]);
                    }
                    var_43 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)1536))) & (((((/* implicit */_Bool) arr_26 [i_12])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (arr_27 [i_6 - 1] [i_6] [i_12] [i_12 + 1] [i_14] [i_20] [i_20])))));
                    var_44 = ((/* implicit */unsigned long long int) max((var_44), (((/* implicit */unsigned long long int) ((arr_12 [i_14] [i_20]) ? (((/* implicit */int) arr_12 [i_6] [i_12 - 2])) : (((/* implicit */int) arr_12 [i_6 - 1] [i_20])))))));
                }
                for (unsigned long long int i_22 = 0; i_22 < 23; i_22 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_23 = 0; i_23 < 23; i_23 += 2) 
                    {
                        arr_74 [i_22] [(_Bool)1] [(_Bool)1] [12LL] [i_23] = ((/* implicit */short) arr_62 [i_12] [i_14] [i_22] [i_22]);
                        arr_75 [i_6] [i_12] [i_22] [i_22] [3ULL] = ((((/* implicit */_Bool) (-(arr_19 [i_6 - 1] [i_22] [i_12 - 2])))) ? (((/* implicit */unsigned long long int) ((long long int) arr_27 [(signed char)3] [(signed char)3] [i_6 - 1] [3ULL] [(signed char)3] [(signed char)3] [i_23]))) : (max((arr_7 [i_6] [i_12 + 1] [i_14] [i_12 + 1]), (((/* implicit */unsigned long long int) arr_71 [i_6] [i_12] [i_14] [i_14] [7ULL] [i_12])))));
                        arr_76 [i_6] [i_22] [i_14] [i_22] [3ULL] = arr_48 [i_12] [i_14] [i_14] [i_23];
                    }
                    var_45 = ((/* implicit */signed char) max((var_45), (((/* implicit */signed char) ((((((((/* implicit */_Bool) arr_23 [i_6 - 1] [i_6 - 1] [i_14] [i_22])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (12551854390826896303ULL))) * (5633122892822065629ULL))) - (min((8124334467110635580ULL), (((/* implicit */unsigned long long int) (unsigned short)65512)))))))));
                    arr_77 [i_6] [i_22] [i_6] [(_Bool)1] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) 11678177444407064443ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)93))) : (1047545259697808930LL)))));
                }
            }
        }
        for (unsigned long long int i_24 = 0; i_24 < 23; i_24 += 3) 
        {
            /* LoopSeq 4 */
            for (unsigned int i_25 = 1; i_25 < 19; i_25 += 1) 
            {
                var_46 = ((/* implicit */short) max((var_46), (((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) arr_64 [i_6] [(signed char)2] [i_24] [i_25] [i_25 + 1] [i_25 + 1] [i_25])) ? (((/* implicit */int) arr_79 [i_6 - 1] [i_24] [i_6 - 1])) : (((/* implicit */int) arr_65 [10ULL] [i_6] [(signed char)10] [i_24] [i_24] [i_25]))))))));
                arr_84 [(signed char)18] [i_25] = ((/* implicit */signed char) (-(((arr_27 [i_6] [i_24] [i_24] [i_24] [i_24] [i_24] [i_25]) + (((/* implicit */unsigned long long int) 549371736336676377LL))))));
                var_47 = ((/* implicit */signed char) 10190251300351327227ULL);
            }
            /* vectorizable */
            for (unsigned long long int i_26 = 0; i_26 < 23; i_26 += 1) 
            {
                arr_87 [i_26] [i_24] [i_26] = ((/* implicit */short) var_7);
                var_48 = arr_30 [i_6] [i_6] [i_24] [i_24] [i_24] [i_26];
            }
            for (long long int i_27 = 0; i_27 < 23; i_27 += 3) /* same iter space */
            {
                var_49 |= ((/* implicit */signed char) 18446744073709551615ULL);
                /* LoopNest 2 */
                for (signed char i_28 = 0; i_28 < 23; i_28 += 1) 
                {
                    for (long long int i_29 = 0; i_29 < 23; i_29 += 1) 
                    {
                        {
                            var_50 = ((/* implicit */unsigned long long int) arr_31 [i_6 - 1] [8ULL] [i_28] [i_29]);
                            arr_95 [i_28] = ((/* implicit */long long int) (-(((unsigned long long int) 4294967295U))));
                            arr_96 [i_28] [i_24] [i_27] [i_28] [i_29] = ((/* implicit */short) (signed char)83);
                            arr_97 [i_28] [i_27] [i_27] [i_29] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_85 [i_27] [i_28]))) + (4607182418800017408ULL)));
                        }
                    } 
                } 
                var_51 = ((/* implicit */signed char) ((((unsigned long long int) arr_17 [i_6 - 1] [i_27])) << (((arr_19 [10ULL] [20ULL] [i_27]) - (58164180U)))));
            }
            for (long long int i_30 = 0; i_30 < 23; i_30 += 3) /* same iter space */
            {
                var_52 = ((/* implicit */unsigned char) max((var_52), (((/* implicit */unsigned char) ((signed char) var_8)))));
                /* LoopNest 2 */
                for (unsigned long long int i_31 = 0; i_31 < 23; i_31 += 2) 
                {
                    for (_Bool i_32 = 0; i_32 < 1; i_32 += 1) 
                    {
                        {
                            arr_107 [20LL] [i_30] [i_30] |= var_1;
                            var_53 *= ((/* implicit */long long int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (0U)));
                            var_54 = arr_78 [i_6] [i_24];
                            var_55 = ((/* implicit */unsigned char) arr_85 [i_6] [i_31]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_33 = 0; i_33 < 23; i_33 += 2) 
                {
                    for (long long int i_34 = 0; i_34 < 23; i_34 += 2) 
                    {
                        {
                            arr_112 [(_Bool)1] [(_Bool)1] [i_33] [i_34] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)44)) ? (7715519796434482402ULL) : (((/* implicit */unsigned long long int) arr_90 [i_6 - 1] [i_6 - 1] [i_6 - 1]))))) ? (((((/* implicit */_Bool) var_0)) ? (arr_38 [i_6 - 1]) : (arr_38 [i_6 - 1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_90 [i_6 - 1] [i_6 - 1] [i_6 - 1])) ? (arr_90 [i_6 - 1] [i_6 - 1] [i_24]) : (arr_90 [i_6 - 1] [i_6 - 1] [i_34]))))));
                            arr_113 [i_6] [i_6] [(short)8] [(short)16] [i_33] [i_34] = arr_13 [i_6] [i_24] [i_6] [(signed char)17] [i_34] [(unsigned short)6];
                            var_56 |= ((/* implicit */signed char) ((_Bool) (signed char)55));
                            arr_114 [i_6] = ((/* implicit */_Bool) arr_57 [i_6] [(signed char)14] [i_6] [i_24] [i_30] [(signed char)14] [i_34]);
                        }
                    } 
                } 
                var_57 = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)0)), (arr_7 [i_6] [i_6] [i_24] [i_30])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (((((/* implicit */_Bool) (~(arr_63 [i_6] [(unsigned short)13] [(unsigned short)13] [(unsigned short)13])))) ? (arr_3 [i_6 - 1] [(signed char)4] [i_6 - 1]) : (arr_81 [i_24] [i_30]))));
            }
            /* LoopSeq 1 */
            for (unsigned long long int i_35 = 0; i_35 < 23; i_35 += 2) 
            {
                arr_117 [i_6 - 1] [i_24] [i_35] = ((unsigned long long int) (unsigned short)17800);
                var_58 = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_98 [i_6])) || (((/* implicit */_Bool) arr_82 [i_6] [16ULL] [16ULL])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (signed char)127)), ((unsigned char)0))))) : (((((/* implicit */_Bool) arr_39 [i_6])) ? (10322409606598916036ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_6] [i_6 - 1] [(unsigned short)18] [i_24] [i_35])))))))) ? (((((/* implicit */_Bool) (unsigned short)65533)) ? (3579112280914849059ULL) : (348739716386847510ULL))) : (min(((-(arr_100 [i_6] [i_24] [i_24]))), (((/* implicit */unsigned long long int) (signed char)0)))));
                arr_118 [(short)2] [i_24] [i_35] [i_35] = ((3ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))));
            }
            var_59 = ((/* implicit */signed char) min((var_59), (((/* implicit */signed char) (!((!(((/* implicit */_Bool) ((signed char) arr_49 [i_6 - 1] [i_6 - 1] [i_6] [i_6] [(signed char)7]))))))))));
            var_60 = ((/* implicit */short) min((var_60), (var_12)));
        }
    }
    for (unsigned long long int i_36 = 3; i_36 < 11; i_36 += 2) 
    {
        var_61 = ((((/* implicit */_Bool) (unsigned short)56929)) ? (arr_6 [i_36] [i_36] [i_36] [i_36 + 1] [i_36] [i_36]) : (((/* implicit */unsigned long long int) arr_31 [i_36] [i_36] [i_36 - 2] [i_36])));
        var_62 = ((/* implicit */long long int) 12836303776357303898ULL);
        var_63 = ((/* implicit */_Bool) arr_9 [i_36 + 1] [16LL]);
        /* LoopNest 2 */
        for (unsigned char i_37 = 0; i_37 < 12; i_37 += 2) 
        {
            for (signed char i_38 = 0; i_38 < 12; i_38 += 2) 
            {
                {
                    arr_129 [i_36] [i_36] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_81 [i_36 - 1] [i_36 + 1])))) ? ((~(arr_124 [i_37]))) : (((unsigned long long int) var_5))));
                    arr_130 [i_36] [i_37] [i_36] [i_38] = ((/* implicit */unsigned int) ((signed char) min((arr_111 [i_36 - 1] [i_36 - 3] [i_36 - 3] [i_37] [16ULL]), (arr_106 [i_36 + 1] [(unsigned short)5] [(unsigned short)5] [i_38] [i_38]))));
                    var_64 = ((/* implicit */unsigned long long int) var_12);
                    arr_131 [i_36] = ((/* implicit */signed char) 13606856125184899954ULL);
                }
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_39 = 0; i_39 < 1; i_39 += 1) 
        {
            for (unsigned long long int i_40 = 0; i_40 < 12; i_40 += 2) 
            {
                {
                    arr_137 [i_36] [i_40] [i_39] [i_40] &= ((/* implicit */unsigned long long int) arr_103 [i_36] [i_36] [2LL] [i_40]);
                    var_65 = ((/* implicit */unsigned long long int) min((var_65), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 14941839105276188984ULL)) || (((((/* implicit */int) arr_5 [i_36 + 1] [i_36 + 1] [i_36 - 2] [i_36 + 1])) > (((/* implicit */int) arr_5 [i_36 + 1] [i_36 + 1] [i_36 - 2] [i_36 + 1])))))))));
                    var_66 = ((/* implicit */short) (-(((/* implicit */int) arr_121 [i_36] [i_39]))));
                }
            } 
        } 
    }
    var_67 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) var_12)), (((((/* implicit */_Bool) var_0)) ? (var_4) : (var_10)))));
}
