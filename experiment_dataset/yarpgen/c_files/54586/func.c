/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54586
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
    var_11 |= ((/* implicit */unsigned short) (_Bool)1);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 4; i_0 < 11; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_2 = 1; i_2 < 12; i_2 += 4) /* same iter space */
                {
                    var_12 = var_3;
                    var_13 = ((/* implicit */_Bool) ((int) (_Bool)1));
                }
                for (int i_3 = 1; i_3 < 12; i_3 += 4) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (long long int i_4 = 0; i_4 < 14; i_4 += 4) 
                    {
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (unsigned char i_5 = 1; i_5 < 11; i_5 += 4) 
                        {
                            var_14 = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (9223372036854775780LL)));
                            var_15 -= ((/* implicit */signed char) ((((/* implicit */int) arr_10 [i_3] [i_5 - 1] [i_3 + 1])) ^ (((int) var_10))));
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                        {
                            var_16 = (unsigned short)33271;
                            var_17 = ((/* implicit */unsigned char) var_3);
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                        {
                            arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] [(short)2] = ((((/* implicit */_Bool) ((unsigned long long int) arr_19 [i_0 - 2]))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)87)) < (((/* implicit */int) (unsigned short)4199))))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)87)) >= (((/* implicit */int) var_10))))));
                            var_18 = ((/* implicit */short) (((~(((((/* implicit */int) arr_20 [i_7] [i_0 + 3] [i_4] [i_3 + 1] [i_1] [i_0 + 3])) ^ (((/* implicit */int) arr_6 [(_Bool)1] [i_1] [i_1] [i_1])))))) ^ (((/* implicit */int) ((signed char) arr_13 [i_0 - 3] [i_3 + 1] [i_0 - 4] [(unsigned short)6] [i_0 + 2] [i_1])))));
                            arr_23 [i_0] [i_1] [i_3 - 1] [i_4] [i_1] = ((/* implicit */signed char) var_8);
                        }
                        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                        {
                            arr_26 [i_1] = ((/* implicit */signed char) (_Bool)1);
                            var_19 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) >> (((((/* implicit */int) var_5)) - (80)))))) < (((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)127))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_7)))));
                        }
                        /* LoopSeq 3 */
                        for (signed char i_9 = 2; i_9 < 11; i_9 += 4) 
                        {
                            var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned short) (signed char)127))))))));
                            arr_29 [i_1] [i_1] [i_1] [i_1] [i_1] = var_7;
                        }
                        for (short i_10 = 1; i_10 < 11; i_10 += 4) 
                        {
                            var_21 = (i_1 % 2 == zero) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (((~(-1))) >> (((((((/* implicit */int) var_8)) ^ (((/* implicit */int) arr_30 [i_0] [i_1] [i_3] [i_1] [i_10])))) - (57)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_1]))) : ((((((_Bool)1) && (((/* implicit */_Bool) arr_3 [i_0] [i_1])))) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (((~(-1))) >> (((((((((/* implicit */int) var_8)) ^ (((/* implicit */int) arr_30 [i_0] [i_1] [i_3] [i_1] [i_10])))) - (57))) + (29)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_1]))) : ((((((_Bool)1) && (((/* implicit */_Bool) arr_3 [i_0] [i_1])))) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))));
                            var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (((unsigned int) (_Bool)1)) : (((/* implicit */unsigned int) min((((/* implicit */int) var_4)), (arr_13 [i_4] [i_0 - 4] [i_3 + 1] [i_10 - 1] [i_10 + 2] [i_10 + 2]))))));
                        }
                        /* vectorizable */
                        for (int i_11 = 2; i_11 < 11; i_11 += 4) 
                        {
                            arr_35 [i_0 + 2] [i_3] [i_3 - 1] [i_4] [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_7 [i_0] [i_1]))));
                            arr_36 [i_0] [i_4] [i_3] [i_0] [i_1] = ((/* implicit */unsigned short) ((((((-2147483634) + (2147483647))) << (((/* implicit */int) (_Bool)1)))) < (((/* implicit */int) var_9))));
                            var_23 = (-(((/* implicit */int) (_Bool)1)));
                            var_24 = ((/* implicit */signed char) ((unsigned long long int) arr_31 [i_11 - 1] [i_11 + 2] [i_11 + 1] [i_11 + 1] [i_1]));
                            var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_5 [i_0] [i_1] [0U])))))));
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 14; i_12 += 4) 
                    {
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            {
                                arr_43 [i_0] [i_1] [i_3] [i_3] [i_1] [i_13] = var_1;
                                arr_44 [i_0] [i_1] [i_3 + 1] [i_1] [i_13] = ((/* implicit */signed char) 1177063757);
                            }
                        } 
                    } 
                    var_26 += (!((!(((/* implicit */_Bool) ((signed char) arr_19 [i_3]))))));
                }
                var_27 &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((short) ((506658952207474473LL) > (((/* implicit */long long int) 4294967295U))))))));
                /* LoopSeq 4 */
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    arr_48 [i_0] [i_0] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) 3947872956U)) || (((/* implicit */_Bool) (unsigned char)1)))))) || (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 - 1]) : (((/* implicit */int) arr_20 [(_Bool)1] [i_1] [i_1] [i_0] [i_0] [i_0]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_6) : (((/* implicit */int) var_8)))))))));
                    arr_49 [i_14] [i_1] [i_1] [i_0 - 3] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_33 [(_Bool)1] [i_1] [i_1] [i_0] [i_0]))));
                    var_28 = ((/* implicit */int) (_Bool)1);
                    /* LoopNest 2 */
                    for (short i_15 = 1; i_15 < 13; i_15 += 4) 
                    {
                        for (int i_16 = 2; i_16 < 12; i_16 += 4) 
                        {
                            {
                                arr_55 [i_0 + 3] [i_1] [i_1] [i_15] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((arr_13 [i_0] [i_1] [(unsigned short)1] [i_15] [i_16 + 1] [i_16]) - (((/* implicit */int) var_5)))) & (((((/* implicit */int) var_4)) / (((/* implicit */int) var_5))))))) ? (((/* implicit */int) ((((/* implicit */int) arr_12 [(signed char)6] [i_1] [i_1] [i_1] [i_1] [i_1])) != (((-420561440) % (-1361952628)))))) : (((/* implicit */int) arr_19 [i_16 + 2]))));
                                var_29 = ((/* implicit */_Bool) ((((/* implicit */int) arr_33 [(unsigned char)9] [(short)7] [i_16] [i_15 - 1] [12])) | (((/* implicit */int) ((signed char) ((var_8) || (((/* implicit */_Bool) var_3))))))));
                            }
                        } 
                    } 
                }
                for (unsigned char i_17 = 2; i_17 < 13; i_17 += 4) 
                {
                    arr_59 [i_1] = ((((((/* implicit */_Bool) var_0)) && (((((/* implicit */_Bool) arr_7 [i_1] [i_1])) || (arr_40 [i_1] [i_1] [i_1] [i_17 - 1]))))) || (((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) arr_53 [i_1] [i_17 - 1] [i_17 - 2])))));
                    arr_60 [i_0] [i_1] = ((/* implicit */unsigned int) var_8);
                }
                /* vectorizable */
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    var_30 = ((/* implicit */long long int) (!(((var_7) <= (((/* implicit */unsigned long long int) 628286516))))));
                    var_31 = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_0 [i_0 + 1]))));
                }
                for (int i_19 = 0; i_19 < 14; i_19 += 4) 
                {
                    var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 3947872956U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
                    var_33 *= ((/* implicit */signed char) ((unsigned char) ((((/* implicit */int) ((signed char) arr_24 [5] [i_1] [i_1] [i_19]))) & ((-(var_6))))));
                }
                var_34 = ((/* implicit */unsigned char) min((var_34), (((/* implicit */unsigned char) min((((/* implicit */unsigned int) arr_37 [(signed char)13] [i_1] [i_1] [i_1])), (((unsigned int) var_4)))))));
            }
        } 
    } 
    var_35 = ((/* implicit */int) ((var_2) >> ((((((+(((/* implicit */int) (_Bool)1)))) - (var_6))) - (1963597883)))));
    /* LoopNest 2 */
    for (int i_20 = 0; i_20 < 24; i_20 += 4) 
    {
        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
        {
            {
                var_36 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_70 [i_20] [i_20]) ? (((/* implicit */int) arr_70 [i_20] [i_20])) : (((/* implicit */int) arr_66 [i_21]))))) ? (((/* implicit */int) arr_69 [i_20] [i_21])) : ((~(((/* implicit */int) (_Bool)1))))))) ? ((~(((((/* implicit */_Bool) arr_69 [i_20] [i_21])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (9050388868989530093ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)110)) >> (((((/* implicit */int) arr_67 [i_20])) + (44))))))));
                var_37 ^= ((/* implicit */unsigned short) ((((/* implicit */int) arr_67 [(_Bool)1])) / ((~(((/* implicit */int) min((var_4), (((/* implicit */unsigned short) arr_68 [i_21])))))))));
                arr_71 [i_21] = ((/* implicit */short) arr_66 [i_20]);
                /* LoopSeq 1 */
                for (unsigned char i_22 = 3; i_22 < 23; i_22 += 4) 
                {
                    var_38 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_70 [i_20] [i_20]))))) ? (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (unsigned short)4)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_65 [i_22]))))))) : ((-(((var_2) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))))));
                    var_39 = ((/* implicit */short) var_7);
                    /* LoopSeq 1 */
                    for (unsigned short i_23 = 1; i_23 < 21; i_23 += 4) 
                    {
                        var_40 = ((/* implicit */unsigned int) max((var_40), (((/* implicit */unsigned int) var_6))));
                        /* LoopSeq 1 */
                        for (unsigned char i_24 = 0; i_24 < 24; i_24 += 4) 
                        {
                            var_41 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_67 [i_24])) ? (-10) : (((/* implicit */int) arr_77 [i_23 + 3] [i_22 - 2] [i_20])))) & (((/* implicit */int) ((short) arr_79 [i_20] [i_21] [i_22] [i_20] [(_Bool)1])))))) ? (((/* implicit */int) var_5)) : (min((1807127427), (((((/* implicit */int) (signed char)28)) ^ (((/* implicit */int) arr_73 [i_21] [i_23]))))))));
                            arr_81 [i_20] [i_20] [i_21] [i_22] [i_23 + 2] [i_21] = ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
                            var_42 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_77 [i_23 + 1] [i_23] [i_23 + 1]))) | (5488468751923910200ULL)));
                        }
                        /* LoopSeq 1 */
                        for (signed char i_25 = 0; i_25 < 24; i_25 += 4) 
                        {
                            var_43 = ((/* implicit */unsigned int) min((arr_68 [(unsigned char)22]), (((/* implicit */unsigned char) (_Bool)1))));
                            var_44 = ((/* implicit */unsigned long long int) arr_72 [i_21] [i_21]);
                            arr_84 [i_21] [i_21] [i_22] [i_23 + 2] [i_23] [i_23] [i_25] = ((((/* implicit */int) arr_82 [i_23] [i_23] [4ULL] [i_20] [i_25])) % (((/* implicit */int) var_1)));
                            var_45 = ((/* implicit */signed char) max((var_45), (((/* implicit */signed char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) 17316983231279932778ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-119))) : (var_2)))))) ? ((-(((/* implicit */int) var_10)))) : (((/* implicit */int) var_1)))))));
                        }
                        var_46 = ((/* implicit */unsigned short) (-(min((((/* implicit */unsigned int) ((arr_76 [(_Bool)1] [i_21] [i_22 - 1] [i_23]) ? (((/* implicit */int) (unsigned char)19)) : (((/* implicit */int) (unsigned short)20558))))), (((((/* implicit */_Bool) (unsigned short)65507)) ? (3947872979U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
                    }
                    var_47 = ((/* implicit */short) min((var_47), (((/* implicit */short) (-(((((-996942148) < (((/* implicit */int) (unsigned short)65531)))) ? (((int) 2045440532)) : (((/* implicit */int) (_Bool)1)))))))));
                    arr_85 [i_21] [i_21] [i_22] [i_21] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? (347094340U) : (((/* implicit */unsigned int) ((arr_77 [i_22] [i_22] [i_22 - 1]) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)20087)))))))) ? (((/* implicit */int) ((_Bool) (~(((/* implicit */int) var_0)))))) : ((~(((/* implicit */int) arr_83 [i_22] [i_21] [i_22] [i_22 - 3] [i_22 - 2]))))));
                }
                var_48 = (-((-(1536861719))));
            }
        } 
    } 
}
