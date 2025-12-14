/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223779
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
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 4; i_3 < 20; i_3 += 1) 
                    {
                        var_15 = ((/* implicit */unsigned char) ((969831872978291263ULL) & (((/* implicit */unsigned long long int) ((unsigned int) var_10)))));
                        /* LoopSeq 4 */
                        for (signed char i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            var_16 = ((/* implicit */unsigned short) min((((unsigned char) arr_9 [i_3] [i_3] [i_3])), (((/* implicit */unsigned char) var_1))));
                            var_17 = ((/* implicit */_Bool) max((max((var_13), (((/* implicit */long long int) arr_6 [i_3 - 4] [3] [3] [(unsigned short)16])))), (((/* implicit */long long int) ((int) arr_6 [i_3 - 4] [i_3] [22U] [3LL])))));
                            var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_11)))))));
                            var_19 |= ((/* implicit */unsigned short) (+(((/* implicit */int) min((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (var_0))))));
                            var_20 = ((/* implicit */short) var_4);
                        }
                        /* vectorizable */
                        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                        {
                            var_21 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) var_13)) : (arr_2 [i_3 + 2])));
                            var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) (+(((/* implicit */int) arr_11 [18U] [i_0] [i_1] [i_1] [i_2] [i_3 + 3] [i_5])))))));
                            var_23 = ((/* implicit */_Bool) arr_9 [i_3] [i_3] [i_3]);
                        }
                        for (unsigned char i_6 = 2; i_6 < 22; i_6 += 1) 
                        {
                            var_24 -= ((/* implicit */unsigned int) arr_15 [i_0] [i_1] [i_2] [i_0] [i_6]);
                            var_25 = ((/* implicit */int) max((var_25), (var_14)));
                        }
                        for (long long int i_7 = 0; i_7 < 23; i_7 += 1) 
                        {
                            var_26 &= ((/* implicit */int) ((short) max((((/* implicit */long long int) arr_19 [i_3 - 2] [i_0])), (arr_18 [i_3 - 4] [i_1] [i_0]))));
                            arr_23 [i_3] = ((/* implicit */unsigned int) min((((min((var_3), (((/* implicit */unsigned long long int) var_14)))) - (min((var_9), (((/* implicit */unsigned long long int) var_12)))))), (((/* implicit */unsigned long long int) max((arr_20 [i_0] [i_3 - 2] [i_2] [i_0] [i_0] [(_Bool)1] [i_0]), (((/* implicit */unsigned int) ((int) (_Bool)0))))))));
                        }
                    }
                    var_27 = ((/* implicit */_Bool) ((((_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1]))) : (arr_2 [i_0]))))) : ((+(var_14)))));
                    var_28 *= max((min((((/* implicit */unsigned int) ((signed char) var_6))), (((unsigned int) arr_16 [i_0] [i_1] [i_2])))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) arr_20 [i_2] [(unsigned short)16] [(_Bool)1] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_4)))) : (((/* implicit */int) arr_0 [4LL]))))));
                    /* LoopSeq 2 */
                    for (int i_8 = 0; i_8 < 23; i_8 += 2) 
                    {
                        var_29 = ((/* implicit */signed char) var_6);
                        /* LoopSeq 3 */
                        for (signed char i_9 = 0; i_9 < 23; i_9 += 1) 
                        {
                            var_30 = ((/* implicit */_Bool) -7597952616243868126LL);
                            arr_29 [i_0] [i_2] [i_2] [(unsigned short)3] [i_0] [5LL] |= ((((/* implicit */_Bool) (-(((/* implicit */int) arr_28 [i_2]))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) 1433860797U)) : (((arr_5 [i_1] [21ULL] [15ULL]) - (((/* implicit */unsigned long long int) var_2)))))) : (max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) / (var_3))), (((var_6) ? (var_3) : (((/* implicit */unsigned long long int) var_14)))))));
                            var_31 |= ((/* implicit */int) (-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_0)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) - (arr_2 [i_8])))))));
                            arr_30 [i_0] [i_1] [i_2] [i_8] [i_9] = ((/* implicit */_Bool) var_4);
                        }
                        for (signed char i_10 = 2; i_10 < 21; i_10 += 1) 
                        {
                            arr_35 [i_0] [(short)4] [i_0] [(signed char)20] [i_0] [i_10] [i_0] = ((/* implicit */unsigned char) ((unsigned int) (-(var_7))));
                            var_32 = ((/* implicit */long long int) ((_Bool) ((_Bool) min((((/* implicit */long long int) arr_20 [i_0] [(signed char)21] [i_1] [i_0] [i_1] [i_0] [i_10])), (var_2)))));
                            var_33 = ((/* implicit */unsigned long long int) min((((/* implicit */int) arr_31 [i_1] [i_2] [i_10] [i_10 - 1])), ((+(((/* implicit */int) arr_8 [i_0] [i_2] [i_8] [i_10]))))));
                            var_34 = ((/* implicit */short) ((var_5) ? (min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [i_0] [i_10] [i_0] [i_0])) && (((/* implicit */_Bool) (signed char)4))))), ((+(arr_18 [(_Bool)1] [21ULL] [i_10]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_0] [(signed char)11] [i_0] [i_0] [i_0] [9])))));
                        }
                        for (long long int i_11 = 0; i_11 < 23; i_11 += 1) 
                        {
                            arr_39 [i_0] [i_1] [(signed char)7] [(signed char)7] [i_11] = ((/* implicit */signed char) (+(((((((/* implicit */_Bool) arr_11 [(short)16] [i_11] [i_1] [14] [i_2] [i_8] [(short)16])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (12412934657244601635ULL))) | (((/* implicit */unsigned long long int) var_10))))));
                            var_35 = ((/* implicit */short) max((var_35), (((/* implicit */short) var_10))));
                            arr_40 [i_11] [i_1] [i_2] [i_8] [i_11] [i_11] [i_11] = ((/* implicit */unsigned short) (+((((_Bool)1) ? (16881391866934386474ULL) : (((/* implicit */unsigned long long int) -567580947))))));
                            var_36 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_27 [(signed char)1] [(signed char)1] [i_2] [i_8] [i_8] [i_11])) ? (var_10) : (var_10))))))));
                            var_37 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) arr_16 [i_2] [i_2] [2ULL])), (((((_Bool) var_2)) ? ((-(var_10))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_6)))))))));
                        }
                        /* LoopSeq 2 */
                        for (short i_12 = 0; i_12 < 23; i_12 += 1) 
                        {
                            var_38 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) ((signed char) var_13))) != (((/* implicit */int) var_4))))) >> (((((((/* implicit */_Bool) arr_32 [i_0] [17U] [i_1] [i_2] [i_8] [i_8] [i_12])) ? (arr_32 [i_0] [i_1] [i_1] [i_2] [i_8] [i_8] [i_12]) : (arr_32 [i_0] [i_1] [(signed char)19] [(signed char)19] [i_2] [(signed char)19] [i_12]))) - (2973781244346490347LL)))));
                            arr_43 [i_0] [i_1] [19U] [i_8] [i_12] [i_12] = ((/* implicit */int) (~(((((/* implicit */_Bool) arr_32 [i_0] [(_Bool)1] [i_0] [i_1] [i_2] [i_8] [i_12])) ? (arr_32 [i_0] [i_1] [i_2] [i_8] [18] [i_8] [i_12]) : (var_2)))));
                            var_39 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? ((+(((/* implicit */int) arr_7 [i_1] [4])))) : ((~(var_14)))));
                            var_40 = ((/* implicit */_Bool) arr_14 [18LL] [i_0] [i_1] [i_2] [i_0] [i_12] [i_12]);
                        }
                        for (unsigned short i_13 = 0; i_13 < 23; i_13 += 2) 
                        {
                            var_41 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_37 [i_0] [i_1] [i_0] [i_8] [i_0] [i_13]) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_0] [i_1] [i_2] [6] [i_1])))))) : (min((arr_41 [i_0] [i_1] [i_13]), (((/* implicit */unsigned int) arr_14 [i_0] [i_1] [i_1] [i_2] [i_13] [i_13] [i_13]))))));
                            arr_47 [(unsigned short)9] [(unsigned short)9] [i_2] [(unsigned short)9] [i_0] &= ((/* implicit */unsigned char) min((((/* implicit */int) ((unsigned short) var_6))), (((((var_11) > (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [9ULL]))))) ? ((-(var_14))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_10 [(signed char)21] [i_8] [i_8] [i_2] [i_1] [16ULL])) : (((/* implicit */int) (short)4095))))))));
                        }
                    }
                    /* vectorizable */
                    for (unsigned long long int i_14 = 4; i_14 < 21; i_14 += 1) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned char i_15 = 0; i_15 < 23; i_15 += 4) 
                        {
                            var_42 = ((/* implicit */unsigned long long int) ((signed char) var_14));
                            var_43 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_14] [i_0] [i_1] [i_0] [i_0]))) : (arr_9 [i_14] [i_1] [i_0]))) != (((/* implicit */unsigned int) ((/* implicit */int) arr_45 [i_0] [i_14 - 3] [1ULL])))));
                            var_44 = ((/* implicit */signed char) ((short) arr_26 [i_14 - 3] [i_14] [(signed char)15] [(signed char)15] [i_14 - 2] [(signed char)19]));
                            var_45 = ((/* implicit */short) min((var_45), (((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_2] [i_1] [i_15] [i_14] [i_15])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_6))))))));
                        }
                        for (unsigned long long int i_16 = 0; i_16 < 23; i_16 += 1) 
                        {
                            var_46 = ((/* implicit */signed char) var_9);
                            var_47 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_51 [i_16] [i_0] [i_2] [i_0] [i_0]) : (var_7)))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((((/* implicit */int) var_8)) <= (((/* implicit */int) arr_53 [i_14] [i_16] [i_16])))))));
                        }
                        for (unsigned long long int i_17 = 0; i_17 < 23; i_17 += 1) 
                        {
                            arr_58 [i_14] [(signed char)12] = ((/* implicit */unsigned int) ((((_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_7 [i_2] [i_2])))) : (((((/* implicit */long long int) ((/* implicit */int) var_8))) & (var_13)))));
                            var_48 = ((/* implicit */short) ((arr_0 [i_14 + 2]) ? (var_9) : (((/* implicit */unsigned long long int) var_7))));
                            arr_59 [i_0] [i_0] [22] [i_14] [i_0] [i_0] [i_0] = var_12;
                            var_49 = ((/* implicit */unsigned int) var_4);
                        }
                        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                        {
                            var_50 = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_45 [i_0] [(_Bool)1] [i_2])))))));
                            var_51 = ((/* implicit */signed char) (((((~(567580938))) + (2147483647))) >> (((((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) var_11)) : (arr_61 [i_0] [(_Bool)1] [i_18]))) - (3241527016LL)))));
                        }
                        var_52 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) var_4))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) var_14)) | (var_10)))) : (var_13)));
                        var_53 = ((/* implicit */short) max((var_53), (((/* implicit */short) arr_32 [20LL] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))));
                        var_54 = ((/* implicit */_Bool) var_4);
                    }
                    var_55 = ((/* implicit */long long int) ((_Bool) max((((((/* implicit */_Bool) var_14)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_8)) : (var_14)))))));
                }
            } 
        } 
    } 
    var_56 = ((/* implicit */short) var_2);
}
