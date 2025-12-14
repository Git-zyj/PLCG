/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213402
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
    var_11 = ((/* implicit */unsigned int) var_7);
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 4; i_2 < 19; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        {
                            var_12 = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_0 [i_1] [i_1]), (((/* implicit */long long int) min((var_8), (((/* implicit */int) arr_9 [i_3] [(short)12] [i_0] [i_0])))))))) ? (max((((/* implicit */long long int) ((var_7) && (((/* implicit */_Bool) var_1))))), (max((arr_7 [i_1] [i_1] [(short)7] [i_1]), (((/* implicit */long long int) (short)-17423)))))) : (min(((~(-3708719287587227700LL))), (((/* implicit */long long int) ((unsigned short) var_5)))))));
                            var_13 = ((/* implicit */unsigned long long int) var_3);
                        }
                    } 
                } 
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned long long int i_4 = 2; i_4 < 19; i_4 += 2) 
                {
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 20; i_5 += 3) 
                    {
                        for (int i_6 = 0; i_6 < 21; i_6 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) (~(1180071572U))))));
                                arr_21 [i_0 - 1] [i_0 - 1] [(signed char)14] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) & (var_9)))) ? (614267984U) : (3114895711U)));
                                arr_22 [i_0 - 1] [i_1] [i_4] [i_4] [i_6] |= ((((/* implicit */int) (short)992)) ^ (((/* implicit */int) (short)2047)));
                                var_15 *= ((/* implicit */unsigned int) arr_15 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]);
                                arr_23 [i_0] [i_6] [i_4 + 2] [i_5 + 1] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) 3384289203804581132ULL))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_5 [i_4 - 2] [(short)5]) : (((/* implicit */unsigned long long int) var_3)))))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) var_8)) < (var_4)))) & (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)127)))))));
                    /* LoopNest 2 */
                    for (short i_7 = 1; i_7 < 20; i_7 += 1) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 21; i_8 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) arr_7 [i_1] [i_4] [i_1] [i_1]))));
                                var_18 = ((/* implicit */short) 3114895731U);
                            }
                        } 
                    } 
                }
                for (int i_9 = 0; i_9 < 21; i_9 += 1) 
                {
                    arr_34 [i_0 - 1] [i_9] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((1603581480U) / (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (signed char)104))))))) ? (arr_3 [10] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((var_3) + (var_0))))))));
                    arr_35 [i_9] [(unsigned char)20] [i_9] = ((/* implicit */_Bool) ((long long int) (signed char)2));
                }
                /* vectorizable */
                for (signed char i_10 = 0; i_10 < 21; i_10 += 4) 
                {
                    arr_40 [i_0] [i_1] [i_10] [5ULL] = ((/* implicit */int) arr_16 [i_0] [i_1] [i_10] [i_10]);
                    var_19 ^= ((/* implicit */int) ((((((/* implicit */_Bool) arr_27 [i_0] [i_0] [i_0 - 1] [i_0])) && (((/* implicit */_Bool) arr_11 [0LL] [i_1] [i_1] [i_1])))) && (((/* implicit */_Bool) arr_32 [i_0 - 1] [i_1] [15ULL] [i_10]))));
                }
                /* vectorizable */
                for (short i_11 = 0; i_11 < 21; i_11 += 1) 
                {
                    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) 14396700382699458366ULL))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_12 = 2; i_12 < 19; i_12 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (long long int i_13 = 0; i_13 < 21; i_13 += 3) 
                        {
                            var_21 = ((/* implicit */signed char) arr_36 [i_0]);
                            arr_49 [i_0] [i_1] [i_11] [i_13] [i_0] = ((/* implicit */unsigned char) 1603581465U);
                        }
                        for (int i_14 = 0; i_14 < 21; i_14 += 3) 
                        {
                            arr_52 [i_0] [i_1] [i_11] [i_12] [i_14] = ((/* implicit */signed char) ((unsigned int) (signed char)45));
                            arr_53 [i_1] [i_1] [18LL] [i_12 + 1] [18LL] [(unsigned char)5] = ((/* implicit */unsigned int) arr_7 [i_0] [i_0 - 1] [i_12 - 1] [i_12 - 2]);
                            var_22 = ((/* implicit */int) min((var_22), (((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)18))))) ? (((/* implicit */int) (unsigned char)13)) : (((var_5) - (((/* implicit */int) (unsigned char)29))))))));
                            var_23 = ((/* implicit */_Bool) ((-591721761) + ((~(((/* implicit */int) (signed char)(-127 - 1)))))));
                            var_24 = ((/* implicit */_Bool) (+(arr_13 [i_0 - 1] [i_0 - 1])));
                        }
                        var_25 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_46 [i_0] [i_0] [i_0 - 1] [i_0] [i_0]))));
                    }
                    for (unsigned int i_15 = 1; i_15 < 17; i_15 += 3) 
                    {
                        var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_39 [(signed char)5] [i_1] [i_1])) ? (arr_29 [(unsigned short)0] [17LL] [(signed char)4] [(signed char)4] [20U] [17LL] [i_15]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))))));
                        var_27 *= ((/* implicit */unsigned int) ((unsigned short) arr_17 [i_0 - 1] [i_0 - 1] [i_15 + 3] [i_15 + 3]));
                        var_28 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1603581495U)) ? (262143U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)26755))))))));
                        /* LoopSeq 3 */
                        for (int i_16 = 0; i_16 < 21; i_16 += 4) 
                        {
                            arr_59 [i_0] [i_0] [i_11] [i_15] [i_11] = 4294967295U;
                            arr_60 [i_0 - 1] [i_1] [i_11] [i_11] [i_11] [i_16] &= ((/* implicit */int) (+(arr_6 [i_0 - 1] [i_0 - 1] [i_0])));
                            arr_61 [i_0 - 1] [i_1] [(short)1] [i_0 - 1] [i_16] [1] = ((/* implicit */unsigned char) (signed char)-30);
                        }
                        for (short i_17 = 0; i_17 < 21; i_17 += 3) 
                        {
                            var_29 = ((/* implicit */int) ((((/* implicit */unsigned long long int) var_5)) + (((unsigned long long int) (_Bool)1))));
                            var_30 = ((/* implicit */_Bool) (((~(2691385807U))) | (((/* implicit */unsigned int) arr_2 [i_15 + 2]))));
                        }
                        for (unsigned int i_18 = 1; i_18 < 19; i_18 += 1) 
                        {
                            var_31 = ((/* implicit */long long int) ((signed char) ((int) (signed char)31)));
                            arr_68 [i_0] [i_1] [8] [i_0] [i_15 - 1] [i_0] = ((/* implicit */long long int) ((unsigned int) arr_1 [i_0 - 1]));
                            var_32 += ((/* implicit */int) ((((((/* implicit */_Bool) arr_15 [i_0] [i_1] [18LL] [i_15 + 2] [i_0])) ? (arr_66 [i_0 - 1] [i_1] [i_11] [i_15 - 1] [i_18]) : (var_4))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)25)))));
                        }
                    }
                    var_33 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)39724)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-23638))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_39 [i_0] [(_Bool)1] [i_0]) > (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))) : (((arr_12 [i_1] [i_1] [i_1]) << (((arr_36 [i_0]) - (11006667541414866853ULL)))))));
                }
            }
        } 
    } 
    var_34 = ((/* implicit */int) var_3);
    var_35 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (+(((/* implicit */int) var_2))))) % (((((/* implicit */_Bool) var_2)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))) | (((((unsigned long long int) var_6)) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_19 = 0; i_19 < 22; i_19 += 1) 
    {
        var_36 = ((int) (-(var_4)));
        /* LoopSeq 1 */
        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
        {
            arr_74 [i_19] [i_19] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_73 [i_19] [i_20] [i_19])) + (2147483647))) << (((((arr_69 [i_20] [i_19]) + (456798050))) - (18)))));
            /* LoopSeq 1 */
            for (unsigned int i_21 = 2; i_21 < 18; i_21 += 2) 
            {
                arr_77 [i_19] [i_19] [i_20] [i_21] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_73 [i_19] [i_19] [i_21 + 2]))) == (arr_71 [i_21 + 4] [i_21 + 4])));
                var_37 = ((/* implicit */unsigned char) arr_70 [6ULL] [6ULL]);
            }
        }
        var_38 = ((/* implicit */long long int) (-(((12435720395172955491ULL) / (((/* implicit */unsigned long long int) arr_71 [i_19] [(signed char)20]))))));
        arr_78 [i_19] = ((/* implicit */unsigned long long int) arr_71 [i_19] [i_19]);
    }
}
