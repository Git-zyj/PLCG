/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33026
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
    for (long long int i_0 = 3; i_0 < 16; i_0 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */short) max((((((/* implicit */_Bool) (unsigned char)0)) ? (((arr_0 [(short)8]) << (((((/* implicit */int) (unsigned char)255)) - (255))))) : (((/* implicit */int) max((var_5), ((unsigned char)97)))))), (arr_0 [i_0])));
        var_20 |= ((/* implicit */short) ((((/* implicit */_Bool) (signed char)47)) ? (7827873968873923146ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)2048)))));
    }
    for (long long int i_1 = 3; i_1 < 16; i_1 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */_Bool) var_8);
        var_22 *= ((/* implicit */short) var_13);
    }
    /* LoopSeq 4 */
    for (short i_2 = 2; i_2 < 20; i_2 += 1) 
    {
        var_23 = ((/* implicit */_Bool) min((var_23), ((!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)1)), (((137304735744ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)18965))))))))))));
        arr_8 [i_2] = ((/* implicit */short) arr_5 [(unsigned char)19]);
    }
    /* vectorizable */
    for (signed char i_3 = 2; i_3 < 10; i_3 += 4) 
    {
        arr_12 [(_Bool)1] = ((/* implicit */signed char) ((((1009850358950302322LL) >= (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_3]))))) ? ((((_Bool)1) ? (7891880441530817746LL) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_3]))))) : (((/* implicit */long long int) ((/* implicit */int) (short)-23615)))));
        /* LoopNest 2 */
        for (unsigned char i_4 = 0; i_4 < 12; i_4 += 2) 
        {
            for (long long int i_5 = 0; i_5 < 12; i_5 += 4) 
            {
                {
                    arr_20 [i_3 + 1] [(unsigned char)3] [4LL] = ((/* implicit */unsigned long long int) ((((var_15) == (((/* implicit */int) arr_10 [2])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -1)))))) : (((((/* implicit */_Bool) arr_9 [1LL])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-5249))) : (var_12)))));
                    /* LoopSeq 4 */
                    for (long long int i_6 = 0; i_6 < 12; i_6 += 3) 
                    {
                        arr_24 [i_4] [1LL] [i_4] [i_4] [1LL] [1LL] = ((/* implicit */unsigned char) (-(arr_16 [i_3 - 2])));
                        var_24 = ((((/* implicit */int) (signed char)-63)) >= (arr_6 [i_5]));
                        /* LoopSeq 3 */
                        for (int i_7 = 0; i_7 < 12; i_7 += 4) 
                        {
                            arr_27 [(signed char)6] [8ULL] [(_Bool)1] [i_5] [(_Bool)1] [(_Bool)1] [(_Bool)1] = ((/* implicit */short) ((((/* implicit */int) (unsigned char)255)) | (((/* implicit */int) (_Bool)1))));
                            var_25 = ((/* implicit */unsigned char) (_Bool)1);
                            var_26 = ((/* implicit */short) (+(((((/* implicit */_Bool) 4774602897806229404ULL)) ? (var_2) : (((/* implicit */int) var_1))))));
                            var_27 &= ((/* implicit */short) (+(((/* implicit */int) arr_13 [i_3 + 1]))));
                        }
                        for (int i_8 = 3; i_8 < 10; i_8 += 3) 
                        {
                            var_28 = (((((_Bool)1) ? (arr_23 [i_3] [i_4] [(_Bool)0]) : (((/* implicit */int) (unsigned char)4)))) < (((((/* implicit */_Bool) 1118322061)) ? (((/* implicit */int) (short)25801)) : (arr_18 [(_Bool)1]))));
                            var_29 = ((/* implicit */unsigned char) ((arr_26 [i_4] [i_8 + 2]) && (((/* implicit */_Bool) arr_1 [i_8] [i_8]))));
                            var_30 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) 1841389559570143734ULL)) ? (arr_22 [i_3 - 2] [i_4] [i_5] [i_6]) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-59)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_2 [i_4])))))));
                            arr_30 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] [i_8] = ((/* implicit */short) (-(((((/* implicit */int) (_Bool)1)) / (arr_18 [i_3])))));
                        }
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [6ULL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_9)))) ? ((-(var_2))) : (arr_18 [i_3]))))));
                            var_32 = ((/* implicit */short) ((arr_32 [i_3 + 1] [i_3 - 2] [i_3 - 1] [i_3 - 1] [i_3 + 2]) >= (var_9)));
                            var_33 = ((/* implicit */unsigned char) var_16);
                        }
                        var_34 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)238))))) ? (((/* implicit */unsigned long long int) 169180681)) : (((arr_25 [i_3] [i_4] [i_5]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32745)))))));
                    }
                    for (short i_10 = 2; i_10 < 11; i_10 += 2) 
                    {
                        arr_37 [10] [i_3] [i_4] [(_Bool)1] [i_10] = ((/* implicit */_Bool) ((((/* implicit */int) var_8)) | (((/* implicit */int) (unsigned char)203))));
                        var_35 *= ((/* implicit */unsigned long long int) ((((18446744073709551615ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_3 - 2] [i_3]))))) ? (((/* implicit */int) arr_4 [i_5])) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (_Bool)1)) : (arr_29 [(_Bool)1] [i_3] [i_3])))));
                        var_36 *= ((/* implicit */_Bool) (-(arr_23 [i_10 - 2] [i_10 + 1] [(unsigned char)11])));
                        var_37 = ((/* implicit */unsigned long long int) (+(1972647990)));
                    }
                    for (int i_11 = 0; i_11 < 12; i_11 += 4) /* same iter space */
                    {
                        var_38 = ((/* implicit */unsigned char) ((arr_21 [i_3 + 2] [i_3 - 2] [i_3 + 1]) & (((/* implicit */int) arr_28 [i_3 - 2] [i_3 - 1] [i_3 + 2] [(short)2] [i_3 - 1] [i_4] [(_Bool)1]))));
                        var_39 *= ((/* implicit */short) arr_19 [i_4]);
                        var_40 = ((/* implicit */short) ((((/* implicit */int) ((signed char) var_4))) / (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_3])) && (((/* implicit */_Bool) arr_33 [i_3] [7] [i_3] [11LL] [i_3])))))));
                    }
                    for (int i_12 = 0; i_12 < 12; i_12 += 4) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            var_41 = ((_Bool) arr_39 [i_3] [2ULL] [i_3 + 1] [i_3] [(short)4] [i_3]);
                            arr_49 [i_3] [i_3] [(_Bool)0] [i_12] [i_13] [i_3] [i_13] = ((/* implicit */int) (!(((/* implicit */_Bool) 162021185))));
                            var_42 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0ULL)) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_13 [(short)6])))) : (((((/* implicit */int) arr_40 [i_13] [i_3] [i_12] [i_3] [0] [i_3])) + (((/* implicit */int) (_Bool)1))))));
                            var_43 = ((/* implicit */_Bool) arr_22 [7ULL] [i_12] [i_3 + 2] [i_3 + 2]);
                        }
                        for (int i_14 = 2; i_14 < 11; i_14 += 2) 
                        {
                            var_44 = ((/* implicit */unsigned long long int) var_4);
                            var_45 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_3])) ? (arr_25 [i_3 + 2] [i_3 + 2] [(_Bool)1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_12])))));
                            arr_53 [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */long long int) -1118322080);
                        }
                        for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
                        {
                            arr_57 [i_3] [(_Bool)1] [i_5] [i_5] [i_3] |= ((/* implicit */int) ((((/* implicit */_Bool) var_13)) ? (arr_45 [i_3] [i_4] [i_5] [i_12] [i_12] [i_15 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
                            var_46 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_31 [i_3 + 2] [i_3 - 1] [i_15] [i_3 + 2] [(short)5])) ? (arr_45 [i_3 + 1] [i_3 - 2] [i_3 - 2] [i_3 + 2] [i_3] [i_3 + 2]) : (arr_45 [i_3] [i_4] [(short)3] [(short)3] [6LL] [(short)3])));
                            arr_58 [i_15] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) arr_51 [i_3] [i_4] [2ULL] [11] [i_15] [i_15 - 1])) : (arr_29 [i_4] [(_Bool)1] [i_12])));
                            var_47 = ((/* implicit */_Bool) ((((var_14) + (2147483647))) >> (((arr_7 [i_3 - 2]) + (2197992714057683505LL)))));
                        }
                        /* LoopSeq 1 */
                        for (short i_16 = 0; i_16 < 12; i_16 += 4) 
                        {
                            var_48 ^= ((/* implicit */short) ((_Bool) arr_38 [i_3 + 2] [i_3 - 2] [i_3] [i_3 + 1]));
                            var_49 = ((/* implicit */_Bool) min((var_49), (((/* implicit */_Bool) ((((/* implicit */_Bool) 7ULL)) ? (arr_23 [i_3 - 2] [i_3 + 1] [i_3 + 2]) : (((/* implicit */int) arr_2 [i_16])))))));
                            var_50 ^= ((/* implicit */short) ((var_6) ? (((/* implicit */int) (signed char)-6)) : (-2147483647)));
                        }
                        var_51 ^= ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_4])) ? (arr_47 [i_3] [i_4] [i_5] [i_4] [(_Bool)0] [i_4]) : (((/* implicit */int) arr_11 [4])))));
                        var_52 = arr_45 [i_3 + 2] [i_3] [i_3 + 2] [i_3 + 2] [i_3 - 1] [i_3];
                    }
                    var_53 = ((/* implicit */int) var_1);
                    /* LoopNest 2 */
                    for (signed char i_17 = 1; i_17 < 11; i_17 += 4) 
                    {
                        for (int i_18 = 0; i_18 < 12; i_18 += 4) 
                        {
                            {
                                var_54 = ((/* implicit */_Bool) arr_62 [i_3] [i_3 + 1] [(_Bool)1] [i_3 - 2] [i_3 + 1] [i_17 - 1]);
                                var_55 *= ((((/* implicit */_Bool) arr_61 [i_3] [i_17 - 1] [10ULL] [6ULL] [1] [i_3 + 2])) ? (((((/* implicit */int) arr_36 [i_3 + 2] [(unsigned char)2] [i_5] [i_5])) / (((/* implicit */int) arr_28 [i_3 - 1] [i_4] [i_4] [10ULL] [i_17 + 1] [i_4] [i_18])))) : (((/* implicit */int) var_7)));
                                var_56 = ((/* implicit */int) arr_28 [i_3] [i_3] [0LL] [i_3] [i_3] [i_3] [2LL]);
                                var_57 = ((/* implicit */short) ((((((/* implicit */unsigned long long int) 1118322056)) * (7947351428881101147ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)1536)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (short i_19 = 0; i_19 < 13; i_19 += 4) 
    {
        var_58 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) max((((/* implicit */short) (unsigned char)173)), (var_7)))))) || (((/* implicit */_Bool) max((((/* implicit */int) (short)-1)), (((((/* implicit */_Bool) arr_66 [i_19])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_3 [i_19])))))))));
        var_59 = (!(((/* implicit */_Bool) ((((/* implicit */int) arr_1 [2ULL] [i_19])) >> (((((/* implicit */int) arr_1 [i_19] [i_19])) - (1988)))))));
    }
    for (short i_20 = 0; i_20 < 14; i_20 += 3) 
    {
        /* LoopSeq 1 */
        for (long long int i_21 = 0; i_21 < 14; i_21 += 1) 
        {
            var_60 ^= ((/* implicit */_Bool) ((unsigned char) max((((/* implicit */short) arr_3 [i_21])), (arr_70 [10]))));
            arr_75 [i_20] = ((/* implicit */_Bool) arr_72 [i_20] [i_20]);
            var_61 = ((/* implicit */signed char) (-((-(var_17)))));
            var_62 = ((/* implicit */int) min((var_62), (((/* implicit */int) (_Bool)1))));
            var_63 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)(-127 - 1)))))));
        }
        var_64 = ((/* implicit */short) max((((/* implicit */unsigned long long int) arr_73 [i_20])), (((((/* implicit */unsigned long long int) ((arr_71 [i_20]) ? (((/* implicit */int) arr_1 [i_20] [i_20])) : (((/* implicit */int) (unsigned char)254))))) - (var_18)))));
        var_65 *= ((/* implicit */_Bool) min((var_17), (((/* implicit */long long int) max((((/* implicit */int) arr_70 [(_Bool)0])), ((+(((/* implicit */int) (_Bool)1)))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_22 = 0; i_22 < 14; i_22 += 1) 
        {
            for (short i_23 = 0; i_23 < 14; i_23 += 2) 
            {
                {
                    var_66 = ((/* implicit */_Bool) ((((((/* implicit */long long int) var_2)) / (arr_77 [i_20] [i_20]))) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)-1)) : (var_13)))) ? (((/* implicit */long long int) (-(((/* implicit */int) (short)256))))) : (-8228435337054984272LL)))));
                    /* LoopNest 2 */
                    for (int i_24 = 1; i_24 < 12; i_24 += 4) 
                    {
                        for (unsigned char i_25 = 0; i_25 < 14; i_25 += 2) 
                        {
                            {
                                var_67 = ((/* implicit */_Bool) min((var_67), (((/* implicit */_Bool) (short)1))));
                                var_68 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_83 [i_20] [i_20] [i_23] [(unsigned char)13] [i_25]))));
                            }
                        } 
                    } 
                    var_69 *= ((/* implicit */_Bool) (-((+(((/* implicit */int) arr_83 [i_20] [i_23] [i_20] [i_20] [i_20]))))));
                }
            } 
        } 
        var_70 = ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) arr_1 [i_20] [i_20]))))));
    }
}
