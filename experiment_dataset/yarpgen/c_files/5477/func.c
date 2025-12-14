/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5477
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
    var_11 = ((/* implicit */unsigned int) (+(((/* implicit */int) (short)22846))));
    var_12 = min((((/* implicit */short) var_6)), (var_4));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        {
                            arr_8 [i_3] [4] [(short)14] [4] [(short)14] |= ((/* implicit */unsigned short) max((((/* implicit */int) min((arr_0 [i_1] [i_3]), (arr_0 [i_1] [i_0])))), (((((/* implicit */_Bool) min((var_2), ((unsigned char)255)))) ? ((+(((/* implicit */int) (short)-27588)))) : (((/* implicit */int) ((unsigned char) (short)-27592)))))));
                            var_13 = ((/* implicit */short) max((((((/* implicit */_Bool) min((arr_4 [i_1] [i_0]), (((/* implicit */unsigned long long int) (short)27587))))) ? (((/* implicit */int) (short)-27606)) : (arr_7 [i_1]))), (((/* implicit */int) min(((short)27587), (max((var_4), ((short)27588))))))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_4 = 0; i_4 < 16; i_4 += 1) /* same iter space */
                {
                    arr_11 [(unsigned short)6] [i_0] [15] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [(short)0] [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_3 [i_4])) : (((/* implicit */int) var_2))));
                    var_14 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) arr_7 [i_0])) > (arr_5 [i_4] [i_4])));
                    var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(17894783427620901753ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)49236))) : (33554431U))))));
                }
                for (unsigned short i_5 = 0; i_5 < 16; i_5 += 1) /* same iter space */
                {
                    var_16 = ((/* implicit */short) ((((/* implicit */unsigned int) (-(((/* implicit */int) min(((short)27573), ((short)-27587))))))) % (((((/* implicit */unsigned int) ((/* implicit */int) var_8))) % (((((/* implicit */_Bool) (short)27577)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (1889945209U)))))));
                    arr_15 [i_5] = ((/* implicit */unsigned int) arr_1 [i_5]);
                    var_17 = ((/* implicit */int) arr_3 [i_0]);
                    /* LoopSeq 2 */
                    for (unsigned int i_6 = 0; i_6 < 16; i_6 += 1) 
                    {
                        arr_18 [i_1] [i_1] [i_5] [i_5] [11] = ((/* implicit */short) var_6);
                        arr_19 [i_5] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_1] [8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_5]))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-27588))) * (arr_9 [i_0] [(short)4] [i_0] [10ULL]))))))));
                        var_18 *= ((/* implicit */short) ((min((((/* implicit */unsigned long long int) var_10)), (((var_0) % (((/* implicit */unsigned long long int) ((/* implicit */int) (short)27559))))))) % (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) * (arr_17 [i_0] [i_1] [8] [i_5] [i_6] [i_1])))));
                    }
                    for (unsigned long long int i_7 = 1; i_7 < 15; i_7 += 1) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned short i_8 = 2; i_8 < 15; i_8 += 1) 
                        {
                            var_19 = ((/* implicit */unsigned short) max((var_19), (arr_20 [10ULL] [i_1] [i_7] [(unsigned char)14])));
                            arr_25 [i_5] [i_1] [i_5] [i_7] [i_1] = ((/* implicit */unsigned short) (~(min((((/* implicit */unsigned long long int) arr_2 [i_8 - 2] [i_8] [i_8 - 1])), (min((((/* implicit */unsigned long long int) var_3)), (var_0)))))));
                        }
                        for (unsigned short i_9 = 2; i_9 < 14; i_9 += 1) 
                        {
                            arr_28 [i_0] [i_0] [i_5] [4] [i_9] |= ((/* implicit */unsigned char) ((unsigned short) ((((((/* implicit */int) (short)28306)) * (((/* implicit */int) (short)27559)))) % (((/* implicit */int) var_2)))));
                            var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) min((min((((/* implicit */unsigned long long int) ((short) arr_16 [i_1] [i_7 + 1] [i_1]))), ((+(arr_9 [(unsigned char)1] [i_1] [i_7] [i_9]))))), (((/* implicit */unsigned long long int) ((unsigned char) arr_12 [6U]))))))));
                            var_21 = ((/* implicit */short) (unsigned char)165);
                            var_22 = ((/* implicit */unsigned long long int) (+((~(((/* implicit */int) arr_13 [(short)2] [i_5] [i_5]))))));
                            var_23 = ((/* implicit */unsigned long long int) ((short) (short)27573));
                        }
                        for (unsigned short i_10 = 0; i_10 < 16; i_10 += 1) 
                        {
                            arr_31 [i_5] = ((/* implicit */int) min((arr_4 [i_0] [i_0]), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)27)) * (((/* implicit */int) (unsigned char)157)))))));
                            arr_32 [i_5] [i_5] [i_5] [i_5] [i_1] [i_5] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((arr_9 [i_1] [i_5] [i_7 + 1] [i_7]) % (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-27609))))))));
                        }
                        for (short i_11 = 0; i_11 < 16; i_11 += 1) 
                        {
                            var_24 = ((/* implicit */int) min((var_24), (((max((((/* implicit */int) arr_26 [i_7 + 1] [(unsigned short)4] [i_7 + 1])), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)-27587)) : (32767))))) * (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) min(((short)27590), (((/* implicit */short) var_2)))))) == ((-(var_3))))))))));
                            arr_37 [i_11] [i_5] [(unsigned char)13] [i_7] [i_5] [i_5] [(unsigned short)11] = ((unsigned char) (unsigned short)65510);
                            arr_38 [i_5] [i_1] [i_1] [i_5] [i_7 - 1] [i_11] = ((/* implicit */unsigned char) max((((/* implicit */unsigned short) ((((/* implicit */int) var_8)) == (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [(unsigned char)12]))) > (var_0))))))), (min((((/* implicit */unsigned short) var_4)), (arr_10 [i_5] [i_7 + 1])))));
                        }
                        var_25 = ((/* implicit */unsigned char) min((min((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-27560)) % (((/* implicit */int) var_9))))), (((((/* implicit */_Bool) (unsigned short)14427)) ? (var_0) : (11263389363347677606ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)38156)) ? (((/* implicit */int) (short)27544)) : (((/* implicit */int) (short)-27599)))))));
                        var_26 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)165))) % (arr_9 [i_7 - 1] [i_7 + 1] [i_7 + 1] [i_7 - 1]))))));
                        arr_39 [i_5] [i_5] [i_5] [i_5] [i_7] [i_7] = ((/* implicit */short) ((((/* implicit */int) min((((/* implicit */unsigned short) (short)-27559)), ((unsigned short)26)))) == (((((arr_36 [i_0] [i_0] [i_0] [i_5] [i_0]) > (arr_33 [i_1] [i_1] [i_1] [i_1] [i_1]))) ? (((((/* implicit */_Bool) (short)1287)) ? (((/* implicit */int) arr_20 [i_5] [i_5] [i_0] [i_5])) : (((/* implicit */int) arr_24 [i_0] [i_7] [i_1] [4] [i_5] [i_5])))) : (((((/* implicit */int) arr_29 [i_0] [i_0] [i_5])) % (((/* implicit */int) arr_0 [i_7] [i_7]))))))));
                    }
                }
            }
        } 
    } 
    var_27 &= ((/* implicit */unsigned short) var_8);
    var_28 &= ((/* implicit */short) var_7);
}
