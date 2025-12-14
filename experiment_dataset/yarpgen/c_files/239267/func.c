/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239267
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                arr_4 [6LL] [i_1] |= ((/* implicit */short) (-(((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1] [i_1] [i_0]))))) & (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])))))))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 2; i_2 < 16; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (max((((/* implicit */unsigned long long int) arr_6 [(unsigned short)11] [i_2] [i_4])), (var_7))) : (((/* implicit */unsigned long long int) ((long long int) min(((unsigned short)34906), (((/* implicit */unsigned short) (short)-4096))))))));
                                arr_13 [i_0] [i_0] [i_2 - 2] [i_0] [i_3] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max(((unsigned char)89), (((/* implicit */unsigned char) (signed char)69))))) ? (min((arr_12 [i_4] [i_3]), (((/* implicit */long long int) var_10)))) : (((/* implicit */long long int) var_16))))) || (((/* implicit */_Bool) min((arr_0 [i_0] [i_2]), (arr_8 [i_2 - 1] [i_1] [i_2 - 1]))))));
                                var_18 *= ((/* implicit */signed char) ((unsigned char) (+(((/* implicit */int) arr_5 [i_3] [i_3])))));
                                var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) (signed char)78))));
                            }
                        } 
                    } 
                } 
                var_20 = ((/* implicit */signed char) ((min(((+(((/* implicit */int) arr_5 [i_1] [i_0])))), ((+(((/* implicit */int) (signed char)126)))))) * (((/* implicit */int) var_15))));
                arr_14 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) max((((/* implicit */unsigned short) arr_10 [i_0] [i_1] [i_1] [i_1])), (var_14))))))) ? (arr_12 [i_0] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_11)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_5 = 0; i_5 < 13; i_5 += 1) 
    {
        for (signed char i_6 = 0; i_6 < 13; i_6 += 3) 
        {
            {
                arr_21 [i_6] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((unsigned int) ((var_16) + (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_6] [i_5] [i_5] [i_5] [i_5] [i_5]))))))) / (((unsigned long long int) max((var_0), (((/* implicit */unsigned short) (signed char)105)))))));
                var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) ((signed char) arr_10 [i_5] [i_5] [i_6] [i_6]))), (var_8)))))))));
                /* LoopSeq 3 */
                for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 4) 
                {
                    arr_24 [i_7] [i_6] [i_7] = ((/* implicit */_Bool) arr_5 [i_6] [(short)10]);
                    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_8) - (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7])))))) ? (((((/* implicit */_Bool) arr_3 [i_6] [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_6] [i_6]))) : (var_16))) : (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_5 [i_6] [(short)2])) : (((/* implicit */int) var_0)))))))));
                    var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_7] [i_6])) * (((/* implicit */int) (_Bool)0))))) ? ((~(((/* implicit */int) arr_10 [i_5] [i_5] [i_6] [i_7])))) : (((/* implicit */int) ((unsigned short) (signed char)105))))), (((/* implicit */int) ((short) (+(((/* implicit */int) (signed char)81)))))))))));
                }
                for (unsigned long long int i_8 = 3; i_8 < 11; i_8 += 2) 
                {
                    arr_29 [i_6] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_14)), ((-(var_6)))));
                    var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) ((signed char) (-(var_16))))) : (((/* implicit */int) arr_2 [i_8 - 1] [i_8 + 1] [i_8 - 1])))))));
                    var_25 |= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-87)) ? (min((var_8), (((/* implicit */long long int) var_2)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_8] [i_5])) ? (((/* implicit */int) arr_18 [6LL])) : (((/* implicit */int) arr_20 [(short)2] [(short)2])))))))));
                }
                for (unsigned long long int i_9 = 0; i_9 < 13; i_9 += 1) 
                {
                    /* LoopNest 2 */
                    for (signed char i_10 = 1; i_10 < 11; i_10 += 1) 
                    {
                        for (long long int i_11 = 0; i_11 < 13; i_11 += 4) 
                        {
                            {
                                var_26 += ((/* implicit */unsigned char) arr_35 [i_5] [i_6] [10ULL] [i_5] [i_5] [(signed char)10]);
                                var_27 = ((/* implicit */unsigned int) var_6);
                                arr_37 [i_6] [i_9] [i_9] [i_6] [i_6] = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)82)) ? (((/* implicit */int) (signed char)-46)) : (((/* implicit */int) (signed char)-82)))))))) & (((/* implicit */int) ((short) min((var_14), (((/* implicit */unsigned short) (short)-1661))))))));
                                var_28 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_9 [(signed char)1] [i_11] [(signed char)1] [i_11] [i_11] [i_11])) ? (((/* implicit */int) arr_2 [i_6] [i_6] [i_11])) : (((/* implicit */int) var_12)))), (max((((/* implicit */int) arr_25 [i_10 + 2] [i_10 + 1] [i_9] [i_9])), (((((/* implicit */_Bool) (unsigned short)30262)) ? (((/* implicit */int) arr_35 [i_5] [i_5] [i_5] [i_10 + 1] [i_11] [i_10 + 1])) : (((/* implicit */int) (_Bool)1))))))));
                            }
                        } 
                    } 
                    var_29 &= ((/* implicit */unsigned int) max((((/* implicit */int) var_15)), (((var_15) ? (((/* implicit */int) arr_27 [(short)8])) : (((/* implicit */int) (unsigned char)229))))));
                    var_30 = ((/* implicit */unsigned int) (~((((-(((/* implicit */int) var_5)))) - (((/* implicit */int) arr_28 [i_9]))))));
                }
                var_31 = ((/* implicit */signed char) var_0);
            }
        } 
    } 
    var_32 = ((/* implicit */unsigned short) min(((-(((/* implicit */int) (signed char)105)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
}
