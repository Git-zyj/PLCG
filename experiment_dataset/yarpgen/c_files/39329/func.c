/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39329
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 3; i_0 < 15; i_0 += 4) 
    {
        var_14 = (~(((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (short)-11535)))) : (9223372036854775785LL))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            var_15 ^= ((/* implicit */short) max((max((-9223372036854775786LL), (((/* implicit */long long int) arr_3 [i_0 - 2] [i_0 - 2])))), (min((((((/* implicit */_Bool) arr_2 [i_0 - 2] [i_1])) ? (9223372036854775794LL) : (((/* implicit */long long int) var_13)))), (((/* implicit */long long int) ((((/* implicit */_Bool) 1245008974017226479LL)) ? (((/* implicit */int) (unsigned short)9777)) : (((/* implicit */int) var_9)))))))));
            var_16 = max((((((/* implicit */int) arr_1 [i_0 - 1] [i_1])) << (((((/* implicit */int) ((unsigned short) arr_2 [(short)1] [i_1]))) - (62553))))), (((/* implicit */int) ((unsigned char) min((var_11), (((/* implicit */unsigned long long int) arr_1 [i_0 + 1] [i_1])))))));
            var_17 = ((/* implicit */int) max((((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)248))) : (arr_2 [i_1] [i_0 + 1]))) : (((/* implicit */long long int) ((/* implicit */int) min(((_Bool)1), ((_Bool)1))))))), (max((((/* implicit */long long int) (short)-6)), (arr_2 [i_0 + 1] [i_0 - 2])))));
        }
        /* vectorizable */
        for (long long int i_2 = 4; i_2 < 15; i_2 += 2) 
        {
            arr_8 [i_2 + 1] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (arr_7 [i_2] [i_2] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-32758)))))) == (arr_2 [i_2] [i_2 - 1])));
            /* LoopSeq 3 */
            for (int i_3 = 1; i_3 < 14; i_3 += 2) 
            {
                var_18 = ((/* implicit */long long int) ((unsigned long long int) ((arr_12 [(unsigned short)10] [(unsigned short)10] [i_3 - 1]) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_2 [i_0 - 3] [i_3]))));
                var_19 -= ((/* implicit */int) ((unsigned char) var_0));
                /* LoopNest 2 */
                for (long long int i_4 = 0; i_4 < 16; i_4 += 2) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned char) (short)-6);
                            arr_18 [(short)8] [i_0 + 1] [i_5] [(short)8] [i_5] = ((/* implicit */short) ((signed char) arr_6 [i_0 - 2]));
                            var_21 = ((/* implicit */unsigned char) (_Bool)1);
                            var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((((/* implicit */_Bool) 2263971853U)) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_2)))) : (arr_2 [i_0 - 1] [i_2 - 3]))))));
                        }
                    } 
                } 
            }
            for (unsigned short i_6 = 0; i_6 < 16; i_6 += 1) 
            {
                var_23 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_20 [i_2 - 4] [i_0 - 3] [i_2 + 1] [i_6]))));
                /* LoopSeq 3 */
                for (unsigned char i_7 = 0; i_7 < 16; i_7 += 3) 
                {
                    /* LoopSeq 1 */
                    for (int i_8 = 0; i_8 < 16; i_8 += 4) 
                    {
                        var_24 += ((/* implicit */signed char) ((var_3) < (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)60589)) > (((/* implicit */int) (signed char)-62))))))));
                        arr_29 [i_0] [i_2] [i_7] [i_0] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0 - 1] [i_0 + 1])))));
                    }
                    arr_30 [i_0] [i_2] [i_7] [i_7] = ((/* implicit */unsigned short) ((short) arr_4 [i_0] [i_2 - 3] [i_6]));
                    var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) (+(((/* implicit */int) var_9)))))));
                }
                for (unsigned short i_9 = 0; i_9 < 16; i_9 += 2) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                    {
                        var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)4974)) ? (((/* implicit */int) arr_32 [i_0] [i_0 - 1] [i_0 - 2] [i_0 - 3] [i_0])) : (((/* implicit */int) (_Bool)1))));
                        var_27 ^= ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)34)) : (((/* implicit */int) (unsigned short)23245)));
                        arr_37 [i_0 - 3] [i_2] [i_6] [i_6] [i_10] [i_10] [i_2 - 2] = ((unsigned char) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (_Bool)0))));
                        var_28 = ((_Bool) (unsigned short)5147);
                    }
                    for (unsigned int i_11 = 1; i_11 < 13; i_11 += 2) 
                    {
                        var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) ((short) arr_31 [i_0] [i_0] [i_11 - 1] [i_11 - 1] [i_11] [i_11 - 1])))));
                        var_30 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_20 [i_2 - 3] [i_2 - 4] [i_2 - 4] [i_2 + 1]))));
                    }
                    var_31 = ((/* implicit */int) (short)5853);
                    /* LoopSeq 1 */
                    for (unsigned int i_12 = 0; i_12 < 16; i_12 += 3) 
                    {
                        arr_42 [i_0 - 1] [i_2] [i_6] [i_9] [i_2] &= ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) (unsigned short)60374)) ? (17164682225548625484ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)55444))))));
                        arr_43 [i_0 - 2] [i_2 + 1] [7LL] [i_6] [i_6] [i_12] [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_14 [i_12] [i_6])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)5876)) : (((/* implicit */int) (unsigned short)4930))))) : (arr_35 [i_12] [i_12])));
                        arr_44 [i_12] = ((/* implicit */unsigned short) arr_14 [i_12] [i_2]);
                    }
                }
                for (unsigned short i_13 = 0; i_13 < 16; i_13 += 2) 
                {
                    arr_48 [i_13] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 21863140041592610LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (short)-6)))) : (151698928U)));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_14 = 1; i_14 < 13; i_14 += 3) 
                    {
                        arr_51 [i_14] = ((/* implicit */long long int) arr_23 [i_0 - 3] [i_14]);
                        var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) ((((/* implicit */_Bool) ((arr_33 [i_0] [i_2] [i_2] [i_14 + 2]) ? (((/* implicit */int) (short)16860)) : (((/* implicit */int) arr_39 [i_14 + 2] [i_2] [i_6] [i_2] [i_0]))))) ? (((/* implicit */int) (unsigned char)21)) : (((((/* implicit */_Bool) (unsigned char)223)) ? (((/* implicit */int) arr_12 [i_13] [i_2] [i_0 - 2])) : (((/* implicit */int) arr_16 [i_0 + 1] [i_2] [i_6] [i_13] [i_14 + 2])))))))));
                    }
                }
                var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0 - 3] [i_2 - 4] [i_0])) ? (6495028419756759902ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-5849)))))) ? ((+(arr_7 [i_0] [i_2] [i_6]))) : (arr_19 [i_0] [i_0 - 3] [i_2] [i_6])));
            }
            for (long long int i_15 = 0; i_15 < 16; i_15 += 3) 
            {
                var_34 ^= ((/* implicit */unsigned short) (short)5831);
                var_35 = ((/* implicit */long long int) min((var_35), (((/* implicit */long long int) ((short) -44996019)))));
                arr_54 [i_15] [i_0] [i_15] [i_15] = ((/* implicit */unsigned int) ((arr_9 [i_0 - 3]) ? (((/* implicit */int) arr_9 [i_0 - 3])) : (((/* implicit */int) var_0))));
            }
        }
        var_36 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)33223))));
    }
    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
    {
        var_37 -= ((/* implicit */signed char) max((((((/* implicit */_Bool) (short)12)) ? (((/* implicit */int) arr_11 [i_16] [i_16])) : (((/* implicit */int) var_0)))), ((-(((/* implicit */int) (unsigned char)130))))));
        arr_58 [(_Bool)1] [i_16] = ((/* implicit */long long int) min(((-(((/* implicit */int) (short)2402)))), (((/* implicit */int) (unsigned char)8))));
    }
    var_38 = ((/* implicit */long long int) min((var_38), (((/* implicit */long long int) (unsigned char)192))));
    var_39 = ((/* implicit */_Bool) var_1);
}
