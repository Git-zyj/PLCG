/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3307
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
    for (signed char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 ^= ((/* implicit */unsigned int) ((((long long int) var_3)) == (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [i_1])))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_2 = 3; i_2 < 17; i_2 += 3) 
                {
                    arr_10 [i_2] [i_2 - 1] = ((/* implicit */signed char) var_3);
                    /* LoopSeq 1 */
                    for (int i_3 = 2; i_3 < 16; i_3 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 4; i_4 < 16; i_4 += 1) 
                        {
                            arr_15 [i_2] [i_2] [i_1] [i_2 - 2] [i_3] [i_2] = ((/* implicit */unsigned char) ((var_7) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_3 - 1] [i_0])))));
                            var_16 = ((/* implicit */long long int) max((var_16), ((+(6510368855560571940LL)))));
                            arr_16 [i_0] [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65535))));
                        }
                        var_17 ^= ((/* implicit */unsigned int) ((unsigned short) (!(((/* implicit */_Bool) var_3)))));
                        var_18 *= ((/* implicit */unsigned short) ((((/* implicit */int) var_1)) / (((/* implicit */int) (unsigned short)65528))));
                        /* LoopSeq 1 */
                        for (unsigned char i_5 = 0; i_5 < 18; i_5 += 4) 
                        {
                            arr_20 [i_0] [i_1] [i_2] [i_0] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_2] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_4)));
                            arr_21 [i_0] [i_1] [i_2 - 1] [i_2] [i_5] [i_1] = ((/* implicit */_Bool) 6503339092538073302ULL);
                            var_19 = ((/* implicit */unsigned long long int) (short)9485);
                        }
                    }
                    /* LoopSeq 4 */
                    for (long long int i_6 = 1; i_6 < 17; i_6 += 3) 
                    {
                        arr_24 [i_0] [i_0] [i_0] [i_2] [i_6] [i_6 - 1] = ((/* implicit */long long int) ((((((/* implicit */int) arr_19 [i_0] [12U] [i_2] [i_6] [i_0])) > (16383))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1] [i_2 + 1] [i_1]))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (3446923800469262038ULL)))));
                        arr_25 [8U] [i_2] [8U] [(short)9] [i_2] [i_0] = ((/* implicit */_Bool) 149150683);
                    }
                    for (int i_7 = 0; i_7 < 18; i_7 += 1) 
                    {
                        arr_29 [i_0] [i_2] [(_Bool)1] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) 11943404981171478313ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (6503339092538073303ULL)));
                        var_20 |= ((/* implicit */unsigned short) arr_13 [17U] [i_2] [0]);
                        /* LoopSeq 2 */
                        for (signed char i_8 = 0; i_8 < 18; i_8 += 3) /* same iter space */
                        {
                            arr_34 [i_8] [i_2] [i_2] [i_7] [i_8] = var_12;
                            arr_35 [2LL] [i_1] [2LL] [i_7] [i_2] [2LL] = ((/* implicit */short) 4U);
                        }
                        for (signed char i_9 = 0; i_9 < 18; i_9 += 3) /* same iter space */
                        {
                            var_21 *= ((/* implicit */signed char) 0U);
                            arr_38 [i_2] = var_4;
                        }
                    }
                    for (unsigned long long int i_10 = 1; i_10 < 14; i_10 += 3) 
                    {
                        arr_41 [i_0] [i_0] [i_0] [(_Bool)1] [i_2] [i_10] = ((/* implicit */unsigned long long int) var_3);
                        /* LoopSeq 2 */
                        for (unsigned long long int i_11 = 0; i_11 < 18; i_11 += 4) 
                        {
                            arr_44 [i_2] [i_1] [i_10] [i_10 + 3] [(short)12] [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */long long int) var_10)) - (((4080LL) | (((/* implicit */long long int) ((/* implicit */int) var_5)))))));
                            var_22 = ((/* implicit */int) ((short) ((arr_26 [i_0]) ? (63488U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_0]))))));
                            var_23 *= ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_12)))) : (((/* implicit */int) (short)20671))));
                        }
                        for (int i_12 = 0; i_12 < 18; i_12 += 1) 
                        {
                            arr_47 [i_0] [i_1] [i_2] [i_10 + 3] [i_2] = ((/* implicit */_Bool) 4080LL);
                            arr_48 [i_1] [(short)17] [i_10 + 3] [i_2] [i_10 + 3] = ((/* implicit */unsigned int) (_Bool)1);
                        }
                        var_24 ^= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_2 + 1] [i_2 - 1] [i_10 + 3]))) >= (var_7)));
                        var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)7)) ? (arr_27 [i_2 - 1] [i_2 + 1] [i_10 + 3] [i_10 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
                        arr_49 [i_2] = ((/* implicit */short) 5888613321121013298LL);
                    }
                    for (int i_13 = 0; i_13 < 18; i_13 += 4) 
                    {
                        arr_53 [i_2] = ((/* implicit */long long int) var_8);
                        /* LoopSeq 2 */
                        for (unsigned char i_14 = 1; i_14 < 16; i_14 += 4) /* same iter space */
                        {
                            arr_57 [1] [1] [i_2] [i_13] [i_2] = ((/* implicit */signed char) (_Bool)1);
                            arr_58 [(signed char)7] [(unsigned char)11] [i_14 + 1] [i_2] [i_14 + 1] = ((((/* implicit */_Bool) ((var_0) / (((/* implicit */unsigned long long int) 532768069))))) ? (((/* implicit */int) var_1)) : (1138553493));
                            arr_59 [i_0] [(unsigned char)8] [i_2] [i_13] [i_2] [i_0] [i_0] = ((/* implicit */signed char) var_10);
                            arr_60 [i_0] [i_2] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */int) (short)-1)) > (((/* implicit */int) (unsigned short)65528)))))));
                        }
                        for (unsigned char i_15 = 1; i_15 < 16; i_15 += 4) /* same iter space */
                        {
                            var_26 ^= ((/* implicit */int) var_0);
                            var_27 *= ((/* implicit */_Bool) ((((/* implicit */int) var_1)) << (((((/* implicit */int) arr_50 [i_1] [i_2 + 1] [i_15 + 2] [i_15 - 1] [i_0] [i_15 - 1])) - (49449)))));
                            arr_65 [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65529)) ? (((((/* implicit */_Bool) var_14)) ? (var_0) : (((/* implicit */unsigned long long int) -6510368855560571943LL)))) : (((((/* implicit */_Bool) 13893625468293574642ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_52 [i_15] [i_0] [i_2 + 1] [i_0]))) : (var_7)))));
                            arr_66 [i_2] [i_13] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 17845358334013828841ULL)) ? (((/* implicit */int) (short)-21)) : (((/* implicit */int) (unsigned short)5768))));
                        }
                        var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) (signed char)47))));
                    }
                }
            }
        } 
    } 
    var_29 |= ((/* implicit */_Bool) (((_Bool)0) ? (-6198535109287827005LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65529)))));
}
