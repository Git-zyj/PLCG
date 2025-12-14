/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193829
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
    var_10 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((var_2) ? (1125899906842623LL) : (((((/* implicit */long long int) ((/* implicit */int) var_8))) & (1125899906842617LL))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                var_11 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-48)) ? (((/* implicit */int) arr_0 [i_1] [i_1])) : (((/* implicit */int) (signed char)56))));
                var_12 = ((/* implicit */int) min((((arr_3 [i_0] [i_0] [i_0]) - (((/* implicit */long long int) var_6)))), (((/* implicit */long long int) -956185963))));
                /* LoopSeq 1 */
                for (short i_2 = 2; i_2 < 23; i_2 += 2) 
                {
                    arr_6 [i_0] [i_1] [i_1] [i_0] = ((((8471559668286381018LL) | (((/* implicit */long long int) ((var_2) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-1))) : (arr_5 [i_0])))))) - (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_2 - 2] [i_1] [i_0])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)-48))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (arr_4 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-1)))))))));
                    /* LoopSeq 4 */
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            arr_14 [i_0] [i_2] [(short)12] [i_3] [i_4] &= ((min((((/* implicit */long long int) (short)-15)), (-1125899906842618LL))) < (((/* implicit */long long int) (-(((/* implicit */int) (short)-1))))));
                            var_13 = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0] [3LL])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [(unsigned short)22] [i_0] [i_2] [i_3] [i_4]))) : (arr_5 [i_0])));
                            arr_15 [i_0] [i_1] = ((/* implicit */unsigned char) ((arr_7 [i_2 - 2] [i_2] [i_2 + 1] [(unsigned short)23]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0])))));
                            var_14 = ((/* implicit */unsigned int) (-(((((-1125899906842609LL) != (((/* implicit */long long int) ((/* implicit */int) (signed char)29))))) ? (-7985517972472078187LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)-74)))))))));
                            arr_16 [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (signed char)8)), (arr_13 [(_Bool)1] [i_0] [i_0] [i_2] [i_2 - 1] [i_2 + 1])));
                        }
                        /* vectorizable */
                        for (signed char i_5 = 0; i_5 < 24; i_5 += 3) 
                        {
                            arr_19 [i_0] [i_3] [i_3] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) 36028792723996672LL);
                            arr_20 [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) -1125899906842623LL)) ? (((/* implicit */unsigned int) var_3)) : (arr_11 [i_2 - 1] [i_0] [i_2 - 2] [i_2 + 1] [i_2 - 1])));
                        }
                        var_15 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)62)), (arr_5 [i_3])))))) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
                        var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) arr_11 [i_2] [i_2] [i_2] [i_2] [i_2]))));
                    }
                    /* vectorizable */
                    for (long long int i_6 = 0; i_6 < 24; i_6 += 4) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (long long int i_7 = 0; i_7 < 24; i_7 += 1) 
                        {
                            var_17 = (!(((/* implicit */_Bool) arr_22 [i_2 - 2] [i_2 + 1] [i_2 + 1] [i_2] [i_2 - 1] [i_7])));
                            arr_26 [i_1] [(signed char)23] [i_0] [13U] = ((/* implicit */unsigned short) (signed char)56);
                        }
                        /* LoopSeq 3 */
                        for (signed char i_8 = 0; i_8 < 24; i_8 += 1) 
                        {
                            var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((((/* implicit */unsigned int) (~(((/* implicit */int) (short)20915))))) & (((((/* implicit */_Bool) -1125899906842624LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_7))))))));
                            var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)47)) ? (((/* implicit */int) ((signed char) 23U))) : (((/* implicit */int) (signed char)74))));
                            arr_30 [i_8] [i_0] [15U] [i_2] [(signed char)2] [i_0] [11U] = ((/* implicit */int) (short)-1);
                            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)15360)) ? (arr_11 [(_Bool)1] [i_0] [i_1] [i_6] [(short)8]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_2] [(short)18])))))) : (arr_29 [i_0])));
                        }
                        for (long long int i_9 = 4; i_9 < 21; i_9 += 2) /* same iter space */
                        {
                            var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 2113369212U))));
                            var_22 = ((/* implicit */int) ((((var_3) != (((/* implicit */int) arr_21 [(unsigned short)15] [13LL] [i_6] [i_9])))) ? (9084655982406475747ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_2 + 1] [(_Bool)1])))));
                        }
                        for (long long int i_10 = 4; i_10 < 21; i_10 += 2) /* same iter space */
                        {
                            var_23 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_23 [i_0] [i_0] [i_2 - 1] [i_2 - 1] [i_2] [i_6] [i_2 - 1]))));
                            var_24 = ((/* implicit */unsigned short) (signed char)97);
                        }
                    }
                    for (long long int i_11 = 0; i_11 < 24; i_11 += 4) /* same iter space */
                    {
                        var_25 |= ((/* implicit */unsigned long long int) min((((((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_1] [i_1] [23U] [i_11] [i_2 - 1]))) | (((((/* implicit */unsigned int) ((/* implicit */int) var_4))) - (4294967272U))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65535)) || (((/* implicit */_Bool) arr_13 [(signed char)8] [i_2] [2] [i_1] [i_2] [(unsigned short)18])))))));
                        var_26 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [i_1] [i_2])) != (((/* implicit */int) (_Bool)1))));
                        var_27 = ((/* implicit */unsigned short) arr_33 [i_0] [i_0] [i_2] [i_11] [11U] [i_11]);
                        var_28 = ((/* implicit */unsigned char) (~((~(1538930772840903388ULL)))));
                    }
                    for (long long int i_12 = 0; i_12 < 24; i_12 += 4) /* same iter space */
                    {
                        var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) arr_9 [i_0] [i_1] [i_2] [14]))));
                        var_30 = (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-74))) : (1538930772840903376ULL)))) ? (((((/* implicit */_Bool) (unsigned short)13)) ? (arr_39 [i_2] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (short)-1))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 3876689929U)) ? (((/* implicit */int) (unsigned short)56260)) : (((/* implicit */int) (signed char)74))))))));
                        arr_42 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967268U)) ? (((((/* implicit */_Bool) -1280944076)) ? (max((8388607LL), (((/* implicit */long long int) arr_1 [i_0] [7ULL])))) : (((/* implicit */long long int) 1280944062)))) : (((/* implicit */long long int) (-(((1149470755) % (((/* implicit */int) (_Bool)1)))))))));
                    }
                    var_31 -= ((/* implicit */short) ((((/* implicit */_Bool) 16907813300868648221ULL)) ? (8231145900262861488ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8637457433273851975LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)18942))) : (31U))))));
                }
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 24; i_13 += 1) 
                {
                    for (short i_14 = 0; i_14 < 24; i_14 += 3) 
                    {
                        {
                            var_32 |= ((/* implicit */unsigned int) ((((((((/* implicit */int) arr_22 [i_0] [16] [i_0] [16] [i_0] [(unsigned short)22])) + (2147483647))) >> (((/* implicit */int) var_2)))) * (((/* implicit */int) var_0))));
                            arr_49 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)47779)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)11427)) ? (((/* implicit */int) (signed char)-30)) : (((/* implicit */int) (unsigned short)2047))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) % (58720256U)))))) ? (((((/* implicit */_Bool) arr_38 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 8388607LL)) >= (arr_12 [i_0] [i_1] [4] [i_0] [i_13] [0LL]))))) : (arr_12 [i_0] [(short)17] [i_0] [i_0] [i_0] [(short)17]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((arr_35 [i_13] [i_13] [12U]) + (1480231369)))))) ? (((/* implicit */int) (unsigned char)253)) : (((/* implicit */int) arr_0 [i_1] [i_0])))))));
                        }
                    } 
                } 
                var_33 = ((/* implicit */unsigned long long int) (_Bool)1);
            }
        } 
    } 
}
