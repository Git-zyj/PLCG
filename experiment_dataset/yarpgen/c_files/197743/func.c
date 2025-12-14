/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197743
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
    var_15 &= var_4;
    var_16 = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) ((2653737662U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))) ? ((~(((/* implicit */int) var_11)))) : (((/* implicit */int) var_4)))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (long long int i_1 = 3; i_1 < 14; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        {
                            arr_9 [i_0] [i_0] [(unsigned short)7] [(unsigned short)7] = arr_2 [i_0];
                            var_17 = ((/* implicit */int) max((arr_4 [(unsigned short)2] [(unsigned short)2] [i_2] [(unsigned short)2]), (min((arr_4 [11U] [i_1 - 2] [i_3] [i_0]), (2653737673U)))));
                            arr_10 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((int) (+(((/* implicit */int) arr_7 [i_0] [i_1 - 3] [i_2] [(unsigned char)2])))));
                            var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) min((arr_4 [i_3] [i_1 + 1] [i_1 - 3] [i_1]), (arr_4 [15U] [15U] [i_1 + 2] [i_1 + 2]))))));
                            /* LoopSeq 3 */
                            /* vectorizable */
                            for (unsigned int i_4 = 0; i_4 < 17; i_4 += 4) 
                            {
                                var_19 = ((/* implicit */short) arr_6 [3LL] [i_1 + 3] [i_1 + 3]);
                                arr_13 [i_0] [0ULL] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_4] [(unsigned char)5] [8] [i_4] [i_1 + 1] [i_0])) ? (((/* implicit */int) arr_11 [i_4] [i_4] [i_0] [i_2] [i_1 + 1] [i_0])) : (((/* implicit */int) (unsigned short)21800))));
                            }
                            for (int i_5 = 1; i_5 < 13; i_5 += 4) 
                            {
                                var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)81))));
                                arr_16 [12] [10U] [i_1] [i_3] [i_0] [i_0] &= ((/* implicit */unsigned char) var_4);
                                arr_17 [(unsigned short)2] [i_1 - 2] [i_5] = ((/* implicit */unsigned short) var_5);
                            }
                            /* vectorizable */
                            for (unsigned int i_6 = 4; i_6 < 14; i_6 += 3) 
                            {
                                arr_22 [i_0] [i_1] [i_0] [(signed char)6] [i_0] [8ULL] [i_0] |= ((/* implicit */int) arr_19 [i_0] [i_0] [i_3]);
                                arr_23 [i_0] [i_1] [i_1] [i_2] [i_6] [i_6] = ((/* implicit */long long int) ((1641229655U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_1 + 3])))));
                                arr_24 [i_3] [i_2] [16U] &= (_Bool)0;
                                var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((unsigned short) arr_18 [i_1 - 2])))));
                            }
                        }
                    } 
                } 
                var_22 = ((/* implicit */long long int) 536870911);
                /* LoopSeq 3 */
                for (short i_7 = 0; i_7 < 17; i_7 += 3) 
                {
                    var_23 &= ((/* implicit */signed char) ((int) ((unsigned long long int) ((unsigned short) 3343442148U))));
                    var_24 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (unsigned short)53336)), (min((((/* implicit */unsigned long long int) 1641229645U)), (arr_27 [i_1 - 3] [i_1 - 3])))));
                    arr_28 [i_0] [i_7] [i_7] = ((/* implicit */int) max((min(((-(2653737651U))), (((/* implicit */unsigned int) (unsigned short)51946)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((unsigned short)40619), (((/* implicit */unsigned short) (short)30939))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_0 [i_0])))))));
                    var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) (-(((/* implicit */int) ((short) 1309566432))))))));
                }
                for (signed char i_8 = 0; i_8 < 17; i_8 += 3) 
                {
                    var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) arr_7 [i_0] [i_0] [1] [i_1 - 2]))) || (((/* implicit */_Bool) arr_7 [i_8] [i_1] [(unsigned short)9] [i_1 + 1])))))));
                    /* LoopSeq 4 */
                    for (unsigned long long int i_9 = 3; i_9 < 16; i_9 += 3) 
                    {
                        var_27 = ((/* implicit */long long int) arr_1 [i_1 - 1]);
                        var_28 -= ((/* implicit */signed char) arr_27 [i_0] [i_0]);
                    }
                    for (short i_10 = 2; i_10 < 13; i_10 += 3) 
                    {
                        arr_36 [i_8] [i_0] [(unsigned char)8] [i_10] |= ((/* implicit */_Bool) (+(((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)193)) : (((/* implicit */int) (short)-30950))))) - (2653737651U)))));
                        var_29 = ((/* implicit */int) max((max((((/* implicit */unsigned int) arr_0 [i_8])), (2653737642U))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_29 [i_1] [i_8] [(signed char)15] [i_10 - 2])) & (((/* implicit */int) arr_29 [i_0] [i_8] [i_0] [i_0])))))));
                        arr_37 [i_10] [i_8] [i_1] [i_8] [i_0] = ((/* implicit */unsigned char) var_10);
                    }
                    for (unsigned short i_11 = 1; i_11 < 14; i_11 += 4) 
                    {
                        var_30 -= ((/* implicit */short) arr_34 [i_11] [i_11 - 1] [i_8] [14ULL] [i_0]);
                        arr_40 [i_8] = ((/* implicit */unsigned int) var_14);
                        arr_41 [i_8] [i_1] = ((/* implicit */short) (unsigned short)12199);
                    }
                    for (signed char i_12 = 1; i_12 < 15; i_12 += 3) 
                    {
                        var_31 *= ((/* implicit */int) ((((/* implicit */int) min((((/* implicit */unsigned short) arr_1 [i_1 + 2])), (((unsigned short) (unsigned short)24917))))) != ((+(((/* implicit */int) (short)-1907))))));
                        var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) min((((/* implicit */long long int) (-(((/* implicit */int) (short)32767))))), (max((min((6786835294795553324LL), (((/* implicit */long long int) 1800219299)))), (max((arr_38 [i_12] [i_0] [i_8] [i_8] [i_0] [i_0]), (((/* implicit */long long int) var_9)))))))))));
                        /* LoopSeq 3 */
                        for (short i_13 = 0; i_13 < 17; i_13 += 4) 
                        {
                            var_33 = ((/* implicit */int) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-22556))) - (8542011339354270741ULL)))));
                            arr_48 [i_0] [i_1] [i_1] [(unsigned char)16] [i_8] = ((/* implicit */short) var_6);
                            arr_49 [i_0] [i_0] [i_0] [i_8] [i_0] [10] = ((/* implicit */unsigned char) arr_0 [i_0]);
                        }
                        for (int i_14 = 3; i_14 < 15; i_14 += 3) 
                        {
                            var_34 = ((/* implicit */unsigned short) (-(min((arr_27 [i_1 - 1] [i_12 + 2]), (((/* implicit */unsigned long long int) var_0))))));
                            var_35 -= ((/* implicit */int) arr_15 [i_1 + 2] [i_1 + 3] [i_1 + 1] [i_12 - 1] [i_12 + 1] [i_14 - 2] [i_14 - 3]);
                            var_36 = ((/* implicit */unsigned short) max((arr_6 [i_12] [i_12] [i_12 + 2]), ((~(arr_6 [2] [i_12] [i_12 + 1])))));
                        }
                        for (int i_15 = 2; i_15 < 14; i_15 += 4) 
                        {
                            arr_55 [i_8] [(unsigned short)12] [i_8] [(unsigned short)12] [i_0] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 12096353919732756307ULL)) ? (((/* implicit */int) arr_7 [i_1 + 1] [i_12 - 1] [i_12 + 1] [i_12 - 1])) : (((/* implicit */int) (unsigned char)61))))) ? (((/* implicit */int) arr_46 [i_1 - 2] [i_8])) : ((-(((/* implicit */int) arr_33 [i_8] [i_12 + 2] [i_12 + 1] [i_12 - 1] [i_15 + 1] [i_15 + 3]))))));
                            var_37 = ((/* implicit */unsigned int) (short)-13043);
                            arr_56 [(unsigned short)0] [i_8] [i_8] [(unsigned char)14] [i_8] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) var_4))));
                            arr_57 [i_8] [i_12] [i_0] [i_1] [i_8] = ((/* implicit */short) min(((-(((/* implicit */int) arr_19 [(short)15] [(short)12] [i_8])))), (arr_42 [i_1 + 2] [i_8] [i_1 - 2] [i_12 - 1] [i_15 - 1])));
                        }
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned int i_16 = 0; i_16 < 17; i_16 += 4) 
                        {
                            var_38 -= (((_Bool)1) ? (((/* implicit */int) (signed char)-17)) : (((/* implicit */int) (signed char)-27)));
                            var_39 = ((/* implicit */long long int) ((((/* implicit */int) arr_32 [i_0] [i_0] [i_8] [i_12 + 1] [i_16])) + (-74642228)));
                        }
                        for (unsigned short i_17 = 0; i_17 < 17; i_17 += 3) 
                        {
                            arr_64 [8] [i_0] [i_8] [i_0] [i_0] |= ((/* implicit */unsigned short) arr_5 [i_1] [i_1] [i_1 + 3]);
                            arr_65 [(signed char)14] [i_1] [i_8] [i_1] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) min((((/* implicit */int) min(((unsigned char)96), (((/* implicit */unsigned char) var_11))))), (arr_47 [i_12 - 1] [i_12 + 1] [i_12 + 2] [(signed char)4] [i_12 - 1])))), (11817752000597092708ULL)));
                            arr_66 [i_17] [i_0] [i_8] [i_0] [i_0] [i_0] &= ((/* implicit */_Bool) max(((~(arr_42 [(short)8] [i_0] [i_17] [i_12 + 2] [i_17]))), (((((/* implicit */_Bool) arr_42 [i_0] [i_0] [(unsigned short)16] [i_12 + 2] [6])) ? (arr_42 [i_0] [i_0] [i_8] [i_12 + 1] [i_8]) : (arr_42 [i_0] [i_0] [(signed char)2] [i_12 + 2] [i_0])))));
                            arr_67 [i_0] &= ((/* implicit */short) var_12);
                            var_40 = ((/* implicit */signed char) min(((~((~(((/* implicit */int) (unsigned char)34)))))), (((/* implicit */int) arr_30 [i_0] [14LL] [i_12]))));
                        }
                        for (long long int i_18 = 3; i_18 < 14; i_18 += 4) 
                        {
                            arr_71 [i_8] [i_1] [i_8] [i_12] = ((/* implicit */signed char) arr_58 [i_12 - 1] [8ULL] [8ULL] [i_12 - 1] [i_8] [i_1] [12ULL]);
                            var_41 = ((/* implicit */long long int) min((((((/* implicit */_Bool) (unsigned short)65261)) ? (arr_47 [i_18 - 2] [i_18] [i_18] [i_18 - 3] [i_18]) : (((/* implicit */int) (unsigned char)245)))), (max((arr_47 [i_18 - 2] [i_18] [i_18] [i_18 + 3] [i_18]), (((/* implicit */int) arr_32 [i_18 + 3] [(unsigned char)10] [i_0] [i_18 - 1] [(_Bool)1]))))));
                            arr_72 [14ULL] [i_8] [i_8] [i_8] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_12)))))));
                        }
                    }
                }
                /* vectorizable */
                for (signed char i_19 = 0; i_19 < 17; i_19 += 4) 
                {
                    /* LoopNest 2 */
                    for (int i_20 = 0; i_20 < 17; i_20 += 3) 
                    {
                        for (signed char i_21 = 1; i_21 < 16; i_21 += 3) 
                        {
                            {
                                var_42 = ((/* implicit */signed char) (+(((/* implicit */int) var_8))));
                                var_43 &= ((/* implicit */short) ((unsigned short) arr_30 [(short)15] [i_19] [i_21]));
                                var_44 &= ((/* implicit */int) (unsigned short)40582);
                            }
                        } 
                    } 
                    var_45 = ((/* implicit */short) arr_3 [i_19]);
                }
                var_46 = ((/* implicit */unsigned short) (signed char)63);
                arr_79 [(short)5] [i_0] [i_0] = ((/* implicit */short) min((((((/* implicit */_Bool) arr_39 [i_0] [i_0] [i_0] [i_1 - 3])) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_39 [i_0] [(short)2] [i_0] [i_1 + 2])))), (((/* implicit */int) arr_39 [i_0] [i_1 - 1] [i_0] [i_1 + 2]))));
            }
        } 
    } 
}
