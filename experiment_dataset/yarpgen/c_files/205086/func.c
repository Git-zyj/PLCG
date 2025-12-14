/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205086
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
    var_16 = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) (signed char)-21)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) - (1490404541U))))));
    var_17 |= ((/* implicit */short) min(((-(((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) var_11)) : (var_3))))), (((/* implicit */unsigned int) (((+(((/* implicit */int) (signed char)-105)))) == (-2000086993))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_18 = (~(((/* implicit */int) arr_9 [i_1 + 2] [i_1 + 2])));
                    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+((-(var_11)))))) ? (((/* implicit */int) max(((short)16762), (((/* implicit */short) (!(((/* implicit */_Bool) (short)-32757)))))))) : (((/* implicit */int) arr_4 [i_0] [i_1] [i_0]))));
                }
            } 
        } 
    } 
    var_20 *= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) max((-2000086993), (-2000086968)))) ? (var_11) : (((/* implicit */int) max((var_7), (((/* implicit */short) var_1)))))))) == (var_5)));
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 2) 
    {
        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned char i_5 = 1; i_5 < 12; i_5 += 2) /* same iter space */
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_6 = 2; i_6 < 12; i_6 += 1) 
                    {
                        arr_19 [i_3] [i_3] [i_3] [i_6] [i_6] = ((/* implicit */unsigned long long int) ((_Bool) arr_4 [i_5 + 1] [17] [4ULL]));
                        var_21 = ((/* implicit */int) min((var_21), (var_4)));
                        arr_20 [i_3] [i_6] [i_4] [i_5 + 1] [(signed char)2] = ((var_12) == ((-(((/* implicit */int) var_7)))));
                    }
                    /* LoopSeq 3 */
                    for (short i_7 = 4; i_7 < 11; i_7 += 4) /* same iter space */
                    {
                        arr_24 [i_3] [(_Bool)1] [4] = ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_4 + 1])) || (((/* implicit */_Bool) min((var_5), (((/* implicit */long long int) var_12))))))))) & (((arr_14 [i_7 + 1] [i_4]) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-74))))) : (var_3))));
                        var_22 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((656815292), (((/* implicit */int) (unsigned short)33741))))) ? (((unsigned int) arr_1 [i_4])) : (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_5 [i_3] [i_5 - 1] [i_7])) ? (var_6) : (var_11))))))));
                        var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) (+((+(((/* implicit */int) arr_18 [i_5 - 1] [i_5 - 1] [i_5])))))))));
                    }
                    for (short i_8 = 4; i_8 < 11; i_8 += 4) /* same iter space */
                    {
                        var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) (~(((/* implicit */int) ((var_5) <= (((/* implicit */long long int) ((int) arr_17 [i_3])))))))))));
                        var_25 = ((/* implicit */unsigned char) (((((~(((/* implicit */int) var_7)))) + (2147483647))) << (((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_11 [i_4])) ? (((/* implicit */int) arr_10 [(_Bool)1])) : (arr_7 [i_3] [11] [i_8]))))) - (49)))));
                        arr_28 [i_8] [i_5 - 1] [i_5 - 1] [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [3])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_7))))) ? (arr_25 [i_8 + 1] [i_5 + 1] [i_8 + 1] [i_4 + 1]) : (((/* implicit */unsigned int) arr_12 [i_8 - 4] [i_4 + 1] [i_5 - 1]))))) ? (((min((var_8), (((/* implicit */unsigned long long int) arr_7 [i_5 - 1] [i_4 + 1] [(short)11])))) | (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_15 [i_5 - 1] [i_5 - 1] [i_3]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_8] [i_5 + 1])))));
                        var_26 = ((/* implicit */unsigned long long int) var_5);
                    }
                    for (short i_9 = 4; i_9 < 11; i_9 += 4) /* same iter space */
                    {
                        var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) (+(((((/* implicit */_Bool) arr_32 [i_3] [i_3] [i_4 + 1] [i_4] [i_5] [i_9])) ? (2147483647) : (((int) (unsigned short)31794)))))))));
                        var_28 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) -656815293)) ? (-5149350125152572486LL) : (((/* implicit */long long int) 1530650415)))) == (((((/* implicit */_Bool) ((var_2) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (var_8)))) ? (((/* implicit */long long int) ((((/* implicit */int) var_14)) / (2147483647)))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)31794))) / (2602206945725463424LL)))))));
                        arr_33 [(short)7] [i_4] [i_5] [i_9 - 4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((max((var_10), (var_10))), (arr_30 [i_9] [i_5 - 1] [(unsigned short)9] [(unsigned short)9])))) ? (((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))) : (((((/* implicit */long long int) ((var_3) << (((((/* implicit */int) (unsigned short)65535)) - (65517)))))) ^ ((+(arr_29 [i_3] [(unsigned short)9] [(short)10] [i_9 - 1])))))));
                        var_29 = ((/* implicit */short) ((((/* implicit */int) (short)32747)) ^ (((/* implicit */int) (unsigned char)166))));
                    }
                }
                for (unsigned char i_10 = 1; i_10 < 12; i_10 += 2) /* same iter space */
                {
                    var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) var_5))));
                    arr_36 [i_10] [i_4 + 1] [i_4 + 1] [i_3] = ((/* implicit */unsigned char) min(((+((+(2147483647))))), (min((((/* implicit */int) ((_Bool) arr_3 [i_3]))), (max((((/* implicit */int) (short)255)), (arr_12 [i_3] [i_3] [i_3])))))));
                }
                arr_37 [i_3] [i_3] = ((/* implicit */int) min((arr_11 [i_4 + 1]), (arr_11 [i_4 + 1])));
                var_31 &= ((/* implicit */long long int) (~(((/* implicit */int) max((arr_30 [i_3] [i_3] [i_3] [i_3]), (var_10))))));
            }
        } 
    } 
}
