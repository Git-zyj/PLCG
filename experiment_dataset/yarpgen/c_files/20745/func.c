/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20745
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)97)) ? (((((/* implicit */_Bool) var_12)) ? (arr_2 [i_0] [i_1]) : (arr_2 [i_1] [i_1]))) : (max((arr_2 [i_0] [i_1]), (((/* implicit */long long int) (signed char)-97))))));
                arr_7 [i_0] = ((/* implicit */unsigned int) (signed char)96);
            }
        } 
    } 
    var_14 = ((((/* implicit */_Bool) ((int) ((((/* implicit */int) var_0)) > (var_6))))) ? ((-(2042870521U))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_5))))));
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 24; i_2 += 3) 
    {
        for (unsigned int i_3 = 1; i_3 < 23; i_3 += 1) 
        {
            {
                arr_15 [10] = ((/* implicit */_Bool) max(((unsigned short)21659), (((/* implicit */unsigned short) (signed char)-97))));
                arr_16 [i_2] [6] [i_2] = ((/* implicit */_Bool) min((((/* implicit */long long int) -11)), (((((/* implicit */long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (signed char)113)) : (((/* implicit */int) (signed char)96))))) / (min((var_9), (((/* implicit */long long int) var_1))))))));
                arr_17 [i_2] [i_3] = ((/* implicit */short) ((((((/* implicit */long long int) arr_13 [i_3 - 1] [i_3 - 1])) + (var_7))) <= (((/* implicit */long long int) arr_13 [i_3 - 1] [i_3 - 1]))));
                arr_18 [i_2] [12ULL] |= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_7)))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (signed char)-96)))) : (((var_9) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)60581)))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 2) 
    {
        for (long long int i_5 = 4; i_5 < 17; i_5 += 1) 
        {
            {
                arr_23 [i_4] = ((/* implicit */short) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_12 [i_4] [i_5 - 1] [i_4])) : (((/* implicit */int) arr_12 [i_4] [i_5 - 1] [i_4])))) | (((((var_6) + (2147483647))) << (((var_7) - (7824042711109388342LL)))))));
                arr_24 [i_4] [i_5 - 1] = arr_11 [i_4];
                /* LoopSeq 2 */
                for (unsigned char i_6 = 0; i_6 < 18; i_6 += 3) 
                {
                    arr_27 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_4] [i_5] [i_6])) ? (((/* implicit */int) (unsigned short)58985)) : (((/* implicit */int) (signed char)-97))))) ? (17915821990248041413ULL) : (((/* implicit */unsigned long long int) 4783450009809291429LL))))) ? (((long long int) ((((/* implicit */_Bool) arr_25 [i_6] [i_6] [i_6] [i_6])) ? (((/* implicit */int) (signed char)96)) : (var_6)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 0ULL)) ? (arr_25 [i_5 - 2] [i_5 - 2] [i_5 - 4] [i_5 - 4]) : (arr_25 [i_5 - 2] [i_5 - 1] [i_5 - 4] [i_5 - 4]))))));
                    arr_28 [i_4] [i_5 - 2] [i_5] [i_6] = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_25 [i_5 - 4] [i_5 + 1] [i_5] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_5] [i_4]))) : (arr_13 [i_5] [i_5 - 3])))), (-6009296377447212402LL)));
                    arr_29 [i_4] [i_4] [i_6] [i_6] = ((/* implicit */short) (signed char)82);
                }
                for (long long int i_7 = 1; i_7 < 17; i_7 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 0; i_8 < 18; i_8 += 2) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 18; i_9 += 3) 
                        {
                            {
                                arr_36 [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_5] [i_5] [i_4] = ((/* implicit */int) ((((((/* implicit */_Bool) ((unsigned int) arr_26 [i_4] [i_5 - 3]))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_35 [i_9] [i_4] [i_4] [i_4] [i_4]))) % (var_7))) : (((/* implicit */long long int) ((/* implicit */int) (short)16854))))) <= (((/* implicit */long long int) (+(((arr_34 [i_4]) ? (((/* implicit */int) (signed char)-19)) : (((/* implicit */int) (signed char)96)))))))));
                                arr_37 [i_7] [i_7] [i_4] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) arr_8 [i_5])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)12)))))) ? (min((((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-97))) : (17915821990248041413ULL))), (((/* implicit */unsigned long long int) min(((signed char)-103), (((/* implicit */signed char) arr_34 [i_4]))))))) : (((min((var_11), (((/* implicit */unsigned long long int) arr_33 [i_4])))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_9] [i_9] [i_7])) ? (((/* implicit */int) (_Bool)1)) : (var_6))))))));
                            }
                        } 
                    } 
                    arr_38 [i_4] [i_4] = ((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))));
                    /* LoopSeq 1 */
                    for (int i_10 = 2; i_10 < 17; i_10 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            arr_43 [i_4] [i_5] [i_4] [i_10] [i_11] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) var_3)) / (9223372036854775793LL)))) ? ((((_Bool)1) ? (0) : (((/* implicit */int) (unsigned short)36410)))) : (((/* implicit */int) (_Bool)0))))) / (4294967292U)));
                            arr_44 [i_4] [i_5] [i_7 + 1] [i_5] [i_11] &= ((/* implicit */unsigned int) (signed char)95);
                        }
                        /* vectorizable */
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            arr_47 [i_4] [i_5 - 3] [i_12] [i_4] [i_5 - 3] [i_5] [i_5] = ((/* implicit */int) ((arr_31 [i_4] [i_5 - 4] [i_7 - 1] [i_10 - 2]) % (((/* implicit */long long int) arr_39 [i_5] [i_5 - 3] [i_7 - 1] [i_10 - 1]))));
                            arr_48 [i_4] [i_5 - 2] [i_7] [i_10 - 1] [i_5 - 2] [i_5 - 2] &= ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */int) arr_26 [i_5] [i_5])) <= (((/* implicit */int) var_5)))));
                        }
                        for (int i_13 = 2; i_13 < 17; i_13 += 3) 
                        {
                            arr_52 [i_7] = ((/* implicit */unsigned char) arr_42 [i_4] [i_4] [i_4]);
                            arr_53 [i_13 + 1] [i_10 - 2] [i_5] [i_5] [i_4] = ((/* implicit */unsigned short) var_5);
                            arr_54 [i_4] [i_5] [i_5] [i_10] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)34)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (1166162155) : (2147483647)))) ? (((((/* implicit */_Bool) 15992111286204374496ULL)) ? (((/* implicit */int) (unsigned short)42980)) : (((/* implicit */int) arr_26 [i_7] [i_7])))) : (((/* implicit */int) var_1))))) : (max((((/* implicit */unsigned int) arr_46 [i_4] [i_13] [i_4] [i_10] [i_13])), (((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */unsigned int) 2147483647)) : (1686264452U)))))));
                            arr_55 [i_7] [i_7] [i_7 + 1] [i_7] [i_7] = ((/* implicit */short) (+(469387864)));
                        }
                        arr_56 [i_4] [i_5 - 2] [i_7 - 1] [i_5 - 2] [i_10 - 1] [i_10] = ((((/* implicit */_Bool) -1LL)) ? (((((/* implicit */_Bool) arr_13 [i_5] [i_10])) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1))))) : (((1204506425471773427ULL) & (((/* implicit */unsigned long long int) var_7)))))) : (((/* implicit */unsigned long long int) var_9)));
                    }
                    arr_57 [i_4] [i_4] [i_7] [i_4] = ((/* implicit */long long int) (short)-8989);
                }
                /* LoopNest 2 */
                for (signed char i_14 = 0; i_14 < 18; i_14 += 2) 
                {
                    for (unsigned int i_15 = 3; i_15 < 15; i_15 += 3) 
                    {
                        {
                            arr_63 [i_4] [i_5] [i_14] [i_14] = ((/* implicit */unsigned char) (_Bool)1);
                            arr_64 [i_14] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_35 [i_5 - 2] [i_15] [i_15 + 3] [i_14] [i_5 - 2])) ? (((/* implicit */int) arr_50 [i_4] [i_5] [i_5 - 1] [i_15] [i_15] [i_15])) : (((/* implicit */int) arr_35 [i_15] [i_5 - 2] [i_14] [i_5 - 2] [i_5 - 2]))))) * ((-(3092038052U)))));
                            arr_65 [i_4] [i_5] [i_5] [i_15] [i_14] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)15)) ? (((((/* implicit */_Bool) (unsigned char)29)) ? (17915821990248041413ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)111)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)36410))) : (96602084U)))))) : (((/* implicit */unsigned long long int) (-(694311260U))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned short i_16 = 1; i_16 < 17; i_16 += 3) 
                {
                    for (int i_17 = 1; i_17 < 16; i_17 += 1) 
                    {
                        for (unsigned short i_18 = 3; i_18 < 15; i_18 += 2) 
                        {
                            {
                                arr_74 [i_4] [i_4] [i_16] [i_17] [i_18] = ((/* implicit */unsigned char) arr_73 [i_17 - 1] [i_17 - 1] [i_4] [i_5] [i_4]);
                                arr_75 [i_4] [i_17] [i_16] [i_17] [i_18] = ((/* implicit */signed char) max((min((((/* implicit */long long int) ((((/* implicit */int) arr_14 [i_5])) << (((((/* implicit */int) var_13)) - (19940)))))), (var_7))), (((/* implicit */long long int) (_Bool)1))));
                                arr_76 [i_4] [i_4] [i_16] [i_4] [i_18] = ((/* implicit */signed char) ((unsigned long long int) ((var_5) ? (((((/* implicit */_Bool) 730309642U)) ? (arr_41 [i_4] [i_4] [i_16]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_4] [i_4] [i_4]))))) : (min((((/* implicit */unsigned int) (unsigned short)50942)), (4294967295U))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_19 = 0; i_19 < 12; i_19 += 3) 
    {
        for (unsigned long long int i_20 = 0; i_20 < 12; i_20 += 3) 
        {
            {
                arr_83 [i_19] [(signed char)10] = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) (unsigned short)29125)) ? (((arr_20 [i_19]) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)36441))) : (arr_49 [i_20] [i_19] [i_20] [i_19] [i_20]))) : (((/* implicit */long long int) (-(((/* implicit */int) var_0))))))));
                arr_84 [i_19] [0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (3600656035U)))) ? (((/* implicit */int) max((((/* implicit */short) ((var_9) <= (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))), (min((((/* implicit */short) var_1)), ((short)-223)))))) : (((/* implicit */int) arr_12 [i_20] [i_20] [i_20]))));
                arr_85 [i_19] [i_19] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((var_10) ? (462866963) : (((/* implicit */int) arr_42 [i_19] [i_19] [i_19])))) + (((/* implicit */int) ((unsigned short) arr_71 [i_19] [i_19] [i_19] [i_19] [i_19] [i_19])))))) ? (((/* implicit */int) max((arr_14 [i_19]), (((/* implicit */unsigned char) arr_20 [i_20]))))) : (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)127)), ((unsigned short)8191))))));
            }
        } 
    } 
}
