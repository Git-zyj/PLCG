/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51399
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
    var_10 = ((/* implicit */_Bool) min((var_10), (((var_3) < (var_2)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                /* LoopSeq 4 */
                /* vectorizable */
                for (int i_2 = 2; i_2 < 17; i_2 += 1) 
                {
                    var_11 = ((/* implicit */unsigned int) (signed char)102);
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 15; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            {
                                var_12 = ((/* implicit */_Bool) var_3);
                                arr_11 [i_0 + 2] [i_0 - 1] [i_3] [i_0 + 1] [i_0 - 1] = ((/* implicit */short) var_8);
                            }
                        } 
                    } 
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                {
                    arr_14 [i_5] [i_1] [i_5] = ((((/* implicit */int) max((arr_0 [i_0 + 2] [i_0 + 2]), (arr_8 [i_5] [i_0 + 1] [i_0 + 2] [i_0 + 2])))) - (var_2));
                    arr_15 [i_5] = ((/* implicit */unsigned int) ((min((665606972363998965LL), (((/* implicit */long long int) (unsigned char)52)))) < (((/* implicit */long long int) ((/* implicit */int) min((arr_4 [i_0 + 2] [i_0 + 2] [i_0 + 1]), (var_4)))))));
                    arr_16 [i_5] [i_1] [i_1] [i_1] = ((/* implicit */signed char) (-(((((/* implicit */int) var_8)) ^ (((/* implicit */int) min(((unsigned char)14), (((/* implicit */unsigned char) (signed char)90)))))))));
                }
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (long long int i_7 = 1; i_7 < 16; i_7 += 3) 
                    {
                        arr_22 [i_0 - 1] [i_0 - 1] [i_1] [i_1] [i_6] [i_7 - 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-24461)) ? (var_0) : (((/* implicit */unsigned long long int) ((1382201270U) ^ (((/* implicit */unsigned int) (-2147483647 - 1))))))));
                        /* LoopSeq 4 */
                        for (int i_8 = 0; i_8 < 19; i_8 += 3) 
                        {
                            arr_27 [i_0 + 2] [i_6] [i_0 + 2] [i_0 + 2] [i_0 + 2] = ((/* implicit */signed char) max((((/* implicit */int) arr_25 [i_7 + 1] [i_7 + 2] [i_7 + 2] [i_6] [i_8] [i_8])), ((-(((/* implicit */int) arr_23 [i_7 + 2] [i_7 + 2] [i_7 + 2] [i_8] [i_8] [i_8]))))));
                            arr_28 [i_6] [i_1] [i_6] = ((/* implicit */unsigned int) -29280484);
                            var_13 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-24471))));
                        }
                        for (unsigned char i_9 = 0; i_9 < 19; i_9 += 3) 
                        {
                            var_14 = ((/* implicit */unsigned char) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_7 + 3] [i_0 + 1]))))), (254823045)));
                            arr_31 [i_0 + 1] [i_1] [i_6] [i_9] [i_9] [i_6] [i_1] = ((/* implicit */signed char) max((((/* implicit */short) ((max((var_0), (((/* implicit */unsigned long long int) var_4)))) < (((/* implicit */unsigned long long int) max((-716484077), (((/* implicit */int) (unsigned char)16)))))))), ((short)-24440)));
                            arr_32 [i_7 + 2] [i_7 + 2] [i_6] [i_7 + 3] [i_7 - 1] = ((/* implicit */short) max((max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-100))))), ((-(var_5))))), (((/* implicit */unsigned long long int) 3082020889U))));
                        }
                        for (unsigned char i_10 = 0; i_10 < 19; i_10 += 1) /* same iter space */
                        {
                            arr_36 [i_1] [i_1] [i_6] [i_6] [i_7 - 1] [i_10] &= ((/* implicit */signed char) ((((8248356323232466155LL) != (((/* implicit */long long int) (~(((/* implicit */int) var_6))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (max((((/* implicit */int) (signed char)112)), (716484071))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_30 [i_0 - 1] [i_1] [i_6] [i_6] [i_7 + 2] [i_10])) && (((/* implicit */_Bool) arr_33 [i_1]))))))))));
                            arr_37 [i_1] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_0 + 1] [i_0 + 2] [i_7 + 2] [i_10] [i_0 - 1] [i_1])) ? (var_3) : (((((/* implicit */int) (_Bool)0)) % (((/* implicit */int) (signed char)-54))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_11 = 0; i_11 < 19; i_11 += 1) /* same iter space */
                        {
                            arr_41 [i_1] [i_7 + 2] [i_6] [i_1] [i_1] &= ((/* implicit */_Bool) var_8);
                            var_15 *= ((/* implicit */unsigned char) ((((((/* implicit */int) (signed char)-66)) + (2147483647))) >> (((((/* implicit */int) (short)-24461)) + (24488)))));
                            arr_42 [i_6] = ((/* implicit */short) (!((_Bool)1)));
                            var_16 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) arr_39 [i_0 + 2] [i_0 - 1] [i_0 + 1] [i_1] [i_0 - 1] [i_0 - 1] [i_0 - 1]))));
                        }
                    }
                    /* vectorizable */
                    for (unsigned short i_12 = 0; i_12 < 19; i_12 += 2) 
                    {
                        /* LoopSeq 4 */
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            arr_48 [i_13] [i_1] [i_6] [i_1] [i_0 + 1] &= ((/* implicit */unsigned short) ((((/* implicit */int) var_1)) | ((~(var_2)))));
                            arr_49 [i_0 - 1] [i_1] [i_1] [i_6] [i_12] [i_6] [i_13] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-24440)) ? (((/* implicit */unsigned int) 13)) : (4294967295U)))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_0 + 1] [i_6] [i_6])) || (((/* implicit */_Bool) var_6)))))));
                        }
                        for (int i_14 = 1; i_14 < 17; i_14 += 2) 
                        {
                            var_17 = ((/* implicit */long long int) var_0);
                            var_18 = ((/* implicit */unsigned short) (+(var_7)));
                            arr_53 [i_0 + 1] [i_1] [i_1] [i_12] [i_14 + 1] &= ((/* implicit */unsigned int) ((((/* implicit */int) var_6)) <= ((~(36)))));
                            arr_54 [i_6] [i_12] [i_6] [i_6] [i_1] [i_0 - 1] [i_6] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_5)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) ^ (((/* implicit */unsigned long long int) ((arr_6 [i_1] [i_12]) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)211))))))));
                        }
                        for (unsigned int i_15 = 0; i_15 < 19; i_15 += 2) 
                        {
                            var_19 ^= ((/* implicit */signed char) ((((/* implicit */int) arr_56 [i_0 - 1] [i_0 + 2] [i_0 - 1] [i_0 + 1] [i_0 - 1])) / (var_3)));
                            var_20 = ((/* implicit */unsigned char) var_6);
                            var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_55 [i_6] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 2] [i_0 - 1] [i_0 + 1])) >= (((/* implicit */int) var_4))));
                            var_22 *= ((/* implicit */_Bool) arr_23 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_6]);
                        }
                        for (long long int i_16 = 2; i_16 < 16; i_16 += 4) 
                        {
                            var_23 |= ((1U) != (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
                            var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) (~(var_7))))));
                        }
                        var_25 *= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_9))) * (((4503591037435904LL) >> (((4294967293U) - (4294967284U)))))));
                        /* LoopSeq 1 */
                        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                        {
                            var_26 ^= ((/* implicit */short) ((((/* implicit */int) var_8)) ^ (((/* implicit */int) var_4))));
                            var_27 ^= ((/* implicit */unsigned long long int) ((-2308426224127420040LL) == (((/* implicit */long long int) ((/* implicit */int) (unsigned char)102)))));
                            var_28 = ((/* implicit */_Bool) (-(-2308426224127420036LL)));
                        }
                        arr_63 [i_6] = ((/* implicit */int) (!(((/* implicit */_Bool) var_4))));
                        arr_64 [i_6] [i_1] [i_6] [i_6] [i_6] [i_12] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) >= (6913007586293933470LL)));
                    }
                    for (unsigned int i_18 = 3; i_18 < 17; i_18 += 1) 
                    {
                        arr_67 [i_6] [i_6] [i_18 - 3] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-90))) / (4294967295U)));
                        var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_2 [i_0 - 1]))))) : (max((((/* implicit */unsigned int) (unsigned char)56)), (4294967290U))))))));
                        arr_68 [i_18 - 3] [i_6] [i_6] [i_6] [i_0 - 1] = ((/* implicit */unsigned char) min((((/* implicit */long long int) max((max((7U), (((/* implicit */unsigned int) (unsigned char)199)))), (((/* implicit */unsigned int) var_2))))), ((-9223372036854775807LL - 1LL))));
                        var_30 = ((/* implicit */short) var_9);
                        var_31 *= ((/* implicit */unsigned int) var_6);
                    }
                    arr_69 [i_6] = ((/* implicit */unsigned int) var_8);
                    arr_70 [i_6] [i_1] [i_6] = ((/* implicit */unsigned short) (+((-(((/* implicit */int) (signed char)127))))));
                }
                for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) /* same iter space */
                {
                    var_32 = ((/* implicit */short) (-(((/* implicit */int) (unsigned short)33610))));
                    var_33 = ((/* implicit */int) min((var_33), (((/* implicit */int) 11253212927336052546ULL))));
                    arr_73 [i_19] = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_71 [i_0 + 1] [i_1] [i_0 - 1] [i_1]))) < (max((((/* implicit */unsigned long long int) (~(var_7)))), (((var_5) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-58))))))));
                    var_34 = ((/* implicit */_Bool) max((max((((/* implicit */long long int) arr_8 [i_19] [i_0 + 2] [i_0 + 2] [i_19])), (max((8469329285300757413LL), (((/* implicit */long long int) (unsigned char)199)))))), (((/* implicit */long long int) min((min((var_2), (var_2))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) != (var_0)))))))));
                    arr_74 [i_0 + 2] [i_1] [i_1] [i_0 + 1] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((-9223372036854775807LL - 1LL)) ^ (((/* implicit */long long int) ((/* implicit */int) var_9)))))) ? ((+(((/* implicit */int) var_8)))) : (((/* implicit */int) var_1))));
                }
                var_35 = ((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-122)), ((unsigned char)199)));
                var_36 -= ((/* implicit */_Bool) min((((((((/* implicit */_Bool) var_5)) ? (arr_29 [i_0 + 2]) : (var_2))) | (((/* implicit */int) var_9)))), (min((var_3), (var_2)))));
            }
        } 
    } 
    var_37 = var_1;
    var_38 = ((/* implicit */_Bool) var_4);
}
