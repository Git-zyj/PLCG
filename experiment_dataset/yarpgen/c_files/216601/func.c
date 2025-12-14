/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216601
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
    for (int i_0 = 3; i_0 < 15; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 15; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        {
                            arr_9 [i_3] [i_2 + 1] [i_2 + 1] [i_3] [(signed char)0] [i_3] = ((/* implicit */_Bool) ((long long int) 1073741823));
                            arr_10 [i_0] [13] [(unsigned short)5] [i_0] = ((/* implicit */_Bool) min((((((/* implicit */long long int) ((((/* implicit */int) var_1)) & (((/* implicit */int) var_5))))) & (arr_8 [i_0] [i_0] [i_2 + 1] [(signed char)4]))), (((/* implicit */long long int) ((((((/* implicit */long long int) ((/* implicit */int) var_0))) / (arr_1 [i_0]))) >= (arr_3 [i_2 + 3] [i_0 - 1] [i_1 + 1]))))));
                            var_16 = ((/* implicit */short) min((((/* implicit */unsigned int) (_Bool)0)), (min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1073741828))))), (((((/* implicit */_Bool) -1073741824)) ? (((/* implicit */unsigned int) 1073741841)) : (1790924257U)))))));
                            arr_11 [i_0 + 2] [i_0] [5U] [(short)15] [3] [i_3] = ((/* implicit */unsigned char) var_12);
                            arr_12 [i_0] [i_0] [i_0 + 1] [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_2))) - (arr_1 [i_0])))) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 279223176896970752ULL)) && (((/* implicit */_Bool) var_14)))))))) >> (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0 + 3] [i_2 + 2])) && (((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) arr_5 [i_0] [i_0 - 2])))))))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned int i_4 = 2; i_4 < 17; i_4 += 3) /* same iter space */
                {
                    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0] [i_4])) ? (arr_8 [i_0] [i_1] [(signed char)3] [i_0]) : (((/* implicit */long long int) (((+(arr_14 [i_4] [i_1] [i_1 + 1]))) - (var_3))))));
                    arr_16 [i_1] [i_1] [i_1] |= ((((arr_7 [i_0] [i_1] [i_4] [i_1]) ^ (((/* implicit */unsigned int) min((((/* implicit */int) arr_15 [i_4] [(signed char)14] [i_4] [12LL])), (-1073741840)))))) != (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-17)) % (((/* implicit */int) var_2))))));
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 18; i_5 += 4) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 18; i_6 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) / (((/* implicit */int) arr_13 [(signed char)14] [(unsigned char)14] [i_4] [i_4]))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) min((var_13), (((/* implicit */signed char) (_Bool)1)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-110))) : (max((((arr_7 [i_0] [i_5] [i_0 - 2] [i_5]) + (((/* implicit */unsigned int) 1073741828)))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)29)))))))));
                                var_19 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) var_13)), (var_5))))) % (((((/* implicit */_Bool) -1073741842)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0 + 1])))))));
                                var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_1 - 1] [(_Bool)1] [i_5] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) min((((((/* implicit */int) (unsigned short)0)) > (((/* implicit */int) (_Bool)1)))), (arr_17 [i_0] [i_0] [i_0] [7U]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 279223176896970744ULL)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) var_15))))) ? (((((/* implicit */_Bool) -1073741837)) ? (7997128165296533496LL) : (((/* implicit */long long int) ((/* implicit */int) var_1))))) : ((+(arr_8 [i_1] [i_1] [i_5] [(unsigned char)17]))))))))));
                                var_21 |= ((((/* implicit */_Bool) ((short) min((((/* implicit */unsigned long long int) (unsigned short)16606)), (arr_18 [i_0] [i_0] [i_0] [i_0]))))) ? (((/* implicit */int) (short)-32630)) : (((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) arr_0 [i_4 - 1]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 18; i_7 += 4) 
                    {
                        for (signed char i_8 = 0; i_8 < 18; i_8 += 4) 
                        {
                            {
                                arr_27 [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)48930)) ? (arr_25 [i_0 + 1] [i_4] [(signed char)14] [i_1] [i_1] [i_8] [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)240)))))) ? (((((/* implicit */_Bool) var_15)) ? (arr_25 [i_0 - 1] [i_4] [i_7] [i_8] [i_8] [(short)1] [(short)9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_4 - 1] [i_4 + 1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_25 [i_0 + 2] [i_4] [i_0 + 2] [i_1] [i_1] [i_8] [i_8]) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))))));
                                arr_28 [i_4] [i_1] [(unsigned short)13] [i_1] [16] [i_1] [i_1 + 1] = ((/* implicit */unsigned char) (signed char)-20);
                                var_22 -= ((/* implicit */long long int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) -1073741831)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_7] [i_7]))) : (arr_19 [i_0 + 3] [i_1] [i_4] [i_7])))) ? ((((_Bool)0) ? (arr_14 [i_7] [(unsigned short)0] [i_4 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_15))))) : (((((/* implicit */_Bool) 1073741805)) ? (4294967287U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
                                arr_29 [i_4] = ((/* implicit */_Bool) (((+(((unsigned int) (signed char)103)))) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)3)))));
                                arr_30 [i_0 + 1] [i_1] [i_4] [i_0 + 1] = ((/* implicit */int) (unsigned short)9951);
                            }
                        } 
                    } 
                }
                for (unsigned int i_9 = 2; i_9 < 17; i_9 += 3) /* same iter space */
                {
                    var_23 -= ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)235))))), (min((((/* implicit */unsigned short) (signed char)112)), ((unsigned short)28929)))))) ? (((long long int) var_12)) : (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */int) (unsigned short)16304)) >> (((var_10) - (305939706053333789LL))))) >= ((-(((/* implicit */int) var_9))))))))));
                    var_24 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */long long int) ((/* implicit */int) var_8))) + (min((var_14), (((/* implicit */long long int) var_8)))))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) (+(((/* implicit */int) var_15))))) + (max((2560699896U), (((/* implicit */unsigned int) (signed char)49)))))))));
                    var_25 = ((/* implicit */signed char) min((((/* implicit */long long int) ((unsigned short) max((arr_8 [i_0] [i_1] [i_9] [i_9]), (((/* implicit */long long int) var_1)))))), (arr_3 [i_0] [i_1 - 1] [9LL])));
                }
            }
        } 
    } 
    var_26 ^= ((/* implicit */int) (~(((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-13515)) ? (((/* implicit */int) (unsigned short)4095)) : (((/* implicit */int) var_13))))) : (var_7)))));
}
