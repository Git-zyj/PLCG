/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201559
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 23; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) arr_4 [i_0] [i_1] [i_2])), (((((/* implicit */_Bool) (+(arr_6 [i_0] [i_0] [i_1] [i_0])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)65533)) : (((/* implicit */int) var_16))))) : (min((((/* implicit */unsigned long long int) var_4)), (arr_6 [i_0] [i_0] [i_0] [i_0])))))));
                    var_19 &= ((/* implicit */unsigned long long int) arr_5 [(short)2] [i_2 + 1] [i_2] [i_2 + 1]);
                    arr_8 [i_0] [(unsigned char)2] [i_2] = ((/* implicit */unsigned int) arr_0 [i_1]);
                }
            } 
        } 
    } 
    var_20 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(18005941578913469201ULL)))) ? (((((/* implicit */_Bool) ((short) var_5))) ? (((((/* implicit */_Bool) (unsigned char)53)) ? (((/* implicit */int) (unsigned char)48)) : (((/* implicit */int) var_11)))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_16)))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) var_17))))) ? (((/* implicit */int) var_10)) : ((-(((/* implicit */int) var_5))))))));
    /* LoopSeq 1 */
    for (short i_3 = 0; i_3 < 16; i_3 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_4 = 0; i_4 < 16; i_4 += 4) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_5 = 0; i_5 < 16; i_5 += 1) 
            {
                var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) (+((-(((/* implicit */int) var_0)))))))));
                var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_3]))) : (arr_13 [i_3] [i_4] [i_5])))) ? (arr_7 [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_17))))));
            }
            var_23 *= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_4 [(short)19] [i_4] [i_4])) : (((/* implicit */int) arr_12 [i_4] [i_3]))))) || (((/* implicit */_Bool) arr_11 [i_3] [8ULL] [i_3])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned short) arr_12 [i_3] [i_3]))))) ? (((/* implicit */int) max(((short)38), ((short)-26)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 2561476877U)))))))) : (((((/* implicit */_Bool) arr_10 [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_6 [i_3] [i_3] [i_3] [i_3])))) : (((unsigned long long int) (short)38))))));
            var_24 = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_3])) ? (((((/* implicit */_Bool) arr_0 [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_8))) : (((/* implicit */unsigned long long int) min(((+(((/* implicit */int) (short)-45)))), (((/* implicit */int) ((unsigned short) (unsigned short)0))))))));
            /* LoopNest 2 */
            for (short i_6 = 0; i_6 < 16; i_6 += 2) 
            {
                for (unsigned int i_7 = 0; i_7 < 16; i_7 += 3) 
                {
                    {
                        arr_22 [(unsigned short)15] [i_7] [i_6] [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) 739827716U)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7)))) < (((/* implicit */int) arr_12 [i_3] [i_7])))))) / (((unsigned long long int) max((((/* implicit */unsigned int) arr_3 [i_3] [17U] [17U])), (arr_13 [(unsigned short)3] [i_4] [i_3]))))));
                        var_25 = ((/* implicit */short) arr_19 [i_3]);
                    }
                } 
            } 
            var_26 = ((/* implicit */short) arr_10 [9U]);
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_8 = 0; i_8 < 16; i_8 += 3) 
        {
            arr_26 [i_3] [0U] = (short)38;
            arr_27 [i_3] [(short)11] [(short)1] = ((/* implicit */unsigned char) arr_24 [(short)6] [(short)6]);
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_9 = 0; i_9 < 16; i_9 += 1) 
        {
            var_27 ^= ((((/* implicit */_Bool) (unsigned char)221)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)69))) : (6ULL));
            /* LoopSeq 3 */
            for (unsigned int i_10 = 0; i_10 < 16; i_10 += 3) 
            {
                /* LoopSeq 2 */
                for (unsigned short i_11 = 0; i_11 < 16; i_11 += 1) 
                {
                    var_28 -= ((/* implicit */short) (-(((/* implicit */int) (unsigned char)203))));
                    var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_35 [i_3] [i_10] [i_11])) && (((/* implicit */_Bool) var_15)))))) : (((18005941578913469201ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_9] [i_9])))))));
                }
                for (unsigned char i_12 = 1; i_12 < 13; i_12 += 2) 
                {
                    arr_42 [i_12] [13U] [i_12] [i_12] [i_12] [4U] = (unsigned short)30471;
                    var_30 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)209)) ? (((/* implicit */int) (unsigned short)13594)) : (((/* implicit */int) (short)310))))) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
                    arr_43 [i_3] [i_9] [i_10] [i_12] [i_12] = ((((/* implicit */_Bool) arr_1 [i_12 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [(unsigned short)21] [i_12 - 1] [(unsigned short)1]))) : (arr_10 [i_12 - 1]));
                }
                var_31 = ((/* implicit */unsigned short) arr_39 [i_3] [i_9] [i_9] [(unsigned short)4]);
                arr_44 [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_33 [i_3] [i_9])) ? (((((/* implicit */_Bool) var_15)) ? (var_12) : (((/* implicit */unsigned long long int) arr_16 [4ULL] [4ULL] [i_10] [4ULL])))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_2)))))));
                arr_45 [i_10] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [12ULL] [i_3] [i_10] [i_3]))))) ? (arr_19 [i_10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_3] [i_3] [i_3] [i_3])))));
            }
            for (short i_13 = 2; i_13 < 15; i_13 += 1) 
            {
                arr_48 [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_25 [i_3] [i_3] [11U])) && (((/* implicit */_Bool) var_8))));
                arr_49 [i_9] [i_9] [7U] [i_9] = ((/* implicit */unsigned int) arr_20 [i_13] [i_13] [i_9] [i_9] [i_3]);
            }
            for (unsigned long long int i_14 = 0; i_14 < 16; i_14 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_15 = 0; i_15 < 16; i_15 += 2) 
                {
                    var_32 -= ((/* implicit */unsigned short) var_16);
                    var_33 = ((/* implicit */unsigned int) ((short) arr_10 [i_14]));
                    var_34 ^= ((/* implicit */unsigned short) arr_20 [i_3] [i_3] [i_3] [i_3] [i_3]);
                }
                for (unsigned int i_16 = 0; i_16 < 16; i_16 += 3) 
                {
                    arr_57 [i_16] [i_16] [i_16] [i_16] [(unsigned short)11] [(short)10] = ((/* implicit */short) ((((/* implicit */_Bool) arr_28 [i_3])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_6))))) : (((((/* implicit */_Bool) arr_1 [i_3])) ? (arr_21 [i_3] [i_3] [i_16] [i_3]) : (arr_18 [i_3] [i_9])))));
                    var_35 *= ((/* implicit */short) var_6);
                    var_36 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_3]))) : (var_14)));
                }
                var_37 = ((/* implicit */unsigned char) max((var_37), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)35064)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)34))) : (4294967295U))))));
            }
            var_38 *= ((/* implicit */unsigned long long int) ((unsigned short) var_12));
        }
    }
}
