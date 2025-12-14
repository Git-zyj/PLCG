/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20094
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
    for (unsigned int i_0 = 3; i_0 < 10; i_0 += 3) 
    {
        arr_2 [(unsigned short)7] [i_0] = ((/* implicit */unsigned short) min(((_Bool)0), ((_Bool)1)));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 8; i_2 += 4) 
            {
                {
                    var_15 = ((unsigned short) min((arr_0 [i_2 + 1]), (((/* implicit */unsigned short) (_Bool)1))));
                    /* LoopSeq 4 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_9 [i_0 + 1] [i_0] [(_Bool)0] [i_3] = ((/* implicit */_Bool) (-(((arr_5 [i_2 + 1] [i_0]) ? (((/* implicit */int) arr_5 [i_2 + 3] [i_0])) : (((/* implicit */int) (signed char)-73))))));
                        /* LoopSeq 1 */
                        for (long long int i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            arr_12 [i_0] [i_0] [i_1] [i_0] [i_4] |= ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((((/* implicit */int) arr_3 [i_4])) | (((/* implicit */int) arr_4 [i_0 - 1])))) : (arr_1 [i_0 + 1])))));
                            arr_13 [i_1] [0LL] [i_2 + 1] [i_3] [i_4] |= ((/* implicit */unsigned short) (!((_Bool)0)));
                            var_16 = ((/* implicit */short) (((((_Bool)0) ? (-1918108369) : (((/* implicit */int) (short)-707)))) == ((((_Bool)1) ? (((/* implicit */int) (short)-706)) : (((/* implicit */int) (_Bool)1))))));
                            arr_14 [i_0] [i_1] [i_2 + 2] [i_2] [i_3] [i_0] = ((/* implicit */short) (((((((_Bool)1) || (((/* implicit */_Bool) -8018167481927382530LL)))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) 1841705101)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)53)))))) + (((((((/* implicit */_Bool) (unsigned short)65507)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) & (((/* implicit */int) (unsigned short)36))))));
                        }
                        var_17 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) 6ULL))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1])))))))) != (min((min((arr_7 [i_0] [i_0] [(_Bool)1] [i_0] [(_Bool)1] [i_0]), (13ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_0)))))))));
                    }
                    for (unsigned short i_5 = 1; i_5 < 9; i_5 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_18 *= ((/* implicit */unsigned char) var_14);
                            var_19 = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_16 [i_0] [i_2 + 3] [i_5] [i_0])) / (((((/* implicit */_Bool) 12ULL)) ? (2048) : (1546596904)))))) : (min((((/* implicit */unsigned long long int) arr_20 [(signed char)3] [i_5] [i_5] [i_0] [(unsigned char)0])), (18446744073709551613ULL)))));
                        }
                        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                        {
                            var_20 = ((/* implicit */int) ((((/* implicit */unsigned long long int) (~(arr_15 [i_7 + 1] [i_0 + 1] [i_2 + 3] [i_1] [i_0 + 1] [i_0 + 1])))) * (((((((/* implicit */_Bool) 33ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (14ULL))) << ((((-(((/* implicit */int) (_Bool)1)))) + (52)))))));
                            arr_23 [i_0 + 1] [i_0] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_2 - 1])) ? (((/* implicit */int) min((arr_0 [i_0 - 1]), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_19 [i_2] [i_2 - 1] [i_2 + 3] [(_Bool)1] [i_2])))))))) : (((/* implicit */int) min(((short)-1), (((/* implicit */short) (signed char)31)))))));
                            var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(arr_15 [i_0] [i_0 - 1] [i_2 + 1] [i_5 + 2] [i_7 + 1] [i_7])))))))));
                            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) arr_10 [i_7 + 1] [i_5] [i_2] [i_1] [(_Bool)1]))));
                        }
                        var_23 = ((/* implicit */_Bool) ((((/* implicit */long long int) 1725781257)) ^ (min((((/* implicit */long long int) min((arr_18 [i_0] [i_1] [i_1] [i_0] [i_5 - 1]), (arr_4 [i_1])))), (((((/* implicit */_Bool) (signed char)-76)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (7717769434191846616LL)))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (short i_8 = 2; i_8 < 7; i_8 += 3) 
                        {
                            arr_27 [i_0] [i_1] [i_0] [i_5] [i_0] = ((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (signed char)11)) : (((/* implicit */int) (short)32767))));
                            var_24 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_5] [i_5 + 1] [i_5] [i_1] [i_5 - 1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65518))) : (arr_7 [i_5 + 1] [i_5 - 1] [i_5] [i_1] [i_5 + 1] [i_5 + 1])));
                            arr_28 [i_0] [i_0 - 1] [i_0] [i_1] [6] [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_8 [i_0] [i_8 + 1] [i_2] [i_0] [i_0] [i_0])) ^ (((/* implicit */int) arr_25 [i_0] [(_Bool)1] [i_5 + 1] [i_5] [i_0]))));
                            var_25 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)27591)) <= (((/* implicit */int) (short)63))));
                        }
                        for (unsigned short i_9 = 0; i_9 < 11; i_9 += 3) 
                        {
                            arr_32 [i_0] [i_1] [i_0] [i_5] [i_9] [i_9] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_18 [i_2 + 2] [i_5] [i_0 - 3] [i_5] [i_9])) ? (((/* implicit */int) ((((/* implicit */int) arr_18 [i_2 + 2] [i_9] [i_0 - 1] [i_5] [i_9])) != (((/* implicit */int) arr_18 [i_2 - 1] [i_1] [i_0 - 2] [i_0] [i_0]))))) : (((((/* implicit */_Bool) arr_18 [i_2 + 3] [i_1] [i_0 - 2] [i_5] [i_9])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_0))))));
                            arr_33 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(18446744073709551603ULL)))) ? (((((((/* implicit */_Bool) 4628355980125141715LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)31)))) + (((/* implicit */int) (unsigned char)1)))) : (((/* implicit */int) (unsigned short)35075))));
                            arr_34 [i_0] [i_5] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) arr_18 [i_2 + 1] [i_2 + 3] [i_2 + 1] [i_2 + 2] [i_2 + 3]);
                        }
                    }
                    for (unsigned char i_10 = 4; i_10 < 8; i_10 += 4) 
                    {
                        arr_38 [i_0 - 3] [i_0 - 1] [7] [i_2 + 3] [i_10] [i_0] = ((/* implicit */signed char) (~(((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) arr_4 [i_10 - 4]))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned short i_11 = 0; i_11 < 11; i_11 += 2) 
                        {
                            var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((int) arr_11 [i_2] [i_2] [i_2 + 1] [i_10 - 4] [i_10 - 1] [i_10 + 2])))));
                            arr_41 [i_0] [i_11] [i_0] [i_2 + 2] [i_0] [(short)1] [i_0] = var_9;
                            var_27 += ((/* implicit */signed char) ((((/* implicit */int) var_5)) ^ ((~(((/* implicit */int) (unsigned short)35140))))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_12 = 3; i_12 < 10; i_12 += 3) 
                        {
                            arr_44 [i_0] [i_0] [i_2 + 3] [i_10] [i_0] = (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0] [i_0] [i_0]))))));
                            arr_45 [(unsigned char)0] [i_1] [i_2] [i_0] [i_12 - 3] = ((/* implicit */long long int) ((((/* implicit */int) arr_42 [i_2 + 2] [i_2 - 1])) << (((/* implicit */int) arr_35 [i_0] [i_2] [i_2 + 3] [i_1] [i_12] [i_2]))));
                            var_28 -= ((/* implicit */int) (~(18446744073709551608ULL)));
                        }
                        var_29 = ((/* implicit */unsigned int) ((((min((var_10), (((/* implicit */long long int) (-2147483647 - 1))))) + (9223372036854775807LL))) << (((((((((((/* implicit */_Bool) (signed char)40)) || (((/* implicit */_Bool) 1177986280)))) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_18 [i_0 - 3] [i_1] [i_1] [i_2] [i_10]), (((/* implicit */signed char) var_1)))))) : (max((((/* implicit */long long int) var_3)), (arr_26 [i_10] [i_2 + 2] [i_1] [i_0 - 1]))))) + (62LL))) - (21LL)))));
                    }
                    /* vectorizable */
                    for (unsigned char i_13 = 0; i_13 < 11; i_13 += 3) 
                    {
                        arr_48 [i_0 - 1] [i_0] [i_0] [i_0 - 3] = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)36)))));
                        arr_49 [i_0] [i_0] [i_0] [i_13] [i_0] [i_0] = ((/* implicit */_Bool) var_12);
                    }
                }
            } 
        } 
    }
    var_30 = ((/* implicit */unsigned char) var_14);
}
