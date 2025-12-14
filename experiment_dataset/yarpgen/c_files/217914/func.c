/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217914
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
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13; i_2 += 4) 
                {
                    for (int i_3 = 2; i_3 < 12; i_3 += 4) 
                    {
                        {
                            var_12 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) 18446744073709551615ULL)) ? (7ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) != (min((7ULL), (((/* implicit */unsigned long long int) (short)-8286)))))) ? (max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) - (6ULL))), (((/* implicit */unsigned long long int) arr_9 [i_0] [i_1] [i_0] [i_3] [i_3 - 2] [(unsigned char)10])))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_2] [i_3]))))))))));
                            var_13 = ((/* implicit */long long int) min((var_13), (var_3)));
                            var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) arr_9 [10] [i_2] [i_3] [i_3] [i_0] [i_0]))));
                            var_15 = ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned short)22303)) / (((/* implicit */int) var_7)))) >= (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_1)) ? (var_3) : (((/* implicit */long long int) var_8))))))));
                        }
                    } 
                } 
                var_16 = ((/* implicit */_Bool) max((var_16), ((!(((/* implicit */_Bool) arr_3 [i_1]))))));
                /* LoopSeq 2 */
                for (int i_4 = 0; i_4 < 13; i_4 += 1) 
                {
                    /* LoopSeq 1 */
                    for (int i_5 = 4; i_5 < 9; i_5 += 4) 
                    {
                        var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) var_8))));
                        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) (!(((/* implicit */_Bool) 18446744073709551607ULL)))))));
                        var_19 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)127), ((unsigned short)14508))))) % (max((((unsigned long long int) (signed char)78)), (((/* implicit */unsigned long long int) 1417427857))))));
                        /* LoopSeq 3 */
                        for (short i_6 = 1; i_6 < 12; i_6 += 4) 
                        {
                            arr_21 [i_0] [i_5] [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) arr_9 [i_0 - 1] [i_1] [i_0] [i_6] [3] [i_5 + 4])), ((~(12189030012667547669ULL)))));
                            arr_22 [i_0] [i_0 + 2] [i_0] [i_0] [(unsigned short)4] [(unsigned char)7] = ((/* implicit */short) ((var_2) | ((+(((/* implicit */int) arr_15 [i_5 - 4] [i_5] [i_5] [i_5 + 1] [i_5] [i_0]))))));
                        }
                        for (unsigned long long int i_7 = 2; i_7 < 11; i_7 += 4) 
                        {
                            arr_26 [i_7] [i_0] [i_4] [4LL] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((unsigned int) (unsigned short)65409));
                            var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((int) ((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_5] [i_0]))) % (((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0] [i_0] [i_7] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)232))) : (var_3)))))))));
                            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_25 [i_0]) | (((/* implicit */unsigned int) arr_17 [i_0 + 1] [i_1] [(short)5] [i_5] [i_7 - 1] [i_7 + 2]))))) ? ((-(((((/* implicit */_Bool) arr_6 [i_0] [3ULL] [(unsigned char)11] [(unsigned char)11])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)54652)))))) : (max((((((/* implicit */int) var_7)) * (((/* implicit */int) arr_1 [i_0] [i_4])))), (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))));
                        }
                        for (signed char i_8 = 3; i_8 < 12; i_8 += 3) 
                        {
                            arr_31 [i_0] [i_0] [i_0] [i_5] [i_0] [i_4] [i_0] = ((/* implicit */unsigned short) ((((1ULL) ^ (18446744073709551601ULL))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)21)))));
                            var_22 = ((/* implicit */unsigned short) ((((int) var_0)) | (max(((~(var_4))), (var_4)))));
                            var_23 = ((/* implicit */signed char) max((var_3), (((/* implicit */long long int) ((((/* implicit */unsigned int) arr_19 [i_0] [i_0] [i_0] [i_0] [i_0 + 3] [(short)2])) < (arr_25 [i_0]))))));
                        }
                    }
                    /* LoopSeq 3 */
                    for (short i_9 = 0; i_9 < 13; i_9 += 4) 
                    {
                        arr_35 [i_9] [i_0] [i_0] [(signed char)7] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) 1ULL)) ? (((/* implicit */int) (unsigned char)195)) : (((/* implicit */int) (unsigned char)255)))), (((/* implicit */int) (!(((((/* implicit */int) (signed char)-5)) == (((/* implicit */int) var_0)))))))));
                        var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) var_7))));
                        arr_36 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((unsigned char) 18446744073709551615ULL));
                        var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (max((arr_16 [i_0] [i_1] [i_9]), (255))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)13)))))))), (((((((/* implicit */_Bool) 0U)) ? (18446744073709551609ULL) : (((/* implicit */unsigned long long int) arr_34 [i_9] [i_9] [i_4] [i_9] [i_4] [0])))) << (((((((/* implicit */int) (unsigned short)35509)) | (((/* implicit */int) (signed char)78)))) - (35545))))))))));
                    }
                    for (int i_10 = 1; i_10 < 12; i_10 += 1) 
                    {
                        var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (signed char)-79)) ? (1589830941) : (((/* implicit */int) (unsigned short)43232)))) | (((/* implicit */int) arr_20 [i_4] [i_4] [i_4] [i_0 + 1] [i_10 - 1] [i_4])))))));
                        var_27 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32755)) ? (((/* implicit */long long int) (~(arr_25 [i_0])))) : (arr_8 [i_10 - 1] [i_0 + 1] [i_0 + 1])))) ? (((((/* implicit */_Bool) -246)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (unsigned char)0)))) : ((~(((/* implicit */int) var_7)))));
                        var_28 += ((/* implicit */unsigned char) ((int) ((arr_20 [i_0] [(_Bool)1] [8ULL] [i_10] [i_10] [i_4]) ? (((/* implicit */long long int) var_2)) : (9223372036854775807LL))));
                        var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_33 [i_0])) ? (((/* implicit */unsigned long long int) min((((arr_6 [i_0] [i_1] [(unsigned char)10] [i_10 - 1]) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_6))))), (((/* implicit */unsigned int) ((arr_33 [i_4]) < (arr_16 [(short)11] [(short)11] [i_10 + 1]))))))) : (((((/* implicit */_Bool) var_1)) ? (arr_23 [i_10 - 1] [i_10 + 1] [i_0 + 1] [i_0 + 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))))));
                    }
                    for (short i_11 = 0; i_11 < 13; i_11 += 4) 
                    {
                        var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)4)) ? (((((/* implicit */_Bool) ((688566910U) ^ (((/* implicit */unsigned int) 328294790))))) ? ((~(var_4))) : ((-(((/* implicit */int) (unsigned char)158)))))) : ((~(-328294784))))))));
                        /* LoopSeq 2 */
                        for (unsigned short i_12 = 0; i_12 < 13; i_12 += 4) 
                        {
                            var_31 = ((/* implicit */short) ((long long int) 12189030012667547669ULL));
                            var_32 = ((/* implicit */unsigned int) min((var_32), (((unsigned int) var_11))));
                            arr_45 [i_12] [i_11] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */int) var_5);
                        }
                        for (int i_13 = 0; i_13 < 13; i_13 += 3) 
                        {
                            var_33 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [i_0] [i_0] [i_4] [i_11] [i_4]))) : (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_16 [i_0] [6ULL] [(short)7])))))))));
                            var_34 = ((/* implicit */unsigned long long int) ((((unsigned int) var_3)) < (((/* implicit */unsigned int) (-(((/* implicit */int) var_9)))))));
                        }
                        var_35 = ((/* implicit */unsigned long long int) min((var_35), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(16022858067024677269ULL)))) ? (min((((/* implicit */unsigned long long int) var_10)), (0ULL))) : (((/* implicit */unsigned long long int) 67108863U))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */int) arr_20 [(unsigned char)10] [i_0] [(unsigned char)10] [(unsigned char)10] [i_4] [i_4])) < (((/* implicit */int) (unsigned short)6489))))))) : (12189030012667547669ULL)))));
                        var_36 = ((/* implicit */unsigned long long int) min((var_36), (((/* implicit */unsigned long long int) var_3))));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_14 = 0; i_14 < 13; i_14 += 4) 
                    {
                        for (signed char i_15 = 1; i_15 < 10; i_15 += 1) 
                        {
                            {
                                var_37 = ((/* implicit */short) (~(max(((~(arr_25 [i_0]))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_1)))))))));
                                arr_54 [i_0] [i_15] [i_4] [i_15 + 2] [i_4] = ((/* implicit */long long int) ((var_2) >= (arr_17 [i_0] [i_1] [i_14] [i_14] [i_15 + 1] [i_0])));
                            }
                        } 
                    } 
                    var_38 = ((/* implicit */unsigned int) max((var_38), (((/* implicit */unsigned int) (!(((max((((/* implicit */unsigned long long int) (unsigned char)21)), (1ULL))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)235))) == (2423886006684874360ULL))))))))))));
                    var_39 = ((/* implicit */unsigned long long int) min((var_39), (((/* implicit */unsigned long long int) arr_15 [i_0] [i_0] [i_4] [i_1] [i_0] [(unsigned char)4]))));
                }
                for (long long int i_16 = 0; i_16 < 13; i_16 += 4) 
                {
                    var_40 = ((/* implicit */signed char) max((var_40), (((/* implicit */signed char) min((((((/* implicit */_Bool) ((int) 8053063680ULL))) ? (((((/* implicit */_Bool) 15ULL)) ? (((/* implicit */int) arr_15 [i_0] [12ULL] [i_16] [(unsigned char)6] [6ULL] [i_16])) : (((/* implicit */int) arr_2 [i_16] [i_1] [i_16])))) : ((~(((/* implicit */int) (unsigned char)223)))))), (((int) (+(((/* implicit */int) (short)-12497))))))))));
                    var_41 += ((/* implicit */unsigned char) ((((arr_14 [4LL] [4LL] [(unsigned short)12]) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_8)))))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)6489)) == (((/* implicit */int) (short)12496))))) : (((/* implicit */int) ((signed char) var_11))))))));
                    var_42 = ((/* implicit */unsigned char) max((var_42), (((/* implicit */unsigned char) ((int) (signed char)-67)))));
                }
                var_43 = ((/* implicit */signed char) (~(((/* implicit */int) max((var_5), (((unsigned char) var_2)))))));
            }
        } 
    } 
    var_44 = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)11845))));
    var_45 |= ((/* implicit */unsigned int) min((((/* implicit */int) var_5)), ((~(var_2)))));
}
