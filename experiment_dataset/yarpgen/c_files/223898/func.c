/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223898
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
    var_12 = var_2;
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            {
                arr_6 [(unsigned short)18] |= ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_0))));
                var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((16549585473306227670ULL), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1 + 2] [i_1]))))) ? (((/* implicit */int) arr_3 [i_1] [i_1 + 2] [i_1])) : (((((/* implicit */_Bool) arr_3 [i_1] [i_1 + 2] [i_1])) ? (((/* implicit */int) arr_3 [i_0] [i_1 + 2] [i_1])) : (((/* implicit */int) (unsigned short)65517))))));
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    var_14 = min((((((/* implicit */_Bool) arr_1 [i_1 + 1])) ? (((/* implicit */int) arr_1 [i_1 + 2])) : (((/* implicit */int) arr_1 [i_1 - 2])))), (((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_2])));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                var_15 *= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)18)) ? (arr_13 [i_2] [i_1] [i_2] [i_3] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)18)))));
                                var_16 = ((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_2] [i_0])) ? (((/* implicit */int) arr_8 [i_0] [i_1 - 1] [i_2] [i_0])) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_2] [i_3])))));
                                var_17 = ((/* implicit */long long int) min((min((arr_3 [i_1 - 2] [10] [i_1]), (arr_3 [i_1 + 1] [i_1 - 1] [i_1]))), (((/* implicit */short) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_11)))))));
                            }
                        } 
                    } 
                    var_18 = ((unsigned short) ((unsigned long long int) (unsigned char)133));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned long long int i_5 = 3; i_5 < 21; i_5 += 3) /* same iter space */
                    {
                        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */int) var_11)) ^ (((/* implicit */int) arr_8 [10ULL] [i_5 - 2] [i_5 - 3] [i_5])))))));
                        var_20 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)65535))));
                        /* LoopSeq 2 */
                        for (unsigned short i_6 = 0; i_6 < 22; i_6 += 1) /* same iter space */
                        {
                            arr_22 [i_1] [i_2] = ((/* implicit */short) (-(arr_10 [i_0] [i_0] [i_0])));
                            arr_23 [i_0] [i_0] [i_0] [i_6] [i_2] [i_1] |= ((/* implicit */unsigned short) (unsigned char)162);
                        }
                        for (unsigned short i_7 = 0; i_7 < 22; i_7 += 1) /* same iter space */
                        {
                            var_21 = ((/* implicit */unsigned long long int) ((short) ((long long int) (unsigned char)162)));
                            var_22 ^= ((/* implicit */unsigned char) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]);
                            var_23 = ((/* implicit */int) 9223372036854775807LL);
                            var_24 = ((/* implicit */unsigned short) ((unsigned char) (short)-15979));
                        }
                        arr_27 [i_0] [i_1] [i_1] [i_5 - 3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_1) / (((/* implicit */int) var_3))))) ? (arr_13 [i_2] [i_1] [i_2] [i_5 - 3] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_5 - 2] [i_1])))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_8 = 3; i_8 < 21; i_8 += 3) /* same iter space */
                    {
                        var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) var_9))));
                        var_26 = ((/* implicit */short) ((arr_10 [i_8 + 1] [i_1] [i_1 + 1]) / (arr_10 [i_8 + 1] [i_8 + 1] [i_1 + 1])));
                        var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) arr_19 [i_1 + 1] [i_8 - 1] [i_8 - 1] [i_8 - 1]))));
                    }
                    /* vectorizable */
                    for (unsigned char i_9 = 1; i_9 < 19; i_9 += 4) /* same iter space */
                    {
                        arr_32 [i_0] [i_1] [i_2] [i_1] = ((((/* implicit */_Bool) -3348621251426145778LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)149))) : (((((/* implicit */_Bool) (unsigned short)37490)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)38356))))));
                        var_28 -= ((/* implicit */long long int) ((unsigned char) var_0));
                        var_29 = ((/* implicit */unsigned short) var_4);
                    }
                    for (unsigned char i_10 = 1; i_10 < 19; i_10 += 4) /* same iter space */
                    {
                        var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) (-(((((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)-27903)), ((unsigned short)18)))) ? (max((((/* implicit */unsigned long long int) arr_11 [i_1])), (18446744073709551593ULL))) : (arr_17 [i_2]))))))));
                        /* LoopSeq 3 */
                        for (short i_11 = 2; i_11 < 21; i_11 += 2) /* same iter space */
                        {
                            arr_39 [i_0] [i_0] [(short)2] [i_2] [i_0] [i_0] |= ((/* implicit */short) var_5);
                            var_31 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_15 [i_1 - 2] [9] [i_1 + 1] [i_10 + 3] [i_11 + 1]))))));
                            var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551593ULL)) ? (((/* implicit */unsigned long long int) 3348621251426145779LL)) : (var_9)))) ? (var_5) : (((/* implicit */unsigned long long int) var_1)))) : (min((((arr_0 [i_0]) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)64653))))), (((/* implicit */unsigned long long int) -7090873106044314347LL))))));
                            arr_40 [i_0] [i_1] [i_2] [i_10] [i_10] [i_11] = ((/* implicit */short) max((min((arr_29 [i_1] [i_2] [i_10 + 2]), (13978110947552082732ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) arr_37 [i_0] [i_1] [i_0] [i_10] [i_1] [i_0])) : (((/* implicit */int) (unsigned char)93)))))));
                        }
                        for (short i_12 = 2; i_12 < 21; i_12 += 2) /* same iter space */
                        {
                            var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(min((((/* implicit */int) (unsigned char)153)), (-1521162621)))))) ? (((/* implicit */int) max((((/* implicit */short) (unsigned char)245)), (arr_24 [i_12 + 1] [i_12 + 1] [10] [i_12 + 1] [i_12] [(short)21])))) : (((int) min((-7090873106044314336LL), (((/* implicit */long long int) (unsigned char)178)))))));
                            var_34 = ((/* implicit */unsigned char) arr_3 [i_0] [i_2] [i_1]);
                            var_35 = ((/* implicit */short) var_0);
                        }
                        for (short i_13 = 2; i_13 < 21; i_13 += 2) /* same iter space */
                        {
                            var_36 = ((/* implicit */unsigned short) max((var_36), (((/* implicit */unsigned short) var_4))));
                            arr_46 [i_13] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) 2147483647)))) ? (((/* implicit */unsigned long long int) ((int) var_3))) : (max((((/* implicit */unsigned long long int) var_2)), (var_5)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (unsigned short)28046)))) : (arr_15 [i_0] [i_1] [i_2] [i_10] [i_13])));
                            var_37 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_28 [i_13 - 2] [i_1 - 1] [i_1] [i_10 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)46)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_13 - 2] [i_1 - 1] [i_2] [i_10 + 1] [i_13])) ? (((/* implicit */long long int) 1521162621)) : (arr_28 [i_13 - 1] [i_1 - 2] [i_1] [i_10 + 3])))) : (((((/* implicit */_Bool) var_6)) ? (arr_21 [i_13 + 1] [i_1 + 1] [i_2] [i_10 - 1] [i_13 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)63))))));
                        }
                    }
                    var_38 += ((unsigned char) ((((/* implicit */_Bool) 1527822416)) ? (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_1] [i_1 + 1] [i_1] [i_2] [i_2]))) : (((long long int) arr_36 [i_0] [i_0] [i_1] [i_1 - 1] [(unsigned short)0] [i_2]))));
                }
                var_39 = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) arr_41 [i_1 + 1] [i_1] [i_1] [i_1 - 2] [i_1 - 2] [i_1] [i_1])))));
            }
        } 
    } 
}
