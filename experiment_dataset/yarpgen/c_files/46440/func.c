/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46440
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
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned int i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65535)) / (((/* implicit */int) var_3))))) ? (((/* implicit */long long int) ((((/* implicit */int) (short)30384)) - (((/* implicit */int) (unsigned short)32768))))) : (((var_1) + (((/* implicit */long long int) 2047))))))) ? ((~(((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [(short)16])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (4294967295U))))) : (((/* implicit */unsigned int) ((int) arr_3 [i_1 - 1] [i_1 - 1] [i_0]))))))));
                                var_17 *= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned char)161)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) == (((/* implicit */int) (_Bool)1))))), (838658627530758957ULL)));
                                arr_13 [i_1] [i_3] [i_2] [i_3] [i_4] = ((/* implicit */unsigned int) (short)(-32767 - 1));
                                var_18 = ((/* implicit */int) var_8);
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */long long int) var_0);
                }
                /* vectorizable */
                for (unsigned char i_5 = 0; i_5 < 21; i_5 += 3) 
                {
                    arr_17 [i_0] [i_1] [i_0] &= ((/* implicit */unsigned short) ((((/* implicit */int) arr_9 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1])) >> (((((/* implicit */int) arr_9 [i_1 - 1] [i_1 + 1] [i_1] [i_1 + 1])) - (10949)))));
                    arr_18 [i_0] [i_1] [i_0] = ((((/* implicit */_Bool) (unsigned short)19538)) || (((/* implicit */_Bool) arr_11 [i_1 + 1] [i_1] [i_1 - 1] [i_1 + 1])));
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_8 [i_1] [i_1] [i_1 + 1])) >= (((/* implicit */int) arr_8 [i_1 + 1] [i_1] [i_1 + 1]))));
                    var_21 = ((/* implicit */unsigned short) arr_7 [i_0] [i_1] [i_5]);
                }
                for (unsigned char i_6 = 0; i_6 < 21; i_6 += 2) 
                {
                    arr_22 [i_0] [i_1] = ((/* implicit */short) ((_Bool) max((((/* implicit */unsigned long long int) var_13)), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)59298))) & (arr_14 [i_1] [i_1] [i_6] [i_6]))))));
                    var_22 = ((/* implicit */unsigned int) (unsigned short)65527);
                }
                /* vectorizable */
                for (signed char i_7 = 1; i_7 < 20; i_7 += 3) 
                {
                    /* LoopNest 2 */
                    for (signed char i_8 = 0; i_8 < 21; i_8 += 3) 
                    {
                        for (int i_9 = 2; i_9 < 18; i_9 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_29 [i_9] [i_9] [i_9 - 2] [i_9 + 1] [i_7]))));
                                var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_9 + 2] [i_1 + 1])) ? (((/* implicit */int) arr_0 [i_9 - 2] [i_1 - 1])) : (((/* implicit */int) arr_11 [i_9] [i_0] [i_0] [i_0])))))));
                                var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_8] [i_9])) ? (1485821010U) : (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)114)))))));
                            }
                        } 
                    } 
                    var_26 *= (-(17608085446178792658ULL));
                    var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)32738)) ? (((/* implicit */unsigned long long int) 5652113843364185068LL)) : (16396211798622686861ULL)));
                    var_28 = ((/* implicit */signed char) (-(-5091655630400749475LL)));
                }
                arr_30 [i_1] = ((/* implicit */short) ((((/* implicit */int) ((((((/* implicit */_Bool) 1004221238U)) ? (((/* implicit */int) (unsigned char)46)) : (((/* implicit */int) (unsigned short)37581)))) < (((/* implicit */int) arr_8 [i_0] [i_1 + 1] [i_0]))))) ^ (2147483620)));
            }
        } 
    } 
    var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) ((((((/* implicit */int) var_10)) != (((/* implicit */int) var_7)))) ? (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) < (4294967285U))))) / (var_2))) : (((/* implicit */long long int) var_0)))))));
}
