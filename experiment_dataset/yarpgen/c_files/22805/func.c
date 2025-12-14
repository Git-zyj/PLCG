/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22805
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
    var_12 = ((/* implicit */short) (-(((/* implicit */int) min(((short)-26954), ((short)14282))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 9; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)135)) ? (10448314040047173640ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-92)))));
                    arr_9 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)0), (((/* implicit */unsigned char) max((((/* implicit */signed char) (_Bool)1)), ((signed char)37)))))))) : (((((/* implicit */unsigned long long int) -3223873404558040685LL)) - (arr_1 [i_0])))));
                    arr_10 [i_0] [i_1] [i_2 - 1] = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_4 [i_0] [i_0])), (var_3)))) ? (((/* implicit */int) ((short) arr_0 [i_0] [i_0]))) : (((var_9) ? (((/* implicit */int) arr_2 [i_0] [i_1])) : (((/* implicit */int) (signed char)-37)))))));
                }
            } 
        } 
        arr_11 [(unsigned char)8] |= ((/* implicit */short) (+(((/* implicit */int) (short)-13332))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 14; i_3 += 4) 
    {
        /* LoopSeq 2 */
        for (int i_4 = 0; i_4 < 14; i_4 += 4) /* same iter space */
        {
            arr_16 [i_4] = ((/* implicit */int) (+(var_10)));
            var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_15 [i_4])) : (((/* implicit */int) arr_13 [i_3]))));
            /* LoopSeq 1 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                arr_21 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */short) ((signed char) (signed char)37));
                arr_22 [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_3] [i_4] [i_5])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_4))));
                /* LoopNest 2 */
                for (signed char i_6 = 0; i_6 < 14; i_6 += 3) 
                {
                    for (unsigned int i_7 = 0; i_7 < 14; i_7 += 3) 
                    {
                        {
                            var_15 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-1))) <= (((((/* implicit */_Bool) arr_23 [i_6] [i_6] [i_5] [i_3] [(signed char)1] [i_3])) ? (((/* implicit */unsigned int) var_11)) : (var_8)))));
                            var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_25 [i_3])) ? (arr_25 [i_7]) : (arr_25 [i_5]))))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */short) ((((/* implicit */_Bool) arr_24 [i_3] [i_4] [i_4] [i_4])) ? (arr_24 [i_5] [i_5] [i_5] [i_5]) : (arr_24 [i_3] [i_4] [i_5] [i_4])));
                /* LoopNest 2 */
                for (signed char i_8 = 0; i_8 < 14; i_8 += 4) 
                {
                    for (long long int i_9 = 0; i_9 < 14; i_9 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned int) arr_30 [(short)1] [i_4] [(signed char)11] [i_3] [i_4]);
                            var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_17 [i_5])) : (arr_24 [i_4] [i_4] [i_5] [i_4])))) || ((!(((/* implicit */_Bool) (unsigned char)0)))))))));
                        }
                    } 
                } 
            }
        }
        for (int i_10 = 0; i_10 < 14; i_10 += 4) /* same iter space */
        {
            var_20 = ((/* implicit */int) (~(arr_20 [i_3] [i_3])));
            /* LoopNest 2 */
            for (long long int i_11 = 3; i_11 < 12; i_11 += 3) 
            {
                for (long long int i_12 = 0; i_12 < 14; i_12 += 4) 
                {
                    {
                        arr_43 [i_11] [(unsigned short)0] [(unsigned short)0] [i_11] = ((long long int) (unsigned char)29);
                        var_21 = ((/* implicit */unsigned int) arr_20 [i_10] [i_10]);
                        arr_44 [i_3] [i_3] [i_11] = ((/* implicit */long long int) (-(((/* implicit */int) arr_17 [i_11 + 1]))));
                    }
                } 
            } 
        }
        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_40 [i_3] [i_3] [i_3] [i_3])) ? (var_11) : (((/* implicit */int) (signed char)-37))))) || (((/* implicit */_Bool) arr_31 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]))));
    }
    /* LoopNest 2 */
    for (int i_13 = 0; i_13 < 18; i_13 += 4) 
    {
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_15 = 3; i_15 < 16; i_15 += 4) 
                {
                    arr_53 [i_14] = ((/* implicit */unsigned short) (+(((/* implicit */int) min((var_1), (((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) (unsigned char)255))))))))));
                    arr_54 [i_14] [i_14] = ((/* implicit */long long int) var_2);
                    var_23 |= ((/* implicit */unsigned short) (short)-1);
                    var_24 = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) ((long long int) arr_50 [i_13]))) ? (((/* implicit */int) arr_45 [i_15 - 2])) : ((-(((/* implicit */int) arr_52 [i_13] [i_13])))))));
                }
                /* LoopSeq 4 */
                for (signed char i_16 = 2; i_16 < 16; i_16 += 4) 
                {
                    var_25 = ((/* implicit */unsigned char) arr_49 [i_16 + 1] [i_16 - 2]);
                    /* LoopSeq 1 */
                    for (unsigned char i_17 = 1; i_17 < 17; i_17 += 4) 
                    {
                        arr_60 [i_13] [i_13] [i_16] [i_14] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((unsigned char) ((unsigned int) (unsigned short)11414)))), (max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_59 [i_13] [i_13] [i_16] [i_14]))) : (arr_47 [i_13] [i_14]))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_55 [i_13])))))))));
                        arr_61 [i_13] [16U] [i_16] [i_14] [13] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_9)) != (((/* implicit */int) arr_58 [i_16 + 2] [i_16 - 1] [i_16 - 1])))))) >= (var_6)));
                    }
                    /* LoopSeq 1 */
                    for (int i_18 = 0; i_18 < 18; i_18 += 4) 
                    {
                        var_26 = ((/* implicit */int) ((((_Bool) (short)20)) || (((/* implicit */_Bool) ((((((/* implicit */int) var_1)) + (2147483647))) >> (((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)-15288)) : (((/* implicit */int) (short)28209)))) + (15318))))))));
                        arr_65 [i_14] [i_16] [i_14] [i_18] [15ULL] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((long long int) -805989206))) != (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)0)) >= (((/* implicit */int) var_5)))))) ^ (arr_47 [i_13] [i_14])))));
                    }
                }
                for (unsigned char i_19 = 3; i_19 < 14; i_19 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_20 = 4; i_20 < 17; i_20 += 4) 
                    {
                        for (unsigned short i_21 = 4; i_21 < 16; i_21 += 4) 
                        {
                            {
                                arr_74 [i_13] [i_14] [i_19] [i_20 + 1] [i_21] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-37)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)48))));
                                arr_75 [i_14] [i_14] [i_19 + 1] [i_20] [i_19 + 4] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (-(var_3)))) || (((/* implicit */_Bool) ((int) (signed char)-28))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_7)));
                                arr_76 [i_13] [i_14] [1U] [i_14] [(short)11] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)0)), (6100621149394911428ULL)))) ? (((((/* implicit */_Bool) arr_59 [i_13] [0LL] [(signed char)16] [i_14])) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) arr_59 [i_21] [i_13] [i_19] [i_14]))))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) (signed char)43)), ((short)254)))))));
                                var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)0)) || (((/* implicit */_Bool) (signed char)113)))))));
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */long long int) (+(max(((~(((/* implicit */int) arr_72 [i_13] [i_13] [i_13])))), (((/* implicit */int) ((signed char) (short)60)))))));
                    arr_77 [i_14] [i_14] [i_14] = ((/* implicit */signed char) ((unsigned long long int) 1973540809U));
                    arr_78 [i_14] [i_14] [i_14] [i_14] = ((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-18))));
                }
                for (unsigned char i_22 = 3; i_22 < 14; i_22 += 3) /* same iter space */
                {
                    arr_82 [i_13] [i_14] = ((/* implicit */signed char) ((((/* implicit */int) max((arr_57 [i_22] [i_14] [i_13] [i_13]), (((/* implicit */unsigned short) (signed char)24))))) != (max((((/* implicit */int) (signed char)120)), (var_0)))));
                    var_29 |= ((/* implicit */long long int) (signed char)-1);
                }
                /* vectorizable */
                for (unsigned char i_23 = 3; i_23 < 14; i_23 += 3) /* same iter space */
                {
                    arr_85 [i_14] [i_14] [i_13] = ((/* implicit */long long int) ((signed char) arr_46 [i_23 + 4]));
                    /* LoopNest 2 */
                    for (unsigned int i_24 = 0; i_24 < 18; i_24 += 3) 
                    {
                        for (int i_25 = 0; i_25 < 18; i_25 += 4) 
                        {
                            {
                                var_30 = ((/* implicit */unsigned char) 15731528183464771263ULL);
                                var_31 |= ((/* implicit */int) ((var_3) / (((/* implicit */long long int) ((/* implicit */int) (signed char)-18)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_26 = 1; i_26 < 14; i_26 += 3) 
                    {
                        for (int i_27 = 0; i_27 < 18; i_27 += 4) 
                        {
                            {
                                arr_99 [i_13] [i_14] [i_23] [i_26] [i_14] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_79 [(unsigned short)2] [16ULL] [i_23] [16ULL])) ^ (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_79 [i_13] [(signed char)0] [i_26] [i_27])) : (((/* implicit */int) arr_72 [i_13] [i_13] [i_14]))))));
                                var_32 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_59 [i_23 - 3] [i_14] [i_23] [i_13])) ? (((/* implicit */int) ((_Bool) var_11))) : (((/* implicit */int) var_5))));
                                arr_100 [5ULL] [i_14] [5ULL] [i_26] = ((/* implicit */short) ((((/* implicit */_Bool) arr_98 [i_23 - 3] [i_23 + 3] [i_23 - 1] [i_26 + 2] [i_26 + 3])) ? (arr_98 [i_23 - 1] [i_23 + 4] [i_23 - 2] [i_26 + 3] [i_26 + 3]) : (arr_98 [i_23 - 2] [i_23 + 1] [i_23 + 1] [i_26 + 3] [i_26 + 3])));
                                arr_101 [i_14] [i_26 + 2] [3ULL] [8U] [i_14] = ((/* implicit */long long int) arr_64 [i_14] [i_26] [14LL] [i_14] [i_13]);
                            }
                        } 
                    } 
                    arr_102 [i_14] [i_14] [(short)10] [7U] = ((((/* implicit */long long int) ((/* implicit */int) var_9))) * (var_3));
                }
                var_33 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((signed char) arr_73 [i_14])))));
                var_34 = ((/* implicit */unsigned short) var_9);
            }
        } 
    } 
}
