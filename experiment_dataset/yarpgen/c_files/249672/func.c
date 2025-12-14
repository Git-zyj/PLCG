/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249672
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
    var_12 = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))) ? (max((var_7), (((/* implicit */long long int) var_2)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_4)))))), (((/* implicit */long long int) max((max((var_0), (((/* implicit */unsigned short) var_5)))), (max(((unsigned short)224), (((/* implicit */unsigned short) (short)0)))))))));
    /* LoopSeq 2 */
    for (int i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        var_13 = ((/* implicit */signed char) max((max((min((var_6), (((/* implicit */unsigned long long int) var_5)))), (min((15863634542672815848ULL), (((/* implicit */unsigned long long int) 790032733)))))), (((/* implicit */unsigned long long int) max((max((arr_1 [i_0]), (((/* implicit */int) arr_0 [i_0])))), (min((arr_1 [i_0 + 1]), (((/* implicit */int) var_8)))))))));
        var_14 = min((min((((/* implicit */unsigned long long int) max((arr_1 [i_0]), (((/* implicit */int) var_11))))), (((((/* implicit */_Bool) (unsigned short)15311)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) -790032733)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_0 [i_0 - 1])), (18446744073709551615ULL)))) ? (min((arr_1 [i_0]), (-790032734))) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_0 [i_0 - 1])), (var_1))))))));
    }
    for (short i_1 = 0; i_1 < 15; i_1 += 3) 
    {
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) max((((/* implicit */unsigned char) arr_0 [(unsigned short)13])), (var_2)))), (((((/* implicit */_Bool) 8819337856087291837ULL)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)18609)))))))), (min((max((((/* implicit */unsigned long long int) arr_2 [i_1] [i_1])), (1152921504606846975ULL))), (((/* implicit */unsigned long long int) min((-790032734), (arr_1 [i_1]))))))));
        arr_6 [i_1] [i_1] = ((/* implicit */int) min((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_0 [i_1])), (var_6)))) ? (((((/* implicit */_Bool) -790032734)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (1ULL))) : (((/* implicit */unsigned long long int) max((-8686249458386337063LL), (((/* implicit */long long int) var_4))))))), (max((min((((/* implicit */unsigned long long int) (signed char)-116)), (17293822569102704641ULL))), (((/* implicit */unsigned long long int) min((-1629270554), (((/* implicit */int) (unsigned short)53206)))))))));
        /* LoopNest 3 */
        for (unsigned int i_2 = 0; i_2 < 15; i_2 += 3) 
        {
            for (int i_3 = 1; i_3 < 12; i_3 += 1) 
            {
                for (unsigned short i_4 = 2; i_4 < 11; i_4 += 3) 
                {
                    {
                        arr_15 [i_1] [i_1] [i_1] [i_4] = ((/* implicit */int) min((max((((((/* implicit */_Bool) -790032734)) ? (((/* implicit */unsigned long long int) arr_11 [i_2] [(unsigned short)13] [i_2] [i_1])) : (11472581410482441696ULL))), (max((((/* implicit */unsigned long long int) 877974260U)), (var_6))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) var_8)), (-16777216)))) ? (((((/* implicit */_Bool) 17293822569102704641ULL)) ? (((/* implicit */int) arr_10 [i_4])) : (((/* implicit */int) var_2)))) : (((((/* implicit */_Bool) 2047)) ? (arr_1 [i_3]) : (((/* implicit */int) var_5)))))))));
                        var_15 = ((/* implicit */unsigned char) max((max((((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) var_5)) : (-790032734))), (((/* implicit */int) min((arr_0 [i_4]), (arr_3 [i_1] [i_1])))))), (((((/* implicit */_Bool) -2006817883)) ? ((-2147483647 - 1)) : (16777215)))));
                        /* LoopSeq 2 */
                        for (short i_5 = 0; i_5 < 15; i_5 += 2) /* same iter space */
                        {
                            arr_18 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) min((((((/* implicit */_Bool) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_16 [i_1] [(unsigned short)14] [i_1]))))) ? (min((((/* implicit */unsigned long long int) (signed char)2)), (17293822569102704641ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)32767), (((/* implicit */short) (_Bool)1)))))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) min((((/* implicit */unsigned char) (_Bool)1)), (var_2)))), (min((((/* implicit */unsigned int) var_11)), (var_4))))))));
                            arr_19 [i_5] [i_1] [i_3] [i_3] [i_3] [i_1] [i_1] = ((/* implicit */unsigned int) max((max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) 0)), (561850441793536LL)))), (max((((/* implicit */unsigned long long int) 1837436954)), (17293822569102704641ULL))))), (((((/* implicit */_Bool) min((-1943468871), (((/* implicit */int) var_3))))) ? (max((arr_14 [i_4 - 1]), (((/* implicit */unsigned long long int) arr_2 [i_1] [i_1])))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_8)), (968489173U))))))));
                            var_16 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 355598569)) ? (((/* implicit */int) (unsigned short)8191)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned char)232)), (var_4)))) : (max((1ULL), (((/* implicit */unsigned long long int) arr_11 [i_3] [i_4 + 1] [i_3] [i_4])))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_10), (((/* implicit */unsigned int) var_3))))) ? (((/* implicit */int) min(((short)21749), ((short)0)))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_2)))))))));
                            var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) min((max((min((((/* implicit */unsigned long long int) arr_16 [i_1] [i_1] [i_4 - 1])), (var_6))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned char)0)), (968489173U)))))), (((/* implicit */unsigned long long int) max((min((((/* implicit */long long int) arr_3 [i_1] [i_5])), (arr_11 [i_1] [i_1] [i_1] [i_1]))), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)20)) ? (((/* implicit */int) var_1)) : (1629270553))))))))))));
                            arr_20 [i_1] [8ULL] [i_1] [1ULL] [8ULL] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)45949)) ? (0U) : (378798010U)))) ? (((((/* implicit */_Bool) min((0U), (((/* implicit */unsigned int) arr_8 [i_1]))))) ? (((((/* implicit */_Bool) -1629270554)) ? (arr_4 [i_1] [i_1]) : (((/* implicit */long long int) 3326478122U)))) : (((/* implicit */long long int) ((/* implicit */int) min((var_1), (((/* implicit */unsigned short) arr_10 [i_4])))))))) : (((/* implicit */long long int) min((min((arr_13 [i_5]), (((/* implicit */int) (unsigned char)81)))), (max((((/* implicit */int) (short)(-32767 - 1))), (1610698045)))))));
                        }
                        /* vectorizable */
                        for (short i_6 = 0; i_6 < 15; i_6 += 2) /* same iter space */
                        {
                            var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_1])) ? (arr_17 [i_6] [i_4] [i_3] [i_2] [i_1]) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4044851457U)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_3 [i_1] [i_1]))))) : (((((/* implicit */_Bool) 18127488900717934911ULL)) ? (((/* implicit */unsigned int) arr_9 [i_1])) : (4294967295U)))));
                            arr_25 [13ULL] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1]))) : (arr_7 [i_1])))) ? (((((/* implicit */_Bool) (signed char)22)) ? (4585668724531759977LL) : (((/* implicit */long long int) ((/* implicit */int) var_1))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)22)) : (((/* implicit */int) var_5)))))));
                        }
                        var_19 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_24 [i_1] [i_1] [i_1])), (arr_10 [i_4])))) ? (((/* implicit */long long int) min((arr_13 [i_2]), (((/* implicit */int) arr_16 [i_1] [i_1] [i_4]))))) : (max((arr_4 [i_1] [i_4]), (((/* implicit */long long int) arr_13 [i_3]))))))), (min((((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned char)24)), (arr_1 [i_1])))), (min((var_6), (((/* implicit */unsigned long long int) var_3))))))));
                        var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) -1840187492789874407LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) : (var_10)))), (max((((/* implicit */long long int) var_11)), (arr_4 [i_1] [i_1])))))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3917773001U)) ? (-1629270554) : (((/* implicit */int) (_Bool)1))))), (min((var_6), (((/* implicit */unsigned long long int) var_9)))))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (1629270553) : (((/* implicit */int) arr_0 [i_1]))))), (max((((/* implicit */unsigned int) arr_10 [i_4 - 2])), (var_10))))))));
                    }
                } 
            } 
        } 
    }
    var_21 = ((/* implicit */short) min((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) 0ULL)) ? (-8858555786185635370LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))))), (((/* implicit */long long int) (unsigned short)39910))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8176)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)232))) : (-4053426738253136245LL)))), (319255172991616705ULL)))));
    var_22 = min((((((/* implicit */_Bool) max((var_7), (((/* implicit */long long int) var_11))))) ? (((((/* implicit */_Bool) (unsigned char)0)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_5))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)127)) ? (((/* implicit */int) (signed char)54)) : (((/* implicit */int) (_Bool)1))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_8)), (var_6)))) ? (((/* implicit */int) min((((/* implicit */short) var_3)), (var_11)))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_2))))))));
}
