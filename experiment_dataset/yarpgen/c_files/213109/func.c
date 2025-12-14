/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213109
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
    var_19 = ((/* implicit */int) min((min((((/* implicit */unsigned long long int) var_15)), (var_13))), (((/* implicit */unsigned long long int) min((var_17), (((/* implicit */long long int) var_7)))))));
    var_20 = ((/* implicit */short) var_11);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) (((~(arr_12 [i_4] [i_2] [i_2] [i_0] [i_0]))) / (((/* implicit */long long int) 2001983415)))))));
                                arr_13 [i_0] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) (short)-8740))));
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) max((((/* implicit */unsigned int) (+((+(((/* implicit */int) arr_5 [i_1] [i_2] [i_2]))))))), (arr_3 [i_3])));
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_1] [i_0] = (~((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_1] [i_0] [i_2]))))))));
                    arr_16 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)56)) ? (9029146035377384535LL) : (((/* implicit */long long int) 1212830259))))) - (min((18446744073709551605ULL), (((/* implicit */unsigned long long int) var_14))))))) ? (min((max((((/* implicit */long long int) (_Bool)1)), (-3738261277725226853LL))), (((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_2]))) ^ (-8856672112349935980LL))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) var_18))))) ? (arr_6 [i_0] [i_0] [i_1] [i_1] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)238)))))));
                    var_22 *= ((/* implicit */_Bool) 3953226858U);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (signed char i_6 = 0; i_6 < 14; i_6 += 4) /* same iter space */
                        {
                            var_23 = ((/* implicit */long long int) min((var_23), (max((-3738261277725226853LL), (((/* implicit */long long int) var_15))))));
                            arr_22 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((-6LL) + (2LL)))) ? (((/* implicit */int) max((((/* implicit */short) ((((/* implicit */_Bool) (short)18804)) || ((_Bool)1)))), ((short)-23780)))) : (min(((~(((/* implicit */int) (unsigned char)18)))), (((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */int) (unsigned char)232)) : (((/* implicit */int) (unsigned char)247))))))));
                            arr_23 [i_0] [i_0] [i_2] [i_0] [i_5] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (5191359747270957349ULL)))) ? (arr_6 [i_0] [i_1] [i_0] [i_5] [i_6]) : (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_18)))))));
                            arr_24 [i_0] [i_0] [i_1] [i_2] [i_5] [i_6] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) (unsigned char)8)))))))), (((((/* implicit */_Bool) max(((unsigned char)18), (((/* implicit */unsigned char) var_18))))) ? (((/* implicit */unsigned long long int) (~(var_17)))) : (14238327852064432858ULL)))));
                        }
                        for (signed char i_7 = 0; i_7 < 14; i_7 += 4) /* same iter space */
                        {
                            arr_27 [i_7] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */short) (-(min((((/* implicit */int) (_Bool)1)), (((int) 1344485561U))))));
                            arr_28 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) 14803011798542927604ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) ((short) (-9223372036854775807LL - 1LL)))) ? (((/* implicit */unsigned long long int) -7517821017439671983LL)) : (((((/* implicit */_Bool) 3687074857769747020LL)) ? (16211636092206822138ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)5)))))))));
                            var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) (~(4294967265U))))));
                            arr_29 [i_0] [i_5] [i_0] = ((((/* implicit */_Bool) (-((-(arr_4 [i_1] [i_2] [i_0] [i_7])))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (unsigned short)49152))))) ? ((-(1U))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)18802))))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-1))));
                        }
                        /* vectorizable */
                        for (signed char i_8 = 0; i_8 < 14; i_8 += 4) /* same iter space */
                        {
                            arr_33 [i_0] [i_8] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_3 [i_0]) : (arr_3 [i_5])));
                            var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_26 [i_0] [i_0] [i_0] [i_0])))))));
                        }
                        arr_34 [i_0] [i_0] [i_1] [i_2] [i_0] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)5)) ? (max((((/* implicit */unsigned long long int) var_4)), (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) 2287726545U))))) ? ((-9223372036854775807LL - 1LL)) : ((~(((long long int) var_4))))));
                        arr_35 [i_0] [i_1] [i_0] [i_5] [i_1] = ((/* implicit */int) arr_10 [i_5] [i_0] [i_2] [i_1] [i_0]);
                        var_26 = ((/* implicit */short) ((int) max((((/* implicit */long long int) (!((_Bool)0)))), (((((/* implicit */_Bool) var_9)) ? (1879416872493883332LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                    }
                }
            } 
        } 
    } 
}
