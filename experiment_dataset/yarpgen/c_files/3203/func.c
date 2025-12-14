/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3203
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
    var_15 = ((/* implicit */short) var_7);
    var_16 &= var_5;
    /* LoopSeq 1 */
    for (unsigned short i_0 = 4; i_0 < 16; i_0 += 4) 
    {
        var_17 = ((/* implicit */short) (+(((arr_0 [i_0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) <= (5767762044719144143ULL)))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) (((~(arr_0 [i_0 - 3]))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) << (((arr_0 [i_0 + 1]) - (10934196926386504959ULL)))))) ? (((/* implicit */int) arr_1 [i_0 - 3])) : ((~(((/* implicit */int) (unsigned short)0)))))))));
    }
    /* LoopNest 3 */
    for (unsigned int i_1 = 0; i_1 < 12; i_1 += 2) 
    {
        for (signed char i_2 = 3; i_2 < 11; i_2 += 4) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 2) 
            {
                {
                    var_18 -= ((/* implicit */unsigned long long int) ((((arr_12 [i_1] [i_2] [i_3] [i_3]) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)65535))));
                    var_19 *= ((/* implicit */unsigned char) (unsigned short)65524);
                    arr_13 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_4 [i_2]))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)12022)) >> (((/* implicit */int) arr_11 [(short)9] [i_2]))))) : (((arr_9 [i_2 - 1]) >> (((var_6) - (1876593778U)))))));
                    /* LoopSeq 3 */
                    for (long long int i_4 = 0; i_4 < 12; i_4 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_5 = 0; i_5 < 12; i_5 += 2) 
                        {
                            arr_20 [i_1] [i_2] [i_3] = ((/* implicit */signed char) min(((+(min((((/* implicit */unsigned int) (unsigned short)0)), (arr_4 [i_5]))))), (((/* implicit */unsigned int) arr_8 [i_2] [i_4]))));
                            arr_21 [i_1] [i_2] [(unsigned char)11] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)231))))) : (2120935334U))))));
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 12; i_6 += 1) 
                        {
                            arr_24 [(signed char)2] [i_2 - 3] [i_2] [i_2] [i_2 - 2] [i_2] [i_2 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_23 [i_4] [i_4] [i_4] [i_2] [i_2] [i_1]))))) ? (((unsigned int) arr_19 [i_6] [i_4] [8ULL] [i_2] [i_1])) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_2 - 1] [i_2])))));
                            arr_25 [i_1] [i_2] [i_3] [i_4] [i_6] = ((/* implicit */unsigned long long int) (_Bool)1);
                            arr_26 [i_6] [i_2] [i_3] [i_6] [i_2] [i_2] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)1)) ? (arr_12 [i_2 - 1] [i_2] [i_3] [i_4]) : (var_5)));
                            arr_27 [i_1] [i_1] [i_2] [4ULL] [i_1] [i_1] = ((/* implicit */unsigned int) ((signed char) arr_6 [i_2 - 3] [i_2 - 3]));
                            var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) arr_8 [i_3] [i_6]))));
                        }
                        for (int i_7 = 0; i_7 < 12; i_7 += 1) 
                        {
                            var_21 = ((/* implicit */int) ((((/* implicit */unsigned int) min((((((/* implicit */int) (unsigned short)61761)) ^ (-1))), ((~(((/* implicit */int) (unsigned short)65535))))))) ^ ((((~(arr_5 [i_2] [i_2]))) | (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [(unsigned char)1] [i_4])))))));
                            var_22 = ((/* implicit */unsigned long long int) ((short) (~(((((/* implicit */_Bool) 2169378016U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_12)))))));
                            arr_30 [i_7] [i_3] [i_4] [i_3] [i_3] [i_2] [i_1] = ((/* implicit */signed char) min((((long long int) (unsigned char)198)), (((/* implicit */long long int) 2169378016U))));
                            arr_31 [i_4] [i_2] = ((/* implicit */_Bool) min((((unsigned long long int) ((((/* implicit */int) arr_29 [i_1] [i_2 + 1] [i_3] [i_4])) >> (((/* implicit */int) var_14))))), (min((((((/* implicit */_Bool) arr_22 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_1] [i_2] [i_3] [i_4] [i_7]))) : (arr_10 [i_1] [i_1]))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0)))))))));
                        }
                        arr_32 [i_1] [i_4] = ((/* implicit */unsigned short) ((((14747418144397975861ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) || ((_Bool)1)));
                    }
                    /* vectorizable */
                    for (short i_8 = 0; i_8 < 12; i_8 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_9 = 1; i_9 < 8; i_9 += 4) 
                        {
                            var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_2 - 3])) ? (14343127173603992546ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_2] [i_2 - 1] [i_9 + 1] [i_9 - 1] [i_9 - 1]))))))));
                            var_24 ^= ((/* implicit */int) ((((/* implicit */_Bool) 2125589280U)) ? (15758205719900776589ULL) : (((/* implicit */unsigned long long int) -4862744088360228493LL))));
                        }
                        for (unsigned long long int i_10 = 0; i_10 < 12; i_10 += 2) 
                        {
                            var_25 = ((/* implicit */_Bool) arr_1 [i_1]);
                            arr_40 [i_1] [i_1] [i_1] [10ULL] &= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) 2117265420)) % (2174031961U)));
                        }
                        var_26 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) <= (arr_12 [9U] [i_2 + 1] [i_2] [i_2 - 2])));
                    }
                    for (unsigned short i_11 = 0; i_11 < 12; i_11 += 1) 
                    {
                        arr_44 [i_1] [i_2] [i_3] [i_2 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((arr_34 [i_11] [8ULL] [i_11] [i_11] [i_2 - 2] [i_3]) > (((/* implicit */long long int) ((/* implicit */int) (short)32290))))) ? (min((var_1), (arr_12 [i_3] [i_3] [(short)2] [i_3]))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)61)))))))) ? ((((_Bool)0) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (var_6) : (arr_16 [i_1] [i_2] [i_2 - 2] [i_11] [i_11])))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (short)12937))) : (var_11))))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_18 [i_1] [i_2])))))));
                        arr_45 [i_1] [i_1] [i_1] [(unsigned char)11] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)126))))) ? (((/* implicit */int) arr_36 [i_1] [i_2] [i_3] [i_3] [(unsigned char)7])) : (((((/* implicit */_Bool) 1495272189978354920ULL)) ? (((/* implicit */int) (short)32747)) : (((/* implicit */int) (short)14489))))));
                    }
                }
            } 
        } 
    } 
}
