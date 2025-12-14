/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49733
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
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) var_7)) / (2719580526U)))) ? (((var_13) >> (((var_6) - (59008117461381248ULL))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-24605))) >= (var_14)))))))) ? (((max((var_7), (((/* implicit */int) var_10)))) / (var_4))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) 4294967292U)) : (var_6)))) ? (((((/* implicit */_Bool) (unsigned short)3)) ? (((/* implicit */int) (unsigned short)65533)) : (((/* implicit */int) (unsigned short)65533)))) : (((/* implicit */int) ((signed char) var_9)))))));
    var_16 += ((/* implicit */unsigned char) var_7);
    var_17 = ((/* implicit */unsigned int) ((((((unsigned int) var_1)) / (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) var_5)) : (4094U))))) < (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 13613939097276838063ULL)) ? (0U) : (var_14)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : (((((/* implicit */_Bool) var_8)) ? (var_5) : (((/* implicit */int) var_11)))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_18 *= ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65533))) - (arr_2 [i_0]))));
        var_19 ^= ((/* implicit */short) min(((unsigned short)3), (((/* implicit */unsigned short) (unsigned char)88))));
        var_20 = ((/* implicit */unsigned int) (((_Bool)1) ? (1902980029180309895LL) : (((/* implicit */long long int) 1307886752))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            arr_6 [i_0] [(unsigned char)16] = ((/* implicit */short) ((((((/* implicit */_Bool) max((var_12), (arr_2 [i_0])))) ? ((-(4094U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) arr_2 [i_1])) != (arr_0 [i_1]))))))) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)14)))))) ? (((/* implicit */int) ((short) var_12))) : (((((/* implicit */_Bool) var_14)) ? (-829374842) : (((/* implicit */int) arr_4 [i_0] [i_0])))))))));
            arr_7 [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)88)) ? (18446744073709551615ULL) : (var_6)))) ? (((((/* implicit */_Bool) -1307886752)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)3))) : (18446744073709551615ULL))) : (((((/* implicit */_Bool) 8331565166898759811ULL)) ? (var_1) : (((/* implicit */unsigned long long int) var_5)))));
            var_21 = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((signed char) var_3))), (((((/* implicit */_Bool) -1LL)) ? (1273534422U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
        }
        /* vectorizable */
        for (long long int i_2 = 0; i_2 < 18; i_2 += 1) 
        {
            var_22 = ((/* implicit */unsigned short) ((arr_5 [i_2] [i_2]) % (arr_5 [i_0] [i_0])));
            /* LoopSeq 3 */
            for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 1) /* same iter space */
            {
                var_23 = ((/* implicit */signed char) (~(583472887)));
                /* LoopSeq 4 */
                for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 1) 
                {
                    var_24 = ((/* implicit */unsigned short) ((((var_9) ? (408742822900143894LL) : (((/* implicit */long long int) ((/* implicit */int) var_10))))) | (((/* implicit */long long int) var_4))));
                    arr_14 [(signed char)16] [i_3] [i_3] [(unsigned char)13] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 14050564474048335394ULL)) ? (((((-3870426100262659920LL) + (9223372036854775807LL))) >> (((var_3) - (573153066U))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-16)))));
                }
                for (short i_5 = 1; i_5 < 16; i_5 += 2) 
                {
                    var_25 = ((/* implicit */signed char) ((((/* implicit */long long int) -1307886752)) | (((((/* implicit */_Bool) arr_18 [i_0] [i_5 - 1] [i_5] [4])) ? (var_13) : (((/* implicit */long long int) var_4))))));
                    arr_19 [i_0] [i_3] [i_3] [(unsigned char)2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_0))) / (arr_16 [i_0] [i_2] [i_3] [i_5])))) ? (((/* implicit */unsigned long long int) arr_12 [i_5 - 1] [i_5] [i_5 + 1] [i_5] [i_5])) : (((var_6) % (((/* implicit */unsigned long long int) -1307886761))))));
                }
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    arr_23 [i_0] [i_0] [i_3] [i_3] = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) (unsigned short)3)) ? (arr_5 [i_2] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_0] [i_3] [i_3] [i_6] [i_0]))))));
                    arr_24 [i_6] [i_3] [i_3] [i_2] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 583472887)) ? (-71761670561313499LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)47276)))))) ? (((((/* implicit */_Bool) arr_11 [i_2] [i_3] [i_3])) ? (arr_15 [i_2] [(unsigned char)6] [i_3] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) var_9))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))));
                }
                for (long long int i_7 = 3; i_7 < 14; i_7 += 2) 
                {
                    var_26 = ((/* implicit */int) ((short) ((((/* implicit */_Bool) var_2)) ? (arr_21 [i_3] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) (short)27963))))));
                    var_27 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_20 [i_7 + 3] [i_0] [i_3] [i_0] [i_0])) : (((/* implicit */int) var_11))));
                }
            }
            for (unsigned long long int i_8 = 0; i_8 < 18; i_8 += 1) /* same iter space */
            {
                var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_0] [i_8] [i_0] [i_8] [i_0])))))) ? (((((/* implicit */_Bool) arr_9 [i_0] [(_Bool)1] [i_8])) ? (4603521070351126874LL) : (((/* implicit */long long int) var_12)))) : (((arr_22 [i_0] [i_2]) % (((/* implicit */long long int) ((/* implicit */int) (unsigned short)43077)))))));
                var_29 = ((/* implicit */short) ((((((/* implicit */int) var_10)) / (((/* implicit */int) var_11)))) >> (((((((/* implicit */_Bool) arr_2 [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32564))) : (arr_11 [i_0] [i_0] [i_8]))) - (32545U)))));
                /* LoopSeq 4 */
                for (int i_9 = 0; i_9 < 18; i_9 += 4) 
                {
                    var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_0] [i_0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)3))));
                    var_31 = ((/* implicit */unsigned int) min((var_31), (((((/* implicit */_Bool) 4094U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (2314178329U)))));
                    arr_33 [i_8] [i_8] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_31 [i_0])) ? (625716433U) : (arr_31 [i_0])));
                }
                for (int i_10 = 0; i_10 < 18; i_10 += 1) 
                {
                    var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) var_12)) : (arr_16 [i_0] [(unsigned char)5] [i_8] [i_10])));
                    arr_38 [i_0] [i_2] [i_8] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_8])) ? (((/* implicit */int) var_11)) : (var_7)))) ? (2056400222) : ((+(((/* implicit */int) arr_27 [i_0] [i_8] [i_0]))))));
                    arr_39 [i_8] = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_28 [i_2])) : (((/* implicit */int) arr_20 [i_0] [i_8] [i_8] [i_8] [i_8])))));
                }
                for (int i_11 = 0; i_11 < 18; i_11 += 1) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        arr_45 [i_0] [i_2] [i_8] [i_11] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_12) << (((((/* implicit */int) var_0)) - (178)))))) ? (((/* implicit */long long int) ((var_12) << (((var_7) + (793845866)))))) : (((long long int) arr_34 [i_0] [i_2] [i_8] [i_11] [i_12]))));
                        var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-28569)))));
                        var_34 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_11] [i_11])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9))))) ? (((/* implicit */int) ((signed char) arr_26 [i_8]))) : (var_4)));
                        var_35 = ((/* implicit */unsigned char) min((var_35), (((/* implicit */unsigned char) ((((var_3) << (((((/* implicit */int) var_10)) - (85))))) % (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_8] [i_8] [i_8] [i_8] [i_0] [i_8])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_9))))))))));
                    }
                    for (unsigned int i_13 = 1; i_13 < 17; i_13 += 2) 
                    {
                        arr_48 [i_13] [(unsigned char)13] [i_8] [i_2] [i_0] = ((unsigned int) ((((/* implicit */_Bool) var_11)) ? (arr_10 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_0)))));
                        var_36 = ((/* implicit */unsigned char) ((((15487719791607280389ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) ? ((((_Bool)0) ? (((/* implicit */int) (short)21072)) : (((/* implicit */int) (signed char)4)))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)154)) > (((/* implicit */int) var_11)))))));
                    }
                    /* LoopSeq 2 */
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        arr_53 [(signed char)12] [i_0] [i_8] [i_0] [i_0] [i_0] &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_0] [i_2])) ? (arr_0 [i_11]) : (((((/* implicit */_Bool) var_10)) ? (arr_15 [i_0] [i_2] [i_2] [i_11]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)60267)))))));
                        var_37 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_0] [i_8] [i_11] [i_0])) ? (arr_16 [i_8] [i_8] [i_8] [i_8]) : (((/* implicit */long long int) var_12))));
                        arr_54 [i_0] [i_2] [i_8] [i_8] [i_14] = ((/* implicit */int) (-(arr_18 [i_2] [i_2] [i_2] [i_2])));
                        var_38 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [(signed char)3] [i_2] [13LL] [i_2] [13LL])) ? (((/* implicit */int) arr_27 [i_8] [11] [i_0])) : (((/* implicit */int) (unsigned short)61347))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_8])) ? (((/* implicit */int) arr_50 [i_0] [i_2] [i_2] [i_2] [i_8])) : (((/* implicit */int) var_0))))) : (var_13)));
                    }
                    for (short i_15 = 3; i_15 < 16; i_15 += 3) 
                    {
                        var_39 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)17371)) / (((/* implicit */int) (unsigned char)154))))) ? (((((/* implicit */_Bool) 512272124)) ? (var_1) : (var_6))) : (((/* implicit */unsigned long long int) ((var_5) / (((/* implicit */int) var_11)))))));
                        var_40 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(arr_0 [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_8)) == (((/* implicit */int) (unsigned short)23023)))))) : (arr_2 [i_15 + 2])));
                        var_41 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned short)47269)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_44 [i_0] [i_0] [i_0]))) : (var_1))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_0]))) >= (arr_29 [i_0] [i_2] [i_8] [i_11] [i_15 - 2] [i_11])))))));
                        arr_57 [i_0] [i_8] [i_8] [i_11] [i_15] = ((/* implicit */short) ((((/* implicit */_Bool) arr_43 [i_0] [i_2] [i_8] [i_15 + 2] [5U])) ? (((/* implicit */unsigned long long int) 583472887)) : (((((/* implicit */_Bool) (unsigned short)42513)) ? (13271688459925491993ULL) : (((/* implicit */unsigned long long int) 595685233U))))));
                        var_42 = ((/* implicit */short) min((var_42), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)67))) : (var_13)))) ? (((/* implicit */int) ((unsigned char) 3551199625U))) : (((arr_44 [i_2] [i_2] [i_15]) ? (((/* implicit */int) arr_55 [i_0] [i_0] [i_0] [i_0] [(_Bool)1] [i_0] [i_0])) : (((/* implicit */int) var_11)))))))));
                    }
                    var_43 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)15)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)86))) : (-2640759735032526839LL)))) ? (((((/* implicit */_Bool) var_6)) ? (arr_5 [i_0] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [i_0] [i_8] [i_8] [i_8]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)21072)) & (var_7))))));
                }
                for (unsigned char i_16 = 0; i_16 < 18; i_16 += 2) 
                {
                    var_44 = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (72057594037927936LL)));
                    var_45 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_16] [i_8] [i_0]))) == (var_12)));
                    var_46 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)65533)) / (((/* implicit */int) (short)-25270))));
                    var_47 = ((/* implicit */unsigned long long int) max((var_47), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_13 [i_0] [i_0] [i_2] [i_8] [i_16] [i_16])) % (((/* implicit */int) var_9)))))));
                    var_48 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) var_5)) * (4095LL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((var_7) > (((/* implicit */int) var_10)))))) : (((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_8])) ? (296300811438656936LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-21072)))))));
                }
                var_49 = ((/* implicit */long long int) ((((/* implicit */_Bool) 3551199609U)) ? (var_1) : (((/* implicit */unsigned long long int) var_14))));
                arr_60 [i_8] [i_8] [i_2] [6U] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-21)) ? (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_8] [i_0])) : (var_2)));
            }
            for (unsigned long long int i_17 = 0; i_17 < 18; i_17 += 1) /* same iter space */
            {
                var_50 *= ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_40 [i_0] [i_2])));
                var_51 = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)32767))));
            }
            var_52 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_25 [i_0] [i_2] [i_0] [i_2])) : (((/* implicit */int) arr_27 [i_0] [(signed char)3] [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (short)21072)) || (((/* implicit */_Bool) var_14)))))) : (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_55 [i_0] [i_0] [i_2] [i_0] [i_0] [i_0] [i_2]))) : (2556246791U)))));
        }
    }
}
