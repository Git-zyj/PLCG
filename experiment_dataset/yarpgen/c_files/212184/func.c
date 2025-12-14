/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212184
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
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            arr_4 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) ((int) var_6));
            var_17 |= ((/* implicit */unsigned short) ((signed char) (signed char)78));
            arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (!(var_9)));
        }
        /* vectorizable */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned int i_3 = 1; i_3 < 17; i_3 += 2) 
            {
                arr_12 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */long long int) (~(var_8)));
                arr_13 [i_3] = ((((/* implicit */_Bool) ((var_0) / (var_3)))) ? (((/* implicit */int) ((_Bool) var_11))) : (arr_0 [i_0] [i_2]));
            }
            var_18 = ((/* implicit */_Bool) ((var_13) / (((/* implicit */unsigned long long int) ((var_9) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_10)))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_4 = 1; i_4 < 15; i_4 += 3) 
            {
                /* LoopSeq 2 */
                for (int i_5 = 1; i_5 < 17; i_5 += 3) 
                {
                    var_19 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_0])) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (short)-1211)))));
                    var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) arr_11 [i_0] [i_0] [i_0]))));
                    /* LoopSeq 4 */
                    for (signed char i_6 = 0; i_6 < 18; i_6 += 3) /* same iter space */
                    {
                        var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((arr_14 [i_4 + 2] [i_4] [i_5]) * (var_8))))));
                        var_22 = ((/* implicit */int) var_6);
                        arr_26 [i_0] [i_2 - 1] [i_2] [i_6] [i_5] [i_6] = ((/* implicit */long long int) arr_22 [i_6]);
                        var_23 = ((/* implicit */int) var_14);
                    }
                    for (signed char i_7 = 0; i_7 < 18; i_7 += 3) /* same iter space */
                    {
                        arr_29 [i_0] [i_0] [i_4] [i_5] [i_7] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((3212301835U) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-66)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_14))) | (var_15)))));
                        var_24 *= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)78))) ^ ((~(2682207108U)))));
                        arr_30 [i_0] [i_0] [i_4 - 1] [i_5] [i_7] = ((/* implicit */signed char) var_0);
                        var_25 = ((/* implicit */_Bool) ((((/* implicit */int) arr_22 [i_0])) + (((((/* implicit */int) var_5)) % (((/* implicit */int) var_9))))));
                    }
                    for (signed char i_8 = 0; i_8 < 18; i_8 += 3) /* same iter space */
                    {
                        var_26 *= ((/* implicit */short) var_9);
                        var_27 *= ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_17 [i_2] [i_2 - 1] [i_2]))));
                        var_28 ^= var_16;
                        var_29 = ((/* implicit */unsigned short) 1612760187U);
                    }
                    for (long long int i_9 = 0; i_9 < 18; i_9 += 1) 
                    {
                        var_30 = ((/* implicit */unsigned int) (-(((389329584) | (((/* implicit */int) var_5))))));
                        arr_35 [i_9] [i_4 + 2] [i_2] [i_0] = ((/* implicit */long long int) ((var_13) < (arr_2 [i_5] [i_5 + 1] [i_5])));
                        arr_36 [i_0] [i_0] [i_0] [i_0] [3] = ((/* implicit */int) ((((long long int) var_13)) - (((/* implicit */long long int) ((int) var_1)))));
                        arr_37 [i_0] [i_0] [i_0] [i_0] [(unsigned char)0] = ((/* implicit */signed char) arr_6 [i_0] [i_0] [i_0]);
                    }
                    var_31 &= ((/* implicit */_Bool) ((signed char) arr_23 [i_4] [i_4] [i_4] [i_4] [i_4] [i_0]));
                    arr_38 [i_0] [i_0] [i_0] [i_2] [i_0] [i_5] = ((/* implicit */short) ((var_12) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5] [i_5 - 1]))) : (arr_34 [i_5] [(_Bool)1] [i_5] [(_Bool)1] [i_5])));
                }
                for (long long int i_10 = 2; i_10 < 16; i_10 += 4) 
                {
                    var_32 ^= ((/* implicit */signed char) (-(-6516346881639403389LL)));
                    arr_41 [i_0] [i_0] [i_4] [i_10] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_6)) / ((-(var_13)))));
                }
                arr_42 [i_4] [i_2 - 1] [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned char) var_12));
            }
        }
        for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) /* same iter space */
        {
            var_33 = ((/* implicit */_Bool) ((int) min((1515080464027469292ULL), (((/* implicit */unsigned long long int) (_Bool)0)))));
            /* LoopSeq 4 */
            /* vectorizable */
            for (int i_12 = 0; i_12 < 18; i_12 += 2) 
            {
                arr_49 [i_11] [i_11] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_0] [i_0] [i_0])) | (((/* implicit */int) var_7))));
                arr_50 [i_11] [i_11] = ((/* implicit */unsigned short) ((var_12) ? (var_0) : (arr_1 [i_11 - 1])));
                arr_51 [i_11] = ((/* implicit */unsigned int) (+(134217728)));
                var_34 -= ((/* implicit */int) ((((var_13) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_0] [i_0] [i_11 - 1] [i_12] [i_12] [i_0] [i_12])))));
                var_35 = ((/* implicit */short) ((unsigned long long int) arr_15 [i_0] [9LL] [9LL]));
            }
            for (long long int i_13 = 4; i_13 < 17; i_13 += 1) 
            {
                var_36 = ((/* implicit */long long int) (+(arr_27 [16] [i_13] [i_11] [i_11] [16] [i_0] [16])));
                arr_54 [i_0] [i_11] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) (unsigned char)254)), ((short)-1151))))) - (((((/* implicit */unsigned int) 319065235)) + (arr_40 [i_11] [i_11] [i_11 - 1])))));
                arr_55 [i_11] [i_11] [i_11 - 1] = ((/* implicit */signed char) var_11);
                /* LoopSeq 3 */
                for (unsigned int i_14 = 2; i_14 < 17; i_14 += 4) 
                {
                    var_37 = ((/* implicit */unsigned long long int) max((var_37), (((/* implicit */unsigned long long int) (((+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_18 [1U] [i_11] [i_13] [i_14] [i_14])) : (arr_10 [i_0] [i_0]))))) - (((((int) arr_56 [i_0] [i_11 - 1] [i_0] [i_14])) - ((+(((/* implicit */int) (unsigned char)122)))))))))));
                    /* LoopSeq 2 */
                    for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) /* same iter space */
                    {
                        arr_61 [i_0] [i_11] [i_0] [i_14] [i_15 - 1] = ((/* implicit */long long int) arr_9 [i_11] [i_13] [i_15]);
                        var_38 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned short) max((var_12), ((_Bool)1)))))));
                    }
                    for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) /* same iter space */
                    {
                        var_39 *= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_11))))) * (((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_12))))) % (min((var_2), (((/* implicit */unsigned long long int) var_9))))))));
                        var_40 = ((/* implicit */int) max((var_40), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_17 [i_13] [i_13] [i_13 - 3]))))) ? (min((var_4), (((/* implicit */long long int) var_15)))) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_14]))))))));
                        arr_64 [i_11] [i_11] [i_13] [i_14] [i_13] = ((/* implicit */short) (~((+(1548982560)))));
                    }
                }
                /* vectorizable */
                for (unsigned short i_17 = 0; i_17 < 18; i_17 += 3) 
                {
                    arr_69 [i_0] [i_11] [i_13] [i_17] [i_11] = ((/* implicit */_Bool) ((((/* implicit */int) arr_45 [i_11] [i_11 - 1] [i_11])) + (((/* implicit */int) arr_45 [i_11] [i_11 - 1] [i_11]))));
                    var_41 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)-1151)) & (((/* implicit */int) (unsigned short)43831))));
                    var_42 = (!(((/* implicit */_Bool) var_11)));
                }
                for (unsigned short i_18 = 4; i_18 < 16; i_18 += 3) 
                {
                    /* LoopSeq 4 */
                    for (unsigned int i_19 = 0; i_19 < 18; i_19 += 3) /* same iter space */
                    {
                        var_43 = min((((arr_46 [i_11] [i_13 - 3] [i_11 - 1] [i_11]) ? ((~(var_2))) : (var_13))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_7))))));
                        var_44 = ((/* implicit */unsigned char) min((var_44), (((/* implicit */unsigned char) max((((var_6) + (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_11 - 1] [i_0]))))), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_11 [i_13 - 3] [i_13 - 4] [i_0]))))))))));
                    }
                    for (unsigned int i_20 = 0; i_20 < 18; i_20 += 3) /* same iter space */
                    {
                        var_45 = ((/* implicit */unsigned long long int) ((unsigned char) (+(arr_14 [i_11 - 1] [i_13] [i_13 - 1]))));
                        var_46 = ((/* implicit */unsigned char) min((min((((/* implicit */unsigned int) (-(var_16)))), (min((1906330311U), (((/* implicit */unsigned int) var_9)))))), (((unsigned int) arr_73 [i_0] [i_0] [14] [i_0] [i_0]))));
                        var_47 ^= ((/* implicit */unsigned long long int) max((((/* implicit */int) arr_66 [i_13 - 2] [i_13 - 3] [i_13] [i_13] [i_13] [i_13])), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_66 [i_13 - 2] [i_13] [i_11] [14LL] [14LL] [14LL])) : (((/* implicit */int) (unsigned char)219))))));
                    }
                    for (unsigned long long int i_21 = 1; i_21 < 16; i_21 += 4) 
                    {
                        var_48 = ((/* implicit */_Bool) var_10);
                        arr_82 [i_11] [i_11] [i_11] [5LL] [i_11] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) + (var_2)))));
                        arr_83 [i_0] [i_0] [i_13 - 3] [i_11] [i_21] = ((/* implicit */unsigned int) (-(((/* implicit */int) (short)1153))));
                    }
                    for (unsigned int i_22 = 0; i_22 < 18; i_22 += 3) 
                    {
                        var_49 *= ((/* implicit */int) ((arr_16 [i_18]) != (max((596684312), (((/* implicit */int) (_Bool)1))))));
                        var_50 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_10 [i_18 - 3] [i_11 - 1])), (arr_62 [i_13 - 2] [i_11])))), (((((/* implicit */unsigned long long int) var_16)) + ((+(7874240275164501526ULL)))))));
                    }
                    arr_86 [i_11] = ((/* implicit */signed char) (-(((/* implicit */int) var_7))));
                }
            }
            for (unsigned short i_23 = 0; i_23 < 18; i_23 += 3) 
            {
                arr_90 [i_11] [i_11] [i_11] = ((/* implicit */int) (!(((/* implicit */_Bool) min((arr_53 [i_11 - 1] [i_11 - 1]), (((/* implicit */long long int) var_16)))))));
                arr_91 [i_11] = (+(((/* implicit */int) ((_Bool) arr_77 [i_23] [i_11 - 1] [i_23] [i_23] [i_11 - 1] [i_11 - 1] [i_11 - 1]))));
                /* LoopSeq 3 */
                for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                {
                    arr_95 [i_11] [i_11] [i_23] [i_24] = ((/* implicit */unsigned int) max((((/* implicit */long long int) min((max((((/* implicit */unsigned short) (signed char)0)), ((unsigned short)47976))), (((/* implicit */unsigned short) (_Bool)1))))), (var_4)));
                    /* LoopSeq 1 */
                    for (short i_25 = 0; i_25 < 18; i_25 += 2) 
                    {
                        arr_98 [i_24] [i_11] [i_11] [i_0] = ((/* implicit */unsigned int) ((_Bool) min((((/* implicit */unsigned long long int) var_3)), (max((((/* implicit */unsigned long long int) arr_27 [i_0] [i_11] [i_0] [i_23] [i_24] [i_25] [i_25])), (var_13))))));
                        var_51 = ((/* implicit */unsigned short) (~(((unsigned int) ((signed char) var_1)))));
                        arr_99 [i_0] [i_11] [i_11] [i_11] [i_25] = ((/* implicit */int) max((((/* implicit */unsigned int) min(((unsigned short)3550), (((/* implicit */unsigned short) (_Bool)1))))), (((var_3) - (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))));
                    }
                    arr_100 [i_0] [i_11 - 1] [i_23] [i_11] = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)132))));
                    var_52 = ((/* implicit */signed char) var_16);
                    var_53 = arr_85 [i_0] [i_0] [i_23] [i_23] [i_11];
                }
                /* vectorizable */
                for (unsigned char i_26 = 1; i_26 < 16; i_26 += 3) 
                {
                    var_54 = ((/* implicit */unsigned int) min((var_54), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (+(-975964344)))) & (((((/* implicit */_Bool) var_7)) ? (var_13) : (var_13))))))));
                    arr_104 [i_0] [i_0] [i_0] [i_0] [i_11] = (-(((4168949152U) - (((/* implicit */unsigned int) ((/* implicit */int) var_12))))));
                    arr_105 [i_0] [i_0] [i_23] [i_0] [i_23] [i_0] &= ((/* implicit */unsigned long long int) 2008798317U);
                }
                for (unsigned char i_27 = 0; i_27 < 18; i_27 += 3) 
                {
                    var_55 ^= ((unsigned int) ((((/* implicit */unsigned int) max((((/* implicit */int) var_5)), (arr_16 [i_27])))) != (((((/* implicit */_Bool) var_8)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))));
                    var_56 ^= ((/* implicit */long long int) 1612760187U);
                }
            }
            for (unsigned char i_28 = 0; i_28 < 18; i_28 += 1) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_29 = 0; i_29 < 18; i_29 += 3) 
                {
                    var_57 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-32372)) ? (((/* implicit */long long int) (~(var_3)))) : (((((/* implicit */_Bool) 16591686173675809626ULL)) ? (var_4) : (((/* implicit */long long int) var_3))))));
                    arr_115 [i_0] [i_11] [i_11] = ((/* implicit */long long int) 5803438709228134300ULL);
                }
                var_58 = ((/* implicit */_Bool) ((int) -5947189001786142637LL));
            }
        }
        for (_Bool i_30 = 1; i_30 < 1; i_30 += 1) /* same iter space */
        {
            var_59 = ((/* implicit */short) max((var_59), (((/* implicit */short) ((((/* implicit */unsigned long long int) (+(arr_62 [i_0] [i_0])))) * (((((/* implicit */unsigned long long int) arr_92 [i_30] [i_30 - 1] [i_30 - 1] [i_0])) ^ (((var_13) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))))));
            var_60 += ((/* implicit */_Bool) min(((-(((/* implicit */int) (unsigned char)14)))), ((((!(((/* implicit */_Bool) arr_92 [i_0] [i_0] [i_0] [i_0])))) ? ((~(((/* implicit */int) arr_65 [i_0] [2U] [i_0])))) : (((/* implicit */int) ((unsigned char) (-2147483647 - 1))))))));
            arr_118 [i_30] [i_30] = ((/* implicit */unsigned char) max(((+(var_4))), (((/* implicit */long long int) var_5))));
            var_61 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((_Bool) var_14)))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)57559))) : (min(((-(var_4))), (((long long int) var_5))))));
            var_62 = ((/* implicit */short) min((((((/* implicit */_Bool) arr_23 [i_0] [i_30] [i_0] [i_0] [i_0] [i_30])) ? (arr_23 [i_0] [i_0] [i_30] [i_30] [(unsigned short)1] [i_30]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(var_16)))) ? (((/* implicit */int) (short)-32372)) : (((/* implicit */int) ((unsigned short) arr_65 [i_0] [i_30 - 1] [i_30]))))))));
        }
        arr_119 [i_0] = ((/* implicit */unsigned int) var_16);
    }
    /* vectorizable */
    for (unsigned long long int i_31 = 0; i_31 < 17; i_31 += 2) 
    {
        var_63 = ((/* implicit */_Bool) var_16);
        var_64 *= (~(var_6));
    }
    var_65 *= ((/* implicit */unsigned char) ((unsigned long long int) min((((/* implicit */unsigned int) ((var_12) || (((/* implicit */_Bool) var_8))))), (max((var_6), (((/* implicit */unsigned int) var_12)))))));
}
