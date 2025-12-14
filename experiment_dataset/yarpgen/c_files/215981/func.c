/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215981
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
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (short)25335)) : (var_14)))) ? (3899347419226513720ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
    var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */long long int) ((1368086121U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)31)))))), (var_0))))));
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)80)), (((var_13) / (((/* implicit */long long int) ((/* implicit */int) (signed char)-101)))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : ((-(var_13)))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 4; i_1 < 21; i_1 += 2) /* same iter space */
        {
            var_21 = max((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) var_5)) : (arr_1 [i_1 + 3])))) > (min((arr_5 [i_1 - 1] [i_1] [(signed char)1]), (((/* implicit */unsigned long long int) var_11))))))), (((1368086112U) % (((/* implicit */unsigned int) -4)))));
            /* LoopSeq 2 */
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 1) /* same iter space */
            {
                var_22 ^= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((1631901682U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)21840)))))) > (min((((((/* implicit */long long int) ((/* implicit */int) (short)-1))) | (var_13))), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) == (var_12))))))));
                arr_9 [i_1] [i_2] [i_2] = ((((/* implicit */_Bool) (~(10819534617080602326ULL)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((9952715309580930806ULL), (((/* implicit */unsigned long long int) (signed char)-1))))) ? (((/* implicit */int) (short)-17285)) : (((/* implicit */int) (signed char)85))))) : (min((((((/* implicit */_Bool) (unsigned char)38)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3631))) : (1368086129U))), (((var_11) % (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))))));
            }
            for (unsigned short i_3 = 0; i_3 < 24; i_3 += 1) /* same iter space */
            {
                var_23 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_1 [i_0])) ? (((arr_1 [i_0]) & (3869902969U))) : (((2663065613U) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-84))))))), (((var_1) >> (((arr_1 [i_0]) - (1093236965U)))))));
                arr_13 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned char)253))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_3] [i_3] [1] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [i_1 - 4]))) : (var_11)))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551595ULL)) ? (((/* implicit */int) (short)32754)) : (((/* implicit */int) var_15))))), (((((/* implicit */_Bool) 18036741328997445934ULL)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32748)))))))));
                /* LoopSeq 2 */
                for (unsigned char i_4 = 0; i_4 < 24; i_4 += 4) 
                {
                    /* LoopSeq 3 */
                    for (long long int i_5 = 2; i_5 < 23; i_5 += 1) 
                    {
                        arr_19 [i_0] [i_5 - 2] [10] [i_4] [i_5] [i_0] = (-(((/* implicit */int) arr_17 [i_0] [i_0] [i_4] [i_5 - 1])));
                        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 18036741328997445934ULL)) ? (((/* implicit */unsigned long long int) -7609768936130130634LL)) : (((((/* implicit */_Bool) max((2663065606U), (((/* implicit */unsigned int) (signed char)51))))) ? (((arr_5 [i_3] [i_4] [i_5]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32766))))) : (18446744073709551615ULL)))));
                        var_25 += ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) min((((/* implicit */unsigned short) (unsigned char)249)), ((unsigned short)7168)))), (((((/* implicit */_Bool) arr_18 [i_5] [i_5 - 1] [i_5] [i_5 - 1] [i_5 + 1] [i_5] [i_0])) ? (((/* implicit */unsigned int) 1752949444)) : (4294967295U)))));
                        var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) var_1))));
                    }
                    for (unsigned char i_6 = 1; i_6 < 23; i_6 += 4) 
                    {
                        var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) arr_1 [i_1 - 2]))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_15))))) : (((((/* implicit */_Bool) arr_1 [i_1 - 1])) ? (((/* implicit */unsigned int) var_14)) : (arr_1 [i_1 - 1])))));
                        arr_23 [i_6 - 1] [i_1] [i_3] [i_4] [0ULL] = ((/* implicit */int) min((min((((/* implicit */long long int) arr_1 [i_6])), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-32742))) : (arr_16 [21] [i_1 - 1] [15LL] [i_4] [i_6]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)41138)) ? (((/* implicit */int) (unsigned char)177)) : (((/* implicit */int) (signed char)-84)))))));
                    }
                    for (short i_7 = 0; i_7 < 24; i_7 += 2) 
                    {
                        arr_27 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((arr_10 [i_1] [i_1] [i_3]) ? (1752949424) : (((/* implicit */int) arr_24 [i_0] [i_0] [i_0] [i_0] [i_0]))))), (((((/* implicit */_Bool) var_16)) ? (arr_25 [i_0] [i_1 - 4] [i_3] [23] [i_7]) : (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_0] [i_1] [i_1 + 3] [i_3] [i_4] [i_4] [i_7])))))))) ? ((-(((/* implicit */int) arr_8 [i_0])))) : (1752949420)));
                        arr_28 [i_0] [i_1] [(unsigned short)8] [i_4] [i_7] = ((/* implicit */unsigned char) arr_25 [(short)13] [2ULL] [(short)13] [i_3] [i_3]);
                        arr_29 [i_0] [i_1] [i_0] [i_4] [i_4] [i_7] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) max((1368086098U), (2783573549U)))), (-3802876336316458695LL)))) ? (((/* implicit */int) var_15)) : (((((/* implicit */_Bool) (unsigned char)9)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((unsigned char) 1572864)))))));
                        var_28 = ((/* implicit */unsigned long long int) max((var_28), (((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (3669846965U)))) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (1368086118U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)168))))) : (((/* implicit */unsigned int) ((((/* implicit */int) (short)7692)) ^ (((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) -773978950))))), (((((/* implicit */_Bool) 5334524455890396252ULL)) ? (var_5) : (((/* implicit */int) arr_17 [i_0] [i_1 - 3] [i_3] [i_4]))))))) : ((+(((((/* implicit */_Bool) var_1)) ? (var_16) : (((/* implicit */unsigned long long int) var_1))))))))));
                    }
                    arr_30 [i_4] [i_3] [i_3] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) min((2119844312), (((/* implicit */int) (unsigned short)42819))));
                    arr_31 [i_1] [5ULL] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1 - 4])) ? (arr_25 [i_1] [i_1] [i_1 + 2] [i_1] [i_1 + 1]) : (arr_25 [i_0] [i_1] [i_1 + 3] [0U] [i_1 + 3])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_1] [i_1] [i_1] [i_1 - 4] [i_1 + 3])))))) : (((((/* implicit */_Bool) (short)18959)) ? (arr_25 [i_0] [i_0] [i_0] [i_1 - 1] [i_1 + 1]) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))));
                    arr_32 [i_4] [i_3] [i_3] [i_1] [i_0] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) 8697972433830788333LL)) ? ((-2147483647 - 1)) : (((/* implicit */int) (short)-26652))))));
                    arr_33 [i_0] [i_1] [i_3] [i_3] [i_0] = ((/* implicit */unsigned short) ((arr_10 [i_1 - 4] [18LL] [i_1 + 2]) ? (((/* implicit */int) ((short) var_13))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) > (arr_5 [i_1 + 2] [i_1 + 1] [i_1 + 1]))))));
                }
                for (unsigned char i_8 = 0; i_8 < 24; i_8 += 4) 
                {
                    arr_37 [i_3] [i_8] [i_3] = ((/* implicit */unsigned char) arr_2 [i_0] [i_0]);
                    arr_38 [i_8] [i_0] [i_1] [i_0] = var_7;
                }
            }
            arr_39 [i_0] = (+((-((+(((/* implicit */int) arr_4 [i_1] [i_0])))))));
        }
        for (short i_9 = 4; i_9 < 21; i_9 += 2) /* same iter space */
        {
            arr_42 [(short)13] [i_9 + 2] [i_9] = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)48950))) | (18088583056540570760ULL)))) ? (((/* implicit */int) min((((/* implicit */short) (signed char)47)), ((short)12994)))) : (((((/* implicit */_Bool) (unsigned char)244)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)8808)))));
            var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_9 + 1] [i_9 - 2] [i_9 + 1])) & (((/* implicit */int) arr_7 [i_9 - 1] [i_9 + 2] [i_9 + 2]))))) ? (((((/* implicit */int) arr_7 [i_9 - 2] [i_9 + 2] [i_9 - 2])) | (((/* implicit */int) arr_7 [i_9 + 1] [i_0] [i_9])))) : (((((/* implicit */_Bool) (short)-1)) ? (708248074) : (((/* implicit */int) arr_7 [i_9 + 2] [i_9 + 1] [i_9]))))));
        }
        arr_43 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_6))) | (((((/* implicit */long long int) min((((/* implicit */int) (signed char)47)), (2147483647)))) % (arr_16 [i_0] [i_0] [i_0] [i_0] [i_0])))));
    }
}
