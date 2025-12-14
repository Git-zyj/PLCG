/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51742
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        var_15 = ((/* implicit */unsigned short) ((((((/* implicit */int) (signed char)-10)) > (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) -8119254576953544006LL))))) : (((/* implicit */int) ((unsigned char) 2790298366823408948LL)))));
        arr_2 [(unsigned short)4] = ((/* implicit */unsigned short) -995456280);
        var_16 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7380))) : (arr_0 [i_0 + 1])));
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_17 = ((((/* implicit */_Bool) ((unsigned char) arr_3 [i_1]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0 + 1]))) : (((10367996501488814977ULL) ^ (10367996501488814977ULL))));
            var_18 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) & (4294967295U)));
            var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_0 + 2])) || (((/* implicit */_Bool) arr_6 [i_0 + 2])))))));
            /* LoopSeq 2 */
            for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                /* LoopSeq 1 */
                for (int i_3 = 0; i_3 < 18; i_3 += 3) 
                {
                    /* LoopSeq 3 */
                    for (long long int i_4 = 0; i_4 < 18; i_4 += 4) 
                    {
                        var_20 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_2])) ? (arr_0 [i_0 - 1]) : (arr_0 [i_0])));
                        arr_15 [(unsigned char)8] [i_0] [(unsigned char)8] [i_2] [14ULL] [i_4] = ((/* implicit */unsigned int) arr_9 [i_0] [i_0 + 1] [(signed char)4]);
                        var_21 = ((/* implicit */long long int) ((_Bool) ((unsigned long long int) 100514030U)));
                    }
                    for (unsigned short i_5 = 0; i_5 < 18; i_5 += 4) 
                    {
                        var_22 = ((/* implicit */short) arr_16 [(unsigned short)9] [(unsigned short)9] [i_1] [i_2] [i_2] [i_3] [i_5]);
                        var_23 = ((/* implicit */unsigned short) ((-1LL) == (((/* implicit */long long int) -753671330))));
                    }
                    for (short i_6 = 1; i_6 < 15; i_6 += 3) 
                    {
                        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2591016128U)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */int) arr_14 [i_6] [i_3] [i_2] [i_1] [i_2] [i_1] [3ULL])) : (((/* implicit */int) arr_19 [i_0] [i_0] [(_Bool)1] [i_2] [i_3] [i_3] [i_6])))))));
                        var_25 = ((/* implicit */unsigned int) ((((_Bool) 2769132191U)) ? (arr_3 [15]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_13 [i_0] [i_1] [i_0] [i_0] [i_0]))))));
                        var_26 = ((/* implicit */int) arr_17 [i_2]);
                    }
                    var_27 = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) 8119254576953544005LL)) ? (-7682227683143518854LL) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_0] [i_1] [i_2] [i_2]))))));
                }
                var_28 = ((/* implicit */unsigned char) ((long long int) arr_6 [i_0 + 2]));
                arr_21 [i_0] [i_1] [i_2] = ((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]);
                var_29 = ((/* implicit */_Bool) arr_6 [i_0]);
            }
            for (unsigned short i_7 = 0; i_7 < 18; i_7 += 3) 
            {
                /* LoopSeq 3 */
                for (unsigned int i_8 = 1; i_8 < 17; i_8 += 1) 
                {
                    arr_26 [i_7] [i_7] [i_1] [i_7] = ((/* implicit */long long int) -65286514);
                    var_30 = ((((/* implicit */_Bool) (unsigned char)166)) ? (arr_25 [i_0 + 1] [(short)1] [(unsigned short)16] [i_0] [5] [i_8 + 1]) : (((/* implicit */int) (unsigned char)141)));
                    var_31 = ((/* implicit */unsigned short) ((((2722260842U) | (614926858U))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)7501)))));
                    var_32 = ((/* implicit */_Bool) arr_23 [i_0 + 2] [(_Bool)1] [i_8 - 1] [i_8]);
                    arr_27 [i_1] [i_1] [i_1] [i_7] [(short)3] = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) 13563279528364690444ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)203))) : (arr_0 [i_1]))));
                }
                for (long long int i_9 = 4; i_9 < 16; i_9 += 3) 
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_10 = 0; i_10 < 18; i_10 += 3) 
                    {
                        var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_10] [i_1]))) + (arr_16 [i_0] [i_0] [i_0] [(short)4] [i_0] [i_9] [i_10])))) ? (arr_16 [i_0] [i_1] [i_1] [i_1] [i_7] [i_9] [i_10]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_9] [i_1] [i_10])))));
                        var_34 &= ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)15487)) ? (((/* implicit */int) arr_14 [i_0] [i_1] [i_7] [16U] [i_1] [i_10] [(short)7])) : (((/* implicit */int) arr_1 [i_0]))))) - (arr_31 [i_0 - 1] [i_0] [i_1] [(unsigned short)0] [i_1] [i_7]));
                    }
                    for (unsigned short i_11 = 2; i_11 < 16; i_11 += 1) /* same iter space */
                    {
                        arr_34 [i_7] [i_7] [i_7] [i_7] = ((/* implicit */_Bool) ((-8119254576953544005LL) ^ (-8119254576953544020LL)));
                        var_35 -= ((/* implicit */short) ((((/* implicit */int) arr_20 [i_11] [i_9] [9] [i_1] [i_0] [i_0])) + (((/* implicit */int) arr_20 [i_0 + 2] [(signed char)13] [i_7] [(signed char)13] [i_11 - 2] [i_11]))));
                        arr_35 [i_0] [i_1] [i_7] [i_9] [3ULL] = ((/* implicit */unsigned short) ((unsigned long long int) 8078747572220736629ULL));
                    }
                    for (unsigned short i_12 = 2; i_12 < 16; i_12 += 1) /* same iter space */
                    {
                        arr_40 [i_0] [i_0] [i_0] [i_7] [i_0] = ((/* implicit */unsigned short) ((10367996501488814998ULL) & (((/* implicit */unsigned long long int) 542551599))));
                        var_36 ^= ((/* implicit */unsigned long long int) (_Bool)0);
                    }
                    arr_41 [i_7] [i_0] [i_7] [i_7] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_28 [(unsigned char)5] [(unsigned char)5] [(signed char)3] [i_1] [(signed char)3] [i_9])) && (arr_12 [i_0] [i_0] [i_0] [i_0] [(_Bool)1] [i_0]))))) | (((((/* implicit */long long int) ((/* implicit */int) arr_32 [i_7] [i_1] [i_7] [17] [(unsigned short)7]))) + (8119254576953544019LL)))));
                    var_37 &= ((((/* implicit */_Bool) ((short) arr_23 [i_0] [i_1] [i_7] [(short)17]))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_18 [i_0] [i_1] [i_7] [14ULL]))) < (-8119254576953544005LL)))) : (((/* implicit */int) ((_Bool) 1034073692U))));
                    /* LoopSeq 1 */
                    for (unsigned short i_13 = 0; i_13 < 18; i_13 += 1) 
                    {
                        var_38 = ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)15487))) < (1240599416U));
                        var_39 *= ((/* implicit */unsigned long long int) arr_12 [i_0] [i_0] [i_0] [i_0] [12ULL] [i_0]);
                        var_40 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_33 [9U] [(unsigned char)6] [i_7] [i_7] [i_1] [i_0]) ? (arr_29 [i_13] [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (short)-32767)))))) ? (((long long int) -8119254576953544020LL)) : (((/* implicit */long long int) ((unsigned int) (_Bool)0)))));
                        arr_45 [i_0] [i_1] [i_7] [i_1] [i_0] = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) arr_0 [i_9])) ? (((/* implicit */int) arr_22 [1ULL])) : (((/* implicit */int) arr_1 [i_0])))));
                        arr_46 [i_0] [i_0] [i_0] [i_7] [i_13] = ((/* implicit */long long int) arr_0 [i_1]);
                    }
                }
                for (unsigned char i_14 = 0; i_14 < 18; i_14 += 1) 
                {
                    var_41 = ((/* implicit */unsigned short) min((var_41), (((unsigned short) 6719149104373445931ULL))));
                    var_42 *= ((/* implicit */_Bool) ((((_Bool) arr_23 [i_14] [i_7] [16ULL] [i_0])) ? (((/* implicit */int) arr_23 [i_0] [i_1] [7LL] [12LL])) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_7] [(unsigned short)7] [i_7] [i_14]))) == (8078747572220736638ULL))))));
                    var_43 -= ((/* implicit */unsigned short) ((int) (unsigned short)20660));
                    arr_49 [i_0] [i_7] [i_7] [i_7] [i_1] = ((/* implicit */_Bool) arr_16 [(unsigned char)8] [i_14] [i_7] [(short)2] [i_1] [i_0] [i_0]);
                    arr_50 [i_0] [i_1] [i_7] [i_0] = ((/* implicit */unsigned long long int) 4294967295U);
                }
                var_44 &= ((/* implicit */unsigned int) arr_4 [i_1] [i_1]);
                var_45 *= ((/* implicit */unsigned short) arr_7 [(unsigned char)10]);
                arr_51 [i_0] [i_7] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_0 - 1] [i_0] [i_0 + 1] [i_0] [i_0] [i_0]))) > (3265420769964727005ULL)));
                var_46 = ((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_0])) << (((arr_16 [(unsigned char)1] [i_0] [(short)9] [i_0 + 2] [i_0 - 1] [i_0] [i_7]) - (3245162530U)))));
            }
            arr_52 [i_0] [(short)12] [(short)12] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) 1391971408U)) + (7161185251903387375ULL)));
        }
        for (unsigned short i_15 = 0; i_15 < 18; i_15 += 4) 
        {
            var_47 = ((/* implicit */unsigned int) ((unsigned short) arr_47 [i_0 - 1] [i_0 - 1] [6] [i_0]));
            var_48 = ((/* implicit */short) ((-319745747542281541LL) ^ (arr_31 [i_0] [i_0] [i_0] [i_15] [4] [2ULL])));
        }
    }
    /* vectorizable */
    for (unsigned short i_16 = 3; i_16 < 17; i_16 += 2) 
    {
        arr_59 [i_16] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) arr_55 [i_16] [i_16])) : (3265420769964727005ULL)))) ? (((((/* implicit */_Bool) (unsigned short)510)) ? (1391971414U) : (((/* implicit */unsigned int) arr_58 [0LL])))) : (arr_57 [i_16] [i_16])));
        arr_60 [i_16] [i_16] = ((/* implicit */unsigned short) arr_57 [i_16] [i_16]);
    }
    for (unsigned int i_17 = 0; i_17 < 24; i_17 += 2) 
    {
        var_49 = arr_61 [i_17] [i_17];
        arr_63 [i_17] [i_17] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) arr_62 [i_17])) : (((/* implicit */int) arr_62 [i_17]))))) ? (-8119254576953544005LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((-8119254576953544005LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)24890)))))) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_61 [i_17] [i_17])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_62 [i_17])) && ((_Bool)1)))))))));
    }
    /* vectorizable */
    for (int i_18 = 0; i_18 < 15; i_18 += 2) 
    {
        arr_66 [i_18] = ((/* implicit */unsigned char) ((((long long int) -1960397825)) ^ (arr_55 [i_18] [i_18])));
        var_50 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) (unsigned short)65535))) ? ((((_Bool)1) ? (arr_17 [i_18]) : (((/* implicit */unsigned int) 1060373691)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [(short)2])) ? (899486613) : (((/* implicit */int) (unsigned short)798)))))));
        arr_67 [i_18] = ((((/* implicit */_Bool) arr_11 [i_18] [i_18] [i_18] [i_18])) ? (arr_31 [i_18] [i_18] [i_18] [i_18] [16LL] [i_18]) : (((/* implicit */long long int) ((/* implicit */int) arr_61 [i_18] [i_18]))));
        var_51 = ((((((/* implicit */int) arr_23 [i_18] [i_18] [i_18] [i_18])) / (((/* implicit */int) (unsigned short)50049)))) & (((/* implicit */int) ((unsigned short) 3575580064019218363LL))));
    }
    var_52 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((max((((/* implicit */unsigned int) var_7)), (var_3))) > (((/* implicit */unsigned int) ((int) 281474976710655ULL)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)31030)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_12)))) ? (var_13) : (var_11)))));
    var_53 = ((/* implicit */unsigned long long int) var_2);
}
