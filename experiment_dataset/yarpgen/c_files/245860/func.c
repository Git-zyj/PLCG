/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245860
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
    var_20 *= ((/* implicit */unsigned char) (((-(((/* implicit */int) var_1)))) + (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)60)) : (var_11)))) ? (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))) : (var_11)))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 22; i_1 += 1) 
        {
            for (long long int i_2 = 4; i_2 < 20; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (signed char i_3 = 3; i_3 < 20; i_3 += 1) 
                    {
                        var_21 = ((/* implicit */unsigned char) (((-(max((var_2), (var_11))))) | (((/* implicit */int) (unsigned char)60))));
                        var_22 = ((/* implicit */unsigned short) (+(-1602623450)));
                        var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) | (arr_3 [i_0] [i_2])))) ? (((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1)))) : (((/* implicit */int) ((unsigned char) (unsigned char)196)))))))))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 23; i_4 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (long long int i_5 = 1; i_5 < 19; i_5 += 3) 
                        {
                            var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-13380))))) ? (((/* implicit */int) ((short) 3165490595789969257ULL))) : (((/* implicit */int) (_Bool)1))));
                            var_25 = ((/* implicit */unsigned long long int) (-(1932484736)));
                            var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65535)) | (((/* implicit */int) (short)13749))));
                            var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_1] [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_1 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)109))) : (var_5)));
                        }
                        for (unsigned int i_6 = 3; i_6 < 19; i_6 += 4) /* same iter space */
                        {
                            var_28 = ((((/* implicit */int) (short)4032)) | (-671091833));
                            var_29 *= ((/* implicit */unsigned long long int) arr_9 [(signed char)21] [i_1] [i_0]);
                            arr_18 [i_0] [i_0] [i_0] [i_2 - 4] [i_2 - 4] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((var_16) | (var_16)))) | (arr_3 [i_1 - 1] [i_1])));
                        }
                        for (unsigned int i_7 = 3; i_7 < 19; i_7 += 4) /* same iter space */
                        {
                            arr_21 [i_0 + 2] [i_1 + 1] [i_2] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_9 [i_1] [9LL] [i_2])) | (((/* implicit */int) var_19))));
                            arr_22 [i_7 + 2] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned short) 2959583272U);
                            var_30 = ((((/* implicit */_Bool) arr_16 [i_2] [i_2] [i_1] [i_1 - 1] [i_1])) ? (((/* implicit */int) arr_1 [i_2 - 2] [i_2])) : (((/* implicit */int) arr_1 [i_2 - 3] [i_4])));
                        }
                        var_31 = ((/* implicit */unsigned short) (_Bool)1);
                        /* LoopSeq 2 */
                        for (int i_8 = 0; i_8 < 23; i_8 += 1) 
                        {
                            var_32 = ((/* implicit */int) var_14);
                            var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) (unsigned short)65527)) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_1 [i_8] [i_0])) : (((/* implicit */int) arr_26 [i_2] [i_2] [i_2] [i_4] [i_2]))))));
                            arr_27 [i_8] [i_0] [i_2 + 3] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_7 [i_0] [i_0] [i_0])) | (arr_4 [i_0] [i_0 + 1] [i_0])));
                        }
                        for (int i_9 = 1; i_9 < 19; i_9 += 3) 
                        {
                            var_34 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_17 [i_2 - 2])) | (((/* implicit */int) (_Bool)1))));
                            var_35 *= ((/* implicit */unsigned long long int) var_10);
                            var_36 &= ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_4]))) | (5728568746103325680LL)))) ? (((/* implicit */int) arr_10 [i_9] [i_9 + 1] [i_9 + 1])) : (var_11));
                        }
                        var_37 = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */int) var_19)) | (((/* implicit */int) arr_26 [(unsigned short)22] [i_1] [i_0] [i_4] [i_4]))))) | (((((/* implicit */_Bool) (unsigned short)1)) ? (4294967281U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                        var_38 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)214)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7745))) : (3690821681262736963ULL)))) ? (4406752691582587406ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)511)) ? (20519140) : (1736394458)))));
                    }
                    var_39 -= ((/* implicit */unsigned char) (+(910372144U)));
                    var_40 = ((/* implicit */signed char) ((((/* implicit */_Bool) 2842537740U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
    } 
}
