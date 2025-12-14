/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44828
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
    var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (unsigned short)52178)))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (_Bool)1)))) % (((unsigned long long int) var_6)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) var_2)))) && ((!(((/* implicit */_Bool) arr_1 [(_Bool)1]))))))))));
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    var_12 = ((/* implicit */unsigned long long int) ((((unsigned int) (unsigned short)194)) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_7 [i_1] [i_1] [i_0])) : (((/* implicit */int) (unsigned char)226)))))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 1; i_3 < 13; i_3 += 4) 
                    {
                        var_13 = ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)80))));
                        /* LoopSeq 2 */
                        for (long long int i_4 = 2; i_4 < 13; i_4 += 3) 
                        {
                            var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) (((-(((/* implicit */int) ((_Bool) var_5))))) >> ((+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))))))));
                            arr_12 [i_4] [i_1] [(short)3] [i_3] [i_4] [(short)8] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)0)))))))) == ((-(((((/* implicit */int) var_2)) + (((/* implicit */int) arr_3 [i_0] [i_0] [7]))))))));
                            var_15 *= ((/* implicit */_Bool) ((((((int) arr_6 [(signed char)0] [(signed char)0] [i_2])) + ((-(((/* implicit */int) var_7)))))) + (((/* implicit */int) ((_Bool) ((arr_2 [i_0] [i_4]) / (13991943976568741735ULL)))))));
                        }
                        for (long long int i_5 = 4; i_5 < 12; i_5 += 4) 
                        {
                            arr_15 [i_0] [i_1] [i_2] [i_1] [i_5] [i_5] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_4) : (((/* implicit */int) var_0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)109)))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (arr_11 [i_0] [i_1] [i_2] [i_2] [i_3] [(short)9]))))) << (((((((/* implicit */int) (unsigned short)24563)) >> (((/* implicit */int) (_Bool)1)))) - (12275)))));
                            arr_16 [i_0] [i_1] [i_2] [i_3] [i_5] = ((/* implicit */short) (+((~(((((/* implicit */_Bool) (signed char)0)) ? (arr_11 [i_0] [i_1] [i_2] [i_3] [i_5] [i_1]) : (arr_2 [(signed char)10] [i_1])))))));
                        }
                        var_16 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((signed char) (unsigned char)23))) ? (((((/* implicit */_Bool) arr_11 [(_Bool)1] [i_3 + 2] [(_Bool)1] [(signed char)13] [i_1] [i_0])) ? (((/* implicit */int) (unsigned char)51)) : (((/* implicit */int) arr_9 [i_3])))) : (((/* implicit */int) max((var_5), (arr_9 [(_Bool)1])))))) * (max((((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (short)-12119)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned short i_6 = 0; i_6 < 15; i_6 += 4) 
                    {
                        arr_19 [i_0] [i_1] [i_2] [(short)13] [i_6] |= ((/* implicit */signed char) (~(((((/* implicit */int) (short)31968)) << (((/* implicit */int) (short)0))))));
                        var_17 -= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)5)) >= (((/* implicit */int) (_Bool)1)))))) == (max((((arr_11 [i_6] [(unsigned char)10] [(unsigned char)10] [i_1] [(signed char)1] [i_0]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_6] [i_1] [i_2] [5ULL] [i_6]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_1] [i_6])) ? (arr_17 [i_0] [i_1] [i_2] [i_2] [(_Bool)1]) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_6])))))))));
                    }
                }
                var_18 += ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) arr_3 [i_0] [(short)9] [i_1])) == (((/* implicit */int) var_3)))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((int) var_1)) >= (((/* implicit */int) (!(((/* implicit */_Bool) -2079721011))))))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_0] [i_1] [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)1227)) >= (((/* implicit */int) var_5)))))) : (((((/* implicit */_Bool) 13991943976568741746ULL)) ? (8897476465395667262LL) : (((/* implicit */long long int) 2079721011))))))));
                var_19 |= ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((short)24234), (arr_0 [i_0])))) ? ((~(((/* implicit */int) (short)-24891)))) : (((((/* implicit */int) var_10)) / (var_4)))))) < (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_1] [(short)5])) ? (var_4) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_1]))))) ? (((((/* implicit */_Bool) (short)0)) ? (((/* implicit */unsigned long long int) var_4)) : (arr_8 [i_0] [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_9) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_1] [i_1]))))))))));
                /* LoopNest 3 */
                for (unsigned short i_7 = 4; i_7 < 14; i_7 += 4) 
                {
                    for (unsigned int i_8 = 1; i_8 < 11; i_8 += 4) 
                    {
                        for (unsigned char i_9 = 2; i_9 < 13; i_9 += 4) 
                        {
                            {
                                arr_26 [i_0] [i_1] [i_7] [i_0] [i_0] [(unsigned char)0] = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) / (var_9)))) ? (((/* implicit */unsigned long long int) ((var_4) / (((/* implicit */int) var_2))))) : (((var_9) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))));
                                var_20 += ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) ((arr_2 [8ULL] [i_0]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-47))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) % (((/* implicit */int) (short)5778))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)7876)) ^ (((/* implicit */int) (short)960))))) : (((((/* implicit */_Bool) var_6)) ? (arr_11 [(short)8] [i_1] [(short)8] [i_8] [i_9 + 2] [(short)11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-29120))))))))));
                                var_21 = ((/* implicit */short) (~((~((-(13991943976568741749ULL)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
