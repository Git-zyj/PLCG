/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201617
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            var_14 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_2 [i_1] [i_0]))));
            /* LoopSeq 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                arr_7 [i_0] [0U] [i_2] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_4 [i_0] [i_1] [(unsigned short)0]))));
                var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) arr_1 [i_0] [i_1]))));
                arr_8 [i_0] [i_0] [i_2] [4LL] = arr_0 [14ULL];
                var_16 = ((/* implicit */unsigned long long int) (~(((arr_6 [i_0] [i_1] [i_0] [(_Bool)1]) << (((((((/* implicit */int) arr_1 [i_0] [i_0])) + (13952))) - (24)))))));
            }
            for (signed char i_3 = 0; i_3 < 24; i_3 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_4 = 1; i_4 < 22; i_4 += 3) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_5 = 2; i_5 < 21; i_5 += 1) 
                    {
                        var_17 = ((/* implicit */unsigned char) arr_1 [i_0] [i_0]);
                        arr_17 [i_4] [(_Bool)1] [12U] [i_4 + 1] [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) arr_15 [i_4] [i_4 - 1] [i_4 - 1] [i_5 - 2] [i_5 + 1])) ? ((~(arr_3 [i_3]))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_10 [i_0] [i_0] [i_0])))))));
                        arr_18 [i_0] [i_0] [i_4] [i_5 + 1] [i_0] [i_1] [(_Bool)1] = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_9 [i_5] [i_1] [i_0])) : (var_3))));
                        var_18 = ((/* implicit */long long int) (short)-32764);
                        arr_19 [i_4] = ((/* implicit */short) (-(((/* implicit */int) arr_0 [i_5 + 3]))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned int i_6 = 0; i_6 < 24; i_6 += 3) 
                    {
                        arr_22 [i_4] [i_1] [i_3] [i_4 + 1] [i_3] = ((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) - (arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) <= (((/* implicit */unsigned int) ((int) var_3)))));
                        arr_23 [i_0] [i_1] [i_4] [5] [i_6] = ((/* implicit */_Bool) (+(2251765453946880LL)));
                        var_19 = ((/* implicit */int) ((((/* implicit */_Bool) var_0)) ? (arr_6 [i_4 + 2] [i_4 + 2] [i_4 + 2] [i_6]) : (arr_6 [i_4 + 2] [i_4 + 1] [(unsigned short)1] [i_4])));
                    }
                    var_20 = ((/* implicit */unsigned long long int) (((_Bool)1) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) arr_20 [i_4 - 1] [i_3] [i_4] [(signed char)15] [i_3] [i_1] [i_0]))));
                    /* LoopSeq 1 */
                    for (unsigned int i_7 = 2; i_7 < 23; i_7 += 3) 
                    {
                        arr_28 [i_4] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) 18446744073709551613ULL)) ? (((/* implicit */int) arr_24 [i_7 + 1] [(unsigned char)11] [i_7] [i_7 + 1] [i_7 - 2] [i_4 + 1])) : (1073741824)));
                        var_21 ^= ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_3] [i_3] [(unsigned char)22] [(short)16] [(short)18] [14ULL]))) : (-9223372036854775793LL))) / (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_7] [i_7 - 1] [i_7 - 1]))));
                    }
                }
                /* LoopSeq 2 */
                for (unsigned int i_8 = 1; i_8 < 22; i_8 += 2) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_9 = 0; i_9 < 24; i_9 += 4) 
                    {
                        arr_34 [i_0] [i_0] [(unsigned short)14] [13ULL] [i_8] = ((/* implicit */unsigned char) 2147483647);
                        var_22 = ((/* implicit */short) (~(((/* implicit */int) arr_0 [i_8 + 2]))));
                        arr_35 [i_8] [i_9] [i_3] [i_3] [i_1] [i_0] [i_8] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_10 [i_8 + 1] [17U] [i_3]))));
                    }
                    arr_36 [i_0] [i_8] [i_0] [i_8] [i_0] = ((/* implicit */short) 2862868607613094595ULL);
                    /* LoopSeq 3 */
                    for (unsigned long long int i_10 = 2; i_10 < 22; i_10 += 3) 
                    {
                        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_3])) ? (((/* implicit */int) arr_4 [(short)14] [i_1] [15ULL])) : ((~(((/* implicit */int) arr_31 [i_8] [i_1] [i_3] [i_8]))))));
                        arr_39 [(unsigned short)10] [i_3] [i_8] = ((/* implicit */unsigned short) (~(arr_26 [i_10 - 2] [i_10] [i_8] [i_10 - 1] [i_10 - 2] [i_10 - 1] [i_10])));
                        arr_40 [i_8] = ((/* implicit */int) ((unsigned short) arr_32 [i_10] [i_10 + 1] [i_10 + 1] [i_10 - 1] [i_10 - 1] [i_8]));
                    }
                    for (unsigned char i_11 = 0; i_11 < 24; i_11 += 1) 
                    {
                        arr_43 [i_0] [i_0] [i_0] [i_8] [i_0] = ((((/* implicit */_Bool) arr_26 [i_0] [i_0] [i_8] [i_8] [i_0] [i_8] [i_0])) ? (((/* implicit */int) var_0)) : ((~((-2147483647 - 1)))));
                        var_24 -= ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 2096896)) && (((/* implicit */_Bool) (short)(-32767 - 1))))));
                        arr_44 [(unsigned short)4] [i_1] [i_1] [i_8] [i_8] [(_Bool)0] [13] = arr_0 [i_11];
                        arr_45 [i_8] [i_8] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */signed char) ((var_12) | (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_0] [3LL])))));
                        arr_46 [i_8] [i_8] [i_8] [22U] [i_11] = ((/* implicit */long long int) ((((/* implicit */int) arr_11 [i_8 + 1] [i_8] [i_3] [i_8 + 2])) * (((/* implicit */int) (!(var_9))))));
                    }
                    for (signed char i_12 = 1; i_12 < 22; i_12 += 4) 
                    {
                        arr_49 [i_0] [i_1] [i_1] [i_8] [i_1] [i_8] = ((/* implicit */unsigned long long int) arr_27 [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_12 + 1]);
                        arr_50 [i_3] [i_3] [i_3] [(unsigned short)16] [i_3] [i_3] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) arr_1 [(short)2] [i_12 - 1]))));
                        var_25 += ((/* implicit */int) (!(var_7)));
                        var_26 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_8] [i_8] [i_3] [(short)10] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_9 [i_12 + 2] [i_1] [i_1]))))));
                    }
                }
                for (short i_13 = 2; i_13 < 23; i_13 += 4) 
                {
                    var_27 += ((/* implicit */unsigned short) (+(((((/* implicit */int) var_13)) & (((/* implicit */int) var_11))))));
                    var_28 = ((/* implicit */unsigned short) var_2);
                    arr_53 [i_0] [i_1] [i_3] [i_3] [i_13] [i_13] = ((((/* implicit */_Bool) arr_1 [i_13 + 1] [i_0])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_1)));
                    var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) (+(((/* implicit */int) arr_25 [i_3] [i_1] [i_3] [i_13] [i_13 - 1])))))));
                }
                var_30 = ((/* implicit */int) ((unsigned char) 2147483647));
            }
        }
        /* LoopSeq 1 */
        for (signed char i_14 = 3; i_14 < 22; i_14 += 4) 
        {
            arr_56 [i_14] [i_0] = ((/* implicit */unsigned long long int) min((((((/* implicit */unsigned int) arr_16 [i_0] [i_14 + 1] [i_14 + 1] [i_0] [i_0])) | (((((/* implicit */unsigned int) ((/* implicit */int) arr_47 [i_0] [i_0] [i_0] [i_0] [i_0]))) ^ (arr_26 [(unsigned short)14] [(unsigned short)14] [(short)14] [10U] [8U] [i_0] [(unsigned short)14]))))), (((/* implicit */unsigned int) arr_11 [i_0] [16LL] [i_14] [i_14]))));
            arr_57 [i_14] [i_14] [i_0] = ((((/* implicit */int) ((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_0)), (var_12)))) != (arr_5 [20])))) * (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_37 [i_0] [i_0] [5] [i_14] [i_14 - 1] [i_0]))))) > (((/* implicit */int) var_7))))));
            arr_58 [i_0] [i_14] [i_14] = ((/* implicit */unsigned int) var_4);
            arr_59 [i_0] = ((/* implicit */unsigned short) arr_16 [i_0] [i_14] [i_0] [(signed char)9] [i_0]);
        }
    }
    var_31 = ((/* implicit */_Bool) var_10);
    var_32 = ((/* implicit */unsigned int) (short)-32764);
    var_33 = ((/* implicit */int) (!(((/* implicit */_Bool) var_13))));
}
