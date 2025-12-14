/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53827
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
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (short i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            for (int i_2 = 2; i_2 < 20; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */signed char) ((-733478705) ^ (((/* implicit */int) ((unsigned char) (signed char)81)))));
                    arr_7 [(short)5] [(short)5] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((((/* implicit */_Bool) (signed char)-81)) ? (((/* implicit */int) (unsigned short)55628)) : (((/* implicit */int) var_2)))) >= (((/* implicit */int) var_15))))) % (((/* implicit */int) (unsigned short)13410))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (long long int i_3 = 0; i_3 < 21; i_3 += 4) 
        {
            arr_12 [(unsigned short)6] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)32157)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-48))) : (0ULL)));
            var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) (signed char)-63))));
            /* LoopSeq 1 */
            for (unsigned char i_4 = 3; i_4 < 20; i_4 += 4) 
            {
                arr_15 [i_4] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_4 + 1] [i_4 - 2] [i_4 - 1])) & (((/* implicit */int) arr_10 [i_4 - 3] [i_4 + 1] [i_4 - 3]))))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)-90)) < (((/* implicit */int) (signed char)30))))) : ((-(((/* implicit */int) arr_10 [i_4 + 1] [i_4 - 1] [i_4 + 1]))))));
                /* LoopSeq 2 */
                for (short i_5 = 1; i_5 < 20; i_5 += 4) 
                {
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_5), (327135810)))) ? (var_18) : (((((/* implicit */_Bool) var_11)) ? (arr_16 [i_0] [i_3]) : (((/* implicit */long long int) var_6))))))) ? (((((/* implicit */int) (signed char)-82)) + (((/* implicit */int) (signed char)-31)))) : (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_9 [i_0])))))));
                    var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)9910)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-99))) : (((0U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)22202)))))))) ? ((((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)84))) : (8451540902366740357LL))) - (((/* implicit */long long int) 390398031U)))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
                }
                for (unsigned char i_6 = 4; i_6 < 19; i_6 += 4) 
                {
                    var_24 = ((((/* implicit */long long int) ((/* implicit */int) ((var_11) < (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))) / (((((/* implicit */_Bool) var_18)) ? (var_18) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_3] [i_3] [i_3] [i_4 - 3] [i_6] [i_6 - 3]))))));
                    var_25 = arr_11 [i_3] [i_3];
                    arr_21 [9] [i_3] [i_3] [i_4 + 1] [i_4] [i_4 + 1] = max((arr_5 [i_6 - 1] [i_4 - 3] [i_4] [i_4]), (((/* implicit */signed char) ((_Bool) (signed char)-48))));
                }
                /* LoopSeq 4 */
                for (signed char i_7 = 1; i_7 < 19; i_7 += 4) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        arr_27 [i_7] [i_7] [(unsigned char)3] [i_7] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-81)) + (2147483647))) << (((((/* implicit */int) (unsigned short)32177)) - (32177)))))) ? (((arr_16 [i_7 + 2] [i_4 - 3]) ^ (arr_16 [i_7 + 2] [i_4 - 3]))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_16 [i_7 + 1] [i_4 - 1]) == (arr_16 [i_7 + 2] [i_4 - 2])))))));
                        arr_28 [i_0] [i_0] [i_7] [i_8] = ((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) arr_2 [i_7 + 1])), (var_13))) == (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_26 [i_0])) || (((/* implicit */_Bool) var_17)))) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_11))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) var_2)))))))))));
                    }
                    for (unsigned short i_9 = 1; i_9 < 19; i_9 += 4) 
                    {
                        var_26 = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) arr_11 [i_4 - 2] [i_4 - 1])) ? (((/* implicit */unsigned long long int) arr_11 [i_4 + 1] [i_4 + 1])) : (var_7))));
                        var_27 |= ((/* implicit */unsigned int) ((((((/* implicit */int) arr_19 [i_7 + 2] [i_9 - 1] [i_9 - 1] [i_9 - 1])) * (((/* implicit */int) var_8)))) | (((/* implicit */int) ((_Bool) var_3)))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned int i_10 = 0; i_10 < 21; i_10 += 1) 
                    {
                        arr_34 [i_7] [i_3] [13LL] [13LL] [13LL] [13LL] [13LL] = ((/* implicit */unsigned char) (~(((((/* implicit */int) var_9)) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [9LL] [9LL] [9LL])))))))));
                        var_28 = ((/* implicit */unsigned short) ((min((((/* implicit */unsigned long long int) (short)16696)), (4029791847364811508ULL))) >> (((((var_19) / (((/* implicit */int) var_14)))) / (((/* implicit */int) (short)-30311))))));
                    }
                    var_29 = ((/* implicit */unsigned int) arr_29 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]);
                }
                for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) /* same iter space */
                {
                    arr_38 [i_11] [i_11 - 1] [i_11] [i_11] [i_3] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_31 [i_11 - 1] [i_11] [i_11] [i_11] [i_11]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_17)))))) ? (((((/* implicit */_Bool) (unsigned char)209)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 3666361276U)))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) | (2477669098U))))));
                    var_30 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) var_1)))), (((int) var_6))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_3)) : ((~(((/* implicit */int) (unsigned char)3)))))) : (((/* implicit */int) var_12))));
                    arr_39 [(unsigned char)8] [i_11] = ((/* implicit */unsigned short) max((((arr_17 [i_4 - 1]) & (((/* implicit */unsigned long long int) arr_30 [i_4 - 3])))), (((/* implicit */unsigned long long int) ((((var_18) | (var_18))) | (((/* implicit */long long int) var_11)))))));
                    arr_40 [i_4] [i_11] [i_11] [i_0] = ((/* implicit */signed char) ((int) ((int) ((((/* implicit */_Bool) 1550476367)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-119))) : (18446744073709551588ULL)))));
                }
                for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        var_31 = ((/* implicit */_Bool) (((_Bool)1) ? (-246547635) : (((/* implicit */int) (unsigned short)5570))));
                        var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) arr_29 [(unsigned char)16] [i_13] [i_3] [i_12 - 1] [i_3] [i_3] [i_0]))));
                    }
                    var_33 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_24 [i_12] [i_12] [i_12 - 1] [i_12] [i_12])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [i_3])))))) : ((~(var_13))))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) + (((((/* implicit */_Bool) (unsigned char)242)) ? (arr_30 [i_4]) : (((/* implicit */int) (unsigned short)55628)))))))));
                    /* LoopSeq 2 */
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        var_34 = ((/* implicit */short) min((var_34), (((/* implicit */short) ((var_16) ? (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_17))))) + (((((/* implicit */_Bool) 2477669101U)) ? (((/* implicit */unsigned long long int) 1817298195U)) : (18446744073709551612ULL))))) : ((~(max((var_13), (((/* implicit */unsigned long long int) var_2)))))))))));
                        arr_49 [i_0] [i_3] [i_4 - 3] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) ((((/* implicit */int) var_2)) % (var_6))))) ? ((+(((/* implicit */int) ((((/* implicit */int) var_10)) != (var_5)))))) : (((/* implicit */int) ((_Bool) min((((/* implicit */int) arr_4 [i_3] [i_3] [i_3])), (-1590476813)))))));
                        var_35 = ((/* implicit */unsigned short) (-((+(arr_14 [i_12 - 1] [i_12 - 1] [i_0])))));
                    }
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)9561)) || (((_Bool) (signed char)-108))));
                        arr_53 [i_15] [(signed char)2] [i_0] = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) arr_10 [i_4 - 1] [i_4 - 2] [i_12 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)19))) : (0ULL))));
                    }
                }
                for (unsigned short i_16 = 2; i_16 < 18; i_16 += 4) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) /* same iter space */
                    {
                        var_37 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((var_5) ^ (((/* implicit */int) arr_45 [i_17] [i_17] [i_0] [i_16] [i_0] [(short)13] [i_0]))))) | (1607552847572441767LL)));
                        var_38 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967293U)) ? (((/* implicit */int) (unsigned char)26)) : (((/* implicit */int) arr_5 [i_3] [i_3] [i_3] [i_3]))))) % (4130558932U)));
                        var_39 = ((/* implicit */unsigned short) ((((((/* implicit */int) (signed char)0)) + (((/* implicit */int) arr_50 [i_3] [i_3] [i_16 - 1])))) < (((/* implicit */int) arr_37 [i_16 - 2] [i_0] [(signed char)20] [15] [(signed char)20]))));
                        var_40 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_4 + 1] [i_17])) || (((/* implicit */_Bool) arr_0 [i_4 - 1] [i_4 - 1]))));
                    }
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) /* same iter space */
                    {
                        var_41 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) ? (384644628) : (((/* implicit */int) (signed char)74))))) ? (((/* implicit */int) (unsigned char)141)) : (((/* implicit */int) (unsigned char)178))));
                        var_42 = ((((/* implicit */_Bool) arr_31 [i_16 - 2] [i_0] [i_16 - 2] [i_16 - 2] [i_16])) ? (((((/* implicit */int) (signed char)-9)) / (((/* implicit */int) (signed char)-95)))) : (((/* implicit */int) arr_1 [(signed char)8])));
                        arr_61 [i_0] [i_3] = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_4 + 1] [i_16 - 1])) ? (var_4) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)28743)) ? (((/* implicit */int) (signed char)-120)) : (((/* implicit */int) arr_22 [i_0])))))))), (((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (((/* implicit */unsigned long long int) min((var_0), (((/* implicit */unsigned int) (signed char)(-127 - 1)))))) : ((~(16371587262492018991ULL)))))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned long long int i_19 = 1; i_19 < 20; i_19 += 4) 
                    {
                        var_43 = ((/* implicit */signed char) max((((/* implicit */int) ((var_13) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (signed char)108))))))), (((((/* implicit */int) (unsigned short)55622)) << (((((((/* implicit */int) (signed char)-19)) + (37))) - (5)))))));
                        arr_64 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) min((((unsigned int) ((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */int) arr_5 [1ULL] [(unsigned short)6] [(_Bool)1] [i_0])) : (((/* implicit */int) var_12))))), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) > (var_7))))));
                        var_44 *= ((/* implicit */unsigned int) ((((unsigned long long int) ((var_6) != (((/* implicit */int) arr_59 [(unsigned short)18]))))) / (((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_14 [i_4 - 3] [i_16 + 3] [i_19 + 1])) ^ (1607552847572441779LL))))));
                        arr_65 [i_3] [(unsigned short)6] [i_3] |= ((/* implicit */int) max((((long long int) arr_19 [i_0] [i_4 + 1] [i_16 - 2] [i_0])), (((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) var_18)) ? (1305669658) : (arr_43 [i_4] [i_4] [i_3] [i_0])))))));
                    }
                    for (unsigned short i_20 = 0; i_20 < 21; i_20 += 1) 
                    {
                        var_45 = ((/* implicit */short) (unsigned char)124);
                        var_46 = ((/* implicit */unsigned int) max((var_46), (min((((/* implicit */unsigned int) (unsigned char)139)), (2433088149U)))));
                        var_47 = ((/* implicit */unsigned char) max((var_47), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) 1861879147U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-74))) : (4130558936U))) >> (((((((arr_24 [i_0] [i_0] [i_4] [i_16] [i_0]) == (((/* implicit */long long int) ((/* implicit */int) var_1))))) ? (max((var_13), (7374818821642185352ULL))) : (arr_63 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) - (17278849776636043205ULL))))))));
                    }
                }
            }
            var_48 = ((/* implicit */unsigned char) min((((((((/* implicit */unsigned long long int) -1651871761)) == (arr_63 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) ? (((7348670785333554696ULL) + (((/* implicit */unsigned long long int) arr_9 [i_0])))) : (((/* implicit */unsigned long long int) 146478847U)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6226514140564395999LL)) ? (((1861879147U) % (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-19))))) : (3708078710U))))));
        }
        for (unsigned int i_21 = 0; i_21 < 21; i_21 += 4) 
        {
            var_49 ^= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_60 [i_0] [i_21])) : (((/* implicit */int) var_14))))) / (var_13)));
            /* LoopSeq 1 */
            for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
            {
                var_50 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) 3708078734U))) ? (((/* implicit */unsigned int) var_6)) : (((((/* implicit */_Bool) max((var_15), (var_12)))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((var_15), (((/* implicit */unsigned char) var_10)))))) : (min((var_4), (((/* implicit */unsigned int) var_2))))))));
                var_51 = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */int) (unsigned char)197)) >> (((((/* implicit */int) arr_59 [i_0])) - (31981))))));
                /* LoopNest 2 */
                for (short i_23 = 2; i_23 < 20; i_23 += 1) 
                {
                    for (unsigned char i_24 = 2; i_24 < 19; i_24 += 4) 
                    {
                        {
                            arr_77 [i_24] [i_23] [i_23] [i_23] [i_23] [i_0] [i_0] = ((unsigned char) ((((/* implicit */int) (signed char)81)) / ((-(((/* implicit */int) (signed char)-8))))));
                            arr_78 [i_0] [i_0] [8] [i_0] [i_0] [i_0] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_70 [(unsigned char)3] [i_23 + 1] [i_23 - 1] [i_23]) ? (((/* implicit */int) arr_70 [i_23] [i_23 - 1] [i_23 - 2] [i_23])) : (((/* implicit */int) var_16))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_44 [i_24 + 2] [i_24] [i_21] [i_24 + 2] [i_23 - 2] [i_22] [i_21])))))) : (((arr_63 [i_23] [i_24 + 2] [i_24 - 1] [i_24 - 2] [i_24 - 2] [i_24]) + (arr_63 [i_21] [i_24 - 1] [i_21] [(short)5] [i_24 - 1] [i_24])))));
                            var_52 = ((/* implicit */int) (((((_Bool)0) ? (((/* implicit */int) (short)-32759)) : (((/* implicit */int) (short)30680)))) <= (((/* implicit */int) arr_10 [i_0] [i_0] [i_0]))));
                        }
                    } 
                } 
            }
            /* LoopSeq 1 */
            for (signed char i_25 = 0; i_25 < 21; i_25 += 1) 
            {
                /* LoopNest 2 */
                for (long long int i_26 = 0; i_26 < 21; i_26 += 4) 
                {
                    for (unsigned long long int i_27 = 0; i_27 < 21; i_27 += 4) 
                    {
                        {
                            arr_87 [i_21] [i_21] [i_25] = ((/* implicit */short) (_Bool)1);
                            var_53 = ((/* implicit */unsigned short) max((var_53), (((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_62 [i_0] [i_0] [i_0] [(signed char)20] [i_25] [i_26] [i_27]))) : (((((/* implicit */_Bool) (unsigned short)55628)) ? (((/* implicit */long long int) ((/* implicit */int) arr_58 [i_21] [i_21] [(unsigned short)0] [i_27]))) : (arr_24 [i_0] [i_21] [i_25] [i_26] [i_27]))))))))));
                            var_54 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_19)) ? (6134765290307558171ULL) : (arr_29 [i_0] [i_0] [i_21] [i_0] [(signed char)7] [i_0] [i_0])))) && ((!(((/* implicit */_Bool) arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                        }
                    } 
                } 
                var_55 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned char) (signed char)59)))));
            }
        }
        arr_88 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)121))) | (arr_41 [i_0] [i_0] [i_0] [(signed char)10])))) ? ((~(((/* implicit */int) ((arr_66 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) == (((/* implicit */int) var_14))))))) : (((/* implicit */int) var_9))));
    }
    for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
    {
        var_56 = ((/* implicit */signed char) min((((unsigned long long int) var_7)), (((/* implicit */unsigned long long int) arr_11 [(_Bool)1] [3LL]))));
        var_57 = ((/* implicit */int) min((var_57), (((((/* implicit */_Bool) (signed char)-76)) ? (((/* implicit */int) (unsigned char)31)) : (((/* implicit */int) (signed char)-122))))));
    }
    var_58 = ((/* implicit */unsigned int) ((((/* implicit */int) var_15)) > ((~(((/* implicit */int) var_1))))));
}
