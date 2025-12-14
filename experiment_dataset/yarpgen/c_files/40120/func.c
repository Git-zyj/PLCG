/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40120
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
    var_13 = ((/* implicit */short) var_0);
    var_14 = ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_11)) ? (var_11) : (2147483644)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) (!(var_4)))) : (((/* implicit */int) var_0)))) : (var_7));
    var_15 = min(((~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_5)) : (var_6))))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65533))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (short i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            var_16 = ((/* implicit */unsigned char) (~(((/* implicit */int) max((((/* implicit */short) arr_3 [i_1 - 1] [i_1])), (max((((/* implicit */short) var_8)), (var_9))))))));
            arr_7 [i_1] [i_1] = ((/* implicit */unsigned char) (((-(((/* implicit */int) arr_5 [i_1 + 2])))) != (((/* implicit */int) arr_5 [i_0]))));
            arr_8 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) 710848664)) : (max((((/* implicit */long long int) (_Bool)0)), (arr_1 [i_1 + 2] [i_0])))))) ? (4223082556800981085LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0])))));
        }
        arr_9 [(signed char)6] = ((/* implicit */int) ((short) (+(((/* implicit */int) (unsigned short)2)))));
    }
    for (unsigned short i_2 = 0; i_2 < 20; i_2 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (int i_4 = 0; i_4 < 20; i_4 += 4) 
            {
                {
                    arr_21 [i_2] [(unsigned char)14] [i_4] = ((/* implicit */_Bool) arr_20 [i_2]);
                    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_16 [i_4])) ^ ((-(var_6)))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_0 [i_3] [i_3])) : (((/* implicit */int) (!(((/* implicit */_Bool) 4223082556800981085LL))))))) : (((((/* implicit */int) arr_15 [i_4] [i_3] [i_2])) ^ ((((_Bool)1) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_6 [i_2]))))))));
                    var_18 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) max((var_12), (((/* implicit */int) arr_5 [i_2]))))) ? (((var_7) ^ (((/* implicit */int) arr_15 [i_2] [i_3] [3])))) : (max((2147483622), (((/* implicit */int) arr_16 [(signed char)3])))))) / (((((/* implicit */_Bool) min((((/* implicit */unsigned char) (signed char)(-127 - 1))), (var_1)))) ? (((((/* implicit */_Bool) var_11)) ? (-868711964) : (((/* implicit */int) var_0)))) : (((/* implicit */int) var_2))))));
                }
            } 
        } 
        arr_22 [i_2] = ((/* implicit */long long int) arr_2 [i_2]);
        arr_23 [(unsigned char)8] = ((/* implicit */short) ((((/* implicit */_Bool) arr_15 [i_2] [(unsigned char)8] [i_2])) ? (((((/* implicit */_Bool) max((arr_6 [i_2]), (((/* implicit */signed char) var_4))))) ? (((arr_12 [i_2] [i_2]) << (((((/* implicit */int) var_5)) - (23963))))) : (((/* implicit */int) arr_3 [i_2] [i_2])))) : (((var_12) >> (((max((var_12), (((/* implicit */int) arr_15 [i_2] [i_2] [i_2])))) - (1699070952)))))));
        var_19 = max((min((max((-4223082556800981086LL), (((/* implicit */long long int) arr_20 [i_2])))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_2 [(_Bool)1]))))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) arr_12 [i_2] [i_2])) : (1169397624760973512LL))))))));
    }
    /* LoopNest 2 */
    for (unsigned short i_5 = 0; i_5 < 19; i_5 += 3) 
    {
        for (unsigned char i_6 = 0; i_6 < 19; i_6 += 3) 
        {
            {
                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_5] [i_6] [i_6])) / (((/* implicit */int) arr_27 [i_6]))))) ? (((/* implicit */int) arr_24 [i_5])) : (((((/* implicit */_Bool) arr_4 [i_5] [i_5] [(unsigned short)8])) ? (var_10) : (((/* implicit */int) arr_4 [i_6] [i_5] [i_5]))))));
                arr_28 [11LL] = ((/* implicit */unsigned short) var_6);
                var_21 = ((/* implicit */signed char) max((((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) arr_25 [i_5])) ? (((/* implicit */int) (unsigned short)1)) : (((/* implicit */int) arr_17 [(_Bool)1] [i_5] [i_6])))) : (((arr_14 [i_5]) ^ (((/* implicit */int) arr_17 [(unsigned char)19] [i_6] [i_5])))))), (((/* implicit */int) arr_11 [i_6]))));
                /* LoopSeq 3 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    arr_31 [i_7] [i_6] [(short)1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -2124498122)) ? (((long long int) (short)32763)) : (((/* implicit */long long int) ((/* implicit */int) ((short) (unsigned char)48))))));
                    arr_32 [i_7] [(unsigned short)2] [(unsigned short)2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((arr_0 [i_5] [i_5]) ? (((/* implicit */int) var_4)) : (var_10))), (((/* implicit */int) (unsigned short)65534))))) || (((/* implicit */_Bool) max((((/* implicit */int) arr_26 [i_5])), (var_11))))));
                }
                for (unsigned short i_8 = 0; i_8 < 19; i_8 += 4) 
                {
                    arr_35 [i_5] = ((/* implicit */unsigned short) max((((((((/* implicit */_Bool) arr_15 [i_8] [i_6] [i_5])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_17 [i_5] [i_5] [i_8])))) ^ (((/* implicit */int) min((((/* implicit */unsigned short) var_4)), ((unsigned short)15053)))))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_4 [i_8] [i_6] [i_5])) : (((/* implicit */int) arr_33 [i_6] [i_6] [i_8]))))));
                    arr_36 [i_5] [i_5] [(_Bool)1] = ((/* implicit */unsigned char) arr_16 [i_6]);
                    var_22 = ((/* implicit */long long int) var_12);
                    var_23 = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) -113901247)))))));
                }
                /* vectorizable */
                for (unsigned short i_9 = 3; i_9 < 18; i_9 += 2) 
                {
                    arr_40 [i_9] [11LL] [i_9] [i_6] = ((/* implicit */unsigned char) (short)-27567);
                    /* LoopNest 2 */
                    for (unsigned char i_10 = 0; i_10 < 19; i_10 += 3) 
                    {
                        for (unsigned char i_11 = 0; i_11 < 19; i_11 += 4) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)21))))) / (((/* implicit */int) arr_11 [i_9 + 1]))));
                                var_25 = var_1;
                            }
                        } 
                    } 
                    arr_46 [i_9] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_45 [i_9] [i_9] [i_9] [i_6] [i_5])) >= ((-(((/* implicit */int) (short)27572))))));
                    /* LoopSeq 1 */
                    for (signed char i_12 = 0; i_12 < 19; i_12 += 3) 
                    {
                        var_26 = ((/* implicit */signed char) 237594356);
                        var_27 = (!(((((/* implicit */int) arr_39 [i_9] [i_5])) >= (((/* implicit */int) arr_17 [(unsigned short)2] [i_6] [i_9])))));
                    }
                    var_28 = ((/* implicit */_Bool) var_11);
                }
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_13 = 1; i_13 < 17; i_13 += 4) 
                {
                    /* LoopSeq 3 */
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        arr_56 [i_14] [i_6] [i_6] [i_6] = (~(((/* implicit */int) ((((/* implicit */_Bool) (short)32767)) || ((_Bool)1)))));
                        var_29 = ((/* implicit */_Bool) var_1);
                        var_30 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 1595348165))));
                    }
                    for (unsigned short i_15 = 1; i_15 < 18; i_15 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_16 = 1; i_16 < 17; i_16 += 2) 
                        {
                            var_31 = ((/* implicit */unsigned char) arr_52 [i_16 + 1]);
                            arr_61 [i_5] [i_6] [i_13 + 1] [i_15] [i_16] = ((/* implicit */unsigned char) var_10);
                            arr_62 [i_16] [i_15] [i_5] [i_15] [i_5] = ((/* implicit */unsigned char) var_12);
                            arr_63 [1] [i_15] [i_15 - 1] [(signed char)18] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_33 [i_16 - 1] [i_15 + 1] [i_13 - 1]))));
                        }
                        for (short i_17 = 2; i_17 < 17; i_17 += 4) 
                        {
                            var_32 = ((/* implicit */signed char) arr_14 [i_6]);
                            arr_66 [i_15] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_50 [(unsigned char)9] [12LL])) ? (((/* implicit */int) (unsigned short)43294)) : (((/* implicit */int) arr_24 [i_5])))) ^ (((((/* implicit */_Bool) 9223372036854775807LL)) ? (arr_18 [(signed char)13] [13LL] [i_13] [15]) : (((/* implicit */int) arr_6 [i_5]))))));
                        }
                        var_33 = ((/* implicit */int) arr_49 [i_15 + 1] [i_15] [i_15] [i_5]);
                    }
                    for (short i_18 = 0; i_18 < 19; i_18 += 3) 
                    {
                        var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_44 [i_13] [i_13] [i_13] [i_13])) ? (((((/* implicit */int) var_4)) | (var_11))) : (((var_12) ^ (var_10)))));
                        arr_70 [i_6] [(short)13] [15] [i_6] = ((/* implicit */unsigned short) var_0);
                        var_35 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -1055117446)) ? (arr_18 [(unsigned char)8] [i_13 + 1] [i_13 + 1] [i_13 + 1]) : (arr_18 [12] [(short)6] [i_18] [i_13 + 1])));
                    }
                    arr_71 [i_5] [i_5] [(signed char)5] = ((/* implicit */int) arr_34 [i_6]);
                }
                /* vectorizable */
                for (unsigned char i_19 = 0; i_19 < 19; i_19 += 4) 
                {
                    arr_75 [i_5] [11] [i_5] = ((/* implicit */unsigned char) (+(var_10)));
                    /* LoopNest 2 */
                    for (long long int i_20 = 0; i_20 < 19; i_20 += 3) 
                    {
                        for (short i_21 = 1; i_21 < 18; i_21 += 4) 
                        {
                            {
                                arr_80 [i_5] [i_20] = (~(((/* implicit */int) (!(var_4)))));
                                arr_81 [(unsigned char)16] [i_6] [i_6] [i_20] [i_20] [i_21 + 1] [i_21] = ((/* implicit */unsigned short) var_7);
                                var_36 = ((/* implicit */unsigned char) arr_15 [i_19] [i_6] [i_5]);
                                var_37 = ((/* implicit */int) 9223372036854775807LL);
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
