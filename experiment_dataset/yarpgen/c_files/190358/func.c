/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190358
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) arr_1 [(signed char)9]);
        arr_3 [8ULL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((+(((/* implicit */int) arr_1 [i_0])))), (((/* implicit */int) var_17))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_0 [i_0] [i_0]))))) && (((/* implicit */_Bool) ((int) var_18)))))) : (((((/* implicit */_Bool) ((var_12) >> (((var_6) - (2590890098U)))))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_0 [(_Bool)1] [i_0])), (var_15))))))));
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)-537))))) / ((-(max((var_5), (((/* implicit */long long int) arr_0 [i_0] [i_0]))))))));
    }
    var_21 = ((/* implicit */unsigned char) min((((var_14) / (((/* implicit */long long int) ((/* implicit */int) var_3))))), ((~(max((var_2), (((/* implicit */long long int) var_0))))))));
    /* LoopSeq 1 */
    for (unsigned int i_1 = 0; i_1 < 18; i_1 += 1) 
    {
        var_22 = ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) arr_7 [i_1]))))));
        arr_8 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) ((short) (short)-525)))))) && (((/* implicit */_Bool) ((unsigned char) ((var_8) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1])))))))));
        arr_9 [i_1] [i_1] = (-((~(((int) var_18)))));
        /* LoopSeq 3 */
        for (long long int i_2 = 0; i_2 < 18; i_2 += 1) 
        {
            arr_12 [i_1] [i_1] [i_2] = ((/* implicit */unsigned char) (+(max((((/* implicit */unsigned long long int) ((((var_11) + (2147483647))) >> (((((/* implicit */int) arr_4 [i_1])) - (106)))))), (var_18)))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (short i_3 = 0; i_3 < 18; i_3 += 1) 
            {
                arr_15 [i_3] [0LL] [i_1] [(unsigned short)14] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((arr_5 [i_2]) & (((/* implicit */long long int) ((/* implicit */int) var_15)))))) == (((unsigned long long int) var_5))));
                arr_16 [i_2] [(unsigned short)8] = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
            }
            var_23 = ((/* implicit */long long int) max(((-((+(var_16))))), (((/* implicit */unsigned long long int) ((((int) var_0)) - (((/* implicit */int) arr_11 [1ULL] [i_1] [i_1])))))));
        }
        /* vectorizable */
        for (int i_4 = 1; i_4 < 17; i_4 += 3) 
        {
            /* LoopSeq 1 */
            for (int i_5 = 0; i_5 < 18; i_5 += 2) 
            {
                /* LoopSeq 1 */
                for (long long int i_6 = 0; i_6 < 18; i_6 += 4) 
                {
                    var_24 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)1239))));
                    arr_25 [i_5] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (arr_24 [i_4] [i_4 - 1] [i_4 - 1] [(short)15]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_4 - 1] [i_4])))));
                    var_25 += ((/* implicit */_Bool) ((unsigned int) (_Bool)1));
                    var_26 = ((/* implicit */long long int) ((int) var_19));
                }
                arr_26 [i_4] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_19))))) << ((+(((/* implicit */int) var_3))))));
            }
            var_27 = ((/* implicit */short) (~(((((/* implicit */int) arr_17 [i_1] [i_1] [i_4])) ^ (((/* implicit */int) arr_20 [i_1]))))));
            var_28 = ((/* implicit */int) (-(arr_6 [i_4])));
        }
        for (unsigned short i_7 = 1; i_7 < 17; i_7 += 4) 
        {
            var_29 = ((/* implicit */int) var_5);
            arr_29 [i_1] &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) (!(((/* implicit */_Bool) var_0)))))) && (((/* implicit */_Bool) (-(0))))));
            arr_30 [i_1] [i_7 + 1] [17LL] |= ((/* implicit */unsigned long long int) ((unsigned char) min((var_3), (((((/* implicit */int) arr_19 [(_Bool)1] [(short)12])) <= (((/* implicit */int) var_15)))))));
            /* LoopSeq 1 */
            for (int i_8 = 0; i_8 < 18; i_8 += 3) 
            {
                var_30 = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((arr_28 [i_1] [2] [11ULL]) << (((arr_31 [i_1] [i_7] [i_8] [i_7]) - (13808745981770974031ULL))))))))));
                arr_33 [(unsigned short)7] = ((/* implicit */int) ((var_19) >> (((arr_32 [i_1] [i_7] [i_8]) - (10355045799092789526ULL)))));
                arr_34 [i_1] [i_1] [9U] = ((/* implicit */unsigned int) (+((((+(((/* implicit */int) arr_7 [i_7 + 1])))) ^ (((/* implicit */int) (!(var_3))))))));
                /* LoopSeq 4 */
                for (unsigned int i_9 = 3; i_9 < 16; i_9 += 1) 
                {
                    arr_37 [i_1] [i_7] = ((/* implicit */short) (+(((/* implicit */int) ((short) ((arr_6 [5]) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [(short)1])))))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_10 = 3; i_10 < 16; i_10 += 1) 
                    {
                        arr_41 [5LL] [7] [i_10] [15ULL] [7] = ((/* implicit */long long int) min((max((((arr_23 [i_1] [i_8] [i_9] [i_10 + 2]) * (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_4 [i_1]))))))), (((/* implicit */unsigned long long int) min((min((var_2), (((/* implicit */long long int) var_11)))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)64295)) ? (((/* implicit */int) (short)-10520)) : (((/* implicit */int) (short)-525))))))))));
                        arr_42 [i_1] [i_7] [i_8] [i_9] [i_10] [i_10] [12ULL] = arr_20 [i_9];
                        arr_43 [i_1] [4ULL] [i_10] = ((/* implicit */signed char) arr_7 [i_1]);
                    }
                    arr_44 [i_1] [(short)7] [i_1] [i_8] [i_9] = ((/* implicit */unsigned char) ((unsigned long long int) var_16));
                }
                /* vectorizable */
                for (unsigned long long int i_11 = 1; i_11 < 16; i_11 += 1) 
                {
                    arr_48 [(unsigned short)6] [i_7 - 1] [i_11] [(unsigned short)6] [i_11] = ((/* implicit */unsigned long long int) var_7);
                    arr_49 [i_11] [i_7 - 1] = ((arr_47 [i_11] [i_11]) & (arr_47 [i_11] [i_11]));
                }
                /* vectorizable */
                for (signed char i_12 = 0; i_12 < 18; i_12 += 1) /* same iter space */
                {
                    arr_53 [i_1] [i_7] [17ULL] [i_7] [(_Bool)1] [17ULL] = ((/* implicit */_Bool) var_16);
                    arr_54 [i_1] [i_7] [i_7] [i_8] [i_7] [i_12] = ((/* implicit */unsigned int) ((((/* implicit */int) var_3)) % (((/* implicit */int) var_15))));
                    /* LoopSeq 1 */
                    for (short i_13 = 1; i_13 < 14; i_13 += 1) 
                    {
                        arr_59 [i_1] [i_13] [(unsigned char)6] = arr_36 [i_7 - 1] [i_13 + 3] [i_13] [13ULL];
                        var_31 = ((/* implicit */_Bool) arr_23 [i_13 + 3] [i_8] [i_1] [i_1]);
                    }
                }
                for (signed char i_14 = 0; i_14 < 18; i_14 += 1) /* same iter space */
                {
                    arr_62 [i_8] [(_Bool)1] [i_8] [i_14] = ((/* implicit */_Bool) max((((unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_1] [i_7] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)127))) : (var_0)))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_5 [(short)9])) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (var_14))) / (((arr_60 [i_1] [i_7 + 1] [i_8] [i_14] [i_14]) / (((/* implicit */long long int) ((/* implicit */int) arr_17 [(short)14] [i_7] [i_8]))))))))));
                    var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) var_1))));
                }
            }
            var_33 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) var_13)) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_11)))) + (arr_28 [i_1] [i_7] [i_1])))));
        }
    }
}
