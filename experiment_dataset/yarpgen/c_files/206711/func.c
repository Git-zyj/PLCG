/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206711
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
    var_10 = ((/* implicit */short) max((var_10), (((/* implicit */short) ((((/* implicit */_Bool) 15557765318762574037ULL)) ? ((+(max((((/* implicit */unsigned int) var_7)), (var_0))))) : (((/* implicit */unsigned int) ((/* implicit */int) (((!(((/* implicit */_Bool) var_3)))) && (((/* implicit */_Bool) var_0)))))))))));
    var_11 = ((/* implicit */long long int) (-(((/* implicit */int) ((short) var_5)))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_12 = ((/* implicit */unsigned char) ((min(((~(18446744073709551615ULL))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_3))))))) >> (((/* implicit */int) ((((/* implicit */int) ((4162829018U) > (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))) == (((arr_0 [(unsigned char)3] [10ULL]) | (((/* implicit */int) arr_1 [i_0])))))))));
        var_13 = ((/* implicit */unsigned long long int) arr_2 [i_0]);
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 16; i_1 += 3) /* same iter space */
        {
            arr_6 [i_0] = ((/* implicit */short) min((max((((/* implicit */long long int) max((((/* implicit */unsigned int) arr_1 [i_1])), (var_0)))), (var_5))), (((/* implicit */long long int) max((((/* implicit */unsigned int) (~(((/* implicit */int) arr_5 [14ULL] [14ULL] [i_1]))))), (max((var_8), (((/* implicit */unsigned int) arr_4 [i_1] [i_0] [i_0])))))))));
            /* LoopSeq 4 */
            for (short i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                arr_11 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) max((var_2), (((/* implicit */signed char) var_7)))))))) || (((/* implicit */_Bool) min((15557765318762574044ULL), (((/* implicit */unsigned long long int) var_9)))))));
                var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) var_2))));
                arr_12 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) min(((+(15557765318762574037ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 268435455)))))));
                arr_13 [i_2] &= ((/* implicit */unsigned short) arr_7 [i_0] [i_1] [i_2]);
            }
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                arr_16 [i_0] [i_0] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? ((~(((((/* implicit */int) (signed char)3)) | (((/* implicit */int) var_1)))))) : (((/* implicit */int) ((arr_10 [(signed char)12] [(signed char)10] [i_3] [(signed char)12]) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_3]))))))));
                var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) var_1))));
            }
            for (short i_4 = 0; i_4 < 16; i_4 += 1) 
            {
                var_16 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_8 [i_0])) + (((/* implicit */int) ((((/* implicit */int) (short)-32374)) >= (((/* implicit */int) (short)-29195))))))) & (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)62023))) != (((5860208157877513254ULL) + (11193328798383840242ULL))))))));
                /* LoopNest 2 */
                for (short i_5 = 0; i_5 < 16; i_5 += 2) 
                {
                    for (short i_6 = 0; i_6 < 16; i_6 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */short) (-(arr_20 [i_0] [(short)11] [i_4] [i_5] [i_0])));
                            arr_23 [7] [i_1] [7] [9U] [12U] [3] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)54)) ? (((/* implicit */int) (signed char)16)) : (((/* implicit */int) (unsigned char)160))));
                            var_18 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)54))) != (10076256959000772700ULL)));
                            var_19 = ((/* implicit */int) var_8);
                            arr_24 [i_0] = ((/* implicit */_Bool) min((arr_5 [i_0] [i_0] [i_0]), (((/* implicit */short) (!(((/* implicit */_Bool) var_0)))))));
                        }
                    } 
                } 
                arr_25 [i_4] [i_1] [i_0] = ((/* implicit */short) arr_21 [i_0] [i_1] [i_1] [i_1] [i_0]);
                arr_26 [i_0] = ((/* implicit */short) ((((int) arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) + (((/* implicit */int) max((((/* implicit */short) var_2)), (arr_22 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))))));
            }
            /* vectorizable */
            for (long long int i_7 = 2; i_7 < 14; i_7 += 4) 
            {
                /* LoopSeq 3 */
                for (signed char i_8 = 1; i_8 < 14; i_8 += 1) 
                {
                    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((((/* implicit */int) arr_15 [i_0] [i_7])) + (((/* implicit */int) var_7)))) != (4064))))));
                    var_21 = ((/* implicit */int) (!(((((/* implicit */_Bool) (signed char)-17)) && (((/* implicit */_Bool) (signed char)59))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_9 = 3; i_9 < 15; i_9 += 1) 
                    {
                        var_22 = ((/* implicit */int) (-(var_9)));
                        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_22 [i_1] [i_1] [13U] [0U] [i_1] [i_1] [i_0])) ? (((/* implicit */int) ((var_4) > (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) : (((/* implicit */int) arr_17 [i_8 - 1] [i_8 - 1] [i_9]))));
                    }
                    var_24 = ((/* implicit */unsigned long long int) (short)128);
                }
                for (unsigned short i_10 = 0; i_10 < 16; i_10 += 4) 
                {
                    arr_36 [i_10] [i_10] [i_10] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)17))) + (12853932871254393982ULL)));
                    var_25 = ((/* implicit */short) var_0);
                    arr_37 [i_0] [i_0] [i_0] [i_0] = arr_2 [i_0];
                }
                for (unsigned char i_11 = 0; i_11 < 16; i_11 += 1) 
                {
                    var_26 = ((((/* implicit */_Bool) arr_20 [i_1] [i_1] [i_7 - 2] [i_0] [i_7])) ? (((/* implicit */unsigned long long int) arr_39 [i_0] [i_0] [i_7 - 2] [i_11])) : (arr_30 [i_1] [i_1] [i_7 - 2] [12ULL] [i_1] [i_11]));
                    arr_41 [i_0] [i_0] [i_0] [i_11] = ((/* implicit */unsigned char) (-((+(((/* implicit */int) (unsigned short)12397))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_12 = 0; i_12 < 16; i_12 += 3) 
                    {
                        var_27 -= ((/* implicit */_Bool) (((~(((/* implicit */int) (_Bool)0)))) + (((/* implicit */int) (!(((/* implicit */_Bool) 4668258132996736343ULL)))))));
                        arr_46 [i_12] [8LL] [i_0] [8LL] [8LL] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (short)255)) ? (281474976448512ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)99))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((12853932871254393985ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-9224)))))))));
                    }
                    var_28 = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)-6864)) : (((/* implicit */int) arr_38 [i_7 + 2] [i_1] [i_7] [i_7]))));
                }
                var_29 = ((/* implicit */unsigned long long int) (-(3580375045U)));
            }
            arr_47 [i_0] [i_0] = ((/* implicit */signed char) min((((((/* implicit */int) (short)-32387)) * ((+(((/* implicit */int) arr_40 [9U] [1ULL] [i_0] [i_0])))))), (((/* implicit */int) var_1))));
        }
        for (int i_13 = 0; i_13 < 16; i_13 += 3) /* same iter space */
        {
            arr_50 [i_0] [i_13] [i_13] = ((/* implicit */unsigned int) (+((-(((/* implicit */int) (unsigned short)53111))))));
            /* LoopNest 2 */
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                for (int i_15 = 1; i_15 < 15; i_15 += 2) 
                {
                    {
                        var_30 ^= ((/* implicit */signed char) min((((var_4) != (((/* implicit */unsigned int) ((/* implicit */int) var_7))))), ((!(((/* implicit */_Bool) var_0))))));
                        var_31 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_15] [i_15 - 1])) || (((/* implicit */_Bool) arr_49 [i_13]))))), (((((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned int) var_3))))) ? (13378549924753233898ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)32401))) + (1760115945U))))))));
                        var_32 = ((/* implicit */unsigned short) (unsigned char)63);
                        /* LoopSeq 3 */
                        for (unsigned long long int i_16 = 0; i_16 < 16; i_16 += 1) 
                        {
                            var_33 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_44 [i_15 + 1] [i_15] [i_15 + 1] [i_15 - 1] [(signed char)3]))));
                            var_34 = ((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)34012)) * (((/* implicit */int) arr_17 [i_0] [i_0] [i_16]))))), (((((/* implicit */unsigned long long int) var_0)) / (arr_29 [i_13] [i_15] [i_14] [i_13]))))) >= (((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (short)-32389))))))))));
                            var_35 = ((/* implicit */short) min((((/* implicit */int) arr_17 [i_16] [i_0] [i_0])), (min((((/* implicit */int) max((arr_8 [i_16]), ((signed char)78)))), (((((/* implicit */int) (short)-32401)) * (((/* implicit */int) (signed char)16))))))));
                            var_36 = ((/* implicit */short) min((var_36), (((/* implicit */short) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_19 [i_15 + 1] [i_15 + 1] [i_15 + 1] [(short)0]))))), (max((var_6), (((/* implicit */unsigned long long int) (short)26434)))))))));
                        }
                        for (unsigned long long int i_17 = 1; i_17 < 14; i_17 += 4) 
                        {
                            var_37 = ((/* implicit */long long int) max((var_37), (((/* implicit */long long int) (+((-2147483647 - 1)))))));
                            var_38 = ((/* implicit */unsigned long long int) var_4);
                        }
                        for (unsigned int i_18 = 1; i_18 < 13; i_18 += 1) 
                        {
                            var_39 = ((/* implicit */signed char) (((-(((/* implicit */int) ((5068194148956317718ULL) > (((/* implicit */unsigned long long int) 5771204252173687204LL))))))) >= (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) (signed char)-17)), ((unsigned short)34032)))))))));
                            var_40 = ((/* implicit */signed char) max((var_40), (((/* implicit */signed char) ((((/* implicit */_Bool) ((int) var_6))) ? (((/* implicit */long long int) ((((/* implicit */int) (short)-18376)) * (((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) arr_34 [i_18 + 3])) ? (arr_58 [i_18 + 2] [i_0] [i_15] [i_18 + 3] [i_18 + 1] [i_0] [i_15]) : (arr_58 [i_18 - 1] [i_0] [i_18] [i_18 + 2] [i_18 - 1] [i_0] [i_0]))))))));
                        }
                        arr_63 [i_13] [i_13] [i_14] [i_13] [i_13] [i_13] = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */int) arr_61 [i_15 + 1] [i_15] [i_13] [i_15 + 1])) >> (((((((/* implicit */_Bool) 5592811202455157617ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)102))) : (arr_43 [i_0] [i_13] [i_13] [i_15]))) - (95U)))))), (((((/* implicit */_Bool) arr_56 [i_15 + 1] [i_15 - 1] [i_15 - 1] [i_13] [i_15 - 1] [i_15 - 1] [i_15 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)23))) : (var_5)))));
                    }
                } 
            } 
            var_41 = ((/* implicit */int) min((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-15)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))) * (arr_49 [i_0]))), ((~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_0)) : (arr_53 [i_13] [i_0])))))));
            arr_64 [i_13] [i_13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~((-(var_9)))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)18175)) == (((/* implicit */int) (short)-18310))))), ((unsigned char)255)))) : (((/* implicit */int) ((var_9) == (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0] [i_13]))))))));
        }
    }
    for (unsigned long long int i_19 = 3; i_19 < 7; i_19 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_20 = 1; i_20 < 9; i_20 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_21 = 0; i_21 < 10; i_21 += 3) 
            {
                /* LoopNest 2 */
                for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                {
                    for (unsigned long long int i_23 = 0; i_23 < 10; i_23 += 3) 
                    {
                        {
                            var_42 = ((/* implicit */signed char) var_9);
                            var_43 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))))) ? (((13446609737223621777ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)22080))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-17))))))))));
                        }
                    } 
                } 
                arr_78 [i_19] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (unsigned short)47361)) ? (((/* implicit */int) (short)15248)) : (((/* implicit */int) (unsigned char)253))))));
            }
            var_44 = min((((((/* implicit */unsigned long long int) max((arr_71 [i_20]), (((/* implicit */int) var_1))))) & (var_6))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (+(((/* implicit */int) (_Bool)0))))), (((((/* implicit */_Bool) 232636734U)) ? (arr_65 [i_19] [i_19]) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_20])))))))));
        }
        for (unsigned int i_24 = 2; i_24 < 8; i_24 += 4) 
        {
            var_45 = ((/* implicit */_Bool) ((9213096413391328790LL) | (((/* implicit */long long int) ((/* implicit */int) arr_80 [i_19 - 2] [i_19])))));
            var_46 = ((/* implicit */short) arr_17 [i_19] [i_19] [i_19 - 3]);
            var_47 += ((/* implicit */unsigned char) ((((arr_57 [i_19 - 2] [i_19 - 2]) | (((/* implicit */long long int) ((/* implicit */int) (signed char)-4))))) > (((/* implicit */long long int) ((/* implicit */int) arr_80 [i_24] [i_24])))));
            var_48 ^= ((/* implicit */unsigned char) ((min((max((4516619953793340646ULL), (((/* implicit */unsigned long long int) 974083614U)))), (12853932871254393986ULL))) >> (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (4294967295U)))));
        }
        var_49 = ((/* implicit */unsigned short) ((12782752773816324160ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (short)7899)))));
        var_50 = ((/* implicit */short) 234881024);
    }
}
