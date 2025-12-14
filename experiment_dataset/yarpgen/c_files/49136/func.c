/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49136
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
    var_12 = var_9;
    var_13 = ((/* implicit */int) var_8);
    /* LoopSeq 2 */
    for (long long int i_0 = 3; i_0 < 8; i_0 += 4) 
    {
        var_14 = ((/* implicit */short) (~((~(max((4294967295U), (4294967275U)))))));
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((long long int) var_11))))) ? (min((((/* implicit */long long int) 4294967282U)), (((((/* implicit */_Bool) (unsigned short)65518)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))))))) : (((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_0] [i_0])) + (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 + 1]))))))))));
        arr_3 [(short)0] &= ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned short)65535))));
        arr_4 [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (~(8ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (max((((/* implicit */unsigned long long int) arr_1 [i_0])), (23ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((var_9), (arr_2 [i_0] [i_0 + 2]))))) != (max((((/* implicit */unsigned long long int) arr_2 [i_0] [i_0])), (18446744073709551615ULL))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 18; i_1 += 4) 
    {
        var_16 &= ((/* implicit */int) (unsigned char)245);
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_2 = 0; i_2 < 18; i_2 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 4) 
            {
                /* LoopSeq 2 */
                for (unsigned short i_4 = 0; i_4 < 18; i_4 += 4) 
                {
                    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-29))) & (((18446744073709551599ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))))));
                    arr_20 [i_1] [i_2] [i_2] [i_3] [i_4] [i_4] |= ((/* implicit */unsigned char) var_7);
                    arr_21 [i_1] = ((/* implicit */int) ((short) arr_17 [i_1] [i_1] [i_1] [i_1]));
                }
                for (long long int i_5 = 0; i_5 < 18; i_5 += 4) 
                {
                    var_18 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_19 [i_1] [i_1]))));
                    /* LoopSeq 1 */
                    for (unsigned char i_6 = 2; i_6 < 16; i_6 += 4) 
                    {
                        var_19 = ((/* implicit */unsigned short) arr_13 [i_2] [i_3] [i_6 - 2]);
                        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_16 [i_2] [i_2] [i_2] [i_2] [i_2]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)57344)))))) ? (arr_16 [i_3] [i_6 - 2] [i_6 - 2] [i_6 - 2] [i_6 - 2]) : (((/* implicit */unsigned long long int) arr_25 [i_1] [i_2] [i_1] [i_6 + 1] [i_6]))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 4) 
                    {
                        var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_7 [i_3] [i_5])))))));
                        arr_30 [i_1] [i_2] [i_3] [i_5] [17ULL] = ((/* implicit */unsigned short) arr_14 [i_2] [i_3] [i_3]);
                        var_22 |= ((/* implicit */signed char) arr_13 [i_1] [i_1] [i_1]);
                        var_23 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)34))));
                    }
                    var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) (+(12ULL))))));
                    var_25 = ((/* implicit */int) ((((/* implicit */_Bool) 2931591623U)) ? (((/* implicit */unsigned long long int) var_3)) : (43ULL)));
                }
                var_26 = ((/* implicit */unsigned char) ((long long int) arr_5 [i_2] [i_3]));
                /* LoopSeq 3 */
                for (short i_8 = 1; i_8 < 14; i_8 += 4) 
                {
                    arr_35 [i_1] [i_3] [i_8] = ((/* implicit */int) arr_16 [i_1] [i_1] [i_2] [14LL] [i_8 + 4]);
                    var_27 |= ((/* implicit */unsigned long long int) (+(4294967259U)));
                }
                for (unsigned long long int i_9 = 0; i_9 < 18; i_9 += 4) 
                {
                    var_28 = ((/* implicit */unsigned long long int) ((unsigned char) (unsigned short)16656));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_10 = 0; i_10 < 18; i_10 += 4) 
                    {
                        var_29 = ((/* implicit */long long int) (-(((((/* implicit */int) (unsigned char)255)) * (((/* implicit */int) var_7))))));
                        var_30 = ((/* implicit */long long int) min((var_30), (((((/* implicit */_Bool) arr_9 [i_3] [i_9] [i_10])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (var_2)))));
                    }
                    for (unsigned char i_11 = 2; i_11 < 16; i_11 += 4) 
                    {
                        var_31 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_41 [i_2] [i_2] [i_11 + 1] [i_11 - 1] [i_11 + 1])) / (((/* implicit */int) arr_41 [i_3] [i_11 + 2] [i_11 + 1] [i_11 + 1] [i_11]))));
                        arr_43 [i_1] [i_2] [i_3] [i_1] [i_11] = ((/* implicit */unsigned char) ((unsigned long long int) arr_41 [i_2] [i_2] [10U] [10U] [i_11 - 2]));
                        var_32 = ((/* implicit */int) (+(arr_39 [i_11 - 2] [i_11 + 1] [i_11 + 1] [i_11] [i_11 - 2])));
                    }
                    var_33 = ((/* implicit */long long int) min((var_33), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)165))) * (15ULL))))));
                }
                for (unsigned char i_12 = 0; i_12 < 18; i_12 += 4) 
                {
                    var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */int) var_5)) >> (((arr_31 [i_1] [i_1] [i_3] [i_12] [i_3]) - (7846798475326458419ULL)))))) <= (arr_45 [i_12] [i_3] [i_2] [i_2] [i_1])));
                    var_35 = ((/* implicit */long long int) min((var_35), (((arr_39 [i_1] [i_1] [i_1] [i_1] [i_1]) - (arr_39 [i_1] [i_1] [i_2] [i_12] [i_1])))));
                }
                var_36 = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)194)) ? (((/* implicit */unsigned long long int) var_1)) : (18446744073709551602ULL))));
            }
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                arr_51 [i_1] [i_1] [i_13] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) (_Bool)0))) ? (arr_39 [i_1] [i_1] [i_1] [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_1] [i_1] [16] [i_1]))))))));
                var_37 = arr_18 [i_1] [i_1] [i_1] [i_1];
            }
            var_38 = ((/* implicit */unsigned int) max((var_38), (((/* implicit */unsigned int) var_0))));
            var_39 += ((/* implicit */short) ((((/* implicit */int) arr_42 [i_2])) & (((/* implicit */int) arr_42 [i_1]))));
            var_40 = ((/* implicit */_Bool) min((var_40), (((/* implicit */_Bool) ((arr_34 [i_1] [i_1] [i_2] [i_2]) + (arr_34 [i_1] [i_2] [i_1] [i_1]))))));
            var_41 *= arr_41 [i_1] [i_1] [i_1] [i_1] [i_1];
        }
        arr_52 [i_1] = ((/* implicit */short) min(((-(min((((/* implicit */long long int) var_8)), (arr_39 [(unsigned short)5] [i_1] [i_1] [i_1] [i_1]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) 37ULL)) ? (((/* implicit */int) (unsigned char)63)) : (((/* implicit */int) (unsigned short)57330)))))));
        arr_53 [i_1] &= ((/* implicit */int) var_11);
    }
    var_42 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_10)) ? (((((/* implicit */int) (unsigned short)0)) << (((((/* implicit */int) (unsigned short)36)) - (16))))) : (((/* implicit */int) var_7)))), (((/* implicit */int) var_6))));
}
