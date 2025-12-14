/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19945
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
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 11; i_2 += 4) 
            {
                {
                    var_10 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((int) arr_7 [i_0 - 1]))) % (((unsigned long long int) var_1))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 12; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            {
                                arr_12 [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? ((-(var_6))) : ((+(1082707240U)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) min((((/* implicit */unsigned int) var_8)), (1736911959U)))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) ^ (arr_6 [i_3 + 1] [i_0 - 1] [i_2 + 2]))));
                                var_11 = ((/* implicit */_Bool) max((((/* implicit */int) max((arr_4 [i_0 - 1] [i_0 - 1] [i_0 - 1]), (arr_4 [i_0 - 1] [i_0 - 1] [i_0 - 1])))), ((+(((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) var_5))))))));
                                arr_13 [i_0] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_2] [i_2] [i_2 + 2] [i_3] [i_3 + 1])) ? (((/* implicit */int) arr_9 [i_1] [i_2 + 1] [i_2] [i_2 + 1] [i_3] [i_3 - 1])) : (((/* implicit */int) arr_9 [i_0] [i_2 + 2] [i_2] [i_2 + 2] [i_2] [i_3 - 1])))));
                                var_12 = ((/* implicit */long long int) 467903677221153105ULL);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_5 = 0; i_5 < 24; i_5 += 3) 
    {
        var_13 = ((/* implicit */unsigned long long int) arr_14 [i_5]);
        arr_17 [i_5] [i_5] = ((((/* implicit */unsigned int) (((((-(((/* implicit */int) arr_15 [(unsigned short)13])))) + (2147483647))) >> (((((/* implicit */int) var_2)) - (46)))))) == (var_4));
        /* LoopSeq 2 */
        for (unsigned short i_6 = 0; i_6 < 24; i_6 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_7 = 0; i_7 < 24; i_7 += 2) 
            {
                /* LoopSeq 2 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    arr_28 [i_7] = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7))))), (min((arr_16 [i_6] [i_8]), (((/* implicit */unsigned long long int) var_0)))))) & (((/* implicit */unsigned long long int) ((unsigned int) arr_14 [i_7])))));
                    /* LoopSeq 2 */
                    for (unsigned int i_9 = 0; i_9 < 24; i_9 += 2) 
                    {
                        var_14 = ((/* implicit */_Bool) arr_25 [i_5]);
                        arr_31 [i_5] [i_6] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1354826745973406983LL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)25128))))) ? (arr_18 [13ULL] [13ULL] [i_9]) : (((/* implicit */unsigned long long int) 3212260059U))));
                        arr_32 [i_5] [i_6] [i_6] [i_7] [i_8] [i_9] [i_9] = ((/* implicit */signed char) ((((min((arr_24 [i_7] [i_7] [i_7] [i_7] [i_7]), (arr_24 [i_5] [i_6] [i_7] [i_8] [i_9]))) + (2147483647))) >> (((arr_21 [i_5] [i_6] [(signed char)14] [i_8]) - (3607774782U)))));
                    }
                    for (unsigned long long int i_10 = 3; i_10 < 21; i_10 += 1) 
                    {
                        var_15 = arr_26 [10ULL] [i_6] [(short)22] [i_8];
                        arr_35 [i_5] [i_10] [i_7] [13U] [i_10 - 1] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)255)) << ((((~(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)-21)))))) + (12516)))));
                        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_19 [i_10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)149))) : (arr_18 [i_5] [1U] [1U])));
                        arr_36 [i_10] [i_8] [i_7] [i_5] [i_10] = ((/* implicit */unsigned long long int) arr_21 [i_10] [i_5] [i_7] [i_6]);
                    }
                }
                for (int i_11 = 0; i_11 < 24; i_11 += 3) 
                {
                    var_17 *= ((/* implicit */_Bool) (unsigned short)16337);
                    arr_39 [i_5] [i_6] [i_7] [i_11] = ((/* implicit */_Bool) (-(((/* implicit */int) max((((unsigned short) var_4)), (((unsigned short) arr_37 [i_5] [i_5] [i_7] [i_5] [i_6])))))));
                }
                /* LoopNest 2 */
                for (short i_12 = 1; i_12 < 20; i_12 += 1) 
                {
                    for (unsigned short i_13 = 0; i_13 < 24; i_13 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_14 [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (arr_29 [i_5] [i_5] [i_5] [i_12] [i_13] [i_6] [i_6])))))) ? (((((/* implicit */_Bool) var_1)) ? ((+(arr_41 [i_5] [i_6] [i_7] [i_5]))) : (((/* implicit */unsigned long long int) (-(1087198941)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-728)) | (((/* implicit */int) arr_26 [i_5] [i_6] [i_7] [i_13])))))));
                            var_19 = ((/* implicit */unsigned short) (+((-(4416748410671298310ULL)))));
                        }
                    } 
                } 
            }
            for (unsigned char i_14 = 1; i_14 < 23; i_14 += 3) 
            {
                var_20 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)14)), (arr_30 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])))) ? (((1736911959U) % (var_6))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_14] [i_14 + 1] [(short)8] [i_14])))))));
                /* LoopSeq 1 */
                for (unsigned int i_15 = 3; i_15 < 23; i_15 += 2) 
                {
                    arr_50 [i_5] [i_14] [i_14] [(short)0] = var_4;
                    /* LoopSeq 1 */
                    for (unsigned int i_16 = 0; i_16 < 24; i_16 += 1) 
                    {
                        arr_55 [i_5] [i_14] [i_14] [i_15] [i_16] = ((/* implicit */_Bool) (-((+(((/* implicit */int) ((short) arr_44 [i_5] [i_5] [i_14] [i_5])))))));
                        arr_56 [i_5] [i_5] [i_5] [i_14] [i_14] = ((/* implicit */long long int) var_4);
                        arr_57 [(short)10] [i_14] [(unsigned char)18] [i_15 + 1] [i_16] [i_16] [i_16] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_20 [i_5] [17] [10ULL])) <= (((/* implicit */int) arr_33 [i_5] [(unsigned short)6] [i_14] [i_14 - 1] [i_14]))));
                    }
                }
            }
            var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_43 [i_5] [i_6])) | (((/* implicit */int) var_3))))) ? (((/* implicit */int) arr_43 [i_5] [i_5])) : (((/* implicit */int) var_3))));
        }
        for (unsigned char i_17 = 0; i_17 < 24; i_17 += 1) 
        {
            arr_60 [i_17] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_5] [i_17])) ? (arr_16 [i_5] [i_17]) : (arr_16 [i_5] [i_5])))) && (((/* implicit */_Bool) ((unsigned int) arr_16 [i_17] [i_5])))));
            /* LoopNest 2 */
            for (unsigned long long int i_18 = 0; i_18 < 24; i_18 += 1) 
            {
                for (unsigned long long int i_19 = 0; i_19 < 24; i_19 += 4) 
                {
                    {
                        arr_67 [i_5] [i_5] [(unsigned char)23] [i_17] [i_5] = ((/* implicit */int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)164)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_47 [i_17] [i_17] [i_18] [i_19]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) arr_43 [i_5] [i_17]))) : (-1354826745973406980LL)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [7] [7]))) & (arr_18 [i_19] [i_17] [i_5]))))), (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) arr_43 [i_5] [i_5])))))))));
                        var_22 = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (3212260059U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)28)))))) * (((((/* implicit */_Bool) 543991952)) ? (((arr_41 [i_19] [i_17] [i_18] [i_18]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65531))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))));
                    }
                } 
            } 
        }
        var_23 = (-(max((arr_38 [11ULL] [11ULL] [i_5] [i_5] [i_5] [i_5]), (arr_38 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_20 = 0; i_20 < 24; i_20 += 1) 
        {
            var_24 = ((/* implicit */int) ((((unsigned long long int) arr_38 [i_20] [i_20] [i_20] [i_5] [(short)2] [i_20])) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))));
            arr_70 [i_5] [i_20] = ((/* implicit */unsigned char) arr_53 [i_5] [i_5] [i_5] [i_20] [(unsigned char)3] [i_20] [(short)7]);
            var_25 = ((/* implicit */short) max((var_25), ((short)3968)));
        }
    }
    var_26 = ((/* implicit */short) ((((/* implicit */_Bool) (+(6136342428276166523ULL)))) || (((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)181)) ? (((/* implicit */int) (short)28450)) : (((/* implicit */int) (unsigned short)65535)))) / (((/* implicit */int) var_7)))))));
    var_27 = ((/* implicit */long long int) min((var_27), (3347394574496887638LL)));
    var_28 = ((/* implicit */unsigned int) 3347394574496887638LL);
}
