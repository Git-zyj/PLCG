/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221240
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
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((int) (signed char)91))), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)91))) : (var_11)))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_13))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        var_18 = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (3917894104766154639ULL)));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 4; i_1 < 19; i_1 += 3) 
        {
            for (signed char i_2 = 3; i_2 < 21; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) (~(arr_2 [i_0])));
                    var_20 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_1] [i_1] [i_0 + 3])) * (((((/* implicit */_Bool) (signed char)96)) ? (((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_2 - 3])) : (((/* implicit */int) var_13))))))) ? (max((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)78)) ? (((/* implicit */int) (unsigned char)192)) : (((/* implicit */int) (signed char)114))))), (-7236443076189448748LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)55880)) ? (((/* implicit */int) (unsigned short)55880)) : (((/* implicit */int) (unsigned short)9655)))))));
                    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) & (((((/* implicit */_Bool) arr_2 [i_1])) ? (arr_2 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)36)))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) (-(((/* implicit */int) var_0))))))) : (9223372036854775807LL)));
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 3; i_3 < 19; i_3 += 2) 
    {
        for (long long int i_4 = 0; i_4 < 22; i_4 += 4) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_5 = 0; i_5 < 22; i_5 += 4) 
                {
                    for (unsigned short i_6 = 0; i_6 < 22; i_6 += 3) 
                    {
                        for (short i_7 = 0; i_7 < 22; i_7 += 3) 
                        {
                            {
                                arr_20 [i_3] [i_3] [i_4] [i_3] [i_7] [(_Bool)1] = ((long long int) (unsigned char)132);
                                var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((/* implicit */unsigned long long int) (~(((var_13) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_3] [i_4] [i_3] [i_4] [i_7]))) : (var_7)))))) > (min((((/* implicit */unsigned long long int) arr_1 [i_3])), (((((/* implicit */_Bool) arr_0 [i_5] [i_7])) ? (arr_15 [i_3] [i_3] [i_5] [(_Bool)1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))))))))));
                                var_23 ^= ((/* implicit */long long int) min((((((((/* implicit */unsigned long long int) arr_0 [7LL] [i_6])) > (arr_15 [i_6] [6LL] [i_4] [i_3]))) ? (((/* implicit */int) ((arr_5 [i_3] [i_3] [i_4]) == (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [17LL] [16LL] [i_3] [17LL])))))) : (((/* implicit */int) arr_17 [i_3] [i_3 + 3] [i_3 + 1] [i_3 + 1] [i_3 + 1])))), (((/* implicit */int) (signed char)-115))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_8 = 0; i_8 < 22; i_8 += 2) 
                {
                    var_24 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)221)) - (((/* implicit */int) (short)-6878))));
                    /* LoopSeq 2 */
                    for (signed char i_9 = 3; i_9 < 21; i_9 += 3) 
                    {
                        arr_25 [i_3 - 3] [i_4] [i_9 + 1] = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) (signed char)94)) : (((/* implicit */int) (unsigned char)49))));
                        var_25 = ((/* implicit */signed char) arr_2 [i_3]);
                    }
                    for (unsigned int i_10 = 1; i_10 < 21; i_10 += 4) 
                    {
                        arr_29 [i_4] [i_8] [i_4] [i_4] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_3 - 2] [i_3] [i_8] [i_3 + 2])) ? (((/* implicit */unsigned long long int) arr_23 [i_3 + 2] [i_10 - 1] [i_3] [i_3 + 2] [(unsigned char)2])) : (arr_15 [i_3] [i_3] [i_3 + 2] [i_10 - 1])));
                        /* LoopSeq 1 */
                        for (int i_11 = 1; i_11 < 18; i_11 += 4) 
                        {
                            arr_32 [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(var_7)))) ? (((/* implicit */long long int) ((arr_5 [(_Bool)1] [i_8] [i_10]) >> (((((/* implicit */int) (signed char)120)) - (119)))))) : ((+(arr_18 [i_3])))));
                            var_26 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_24 [i_3 + 3] [(unsigned short)5] [i_11 + 4]))));
                        }
                    }
                    var_27 ^= ((/* implicit */unsigned short) ((long long int) arr_9 [i_3] [i_3]));
                    arr_33 [i_8] = ((/* implicit */unsigned int) arr_27 [i_3]);
                    /* LoopNest 2 */
                    for (unsigned int i_12 = 1; i_12 < 19; i_12 += 4) 
                    {
                        for (short i_13 = 0; i_13 < 22; i_13 += 4) 
                        {
                            {
                                var_28 = ((/* implicit */unsigned short) arr_4 [i_8] [i_8] [i_8]);
                                var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) (~(((/* implicit */int) arr_39 [i_12 + 2] [i_3 + 1] [i_12] [i_12 + 2] [i_12 + 2])))))));
                                arr_40 [i_3] [i_3] [i_3] = ((/* implicit */signed char) ((1241522699U) - (((/* implicit */unsigned int) ((/* implicit */int) (short)21033)))));
                                var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) arr_5 [i_3] [i_4] [i_13]))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned long long int i_14 = 3; i_14 < 20; i_14 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_15 = 2; i_15 < 21; i_15 += 4) 
                    {
                        var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) (!(((/* implicit */_Bool) (short)21022)))))));
                        arr_45 [i_15] [21] [i_4] [11] [(signed char)20] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_8 [i_4] [i_14] [i_15]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_10)) == (((/* implicit */int) arr_16 [i_15] [i_3 + 2] [i_3 + 2] [i_3 + 2] [i_3 + 2])))))) : (arr_34 [i_3] [i_3] [(unsigned char)4] [i_3])));
                        arr_46 [i_3] [i_3 - 3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_15]))) != (((long long int) (unsigned short)65535))));
                    }
                    /* LoopNest 2 */
                    for (signed char i_16 = 4; i_16 < 18; i_16 += 2) 
                    {
                        for (unsigned short i_17 = 4; i_17 < 21; i_17 += 2) 
                        {
                            {
                                var_32 = ((arr_16 [i_17] [4ULL] [4ULL] [(signed char)20] [i_3]) ? (arr_0 [i_17] [i_17 - 2]) : (((/* implicit */long long int) ((/* implicit */int) var_2))));
                                arr_53 [i_3] [i_3] [i_3] [i_16] [i_17] [i_14 - 2] [(unsigned short)2] = ((/* implicit */int) ((unsigned long long int) arr_6 [i_17] [i_3 + 2] [i_4] [i_3 + 2]));
                                var_33 |= ((/* implicit */unsigned char) (+(arr_51 [i_14] [i_14 - 2] [i_14 + 1] [i_14 - 3] [i_14] [i_14 - 1])));
                                var_34 &= ((/* implicit */short) (!(((((/* implicit */_Bool) (unsigned char)221)) || (((/* implicit */_Bool) var_7))))));
                            }
                        } 
                    } 
                }
                var_35 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) ((arr_5 [i_4] [i_3] [i_4]) % (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (((arr_28 [i_3 + 3] [i_4] [i_3 + 2]) % (((/* implicit */long long int) var_7)))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-115)))));
                arr_54 [i_3] |= ((/* implicit */short) (~(var_15)));
            }
        } 
    } 
    var_36 = ((/* implicit */short) (_Bool)1);
    var_37 -= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) != (var_12)));
}
