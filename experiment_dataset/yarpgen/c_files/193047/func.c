/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193047
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
    var_12 = var_4;
    var_13 = var_8;
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (arr_1 [0ULL] [i_1]) : (((/* implicit */int) var_4))))) ? (((arr_1 [9ULL] [i_1]) - (((/* implicit */int) arr_0 [i_0] [i_0])))) : (((((/* implicit */_Bool) var_8)) ? (-353869102) : (((/* implicit */int) var_6))))))), (((((((/* implicit */_Bool) var_9)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1]))))))))));
                arr_4 [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((var_11) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0])))))) ? (arr_1 [i_0] [i_0]) : (((/* implicit */int) var_6)))) > (((/* implicit */int) ((max((((/* implicit */unsigned int) var_4)), (var_7))) > (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))))))));
                var_15 ^= ((/* implicit */unsigned int) var_10);
                /* LoopSeq 1 */
                for (signed char i_2 = 2; i_2 < 18; i_2 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2 + 1] [i_0] [i_2] [i_2 + 3])) ? (((var_2) + (((/* implicit */int) var_6)))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0]))))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) min((var_5), (arr_9 [i_0])))), (min((((/* implicit */unsigned short) (short)-1)), ((unsigned short)65525)))))) : (((/* implicit */int) ((min((((/* implicit */unsigned long long int) var_10)), (arr_8 [i_0] [i_2] [i_1] [i_0]))) == (min((((/* implicit */unsigned long long int) arr_9 [i_0])), (var_9))))))));
                            var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0])))))) ? (((/* implicit */int) min((var_4), (((/* implicit */unsigned short) arr_5 [i_3] [i_1] [i_0]))))) : ((~(((/* implicit */int) (unsigned short)65534))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_8 [i_0] [i_0] [i_0] [i_0]) > (((/* implicit */unsigned long long int) (~(var_0)))))))) : (var_7)));
                            var_18 = ((/* implicit */_Bool) var_11);
                        }
                        /* LoopSeq 3 */
                        for (unsigned int i_5 = 1; i_5 < 18; i_5 += 3) 
                        {
                            var_19 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_9 [i_0]))));
                            arr_15 [(_Bool)1] [i_3] [i_2 + 1] [i_3] [i_2] [i_2] [i_2] &= ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)208))) >= (8629709220689465014LL))))));
                            var_20 = max((((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_2 + 1] [i_0] [i_5 - 1] [i_5]))))), (((((/* implicit */_Bool) ((13045904547121023981ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_10)))))));
                            var_21 = ((/* implicit */_Bool) var_5);
                            var_22 = ((/* implicit */int) var_0);
                        }
                        for (unsigned int i_6 = 0; i_6 < 21; i_6 += 1) /* same iter space */
                        {
                            var_23 = ((/* implicit */int) ((((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65525))) : (arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) > (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_8), (((/* implicit */short) var_3)))))))) ? (min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_0] [i_3] [i_0] [i_1] [i_0]))) | (arr_7 [i_0] [i_0] [i_2] [i_0]))), (((/* implicit */unsigned long long int) min((9223372036854775807LL), (((/* implicit */long long int) var_4))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) (+(var_2)))) == (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0]))) : (var_9)))))))));
                            arr_20 [i_0] [i_1] [i_0] [i_2 + 3] [i_3] [i_3] [i_6] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))) ^ (var_7)))) ? (((/* implicit */int) arr_18 [i_0] [i_1] [i_1] [i_1] [i_1])) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_5))))))));
                            var_24 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) <= (arr_1 [i_1] [i_0])))), (max((((/* implicit */unsigned long long int) ((var_0) > (((/* implicit */long long int) ((/* implicit */int) var_4)))))), (13045904547121023971ULL)))));
                        }
                        for (unsigned int i_7 = 0; i_7 < 21; i_7 += 1) /* same iter space */
                        {
                            var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_7] [i_0]))) : (var_0)))) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (var_0))) : (((/* implicit */long long int) ((/* implicit */int) min((arr_0 [i_2 - 2] [i_0]), (arr_0 [i_0] [i_0])))))));
                            arr_25 [i_7] [i_7] [i_7] [i_7] [i_7] [i_0] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)255)) ? (((((/* implicit */_Bool) (short)-15)) ? (max((8611999592361258010ULL), (9834744481348293603ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : ((+(9834744481348293606ULL)))));
                            var_26 = ((/* implicit */unsigned short) min(((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775797LL)) ? (8611999592361257993ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-13)))))))), (((((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_3])))) == (((/* implicit */int) var_6))))));
                            var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_18 [i_0] [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_14 [i_0] [i_3] [i_2] [i_1] [i_0])) : (((/* implicit */int) var_1))))))) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0])))));
                        }
                    }
                    for (long long int i_8 = 3; i_8 < 18; i_8 += 3) 
                    {
                        var_28 = ((/* implicit */short) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_16 [i_2] [i_2 - 2] [i_2] [i_2 - 1] [i_2 - 2] [i_2] [i_2])) : (((/* implicit */int) arr_16 [i_2 + 3] [i_2 + 2] [i_2] [(signed char)17] [i_2 - 1] [i_2] [i_2])))) + (((/* implicit */int) ((((/* implicit */int) arr_16 [19LL] [i_2 + 1] [12ULL] [i_2] [i_2] [(short)15] [i_2])) != (((/* implicit */int) var_8)))))));
                        arr_28 [i_0] [i_1] [(unsigned short)15] [i_0] = ((/* implicit */unsigned short) var_1);
                    }
                    /* LoopSeq 2 */
                    for (unsigned short i_9 = 0; i_9 < 21; i_9 += 4) 
                    {
                        var_29 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_1))));
                        var_30 += ((/* implicit */long long int) (+(((/* implicit */int) var_5))));
                        var_31 |= ((/* implicit */unsigned char) ((((/* implicit */int) arr_9 [i_9])) <= (((/* implicit */int) (!((_Bool)1))))));
                        var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_9] [i_0] [i_0] [i_9] [i_0])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_10))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (arr_27 [i_0] [i_0] [i_2 + 3] [i_9] [i_1] [i_0])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((var_8), (((/* implicit */short) var_5))))))))) : (min((min((var_11), (((/* implicit */unsigned long long int) arr_13 [i_0])))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)31640))) - (9223372036854775782LL))))))));
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_11 = 0; i_11 < 21; i_11 += 4) 
                        {
                            var_33 = ((/* implicit */short) min((var_33), (((/* implicit */short) 5400839526588527642ULL))));
                            var_34 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_1))))) > (((-9223372036854775779LL) + (72057593970819072LL))))))) == (((arr_7 [i_2 + 2] [i_0] [i_2 + 3] [i_11]) & (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65521)) | (((/* implicit */int) (signed char)-12)))))))));
                            arr_36 [i_11] [i_10] [i_0] [(unsigned char)10] [i_0] = ((/* implicit */signed char) min((min((var_0), (((/* implicit */long long int) arr_18 [i_0] [i_2] [i_2 - 2] [i_2 + 1] [i_2 + 1])))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (arr_31 [i_2 - 1] [i_2] [i_2 + 3] [i_0]) : (((/* implicit */int) arr_18 [i_0] [i_2] [i_2 - 2] [i_2 - 1] [i_2 + 1])))))));
                        }
                        /* LoopSeq 4 */
                        for (unsigned short i_12 = 0; i_12 < 21; i_12 += 4) /* same iter space */
                        {
                            arr_39 [i_0] [i_1] [i_0] [i_0] [i_12] = ((/* implicit */short) min((((/* implicit */long long int) ((min((((/* implicit */unsigned int) var_1)), (arr_21 [i_12] [i_0] [i_2] [i_0] [17]))) + (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)109))))))))), ((~(((((/* implicit */_Bool) var_10)) ? (var_0) : (((/* implicit */long long int) arr_22 [i_0] [i_0] [i_0]))))))));
                            var_35 = ((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0]);
                        }
                        /* vectorizable */
                        for (unsigned short i_13 = 0; i_13 < 21; i_13 += 4) /* same iter space */
                        {
                            arr_44 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) < (var_11)))) : (((((/* implicit */_Bool) (short)6144)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_1))))));
                            var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((var_6) ? (((/* implicit */int) (short)-2128)) : (((/* implicit */int) arr_9 [i_0])))) : (((((/* implicit */_Bool) var_5)) ? (2147483640) : (((/* implicit */int) var_8))))));
                        }
                        /* vectorizable */
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            var_37 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_33 [i_0] [i_1])) ? (var_9) : (((((/* implicit */_Bool) 8611999592361258010ULL)) ? (arr_27 [i_0] [(_Bool)1] [9LL] [9LL] [i_10] [i_14]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_0] [i_0] [i_2] [i_2] [i_14])))))));
                            var_38 = ((/* implicit */long long int) arr_22 [i_2] [i_2 + 3] [i_2 + 3]);
                            var_39 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_11 [i_2] [i_2 + 3] [i_2] [i_2] [i_2 + 2])) ? (((/* implicit */int) arr_11 [i_2 + 1] [i_2 + 3] [i_2] [i_2] [i_2 - 1])) : (((/* implicit */int) arr_11 [i_10] [i_2 + 1] [i_2 + 1] [i_2 + 2] [i_2 + 2]))));
                            arr_47 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) var_9);
                            var_40 = ((/* implicit */signed char) (~(((((/* implicit */unsigned long long int) arr_46 [i_14] [13] [i_10] [i_2] [i_2] [i_1] [i_0])) - (arr_45 [i_0] [i_0] [i_0] [19LL] [i_10] [(signed char)5] [i_0])))));
                        }
                        for (int i_15 = 0; i_15 < 21; i_15 += 1) 
                        {
                            arr_51 [5ULL] [i_1] [2LL] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) var_11);
                            arr_52 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((max((((/* implicit */long long int) arr_6 [i_0] [i_15])), (var_0))), (((/* implicit */long long int) arr_5 [i_0] [i_0] [i_0])))))));
                        }
                        arr_53 [i_0] [i_1] [i_10] [i_0] = ((/* implicit */unsigned short) var_0);
                        arr_54 [i_0] [i_0] [i_0] [i_2 + 2] [i_10] = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6))))) / (var_9))) / (((/* implicit */unsigned long long int) ((arr_31 [0LL] [i_2] [i_2] [i_0]) / (arr_31 [i_2] [i_2] [i_2] [i_0]))))));
                    }
                }
                var_41 -= max((min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_1] [i_1] [i_1] [i_1]))) + (var_11))), (((/* implicit */unsigned long long int) max((var_10), (var_10)))))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_32 [5] [2ULL] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (arr_38 [i_1] [i_1] [i_1] [i_1] [(short)17] [i_0]))) | (arr_21 [i_1] [(unsigned char)12] [i_1] [(unsigned char)12] [18U])))));
            }
        } 
    } 
}
