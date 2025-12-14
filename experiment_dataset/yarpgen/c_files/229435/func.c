/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229435
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
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) ? ((~(((/* implicit */int) ((unsigned short) arr_1 [i_0]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) max((var_16), (((/* implicit */unsigned short) arr_0 [i_0]))))))))));
        arr_2 [i_0] [22] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)1)), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (arr_1 [i_0])))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_0))));
        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */_Bool) min((268402688), (((/* implicit */int) var_9))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_1 [i_0]))))));
    }
    for (long long int i_1 = 2; i_1 < 18; i_1 += 4) 
    {
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_9 [i_1] = ((/* implicit */signed char) ((((/* implicit */int) max((arr_8 [3LL] [i_2]), (arr_8 [i_1 + 1] [(_Bool)1])))) == (((((((/* implicit */int) (signed char)-16)) + (2147483647))) >> ((((~(((/* implicit */int) arr_6 [i_2])))) + (26)))))));
            var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (+(((/* implicit */int) (signed char)-34)))))));
        }
        var_20 = ((/* implicit */unsigned int) var_11);
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        arr_12 [2U] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)254)) ? (((/* implicit */int) arr_10 [i_3] [i_3])) : (((/* implicit */int) arr_10 [i_3] [i_3]))))) ? ((+(((/* implicit */int) var_10)))) : (((/* implicit */int) arr_10 [i_3] [i_3]))));
        arr_13 [i_3] [i_3] = ((/* implicit */short) arr_11 [i_3] [i_3]);
        /* LoopNest 3 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (short i_5 = 0; i_5 < 20; i_5 += 1) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        var_21 = ((/* implicit */unsigned char) max((((/* implicit */int) ((((((/* implicit */_Bool) (signed char)-54)) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_4] [i_4]))) : (-7982229673031020585LL))) == (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)26376)))))))), ((-(((/* implicit */int) arr_11 [i_4] [i_6]))))));
                        arr_22 [i_3] [i_5] [i_4] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_3] [i_3] [i_3])) ? (((/* implicit */int) arr_21 [i_3] [i_4] [i_5])) : (((/* implicit */int) arr_21 [i_3] [i_4] [i_5]))))) ? (((((/* implicit */int) arr_21 [3LL] [i_5] [i_3])) - (((/* implicit */int) (signed char)-34)))) : (((((/* implicit */_Bool) arr_21 [(_Bool)1] [11] [i_5])) ? (((/* implicit */int) arr_21 [i_3] [i_4] [i_5])) : (((/* implicit */int) var_4))))));
                        /* LoopSeq 1 */
                        for (int i_7 = 0; i_7 < 20; i_7 += 1) 
                        {
                            arr_27 [(unsigned short)4] [(unsigned char)19] [(unsigned char)19] [i_6] [i_7] [17U] [(unsigned char)7] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) arr_10 [i_3] [i_4]))) ? ((-(((/* implicit */int) var_4)))) : ((-(((/* implicit */int) arr_15 [i_3] [i_4] [i_5]))))));
                            var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) arr_24 [i_7] [(short)5] [i_5] [(unsigned short)8] [(unsigned char)1] [i_4] [(unsigned char)1]))));
                            arr_28 [i_3] [i_4] [8ULL] [15] = ((/* implicit */_Bool) (signed char)-9);
                        }
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_8 = 1; i_8 < 17; i_8 += 3) 
        {
            for (long long int i_9 = 1; i_9 < 17; i_9 += 2) 
            {
                {
                    var_23 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) -7982229673031020586LL)) || (((/* implicit */_Bool) ((((-2107524000) + (2147483647))) << (((((((/* implicit */int) (short)-25210)) + (25222))) - (11)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_9 + 2] [i_9 + 2] [i_9] [i_8] [(signed char)16] [i_3] [i_3])) ? (7982229673031020591LL) : (((/* implicit */long long int) 3817835279U))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((((/* implicit */int) arr_32 [i_3] [13] [i_9 + 1] [(signed char)5])) < (((/* implicit */int) arr_14 [i_9 + 2] [i_3] [i_3]))))))) : (min(((-(((/* implicit */int) (signed char)16)))), (((/* implicit */int) arr_21 [i_3] [i_8 - 1] [i_8 - 1]))))));
                    var_24 = ((/* implicit */unsigned int) (short)(-32767 - 1));
                    var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) var_5))));
                }
            } 
        } 
    }
    var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((((/* implicit */int) var_4)) > (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_13))))))))))));
    /* LoopNest 3 */
    for (unsigned char i_10 = 2; i_10 < 20; i_10 += 4) 
    {
        for (long long int i_11 = 0; i_11 < 22; i_11 += 3) 
        {
            for (unsigned char i_12 = 0; i_12 < 22; i_12 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_13 = 1; i_13 < 18; i_13 += 3) 
                    {
                        for (unsigned int i_14 = 0; i_14 < 22; i_14 += 4) 
                        {
                            {
                                arr_50 [i_11] [i_12] [20] [i_14] = ((/* implicit */unsigned int) min((((/* implicit */long long int) max(((+(1161390536))), (((/* implicit */int) max((var_16), (((/* implicit */unsigned short) arr_39 [i_10] [i_11] [i_12])))))))), (-1524890543117643014LL)));
                                arr_51 [i_10] [i_11] [i_12] [4U] = var_0;
                                arr_52 [i_10 - 1] [i_11] [i_10 - 1] [16LL] [i_14] = ((/* implicit */int) (+(min((((/* implicit */long long int) (+(((/* implicit */int) arr_40 [i_10]))))), (((((/* implicit */_Bool) arr_39 [i_10] [i_11] [i_12])) ? (((/* implicit */long long int) arr_43 [i_10 + 2])) : (arr_42 [i_11] [i_12])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_15 = 2; i_15 < 21; i_15 += 3) 
                    {
                        for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) 
                        {
                            {
                                arr_60 [i_16] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)28)), (var_7)))) ? ((~(((/* implicit */int) arr_45 [i_10] [i_11] [i_12])))) : ((-(((/* implicit */int) arr_40 [(unsigned short)5])))))) | (((((/* implicit */int) ((arr_54 [(unsigned short)1] [i_11] [i_12] [(signed char)4]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_12] [i_11])))))) >> (((((((/* implicit */_Bool) (short)32745)) ? (arr_1 [i_10]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_56 [i_16] [i_15] [i_12] [i_12] [i_12] [i_11] [i_16]))))) - (2343706829U)))))));
                                var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_38 [i_16 + 1] [i_15 - 2])) : (((/* implicit */int) arr_56 [16ULL] [i_16] [i_16 + 1] [i_16 + 1] [(short)18] [i_16] [i_10])))))))));
                                arr_61 [i_10] [i_16] [i_10] [i_10] [i_10] [i_10] = ((/* implicit */short) max((((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */long long int) arr_56 [i_10] [i_10 + 1] [16U] [5] [i_12] [i_15] [i_16])), (arr_42 [(unsigned char)2] [i_11]))))))), (arr_44 [i_11])));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_18 = 2; i_18 < 21; i_18 += 3) 
                        {
                            var_28 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_1 [i_18 + 1])) ? (arr_1 [i_10]) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))));
                            arr_67 [i_17] [i_11] [5U] [i_11] [i_11] [i_11] = ((/* implicit */unsigned short) arr_55 [i_12] [i_18]);
                        }
                        for (unsigned int i_19 = 0; i_19 < 22; i_19 += 4) 
                        {
                            arr_70 [i_10] [i_17] = ((/* implicit */unsigned char) ((((((/* implicit */int) var_15)) + (2147483647))) << (((((/* implicit */int) var_0)) - (113)))));
                            var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)114)) ? (((/* implicit */int) (short)32766)) : (((/* implicit */int) (unsigned char)128)))))));
                            arr_71 [i_17] [i_12] = ((/* implicit */unsigned char) arr_36 [i_11]);
                        }
                        /* LoopSeq 3 */
                        for (unsigned char i_20 = 3; i_20 < 18; i_20 += 3) 
                        {
                            var_30 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_10))));
                            var_31 = ((/* implicit */signed char) (+((+(((((/* implicit */int) arr_40 [i_17])) * (((/* implicit */int) var_11))))))));
                        }
                        /* vectorizable */
                        for (_Bool i_21 = 1; i_21 < 1; i_21 += 1) 
                        {
                            arr_79 [i_17] [i_11] [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_72 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] [i_10])) ? (((/* implicit */int) arr_39 [i_17] [i_12] [i_10])) : (((/* implicit */int) arr_41 [19] [i_11] [i_12]))))) ? (((((/* implicit */_Bool) arr_57 [i_21] [i_17] [i_10] [10LL] [(signed char)7] [i_10 + 1] [i_10])) ? (arr_74 [i_10] [i_10] [i_12] [i_17] [i_12] [i_21]) : (((/* implicit */int) arr_44 [i_21])))) : ((~(((/* implicit */int) var_6))))));
                            var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (-6632410322357614548LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_69 [i_10] [i_10] [i_10 + 2] [i_10] [9U] [i_10 + 2] [5]))) : (arr_72 [i_10] [3LL] [i_10] [3LL] [i_10 + 1] [i_21 - 1] [i_21])));
                            var_33 = ((/* implicit */unsigned int) min((var_33), (((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */int) var_8)) != (((/* implicit */int) var_6))))))))));
                        }
                        for (short i_22 = 0; i_22 < 22; i_22 += 3) 
                        {
                            var_34 = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) (-(((/* implicit */int) (unsigned char)31)))))) >= (((/* implicit */int) (unsigned short)14194))));
                            var_35 = ((/* implicit */unsigned char) max((var_35), (((/* implicit */unsigned char) max((((/* implicit */unsigned int) (+(((/* implicit */int) (short)-32767))))), (arr_1 [i_11]))))));
                            var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) (!((_Bool)1))))) ? (((/* implicit */int) arr_77 [i_10] [i_10 - 1])) : (((int) -1051758358))));
                            var_37 = ((/* implicit */unsigned int) ((arr_62 [(unsigned short)11] [i_17] [i_12] [i_12] [(unsigned char)4] [i_10 + 1]) ? (((/* implicit */int) arr_58 [i_10] [i_10 - 2] [i_10] [i_10 - 2] [(short)9])) : (((/* implicit */int) arr_53 [4U] [i_10 - 2]))));
                            var_38 = ((/* implicit */unsigned char) (unsigned short)36997);
                        }
                    }
                    for (unsigned int i_23 = 1; i_23 < 19; i_23 += 1) 
                    {
                        var_39 = ((/* implicit */unsigned long long int) max((var_39), (((/* implicit */unsigned long long int) ((max(((-(((/* implicit */int) arr_45 [i_10] [i_10] [i_10])))), (((/* implicit */int) var_3)))) ^ (((/* implicit */int) ((((/* implicit */int) ((arr_43 [i_10]) != (((/* implicit */unsigned int) ((/* implicit */int) (signed char)23)))))) <= (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)16))))))))))));
                        arr_84 [i_10 + 1] [i_11] = ((/* implicit */unsigned short) (~(((((/* implicit */int) ((((/* implicit */int) arr_76 [i_10] [(unsigned short)13] [i_10] [i_10])) != (((/* implicit */int) var_3))))) + (((/* implicit */int) var_13))))));
                    }
                    for (long long int i_24 = 0; i_24 < 22; i_24 += 2) 
                    {
                        var_40 = ((/* implicit */int) ((arr_58 [i_10] [i_10 - 1] [i_12] [i_10 - 1] [i_12]) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) arr_58 [i_10] [i_10 - 2] [i_12] [i_24] [i_24]))) : (arr_55 [i_10 - 1] [i_10 + 1]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)16)) ? (((/* implicit */int) arr_58 [i_10] [i_10 + 2] [0LL] [5ULL] [i_12])) : (((/* implicit */int) arr_58 [i_10 + 1] [i_10 - 2] [i_12] [i_24] [i_24])))))));
                        arr_89 [i_10] [i_10] [(short)4] [(short)4] = ((/* implicit */unsigned int) (+((((!(((/* implicit */_Bool) (signed char)16)))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)4475)) * (((/* implicit */int) var_0))))) : (((arr_73 [i_24] [i_24] [i_24] [i_24] [0U] [(signed char)8]) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_46 [i_10] [i_11] [i_12] [i_10 + 1])))))))));
                    }
                    for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                    {
                        arr_92 [i_25] [i_25] [i_25] [i_10] = ((/* implicit */long long int) min(((+(((/* implicit */int) var_8)))), (((/* implicit */int) arr_73 [i_10] [11ULL] [i_25] [i_11] [i_12] [i_25]))));
                        arr_93 [i_11] [i_11] [(unsigned short)11] [i_25] [i_10] [i_25] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_69 [i_10 + 1] [8LL] [i_10] [i_10 - 1] [i_10 + 1] [i_10 + 1] [i_10 + 2])) >> (((((/* implicit */int) arr_69 [i_10 - 2] [i_10] [i_10] [i_10 + 2] [i_10 - 1] [i_10 - 1] [i_10 + 1])) - (66)))))) ? (((((/* implicit */_Bool) arr_69 [i_10 - 1] [i_10] [i_10] [i_10] [i_10 + 2] [i_10 - 2] [i_10 - 1])) ? (((/* implicit */int) arr_69 [i_10 - 2] [i_10 - 2] [i_10] [i_10] [i_10 + 1] [i_10 + 2] [i_10 - 2])) : (((/* implicit */int) arr_69 [i_10 + 1] [i_10 + 1] [i_10] [i_10] [i_10 + 2] [i_10 - 2] [i_10 + 1])))) : ((-(((/* implicit */int) arr_69 [i_10 - 2] [i_10] [i_10] [i_10] [i_10 - 2] [i_10 + 1] [i_10 - 1])))));
                        arr_94 [i_10 - 2] [i_25] [(unsigned char)18] [i_25] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (signed char)30)) ? (((/* implicit */int) (short)32765)) : (((/* implicit */int) (unsigned short)48865)))) & (((((/* implicit */_Bool) arr_46 [i_10 - 1] [i_10] [i_10] [i_10 + 1])) ? (((/* implicit */int) arr_46 [i_10 - 1] [10] [(unsigned char)18] [i_10 + 1])) : (((/* implicit */int) arr_46 [i_10 + 2] [i_10] [14U] [i_10 + 2]))))));
                        var_41 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_77 [i_10] [i_11])) ? (((/* implicit */long long int) arr_88 [i_10] [21] [i_12] [21])) : (8065657973840670652LL)))) ? ((~(2147483647))) : ((+(((/* implicit */int) var_0)))))), (((/* implicit */int) var_10))));
                    }
                }
            } 
        } 
    } 
}
