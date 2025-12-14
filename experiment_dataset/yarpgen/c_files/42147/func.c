/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42147
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
    var_20 = ((/* implicit */long long int) ((var_14) < (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((var_7) > (((/* implicit */unsigned int) var_12))))) == (((/* implicit */int) var_6))))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_1 = 2; i_1 < 12; i_1 += 4) 
        {
            var_21 += ((/* implicit */long long int) ((unsigned char) (signed char)-1));
            var_22 = arr_3 [(unsigned short)2] [i_0];
            var_23 = ((/* implicit */short) ((arr_2 [i_1 + 1]) >> (((arr_2 [i_1 + 1]) - (8560765829430669215LL)))));
        }
        for (int i_2 = 0; i_2 < 13; i_2 += 3) 
        {
            /* LoopSeq 1 */
            for (int i_3 = 0; i_3 < 13; i_3 += 4) 
            {
                arr_10 [i_0] [i_2] [(unsigned char)6] [(unsigned char)3] = (i_2 % 2 == zero) ? (((((((/* implicit */_Bool) ((arr_5 [i_2] [i_2] [(unsigned char)1]) >> (((arr_8 [1LL] [i_2] [8]) - (748431294)))))) && (((/* implicit */_Bool) min((1896908961), (481825827)))))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0 + 1])) ^ (var_9)))) : (min((arr_6 [i_0 - 1] [i_2] [i_3] [i_2]), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [(unsigned short)0] [i_2] [i_2]))) : (var_13))))))) : (((((((/* implicit */_Bool) ((((arr_5 [i_2] [i_2] [(unsigned char)1]) + (9223372036854775807LL))) >> (((arr_8 [1LL] [i_2] [8]) - (748431294)))))) && (((/* implicit */_Bool) min((1896908961), (481825827)))))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0 + 1])) ^ (var_9)))) : (min((arr_6 [i_0 - 1] [i_2] [i_3] [i_2]), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [(unsigned short)0] [i_2] [i_2]))) : (var_13)))))));
                var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) arr_9 [i_2] [i_2] [i_2] [2U])) & (((var_18) ^ (((/* implicit */long long int) arr_3 [i_2] [(signed char)11]))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_14) & (((/* implicit */long long int) var_5))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) arr_3 [i_2] [i_3])) <= (arr_2 [i_3]))))) : (min((((/* implicit */long long int) arr_1 [i_2])), (var_4))))))));
                var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((unsigned char) (signed char)0)))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_4 = 0; i_4 < 13; i_4 += 1) 
                {
                    arr_13 [i_0] [i_2] [i_2] [4LL] [i_3] [i_4] = ((/* implicit */int) var_17);
                    var_26 = ((/* implicit */long long int) ((unsigned char) arr_7 [4LL] [4LL] [i_0 + 1] [i_0 - 1]));
                }
                /* vectorizable */
                for (signed char i_5 = 0; i_5 < 13; i_5 += 2) 
                {
                    var_27 = ((/* implicit */long long int) ((unsigned int) ((short) var_5)));
                    var_28 = ((/* implicit */long long int) min((var_28), (var_2)));
                    var_29 = ((int) var_5);
                    /* LoopSeq 1 */
                    for (int i_6 = 0; i_6 < 13; i_6 += 3) 
                    {
                        arr_20 [i_0] [i_2] [11U] [i_2] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) arr_3 [(unsigned char)3] [i_0])) | (arr_5 [i_2] [i_2] [i_3])))) && (((((/* implicit */int) arr_4 [(signed char)2] [i_2] [2U])) <= (((/* implicit */int) var_6))))));
                        arr_21 [i_2] [i_2] [i_3] [i_5] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_12))))) > (((/* implicit */int) arr_12 [i_0 + 1] [i_0] [i_2] [i_0 - 2] [i_0]))));
                    }
                }
            }
            arr_22 [i_2] = ((/* implicit */int) var_5);
        }
        arr_23 [i_0] = ((/* implicit */short) max((((((/* implicit */_Bool) ((unsigned int) (signed char)(-127 - 1)))) ? (((var_7) & (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_7 [i_0] [i_0] [i_0] [i_0 - 2])))))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)146)) << (((/* implicit */int) (signed char)0)))))));
    }
    for (long long int i_7 = 0; i_7 < 25; i_7 += 2) 
    {
        arr_27 [i_7] = ((/* implicit */unsigned short) ((((int) ((((/* implicit */_Bool) arr_26 [i_7])) ? (((/* implicit */int) arr_26 [i_7])) : (var_9)))) < (((/* implicit */int) arr_24 [i_7] [i_7]))));
        var_30 = ((/* implicit */long long int) min((var_30), (((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) (unsigned char)0))) ? (((/* implicit */int) (unsigned char)146)) : (((/* implicit */int) ((((((/* implicit */int) (signed char)-32)) + (2147483647))) <= (((/* implicit */int) max(((unsigned char)8), ((unsigned char)4))))))))))));
        var_31 = ((/* implicit */short) min((((signed char) ((((/* implicit */int) arr_24 [5LL] [i_7])) == (var_9)))), (((/* implicit */signed char) ((min((((/* implicit */long long int) 1069547520)), (-2176852493369486484LL))) <= (((((/* implicit */long long int) ((/* implicit */int) arr_25 [i_7] [i_7]))) + (var_0))))))));
    }
    for (unsigned short i_8 = 0; i_8 < 19; i_8 += 4) 
    {
        var_32 = ((/* implicit */unsigned int) ((((((((((/* implicit */_Bool) var_14)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_8] [i_8]))))) + (9223372036854775807LL))) >> (((((((/* implicit */_Bool) var_17)) ? (var_17) : (var_4))) + (9166087981887393647LL))))) ^ (((long long int) ((((/* implicit */_Bool) arr_26 [5LL])) ? (((/* implicit */int) arr_25 [i_8] [i_8])) : (((/* implicit */int) arr_30 [5])))))));
        /* LoopNest 2 */
        for (unsigned short i_9 = 0; i_9 < 19; i_9 += 3) 
        {
            for (unsigned char i_10 = 0; i_10 < 19; i_10 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (short i_11 = 3; i_11 < 16; i_11 += 4) 
                    {
                        arr_37 [i_9] = ((((/* implicit */_Bool) min((((/* implicit */int) arr_26 [(signed char)12])), (var_16)))) ? (max((((((arr_29 [i_8]) + (9223372036854775807LL))) >> (((var_17) + (9166087981887393681LL))))), (((/* implicit */long long int) ((arr_34 [i_10] [10LL]) | (((/* implicit */int) arr_25 [i_8] [(unsigned char)11]))))))) : (((/* implicit */long long int) ((/* implicit */int) ((short) max((arr_36 [i_8] [i_8] [i_8]), (arr_33 [13] [13] [i_9] [i_8])))))));
                        var_33 = ((/* implicit */short) ((((((/* implicit */_Bool) var_8)) ? (((((/* implicit */int) arr_30 [i_11])) | (((/* implicit */int) var_3)))) : (((/* implicit */int) arr_33 [i_9] [i_9] [i_9] [i_8])))) >= (((/* implicit */int) arr_24 [i_8] [i_8]))));
                        arr_38 [(unsigned char)7] [i_9] = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_9] [i_8])) ? (((/* implicit */long long int) var_12)) : (var_2)))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) < (var_7)))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_26 [5LL]))) >= (var_2)))))) <= (min((((((((/* implicit */int) arr_36 [2] [i_9] [i_10])) + (2147483647))) >> (((var_7) - (1299867742U))))), (((/* implicit */int) ((((/* implicit */_Bool) arr_29 [i_8])) || (((/* implicit */_Bool) var_7)))))))));
                    }
                    for (int i_12 = 0; i_12 < 19; i_12 += 3) 
                    {
                        arr_41 [i_8] [i_9] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((((/* implicit */int) arr_24 [i_10] [i_9])), (arr_40 [i_9] [(short)0] [i_9] [(unsigned char)1] [i_8] [i_9])))) ? (((((/* implicit */int) arr_26 [6LL])) / (((/* implicit */int) arr_33 [1U] [i_9] [i_9] [i_9])))) : (max((((/* implicit */int) arr_26 [(unsigned char)17])), (var_15))))) < (((/* implicit */int) ((((/* implicit */int) max((arr_26 [i_9]), (((/* implicit */short) arr_32 [9U]))))) != (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-73)), ((unsigned char)0)))))))));
                        arr_42 [i_8] [(short)2] [i_8] [i_9] = ((/* implicit */long long int) max((((/* implicit */unsigned char) var_10)), (((unsigned char) max((var_3), (arr_25 [i_10] [3LL]))))));
                    }
                    arr_43 [i_8] [i_9] [i_9] [i_10] = ((/* implicit */unsigned short) var_8);
                    /* LoopSeq 2 */
                    for (short i_13 = 1; i_13 < 18; i_13 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (long long int i_14 = 0; i_14 < 19; i_14 += 1) /* same iter space */
                        {
                            arr_49 [i_9] [i_9] [i_9] = ((/* implicit */int) arr_26 [i_10]);
                            arr_50 [i_14] [i_14] [(unsigned char)9] [i_9] [i_9] [i_9] [i_8] = ((/* implicit */short) ((((/* implicit */int) arr_26 [i_9])) - (max((((((/* implicit */int) var_1)) & ((-2147483647 - 1)))), (max((((/* implicit */int) (unsigned char)112)), (710414427)))))));
                        }
                        /* vectorizable */
                        for (long long int i_15 = 0; i_15 < 19; i_15 += 1) /* same iter space */
                        {
                            var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_34 [16LL] [9])) ? (arr_34 [i_8] [i_8]) : (((/* implicit */int) var_3))));
                            arr_54 [i_15] [5U] [i_9] [i_9] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_44 [9LL] [1LL] [i_13] [i_13 - 1] [i_13 - 1] [i_13])) ? (((((/* implicit */_Bool) (unsigned char)8)) ? (((/* implicit */int) (signed char)-10)) : (((/* implicit */int) (unsigned char)251)))) : (((((/* implicit */int) arr_44 [(unsigned char)16] [(unsigned char)14] [(unsigned char)11] [(unsigned char)16] [i_10] [i_13])) & (arr_34 [i_8] [i_8])))));
                            var_35 = ((/* implicit */int) min((var_35), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((arr_48 [i_8] [i_8] [(short)9] [i_10] [0] [i_15] [(short)9]) >= (((/* implicit */long long int) ((/* implicit */int) var_3))))))) != (((((/* implicit */_Bool) var_5)) ? (var_0) : (((/* implicit */long long int) arr_31 [(unsigned char)2] [i_9] [i_10])))))))));
                            arr_55 [i_15] [i_9] [i_13 - 1] [i_10] [i_10] [i_9] [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_14) : (((/* implicit */long long int) var_5))))) || (((/* implicit */_Bool) var_19))));
                        }
                        for (long long int i_16 = 0; i_16 < 19; i_16 += 1) /* same iter space */
                        {
                            arr_59 [i_9] [i_9] = var_17;
                            var_36 = ((/* implicit */unsigned short) min((var_36), (((/* implicit */unsigned short) ((((((((/* implicit */_Bool) arr_52 [(unsigned char)12] [(unsigned char)6] [i_10] [i_13] [i_16])) ? (((/* implicit */long long int) arr_34 [i_13] [i_8])) : (arr_57 [i_8] [i_9] [i_10] [i_13] [i_16]))) / (max((arr_48 [i_16] [i_9] [i_16] [i_16] [i_16] [i_16] [i_8]), (((/* implicit */long long int) arr_45 [i_8] [i_8] [i_10] [i_9] [i_9])))))) <= (((/* implicit */long long int) ((1321470922) / ((-2147483647 - 1))))))))));
                            var_37 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_53 [(short)6] [11LL] [i_10] [(unsigned char)9] [i_10] [(unsigned char)16] [(unsigned char)16])) ? (((/* implicit */long long int) var_16)) : (min((arr_57 [5LL] [i_13] [i_10] [i_9] [i_8]), (((/* implicit */long long int) var_1))))));
                        }
                        var_38 = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_26 [i_13 - 1])) << (((/* implicit */int) ((((/* implicit */_Bool) var_19)) && (((/* implicit */_Bool) var_11)))))))) >= (min((((/* implicit */unsigned int) arr_35 [i_8] [i_8] [i_10] [9LL] [i_13])), (((var_5) ^ (var_5)))))));
                    }
                    for (int i_17 = 0; i_17 < 19; i_17 += 4) 
                    {
                        var_39 = ((/* implicit */long long int) min((var_39), (((/* implicit */long long int) ((((((/* implicit */int) arr_60 [i_8] [i_9] [(unsigned short)17] [(unsigned short)10])) - (((/* implicit */int) arr_60 [i_8] [i_9] [i_10] [i_10])))) > (((/* implicit */int) max((arr_36 [i_8] [i_8] [3LL]), (arr_36 [i_17] [i_10] [i_8])))))))));
                        /* LoopSeq 3 */
                        for (long long int i_18 = 0; i_18 < 19; i_18 += 3) 
                        {
                            arr_64 [(unsigned short)9] [i_18] [i_9] [i_9] [i_9] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)114)) | (-261888993)))) & (((unsigned int) (unsigned char)228))));
                            var_40 = ((/* implicit */long long int) min((var_40), (((long long int) ((((/* implicit */_Bool) ((arr_28 [i_8]) >> (((((/* implicit */int) var_3)) - (132)))))) || (((/* implicit */_Bool) arr_63 [i_8] [i_9] [i_10] [i_10] [i_18])))))));
                        }
                        for (int i_19 = 1; i_19 < 18; i_19 += 4) 
                        {
                            var_41 = max((((/* implicit */long long int) max((((/* implicit */unsigned int) ((int) arr_66 [i_8] [i_8] [i_8] [i_8] [i_8] [1LL]))), (((var_7) >> (((((/* implicit */int) arr_36 [i_10] [i_10] [13LL])) + (90)))))))), (((long long int) var_16)));
                            arr_68 [i_8] [i_8] [i_10] [i_17] [i_17] [i_17] &= ((/* implicit */unsigned int) ((((long long int) min((((/* implicit */unsigned short) (unsigned char)4)), ((unsigned short)29792)))) < (arr_48 [(unsigned char)10] [7] [i_10] [i_10] [i_8] [i_8] [(short)10])));
                        }
                        /* vectorizable */
                        for (int i_20 = 0; i_20 < 19; i_20 += 4) 
                        {
                            var_42 = ((/* implicit */long long int) var_6);
                            var_43 = ((/* implicit */long long int) min((var_43), (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_51 [(unsigned char)2] [i_8] [i_8] [i_10] [i_8] [i_20])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_14))) != (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_26 [i_20])) != (arr_46 [i_8] [14LL] [7] [i_17] [i_8] [i_8]))))))))));
                        }
                    }
                    var_44 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((((/* implicit */int) arr_63 [i_8] [i_9] [12U] [10LL] [i_10])) != (((/* implicit */int) arr_36 [i_8] [i_8] [i_8])))) ? (max((var_19), (((/* implicit */unsigned int) arr_34 [13LL] [11LL])))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_8] [i_8] [i_8])))))) <= (((long long int) (unsigned char)33))));
                }
            } 
        } 
        arr_72 [i_8] = ((/* implicit */unsigned int) ((((var_0) / (((/* implicit */long long int) ((/* implicit */int) min((var_8), (((/* implicit */short) arr_66 [2] [i_8] [i_8] [i_8] [(unsigned char)6] [(unsigned char)16])))))))) < (((/* implicit */long long int) ((((/* implicit */int) arr_63 [i_8] [i_8] [i_8] [i_8] [i_8])) / (((/* implicit */int) var_8)))))));
        arr_73 [i_8] [12LL] = ((/* implicit */unsigned int) min((max((min((((/* implicit */long long int) arr_45 [12LL] [i_8] [i_8] [i_8] [13U])), (arr_39 [i_8] [8] [(unsigned char)11] [i_8]))), (((long long int) var_0)))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((var_2) - (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_8])))))) || (((/* implicit */_Bool) ((arr_70 [i_8] [i_8]) / (((/* implicit */int) arr_44 [13U] [(unsigned short)11] [i_8] [i_8] [6] [i_8]))))))))));
        /* LoopSeq 1 */
        for (long long int i_21 = 1; i_21 < 18; i_21 += 2) 
        {
            /* LoopSeq 1 */
            for (short i_22 = 0; i_22 < 19; i_22 += 3) 
            {
                arr_79 [i_22] [i_22] [i_21] [i_8] = max((arr_57 [3LL] [i_8] [3LL] [i_22] [i_22]), (((((/* implicit */_Bool) var_0)) ? (((long long int) 17U)) : (((/* implicit */long long int) arr_45 [(short)18] [i_8] [i_8] [i_22] [i_22])))));
                arr_80 [i_8] [i_21] [i_21 + 1] [i_22] = ((/* implicit */int) ((((/* implicit */_Bool) var_13)) ? (arr_39 [i_22] [(unsigned char)15] [13] [i_8]) : (arr_48 [i_21] [i_22] [i_21] [i_21] [(signed char)0] [i_8] [i_8])));
                var_45 = ((/* implicit */long long int) ((unsigned short) max((((((/* implicit */long long int) var_11)) & (var_17))), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_8] [i_8] [(signed char)4]))) : (arr_67 [i_8] [i_8] [2LL] [11LL] [i_8] [8LL]))))));
                /* LoopNest 2 */
                for (unsigned short i_23 = 1; i_23 < 16; i_23 += 4) 
                {
                    for (long long int i_24 = 2; i_24 < 15; i_24 += 1) 
                    {
                        {
                            var_46 = ((/* implicit */int) min((((((/* implicit */_Bool) ((var_9) | (((/* implicit */int) var_6))))) ? (min((arr_61 [i_23] [i_21] [(short)3] [16LL]), (arr_31 [i_21] [i_23] [i_23]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_14) == (((/* implicit */long long int) var_11)))))))), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_14)) ? (arr_46 [(unsigned short)12] [i_21] [17LL] [6LL] [17LL] [i_24 + 4]) : (((/* implicit */int) var_3)))) >> (((((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_6)))) + (52))))))));
                            arr_87 [9LL] [i_23] [i_23 + 3] [i_22] [i_21] [i_23] [(signed char)18] = ((/* implicit */unsigned char) ((long long int) arr_77 [i_8]));
                        }
                    } 
                } 
            }
            var_47 = ((/* implicit */unsigned char) max((-481825828), (((/* implicit */int) arr_25 [i_8] [i_21]))));
            var_48 = ((/* implicit */signed char) min((var_48), (((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((var_5) | (((/* implicit */unsigned int) ((arr_82 [i_8] [i_8] [4] [i_8] [i_8] [i_8]) & (arr_28 [i_8])))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))));
        }
    }
    /* LoopNest 3 */
    for (signed char i_25 = 0; i_25 < 12; i_25 += 1) 
    {
        for (signed char i_26 = 4; i_26 < 8; i_26 += 1) 
        {
            for (signed char i_27 = 1; i_27 < 9; i_27 += 3) 
            {
                {
                    arr_96 [i_25] [i_25] [i_25] [i_26 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_25] [i_26] [8U])) ? (arr_89 [i_25] [i_26]) : (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) -295386195)) <= (arr_91 [11U] [9U]))))) | ((-9223372036854775807LL - 1LL))))));
                    arr_97 [i_25] = ((/* implicit */short) max((((/* implicit */unsigned int) max((((/* implicit */int) (signed char)0)), (-1896908961)))), (((unsigned int) -3333083103380345449LL))));
                }
            } 
        } 
    } 
}
