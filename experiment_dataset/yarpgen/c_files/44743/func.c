/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44743
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
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4301965967692711749LL)) ? (arr_0 [i_0]) : (var_7)))) ? (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned char)48)))) : (706539850))));
                var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)45)) : (((/* implicit */int) (short)8543))))) ? (((((/* implicit */_Bool) var_7)) ? (var_5) : (((/* implicit */unsigned long long int) var_12)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_1 + 1] [i_1 + 1])))))) ? (min((((unsigned long long int) (signed char)96)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-102)) ? (arr_0 [i_1]) : (((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                var_20 &= ((/* implicit */signed char) (~(((((/* implicit */_Bool) max((((/* implicit */signed char) arr_2 [(signed char)6])), ((signed char)96)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-19777))) & (7650909585046333622ULL))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-3)))))))));
                var_21 = ((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)184)), ((((_Bool)1) ? (var_3) : (arr_0 [i_1 + 1])))));
                arr_6 [i_0] [i_1] [(short)2] = ((/* implicit */short) max((((unsigned long long int) min((((/* implicit */unsigned long long int) (_Bool)0)), (10431866772021365807ULL)))), (((/* implicit */unsigned long long int) var_2))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 9; i_2 += 3) 
    {
        for (unsigned long long int i_3 = 1; i_3 < 11; i_3 += 2) 
        {
            for (unsigned int i_4 = 0; i_4 < 12; i_4 += 2) 
            {
                {
                    var_22 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) min(((unsigned short)12047), (((/* implicit */unsigned short) arr_13 [i_2])))))))) ? (min((9960342455363340868ULL), (9384850109057260372ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) var_9))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)72))) : ((+((-9223372036854775807LL - 1LL)))))))));
                    arr_16 [i_2] [i_2] [i_2] [i_3] = ((/* implicit */signed char) ((short) min((((/* implicit */int) (_Bool)0)), (-1736582847))));
                    /* LoopSeq 2 */
                    for (int i_5 = 1; i_5 < 11; i_5 += 2) 
                    {
                        var_23 -= ((/* implicit */signed char) arr_14 [9LL] [i_5] [i_5] [i_5 - 1]);
                        var_24 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_11 [i_3] [i_3])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_14)))) >= (((/* implicit */int) var_10)))))) | (10431866772021365807ULL));
                        var_25 = ((/* implicit */_Bool) ((short) -2024768850342911476LL));
                        var_26 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)111))) ? (((((/* implicit */_Bool) ((short) arr_18 [(signed char)10] [i_3] [i_5 - 1] [i_5] [i_5] [i_4]))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)14))) * (19ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)56)) - (((/* implicit */int) arr_10 [i_2]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)1)))));
                    }
                    for (unsigned long long int i_6 = 2; i_6 < 11; i_6 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_7 = 1; i_7 < 9; i_7 += 2) 
                        {
                            arr_26 [i_2] [i_3] [i_4] [i_6] [i_7] = ((/* implicit */int) ((unsigned int) ((arr_19 [i_6] [i_3 - 1] [i_4] [i_6 - 1]) ^ (arr_19 [i_6] [i_3 - 1] [i_6] [i_6]))));
                            arr_27 [i_2] [i_3 + 1] [i_4] [i_6] [i_7] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-122)) ? (((/* implicit */int) (unsigned char)56)) : (((/* implicit */int) (unsigned char)70))))), ((-(((((/* implicit */_Bool) (short)5426)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (17042442450578506834ULL)))))));
                            var_27 = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) min((var_3), (((/* implicit */int) var_8))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (short)-32674))) - (arr_17 [i_7] [i_6] [i_3] [i_2]))) : (((/* implicit */unsigned int) var_3)))));
                        }
                        for (short i_8 = 1; i_8 < 8; i_8 += 3) 
                        {
                            var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) var_2))));
                            var_29 += ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_29 [i_3 - 1] [i_3 - 1] [i_4] [i_6] [i_8 + 2]))))));
                            var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-21242)) ? (((unsigned long long int) (unsigned short)0)) : (11131344517891895473ULL)));
                        }
                        var_31 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)24102)) ? (((/* implicit */unsigned int) (-2147483647 - 1))) : (arr_17 [i_2 + 1] [i_3 - 1] [1U] [i_6])))) ? (((/* implicit */int) ((_Bool) ((_Bool) var_1)))) : (max((((/* implicit */int) ((14035037318584646383ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (short)2283)))))), ((~(((/* implicit */int) (unsigned char)156)))))));
                    }
                    arr_30 [i_2] [i_2] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) min(((signed char)27), ((signed char)77)))), (var_14)))) ? (((((/* implicit */int) ((((/* implicit */_Bool) (short)-5426)) && (((/* implicit */_Bool) var_18))))) ^ (2124602077))) : (((/* implicit */int) ((signed char) 0ULL)))));
                }
            } 
        } 
    } 
}
