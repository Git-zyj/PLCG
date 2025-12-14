/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19302
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
    var_10 = ((/* implicit */unsigned short) ((long long int) var_1));
    var_11 = ((/* implicit */signed char) var_3);
    var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) 1431397704)))) ? (((((/* implicit */unsigned int) (-2147483647 - 1))) + (3251030879U))) : (var_4)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) : ((-((+(67108863U))))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 24; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 23; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */int) max((var_13), ((~(((/* implicit */int) (unsigned char)2))))));
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        arr_14 [i_3] [i_2] [i_2] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0 - 1] [i_2 + 2])) ? (min((arr_4 [i_1] [i_2] [i_1]), (((/* implicit */int) (unsigned char)0)))) : (((((/* implicit */_Bool) arr_13 [i_2])) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) arr_0 [i_0]))))))), (((((/* implicit */_Bool) ((((/* implicit */int) (short)-15004)) + (var_0)))) ? (min((arr_9 [i_0] [i_0]), (var_3))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [(unsigned short)12] [(unsigned char)1] [i_3])) + (((/* implicit */int) arr_6 [i_0] [i_0])))))))));
                        arr_15 [i_3] [i_3] [i_3] [i_2] = ((/* implicit */unsigned char) 1431397704);
                        /* LoopSeq 1 */
                        for (signed char i_4 = 0; i_4 < 25; i_4 += 3) 
                        {
                            var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(arr_11 [i_0 + 1])))) ? (((((/* implicit */_Bool) (~(1043936416U)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)186))) : (((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2 + 2] [i_2] [i_4])) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_2] [i_3] [i_2] [i_0] [11U] [i_2]))))))) : (((/* implicit */long long int) ((unsigned int) ((((/* implicit */unsigned long long int) arr_12 [i_0] [i_1] [(short)9] [(short)9])) > (arr_13 [i_2])))))));
                            var_15 = ((/* implicit */unsigned long long int) arr_9 [i_3] [i_4]);
                            var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (((((/* implicit */_Bool) (unsigned char)69)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_5)))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) min((arr_2 [i_2]), (((/* implicit */signed char) var_1))))) : (((((/* implicit */_Bool) arr_9 [i_4] [(short)13])) ? (((/* implicit */int) (unsigned short)37121)) : (((/* implicit */int) var_2)))))) : (max((arr_12 [i_2 + 1] [i_1] [i_0 + 1] [i_0 + 1]), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)53598))))))))))));
                        }
                    }
                    for (signed char i_5 = 1; i_5 < 24; i_5 += 4) /* same iter space */
                    {
                        var_17 *= ((/* implicit */unsigned int) (unsigned short)53796);
                        arr_22 [i_0] [i_1] [i_2] [i_5] [(unsigned char)16] [i_5 + 1] &= ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_3)))) ? (((/* implicit */int) arr_5 [i_2])) : (((/* implicit */int) var_2)))), (((/* implicit */int) (unsigned char)115))));
                        arr_23 [i_0] [i_2] [i_5] [i_5] [i_0] [i_0 + 1] = ((/* implicit */int) ((arr_6 [i_1] [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0 - 1] [i_2] [i_2] [i_5 - 1] [i_0]))) : (var_5)));
                    }
                    for (signed char i_6 = 1; i_6 < 24; i_6 += 4) /* same iter space */
                    {
                        var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) var_1))));
                        arr_28 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned int) (unsigned short)65535);
                    }
                    /* LoopSeq 4 */
                    for (int i_7 = 3; i_7 < 22; i_7 += 1) 
                    {
                        arr_31 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */int) (+(14990191049087033050ULL)));
                        arr_32 [i_2] [i_7] [i_7] = ((/* implicit */unsigned char) ((signed char) (+((-(((/* implicit */int) (short)-5452)))))));
                        var_19 += ((/* implicit */unsigned char) 9680613U);
                    }
                    for (unsigned short i_8 = 0; i_8 < 25; i_8 += 4) /* same iter space */
                    {
                        var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) (unsigned char)154))));
                        var_21 = ((/* implicit */unsigned int) -8483871829221254588LL);
                    }
                    for (unsigned short i_9 = 0; i_9 < 25; i_9 += 4) /* same iter space */
                    {
                        arr_39 [i_0] [i_2] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)115)), (3993242665U)))) && (((/* implicit */_Bool) var_4))));
                        arr_40 [i_0] [i_2] [i_2] [i_0] [i_2] [i_0] = ((/* implicit */short) (((-(((((/* implicit */int) var_9)) - (((/* implicit */int) (unsigned char)132)))))) >> (((((((/* implicit */_Bool) arr_37 [i_0 - 1] [i_1] [i_2 + 2])) ? (min((564338391U), (var_3))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_21 [i_0 + 1] [i_1] [i_2]))))))) - (564338370U)))));
                        arr_41 [i_2] [i_2] = ((/* implicit */int) ((unsigned short) ((signed char) max((var_3), (((/* implicit */unsigned int) (signed char)-83))))));
                    }
                    for (unsigned short i_10 = 2; i_10 < 23; i_10 += 1) 
                    {
                        arr_45 [17U] [i_2] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)25794)) ? (-850184165) : (((/* implicit */int) (unsigned char)177))));
                        arr_46 [i_2] [i_2 - 1] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) (signed char)-70)))) ? (((/* implicit */int) arr_1 [20LL] [i_1])) : (((/* implicit */int) (((_Bool)0) && (((/* implicit */_Bool) (unsigned char)23))))))))));
                    }
                    arr_47 [i_2] [i_2] [i_0] = ((/* implicit */long long int) (!((!(((var_4) > (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(unsigned char)24] [i_1])))))))));
                }
            } 
        } 
    } 
}
