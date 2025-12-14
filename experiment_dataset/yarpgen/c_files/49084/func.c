/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49084
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
    var_15 = ((/* implicit */int) min((var_15), (((var_0) >> (((var_10) - (830054299)))))));
    var_16 -= ((/* implicit */unsigned short) var_13);
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            arr_4 [i_0] [i_1] = ((/* implicit */_Bool) (-(arr_1 [(unsigned short)4])));
            var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((arr_1 [10]) + (((/* implicit */int) (unsigned char)255))))) ? (((((/* implicit */_Bool) -7698755334383159415LL)) ? (7698755334383159414LL) : (-7698755334383159415LL))) : (((((/* implicit */_Bool) (signed char)-77)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1142))) : (-7698755334383159415LL))))), (((/* implicit */long long int) (unsigned char)255)))))));
        }
        arr_5 [0U] = (((!(((/* implicit */_Bool) -7698755334383159415LL)))) && (((/* implicit */_Bool) (-(-7698755334383159415LL)))));
        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)4945)) ? (((/* implicit */int) (unsigned short)43334)) : (((/* implicit */int) (unsigned short)55044))));
        arr_6 [i_0] = ((/* implicit */long long int) (((~(((/* implicit */int) (_Bool)0)))) & (((/* implicit */int) ((unsigned char) max((arr_3 [i_0] [i_0] [i_0]), (arr_3 [i_0] [i_0] [i_0])))))));
    }
    /* vectorizable */
    for (long long int i_2 = 0; i_2 < 13; i_2 += 2) /* same iter space */
    {
        var_19 ^= ((/* implicit */long long int) ((((((/* implicit */int) arr_3 [i_2] [i_2] [i_2])) ^ (((/* implicit */int) arr_3 [i_2] [i_2] [7U])))) * (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [0] [i_2] [0])) && (((/* implicit */_Bool) arr_2 [i_2] [(_Bool)1])))))));
        var_20 = ((/* implicit */unsigned char) ((arr_1 [i_2]) ^ (arr_1 [i_2])));
    }
    /* LoopNest 3 */
    for (signed char i_3 = 2; i_3 < 11; i_3 += 2) 
    {
        for (int i_4 = 4; i_4 < 10; i_4 += 2) 
        {
            for (int i_5 = 1; i_5 < 10; i_5 += 2) 
            {
                {
                    arr_16 [i_3] [i_3] [i_3] &= ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)38969)) >> (((5285758648284451034ULL) - (5285758648284451008ULL)))));
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 11; i_6 += 4) 
                    {
                        for (signed char i_7 = 0; i_7 < 13; i_7 += 3) 
                        {
                            {
                                arr_21 [i_7] [i_6] [i_5] [i_4] [(_Bool)1] |= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) -692671876)) < (arr_15 [i_3])));
                                var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) (unsigned char)255))));
                                arr_22 [(unsigned short)8] [9ULL] [(signed char)3] [(unsigned char)9] [(signed char)3] [9ULL] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)22201)) * (((/* implicit */int) ((arr_18 [i_7] [i_7] [1] [i_6] [i_6] [i_6]) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 2501952740U)) && (((/* implicit */_Bool) 5285758648284451035ULL)))))))))));
                                var_22 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) -1302492780)) ? (((/* implicit */int) (unsigned char)157)) : (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) 467876924254243844ULL))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 7174746594257213872ULL)) ? (arr_15 [i_3]) : (((/* implicit */unsigned long long int) arr_19 [i_3]))))))))));
                                var_23 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)38969)) >> (((((/* implicit */int) (unsigned short)43328)) - (43302)))));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (long long int i_8 = 4; i_8 < 9; i_8 += 3) 
                    {
                        arr_27 [i_3] = ((/* implicit */unsigned short) ((long long int) ((((7349575565326404746LL) & (((/* implicit */long long int) 2501952740U)))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [i_3] [i_3] [i_3] [i_8])) ? (((/* implicit */int) arr_3 [(unsigned short)1] [i_4] [i_8])) : (0)))))));
                        arr_28 [8U] [8U] [8U] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_25 [(signed char)4] [(unsigned short)5] [i_5] [3ULL] [i_5] [i_5])) * (0)));
                        arr_29 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_15 [i_4])) ? (291566409U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))) ? (((((/* implicit */_Bool) 68719476735ULL)) ? (((/* implicit */int) (unsigned short)25617)) : (((/* implicit */int) (unsigned char)1)))) : (((/* implicit */int) min((((unsigned short) (unsigned char)255)), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)255)) > (((/* implicit */int) arr_8 [(signed char)7]))))))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_9 = 0; i_9 < 13; i_9 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (int i_10 = 0; i_10 < 13; i_10 += 4) 
                        {
                            var_24 = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255))));
                            var_25 = ((/* implicit */unsigned short) ((5682563787459321345ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)1)))));
                            var_26 = ((/* implicit */unsigned int) ((arr_26 [i_5 + 3] [i_5 + 3] [i_5 + 3] [(unsigned short)1]) >> (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)1))) | (0ULL)))));
                            var_27 |= ((/* implicit */unsigned int) -6);
                        }
                        for (unsigned short i_11 = 0; i_11 < 13; i_11 += 4) 
                        {
                            var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)22064)))))));
                            arr_36 [i_3] [i_4] [i_5] [i_9] [i_9] |= ((/* implicit */_Bool) ((((((/* implicit */int) (unsigned char)0)) ^ (((/* implicit */int) arr_3 [i_9] [5LL] [i_3])))) * (((/* implicit */int) ((((/* implicit */int) arr_33 [(unsigned short)5] [(unsigned short)5] [i_5] [i_9] [i_11])) == (((/* implicit */int) (unsigned char)44)))))));
                            var_29 |= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)4)) + (((/* implicit */int) (signed char)87))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((68719476754ULL) == (576460752303423487ULL))))) : ((-(13672045820414734213ULL)))));
                            var_30 |= ((/* implicit */_Bool) (+(((/* implicit */int) arr_24 [i_3] [i_4]))));
                            arr_37 [i_11] [12LL] [(short)1] [(unsigned short)4] [i_3] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_8 [i_3 + 1]))));
                        }
                        /* LoopSeq 1 */
                        for (long long int i_12 = 3; i_12 < 9; i_12 += 2) 
                        {
                            var_31 *= ((((/* implicit */_Bool) arr_15 [i_3 + 2])) && (((/* implicit */_Bool) arr_33 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 3] [i_4 + 2])));
                            var_32 |= ((/* implicit */int) ((8348429121782026663ULL) > (arr_18 [i_12] [i_12 + 4] [i_3 + 2] [i_3] [i_3] [i_3])));
                        }
                        arr_41 [i_3] [i_4] [i_5] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_8 [(signed char)10]))))) * (arr_13 [i_5] [(unsigned short)1] [(unsigned short)12] [i_9])));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_13 = 3; i_13 < 11; i_13 += 4) 
                        {
                            var_33 = ((/* implicit */unsigned short) ((long long int) arr_0 [i_3 - 2]));
                            arr_44 [11ULL] [i_4] [i_4] [i_13] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1793014555U)) ? (((12764180286250230271ULL) / (((/* implicit */unsigned long long int) arr_30 [(unsigned short)2])))) : (arr_43 [i_3] [(signed char)6] [3] [i_9] [i_13])));
                            arr_45 [9ULL] [i_4] [i_13] [i_4] [i_3] = ((/* implicit */unsigned long long int) ((1099704161) < (((/* implicit */int) arr_17 [i_5] [i_5 - 1]))));
                        }
                        for (signed char i_14 = 1; i_14 < 12; i_14 += 1) 
                        {
                            var_34 = ((((/* implicit */_Bool) 11231151599221843003ULL)) && (((/* implicit */_Bool) (unsigned char)1)));
                            arr_48 [i_14] [i_14] [i_14] [i_14] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_3] [i_4])) ? (-807973865) : (807973864)))) ? (((/* implicit */long long int) arr_10 [i_3])) : (arr_46 [i_14] [i_9])));
                        }
                    }
                    /* vectorizable */
                    for (unsigned short i_15 = 0; i_15 < 13; i_15 += 3) 
                    {
                        arr_52 [i_3] [i_3] [i_3] [i_3] &= ((/* implicit */unsigned int) ((((arr_51 [i_4]) + (((/* implicit */long long int) -807973865)))) == (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) -807973841))))));
                        arr_53 [10] [1U] [0ULL] [i_4] [i_3] = ((/* implicit */signed char) ((((arr_43 [i_4] [i_4] [i_4] [i_4] [i_4]) & (((/* implicit */unsigned long long int) -868442126)))) | ((+(9749664475954223952ULL)))));
                        var_35 = ((/* implicit */int) max((var_35), (((/* implicit */int) ((9223372036854775807LL) + (arr_34 [i_3 + 1] [i_15]))))));
                    }
                    for (long long int i_16 = 3; i_16 < 10; i_16 += 4) 
                    {
                        var_36 = ((/* implicit */unsigned short) max((var_36), (((/* implicit */unsigned short) (((-2147483647 - 1)) | (-1604580307))))));
                        arr_56 [7] [11U] [i_5] [(signed char)1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) -2395033278789449749LL)) ? (((/* implicit */int) arr_42 [i_3] [i_4] [i_4] [(_Bool)1] [2ULL] [i_3])) : (((/* implicit */int) (unsigned short)56770)))) + (((/* implicit */int) (unsigned char)4))))) ? ((~(((((/* implicit */_Bool) (unsigned char)255)) ? (8697079597755327663ULL) : (arr_43 [i_3] [i_3] [i_5] [(signed char)12] [5]))))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_5]))) - (9893398003130376231ULL)))) ? (((((/* implicit */_Bool) 9749664475954223953ULL)) ? (7902433529198450704ULL) : (((/* implicit */unsigned long long int) -8591605863687060196LL)))) : (((/* implicit */unsigned long long int) ((9007199254736896LL) | (((/* implicit */long long int) arr_55 [i_3] [i_3] [i_3] [i_3] [1U] [i_3])))))))));
                    }
                }
            } 
        } 
    } 
    var_37 = ((/* implicit */int) min((var_37), (((/* implicit */int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) 1211339160U)) : (var_11)))) ? (((/* implicit */unsigned long long int) var_10)) : (((4581078272699362754ULL) / (((/* implicit */unsigned long long int) var_13)))))))))));
}
