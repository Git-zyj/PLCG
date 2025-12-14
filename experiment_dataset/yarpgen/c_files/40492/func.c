/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40492
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
    var_12 = ((/* implicit */unsigned int) var_6);
    var_13 = ((/* implicit */unsigned int) max((var_7), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)0)))))));
    var_14 = ((/* implicit */long long int) var_7);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (int i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) (~(7397051936142341719LL)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)14330)) ? (arr_2 [i_0] [i_1] [i_1]) : (((/* implicit */long long int) arr_1 [i_2] [i_1])))))));
                    arr_6 [i_0] [i_1] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_1)))) ? (((/* implicit */unsigned int) var_6)) : ((-(var_1)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_3 [i_1]) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_2)))) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) var_3))))) : (((((/* implicit */_Bool) (short)-4378)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2] [i_0] [i_0]))) : (max((((/* implicit */long long int) (unsigned short)32767)), (arr_2 [i_0] [i_1] [i_1]))))));
                    var_16 = ((/* implicit */long long int) var_0);
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            {
                                arr_11 [i_0] [18U] [i_1] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_3 [i_1])))), (((/* implicit */int) ((((/* implicit */int) arr_3 [i_1])) <= (((/* implicit */int) arr_3 [i_1])))))));
                                var_17 |= (~(((((/* implicit */_Bool) arr_0 [i_3] [i_3])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_10 [i_0]))))) : (((18446744073709551615ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))))));
                                var_18 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_2 [i_0] [i_1] [(signed char)18]) - (arr_2 [i_1] [i_2] [(short)8])))) ? (((/* implicit */unsigned long long int) ((int) var_7))) : (min((549755813887ULL), (((/* implicit */unsigned long long int) arr_2 [12U] [i_2] [(unsigned char)16]))))));
                            }
                        } 
                    } 
                }
                for (int i_5 = 0; i_5 < 21; i_5 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 2) 
                    {
                        for (long long int i_7 = 0; i_7 < 21; i_7 += 1) 
                        {
                            {
                                var_19 *= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_8 [i_0] [i_6] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_2 [i_5] [i_6] [i_6])))));
                                var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) var_10))) & ((-(((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)0))))))));
                            }
                        } 
                    } 
                    var_21 |= ((/* implicit */long long int) min(((!(((/* implicit */_Bool) (short)-29179)))), ((((!(((/* implicit */_Bool) var_10)))) && (arr_3 [(_Bool)1])))));
                    var_22 = ((/* implicit */unsigned short) var_6);
                }
                /* vectorizable */
                for (unsigned int i_8 = 0; i_8 < 21; i_8 += 2) 
                {
                    var_23 |= ((/* implicit */long long int) ((_Bool) 2141513138U));
                    var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_16 [i_0] [i_1] [i_8] [i_8])) ? (arr_16 [i_0] [i_0] [i_8] [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))));
                    arr_24 [i_1] [i_0] [8U] [i_1] = ((/* implicit */int) ((unsigned short) -343346611));
                }
                var_25 ^= ((/* implicit */signed char) var_6);
                var_26 *= ((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) (((_Bool)1) && (((/* implicit */_Bool) var_5)))))) < (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((3358763276946650501LL) - (3358763276946650477LL)))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-2))) <= (1055531162664960LL)))) : (((/* implicit */int) ((_Bool) (signed char)84)))))));
                var_27 = ((/* implicit */unsigned char) (((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)65))) : (3360862928U))) >> (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)-21))))));
            }
        } 
    } 
}
