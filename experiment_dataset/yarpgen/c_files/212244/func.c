/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212244
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
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        arr_2 [i_0] = min((max((arr_0 [i_0]), (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])))), (((/* implicit */unsigned long long int) (-(var_2)))));
        var_15 = ((/* implicit */signed char) (((_Bool)1) ? (((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)61))))) : (((/* implicit */unsigned long long int) ((long long int) arr_1 [i_0] [(_Bool)1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((684570133U) ^ (((/* implicit */unsigned int) var_11)))))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 2) 
    {
        /* LoopSeq 1 */
        for (int i_2 = 0; i_2 < 16; i_2 += 4) 
        {
            arr_7 [(signed char)14] [(signed char)14] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1] [i_2])) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1]))))))));
            arr_8 [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) ((_Bool) arr_3 [i_1] [i_1])))));
            arr_9 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */int) var_14)) <= (((/* implicit */int) (signed char)6)))) ? (((arr_1 [i_1] [i_2]) ? (((/* implicit */int) arr_1 [i_1] [i_2])) : (((/* implicit */int) arr_1 [i_1] [i_2])))) : (((((/* implicit */_Bool) (unsigned short)57197)) ? (((/* implicit */int) (signed char)-15)) : (((/* implicit */int) (unsigned char)195))))));
        }
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
        {
            arr_12 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) var_2);
            arr_13 [i_1] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_0 [i_1]) : (arr_0 [i_1])))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (_Bool)1)))) : (arr_6 [i_1] [i_1])));
            arr_14 [0LL] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (arr_0 [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_1])))));
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
        {
            /* LoopSeq 2 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                arr_22 [i_1] = ((((/* implicit */_Bool) (((((~(((/* implicit */int) arr_19 [i_1] [i_4])))) + (2147483647))) >> (((((/* implicit */_Bool) arr_4 [(unsigned short)5])) ? (((/* implicit */int) arr_16 [i_1])) : (((/* implicit */int) (unsigned char)61))))))) || (((/* implicit */_Bool) ((((((/* implicit */_Bool) var_4)) ? (arr_6 [i_1] [i_4]) : (arr_6 [i_1] [(signed char)4]))) >> (((/* implicit */int) (!(((/* implicit */_Bool) 17862865034690179903ULL)))))))));
                arr_23 [(_Bool)1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-113)) ? (((/* implicit */int) (signed char)90)) : (((/* implicit */int) (unsigned short)194))))) ? (max((-14), (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((signed char) (unsigned char)208)))));
                var_16 = ((/* implicit */_Bool) max((var_16), (((((((/* implicit */_Bool) (-(var_7)))) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_8)), (arr_19 [i_1] [i_1])))) : (((/* implicit */int) arr_10 [i_5])))) != (((((/* implicit */_Bool) max((17862865034690179912ULL), (((/* implicit */unsigned long long int) (unsigned char)10))))) ? (((/* implicit */int) arr_21 [i_1])) : ((+(((/* implicit */int) arr_5 [i_1] [i_1]))))))))));
            }
            for (signed char i_6 = 0; i_6 < 16; i_6 += 3) 
            {
                /* LoopSeq 2 */
                for (signed char i_7 = 0; i_7 < 16; i_7 += 3) 
                {
                    arr_30 [(_Bool)1] [i_1] [i_6] [(_Bool)1] [i_7] = ((/* implicit */signed char) ((((((/* implicit */_Bool) 3668840478U)) ? (((/* implicit */int) arr_10 [i_4])) : (((/* implicit */int) arr_10 [i_1])))) * (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_10 [i_7])) : (((/* implicit */int) arr_10 [i_1]))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_8 = 1; i_8 < 15; i_8 += 3) 
                    {
                        var_17 += arr_29 [i_8] [i_8] [i_8 + 1] [i_4] [i_4];
                        var_18 *= ((/* implicit */signed char) arr_18 [i_8 + 1] [i_8 + 1]);
                        var_19 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (_Bool)1)))))));
                        var_20 = ((/* implicit */signed char) ((unsigned long long int) arr_11 [i_8 - 1] [i_8 - 1]));
                    }
                }
                /* vectorizable */
                for (int i_9 = 0; i_9 < 16; i_9 += 2) 
                {
                    var_21 += ((/* implicit */_Bool) (-(((int) arr_5 [i_4] [i_1]))));
                    var_22 = ((/* implicit */signed char) (+(((/* implicit */int) arr_3 [i_1] [i_6]))));
                }
                arr_37 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */long long int) max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)3)) : (((/* implicit */int) arr_11 [i_1] [i_1])))), (((/* implicit */int) var_4))))) == (arr_24 [i_1] [i_4])));
                var_23 = ((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), (-1970528463)));
                arr_38 [i_6] [i_4] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_11 [i_4] [i_6])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_21 [i_4])) : (((/* implicit */int) var_10))))) : (((long long int) var_11))));
                /* LoopSeq 4 */
                for (unsigned short i_10 = 1; i_10 < 15; i_10 += 2) 
                {
                    var_24 = ((/* implicit */_Bool) max((var_24), (((((/* implicit */unsigned long long int) ((((((/* implicit */int) var_12)) >= (((/* implicit */int) arr_3 [i_1] [i_4])))) ? (((/* implicit */int) (signed char)63)) : (var_11)))) != (max((var_7), (((/* implicit */unsigned long long int) (_Bool)1))))))));
                    var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((-1LL), ((((_Bool)1) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)60)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((4294967275U) < (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned char)10))))))))) : ((+(21ULL)))));
                    var_26 |= ((/* implicit */signed char) max((((/* implicit */unsigned int) var_10)), (((((/* implicit */_Bool) arr_4 [i_4])) ? (((/* implicit */unsigned int) arr_4 [i_1])) : (arr_18 [i_1] [i_1])))));
                }
                for (signed char i_11 = 0; i_11 < 16; i_11 += 3) /* same iter space */
                {
                    var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((var_12) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (_Bool)1))))), (max((arr_28 [i_1] [i_4] [i_1] [i_11] [i_1]), (4294967275U)))))) ? (((unsigned int) var_13)) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_36 [i_1] [i_4] [i_1] [i_11] [i_11])) ? (((/* implicit */int) arr_19 [i_11] [i_11])) : (((/* implicit */int) arr_1 [i_1] [i_1]))))) <= (max((((/* implicit */long long int) var_9)), (var_13)))))))));
                    /* LoopSeq 1 */
                    for (signed char i_12 = 0; i_12 < 16; i_12 += 4) 
                    {
                        var_28 = ((/* implicit */signed char) max((var_5), (((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned int) arr_20 [5] [5] [i_6])), (var_1))) | (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_1] [i_1] [i_6] [i_6] [i_12]))))))));
                        arr_45 [(unsigned short)1] [i_4] [i_4] [i_11] = ((/* implicit */long long int) (~(1803191727)));
                        arr_46 [i_4] [12] [i_11] [i_11] [i_11] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_27 [i_1] [i_4] [i_4] [i_12])), (10241390114940633ULL)))) ? (((((/* implicit */_Bool) var_5)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_12] [i_1] [i_6] [i_4]))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)255)))))))) ? (((((/* implicit */int) var_3)) - (((/* implicit */int) min((((/* implicit */signed char) arr_29 [i_1] [i_1] [i_1] [i_11] [i_1])), (var_4)))))) : (((/* implicit */int) ((arr_31 [i_1]) && (arr_31 [i_1]))))));
                        arr_47 [i_1] [i_11] [i_6] [i_11] [i_11] [11ULL] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) == (4294967289U)))) >> (((((/* implicit */int) max((var_8), (arr_40 [i_1] [i_4] [i_4] [i_6] [i_11] [i_12])))) - (37)))))) ? (((/* implicit */long long int) ((/* implicit */int) min(((signed char)104), (((/* implicit */signed char) (_Bool)1)))))) : (var_2)));
                        arr_48 [i_11] [i_11] [i_6] [i_6] [i_12] = ((/* implicit */unsigned char) ((long long int) max((((/* implicit */unsigned long long int) var_2)), (arr_42 [i_1] [i_1] [i_1] [i_1] [i_1]))));
                    }
                    var_29 &= ((/* implicit */unsigned short) (unsigned char)246);
                }
                for (signed char i_13 = 0; i_13 < 16; i_13 += 3) /* same iter space */
                {
                    var_30 = ((/* implicit */_Bool) (unsigned char)83);
                    var_31 = ((/* implicit */_Bool) (-((~(((/* implicit */int) arr_15 [i_13]))))));
                    var_32 = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) max((var_5), (arr_42 [(_Bool)1] [i_1] [i_4] [i_4] [i_13])))) ? (((((/* implicit */_Bool) (unsigned char)74)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_13] [i_6] [i_4] [i_1]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-40)) ? (((/* implicit */int) arr_29 [i_1] [i_1] [i_6] [i_4] [i_1])) : (((/* implicit */int) var_4))))))));
                }
                for (signed char i_14 = 0; i_14 < 16; i_14 += 3) /* same iter space */
                {
                    arr_54 [(_Bool)1] [i_14] [(_Bool)1] [i_4] [i_14] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)126)) ? (3668840478U) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))));
                    /* LoopSeq 1 */
                    for (signed char i_15 = 0; i_15 < 16; i_15 += 1) 
                    {
                        arr_58 [i_15] [i_6] [i_14] [i_6] [i_14] [i_4] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((-2122123810), (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_15])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)37))) : (var_2)))) ? (((((/* implicit */_Bool) arr_0 [i_1])) ? (2481611115324578795ULL) : (((/* implicit */unsigned long long int) var_13)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_1])))))));
                        arr_59 [i_14] [i_14] [15U] [(_Bool)1] [i_14] [i_14] [i_15] = ((/* implicit */int) min(((-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) / (var_5))))), (((/* implicit */unsigned long long int) arr_16 [i_4]))));
                    }
                    var_33 = ((/* implicit */signed char) max((var_33), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (signed char)-22)) : (((/* implicit */int) arr_5 [i_4] [i_14]))))) ? (((((/* implicit */long long int) ((/* implicit */int) (signed char)-62))) + (9196007294745294964LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_49 [i_1] [(signed char)7])))))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */signed char) ((((/* implicit */int) (signed char)93)) >= (((/* implicit */int) (unsigned short)46692))))), ((signed char)93))))) : (var_6))))));
                    arr_60 [i_14] [i_4] = ((/* implicit */int) max((((/* implicit */long long int) arr_50 [i_1] [i_4])), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_56 [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned int) var_11)) : (0U)))) ? (((/* implicit */long long int) ((/* implicit */int) ((5559884650792703878LL) >= (((/* implicit */long long int) ((/* implicit */int) (signed char)93))))))) : (((((/* implicit */_Bool) 15965132958384972840ULL)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-40)))))))));
                }
            }
            arr_61 [i_1] [i_1] [i_4] = ((/* implicit */signed char) min((((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32170))) : (min((((/* implicit */unsigned long long int) (_Bool)0)), (var_5))))), (((18446744073709551615ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_53 [i_1] [i_4] [i_4] [i_1] [i_4] [i_4]))))))));
            arr_62 [i_4] [(_Bool)1] [i_1] = ((/* implicit */int) ((signed char) max((max((((/* implicit */unsigned long long int) var_10)), (var_5))), (((/* implicit */unsigned long long int) arr_39 [i_1] [i_4] [i_1] [i_4])))));
            var_34 = ((/* implicit */unsigned short) max((var_34), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) 13ULL)) ? (arr_6 [i_4] [i_1]) : (((/* implicit */long long int) 805367975U))))))) ^ ((((!(arr_31 [i_1]))) ? (((unsigned long long int) var_0)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_25 [i_1] [i_1] [6LL] [i_1])) ? (((/* implicit */int) arr_56 [i_1] [i_4] [i_1])) : (((/* implicit */int) arr_17 [i_1]))))))))))));
        }
        /* vectorizable */
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            arr_66 [i_16] [i_16] = ((/* implicit */unsigned long long int) arr_44 [i_16] [i_16] [i_16] [i_16] [i_16]);
            var_35 |= ((/* implicit */long long int) ((((/* implicit */int) arr_34 [i_1] [i_1] [i_16] [i_16] [(unsigned char)15] [i_16])) >> (((((/* implicit */int) var_3)) + (48)))));
        }
    }
    var_36 = ((/* implicit */unsigned int) max((var_36), (((/* implicit */unsigned int) var_8))));
}
