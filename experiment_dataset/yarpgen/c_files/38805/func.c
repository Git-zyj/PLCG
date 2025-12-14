/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38805
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
    for (unsigned char i_0 = 2; i_0 < 7; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            {
                var_10 += ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)41))) + (2U))) / (((((/* implicit */_Bool) max((arr_4 [i_0]), (((/* implicit */short) (unsigned char)239))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 107813101U)) ? (((/* implicit */int) (unsigned char)52)) : (((/* implicit */int) (signed char)89))))) : (2U)))));
                /* LoopSeq 2 */
                for (unsigned char i_2 = 4; i_2 < 8; i_2 += 3) 
                {
                    var_11 -= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (unsigned char)204)) ? (7690107969645244996ULL) : (((/* implicit */unsigned long long int) 1788852564U)))), (((/* implicit */unsigned long long int) (unsigned char)41))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            {
                                arr_13 [i_0] [i_0] |= ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_0 [i_1 + 1] [i_1])) ? ((-(((/* implicit */int) (unsigned char)116)))) : (((/* implicit */int) (unsigned char)215))))));
                                var_12 *= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) max(((unsigned char)0), ((unsigned char)16)))) ? (((/* implicit */long long int) 2748366153U)) : (((((/* implicit */long long int) 2690128310U)) - (arr_12 [i_0] [i_0] [i_4]))))) - (((/* implicit */long long int) (+(4294967295U))))));
                            }
                        } 
                    } 
                }
                for (unsigned char i_5 = 0; i_5 < 10; i_5 += 4) 
                {
                    var_13 *= ((/* implicit */unsigned int) (short)-16218);
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 0; i_6 < 10; i_6 += 2) 
                    {
                        for (unsigned int i_7 = 1; i_7 < 7; i_7 += 4) 
                        {
                            {
                                arr_22 [8U] [i_1] [i_1 + 1] = ((/* implicit */unsigned int) (-(((((/* implicit */int) arr_14 [i_0 + 3])) + (((/* implicit */int) arr_5 [i_1 - 1] [i_1 - 1]))))));
                                var_14 += ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)136)) + ((+(((/* implicit */int) (unsigned char)16))))));
                                var_15 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)119)) ? (7256610361147574411LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)250)))));
                            }
                        } 
                    } 
                    var_16 += ((((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)52))) * (arr_6 [i_0] [i_1]))) & (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) && (((/* implicit */_Bool) arr_2 [i_0 - 2] [i_1 + 1]))))))))) ? (((3352651995U) * (((/* implicit */unsigned int) ((/* implicit */int) ((-7256610361147574412LL) >= (((/* implicit */long long int) 867261761U)))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((max((((/* implicit */unsigned int) arr_2 [i_0] [i_0])), (arr_9 [(unsigned char)2] [(unsigned char)0]))) > (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) (unsigned char)253)), ((short)8900))))))))));
                    var_17 &= ((/* implicit */short) (+(((((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_0]))))) ? (max((((/* implicit */unsigned int) arr_2 [i_1] [i_1])), (arr_1 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_5] [i_5] [i_5] [i_5] [i_5])) || (((/* implicit */_Bool) 7690107969645244996ULL))))))))));
                }
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned char) (-(((((((/* implicit */unsigned int) ((/* implicit */int) var_9))) - (1745525795U))) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)41)))))))));
    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) min((((/* implicit */int) var_9)), ((-(((/* implicit */int) var_5))))))) + (((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) - (var_8))))))));
}
