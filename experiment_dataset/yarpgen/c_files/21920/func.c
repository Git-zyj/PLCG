/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21920
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
    for (short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_13 -= ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))) + (2240950085U)))) : (var_8)));
                var_14 = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)35543))));
                arr_7 [i_0] = ((/* implicit */short) min((((((((/* implicit */_Bool) var_4)) ? (var_7) : (((/* implicit */int) arr_0 [i_0])))) >> (((((/* implicit */int) (unsigned char)255)) - (248))))), ((-(((((/* implicit */int) var_4)) ^ (((/* implicit */int) var_3))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 2) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 2) 
        {
            {
                var_15 = ((/* implicit */int) ((((/* implicit */_Bool) (+(arr_9 [11])))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2))))) : (((var_8) + (((/* implicit */unsigned long long int) var_1))))));
                /* LoopSeq 4 */
                for (signed char i_4 = 1; i_4 < 13; i_4 += 2) 
                {
                    var_16 ^= ((/* implicit */unsigned char) var_0);
                    arr_17 [i_4] [i_4] [i_4] [(_Bool)1] = max((((((/* implicit */_Bool) (signed char)-82)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-82))))), (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)19))))) ? (((((/* implicit */_Bool) var_11)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)177)) * (((/* implicit */int) arr_8 [i_2]))))))));
                    arr_18 [i_2] [i_4] [i_4] [i_4] = ((/* implicit */long long int) max((var_4), (((/* implicit */short) (signed char)81))));
                }
                for (signed char i_5 = 1; i_5 < 14; i_5 += 3) 
                {
                    var_17 = ((/* implicit */unsigned short) var_4);
                    arr_21 [i_5] [i_5] [i_5] [5] = ((/* implicit */short) var_10);
                    var_18 = ((/* implicit */unsigned short) var_9);
                    var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_12)))))));
                    var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)0))))) : (min((var_8), (((/* implicit */unsigned long long int) arr_15 [i_2] [i_2] [i_2] [i_2])))))))));
                }
                /* vectorizable */
                for (unsigned short i_6 = 0; i_6 < 15; i_6 += 1) 
                {
                    /* LoopSeq 3 */
                    for (short i_7 = 0; i_7 < 15; i_7 += 1) /* same iter space */
                    {
                        arr_26 [i_2] [i_2] [i_2] [(short)3] [i_6] [i_7] = ((/* implicit */int) var_1);
                        var_21 = ((/* implicit */int) (signed char)81);
                    }
                    for (short i_8 = 0; i_8 < 15; i_8 += 1) /* same iter space */
                    {
                        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) var_2)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) : (((((/* implicit */_Bool) var_4)) ? (var_8) : (((/* implicit */unsigned long long int) var_12))))));
                        var_23 = ((/* implicit */unsigned int) 18446744073709551599ULL);
                    }
                    for (short i_9 = 0; i_9 < 15; i_9 += 1) /* same iter space */
                    {
                        var_24 -= ((/* implicit */unsigned char) (+(((/* implicit */int) arr_32 [i_9] [i_6] [i_6] [i_3] [14]))));
                        var_25 = ((/* implicit */_Bool) min((var_25), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-90)) ? (((/* implicit */int) (short)-16032)) : (((/* implicit */int) arr_13 [i_2]))))) || ((!(((/* implicit */_Bool) var_4))))))));
                        var_26 = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-82)) && ((_Bool)1)));
                        var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)0)) ? ((~(var_7))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)107)) : (((/* implicit */int) var_10))))));
                        var_28 |= ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned short)0)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)123))))) / (((/* implicit */unsigned long long int) (-(25U))))));
                    }
                    var_29 ^= ((/* implicit */unsigned short) (-((-(12U)))));
                    arr_33 [i_2] [i_3] [i_6] [(unsigned char)11] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)0))));
                    var_30 = ((/* implicit */short) var_2);
                    var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (short)-23139)) : (((/* implicit */int) (signed char)-90))));
                }
                for (unsigned char i_10 = 0; i_10 < 15; i_10 += 1) 
                {
                    var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)15937))) % ((-(4294967283U)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967283U)) ? (2631142682891998770ULL) : (((/* implicit */unsigned long long int) 9223372036854775807LL))))))))));
                    /* LoopSeq 1 */
                    for (signed char i_11 = 2; i_11 < 13; i_11 += 2) 
                    {
                        var_33 = (+(max((var_8), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) > (((/* implicit */int) var_3))))))));
                        var_34 = ((/* implicit */unsigned int) 2836328005646914042LL);
                    }
                    var_35 = ((/* implicit */_Bool) max((var_35), (((/* implicit */_Bool) arr_38 [i_10] [i_3] [(unsigned short)8]))));
                }
                var_36 *= ((/* implicit */_Bool) var_0);
                arr_40 [i_2] = ((/* implicit */unsigned char) ((((((unsigned long long int) var_9)) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) + (((/* implicit */unsigned long long int) max((((/* implicit */int) var_11)), ((-(var_7))))))));
                var_37 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)89))))) ? (((/* implicit */long long int) ((((/* implicit */int) (signed char)-90)) % (max((((/* implicit */int) (signed char)(-127 - 1))), (-1)))))) : (var_12)));
            }
        } 
    } 
}
