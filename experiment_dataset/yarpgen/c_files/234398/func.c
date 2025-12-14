/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234398
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
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        arr_4 [i_0] [3LL] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) arr_3 [i_0])) >= (((/* implicit */int) var_9))))) % (((/* implicit */int) var_0))));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_2 = 1; i_2 < 10; i_2 += 4) /* same iter space */
            {
                arr_9 [i_0] [i_1] [i_2 - 1] = ((/* implicit */long long int) ((unsigned short) var_10));
                arr_10 [i_0] [i_0] [i_1] = ((/* implicit */long long int) arr_2 [i_2 - 1]);
            }
            for (unsigned char i_3 = 1; i_3 < 10; i_3 += 4) /* same iter space */
            {
                var_12 |= ((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [i_3 + 1])) != (((/* implicit */int) (!(((/* implicit */_Bool) 8191)))))));
                /* LoopSeq 1 */
                for (int i_4 = 0; i_4 < 12; i_4 += 1) 
                {
                    arr_16 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) var_9)) | (((/* implicit */int) arr_14 [i_3 - 1] [i_1] [i_3 - 1] [i_3 + 1] [i_1] [i_3 + 2]))));
                    var_13 = ((/* implicit */_Bool) min((var_13), ((!(var_1)))));
                }
                var_14 = ((/* implicit */unsigned short) var_0);
            }
            var_15 = ((arr_15 [i_0] [i_1]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (3171556753U));
            var_16 = ((/* implicit */long long int) ((((long long int) arr_14 [i_0] [i_1] [i_1] [i_0] [i_0] [i_1])) == (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0])))));
        }
        arr_17 [i_0] &= ((/* implicit */unsigned long long int) ((arr_3 [i_0]) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) / (((/* implicit */int) (unsigned char)32))))) : (arr_5 [i_0] [i_0])));
    }
    for (long long int i_5 = 2; i_5 < 18; i_5 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        for (short i_6 = 0; i_6 < 21; i_6 += 2) /* same iter space */
        {
            var_17 ^= ((/* implicit */int) arr_19 [i_5]);
            var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) (!(arr_18 [i_5 - 1] [i_5 + 2]))))));
        }
        for (short i_7 = 0; i_7 < 21; i_7 += 2) /* same iter space */
        {
            /* LoopSeq 3 */
            for (long long int i_8 = 0; i_8 < 21; i_8 += 3) 
            {
                arr_27 [i_5] [i_7] [i_8] [i_5] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_19 [i_5 + 3])) ? (((/* implicit */int) (short)21634)) : (((/* implicit */int) var_6)))), (((/* implicit */int) ((short) ((((/* implicit */int) (unsigned char)224)) + (((/* implicit */int) var_0))))))));
                arr_28 [i_8] [i_5] [i_5 + 3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_11))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_5 + 1]))))) : (((/* implicit */int) ((((/* implicit */int) arr_18 [i_5 + 1] [i_7])) >= (((/* implicit */int) arr_23 [i_5 + 1])))))));
            }
            for (short i_9 = 0; i_9 < 21; i_9 += 3) 
            {
                var_19 = ((/* implicit */long long int) (-(((/* implicit */int) min((arr_25 [i_5] [i_5] [i_5]), (((/* implicit */short) (!((_Bool)1)))))))));
                var_20 = ((/* implicit */signed char) arr_18 [i_5 - 1] [i_9]);
            }
            for (signed char i_10 = 0; i_10 < 21; i_10 += 2) 
            {
                arr_34 [i_5] [i_7] [i_10] = arr_31 [i_5 + 3] [i_7] [i_7] [i_10];
                arr_35 [i_10] [i_5] [i_10] = (+((+(((/* implicit */int) max((((/* implicit */unsigned char) var_6)), (var_11)))))));
            }
            var_21 = ((/* implicit */unsigned char) ((unsigned long long int) ((min((arr_21 [i_5] [i_5 + 3] [i_5]), (3171556753U))) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))))));
        }
        for (short i_11 = 0; i_11 < 21; i_11 += 2) /* same iter space */
        {
            arr_39 [i_5] = ((/* implicit */_Bool) (-(((/* implicit */int) min(((unsigned char)127), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)166)) >= (((/* implicit */int) (unsigned char)227))))))))));
            arr_40 [i_5 - 1] [i_11] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)131))) != (((((/* implicit */_Bool) min((((/* implicit */int) var_1)), ((-2147483647 - 1))))) ? (var_7) : (((/* implicit */unsigned int) var_4))))));
            var_22 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_22 [i_5] [i_5 - 1] [i_5 - 1])) ^ (((/* implicit */int) (short)-16567))))) ? (((/* implicit */unsigned int) min(((~(((/* implicit */int) arr_26 [i_5 + 2])))), (((((/* implicit */_Bool) (signed char)-36)) ? (((/* implicit */int) (signed char)-93)) : (((/* implicit */int) var_6))))))) : (((((/* implicit */_Bool) arr_20 [i_11])) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_24 [i_11])) && (((/* implicit */_Bool) 3458764513820540928LL))))))))));
        }
        var_23 = ((/* implicit */unsigned short) var_8);
        arr_41 [i_5] = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_32 [i_5 - 1] [i_5 + 1] [i_5 + 1] [i_5 + 1])) ? (((/* implicit */int) (unsigned char)93)) : (var_4)))));
    }
    for (long long int i_12 = 2; i_12 < 18; i_12 += 1) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned char) min((((((/* implicit */int) arr_26 [i_12 + 3])) & (((/* implicit */int) arr_26 [i_12 + 3])))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) -6497124276328858557LL)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))) ? (((/* implicit */int) ((((/* implicit */int) arr_22 [i_12 + 1] [i_12 + 2] [(signed char)14])) > (((/* implicit */int) (_Bool)1))))) : (max((((/* implicit */int) var_11)), (167430739)))))));
        var_25 = ((/* implicit */unsigned short) var_8);
    }
    /* LoopNest 2 */
    for (unsigned int i_13 = 0; i_13 < 18; i_13 += 2) 
    {
        for (unsigned char i_14 = 4; i_14 < 16; i_14 += 3) 
        {
            {
                var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((unsigned short) arr_33 [i_13] [i_13] [i_14 - 4])), (((/* implicit */unsigned short) var_10))))) ? (min((((((/* implicit */_Bool) (unsigned char)15)) ? (524288LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-92))))), (((/* implicit */long long int) ((unsigned char) var_7))))) : (arr_44 [i_14])));
                /* LoopSeq 3 */
                for (signed char i_15 = 2; i_15 < 17; i_15 += 2) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (signed char i_16 = 0; i_16 < 18; i_16 += 4) /* same iter space */
                    {
                        var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_42 [i_16] [i_14])) >= (var_4))))) : (arr_45 [i_14 - 3])))))))));
                        var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) arr_44 [i_13]))));
                    }
                    for (signed char i_17 = 0; i_17 < 18; i_17 += 4) /* same iter space */
                    {
                        var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) min((((((/* implicit */_Bool) arr_33 [i_13] [i_14 - 2] [i_15 - 2])) ? (3171556759U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))), (max((((unsigned int) var_5)), (((/* implicit */unsigned int) ((var_7) == (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))))))));
                        var_30 -= ((/* implicit */unsigned int) arr_38 [i_15]);
                        var_31 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_53 [i_14 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_30 [i_14] [i_14] [i_15] [i_17])))) ? (((/* implicit */int) ((short) (!(((/* implicit */_Bool) 2147483647)))))) : (((/* implicit */int) ((signed char) min((((/* implicit */unsigned int) var_5)), (arr_32 [i_13] [i_14] [i_13] [i_17])))))));
                        arr_56 [i_14] = ((/* implicit */unsigned int) var_0);
                    }
                    /* LoopSeq 1 */
                    for (unsigned short i_18 = 2; i_18 < 17; i_18 += 3) 
                    {
                        var_32 = ((/* implicit */int) max((var_32), ((-(((/* implicit */int) arr_29 [i_13]))))));
                        var_33 = ((/* implicit */unsigned int) ((max((var_7), (((/* implicit */unsigned int) min((-167430755), (((/* implicit */int) (unsigned short)43738))))))) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535)))));
                    }
                }
                for (signed char i_19 = 2; i_19 < 17; i_19 += 2) /* same iter space */
                {
                    arr_63 [i_13] [i_14] [i_14] = ((/* implicit */long long int) (!((((+(((/* implicit */int) (unsigned short)65535)))) == (((/* implicit */int) (!(((/* implicit */_Bool) arr_42 [i_14] [i_19])))))))));
                    arr_64 [i_14] [i_14] [i_14] = (~(((((/* implicit */_Bool) var_8)) ? (arr_36 [i_19 + 1] [i_19 - 1]) : (((/* implicit */unsigned int) (~(-167430731)))))));
                    var_34 = ((/* implicit */unsigned char) arr_22 [i_13] [i_19] [i_14]);
                    var_35 = ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_33 [i_13] [i_14 - 3] [i_13])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)197))))) % (arr_43 [i_19 - 2]));
                    var_36 = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) 3171556753U)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_37 [i_13] [i_14 + 2] [i_19 - 1]))) <= (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */signed char) var_1)), (var_0))))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_55 [i_13] [i_14 - 2] [i_19 - 2] [i_19 - 2]))))) : (((unsigned long long int) arr_24 [i_19 - 2]))));
                }
                for (signed char i_20 = 2; i_20 < 17; i_20 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned int i_21 = 1; i_21 < 15; i_21 += 1) 
                    {
                        for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                        {
                            {
                                var_37 = ((/* implicit */unsigned char) (!(((((((/* implicit */_Bool) var_0)) || ((_Bool)1))) && ((!(((/* implicit */_Bool) var_8))))))));
                                arr_71 [i_13] [i_14] [i_14] [i_20 - 1] [i_21] [i_13] [i_22] = ((long long int) ((((((/* implicit */_Bool) arr_22 [i_20] [i_20] [i_13])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)1)))) / (var_4)));
                                arr_72 [(short)4] [i_14] [(short)4] [i_20 - 2] [i_22] [(short)4] [i_14] = ((long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? (((/* implicit */long long int) (+(var_7)))) : (arr_43 [i_14 + 1])));
                                var_38 |= ((((((((/* implicit */int) arr_26 [i_20])) | (((/* implicit */int) arr_42 [i_13] [i_14 - 3])))) < (((/* implicit */int) (short)-3294)))) ? (((/* implicit */int) var_8)) : (((((/* implicit */int) var_8)) | ((~(((/* implicit */int) arr_49 [i_13] [i_14 - 4] [i_21])))))));
                            }
                        } 
                    } 
                    var_39 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */int) var_10)) ^ (((/* implicit */int) arr_54 [(signed char)10] [i_14] [i_14] [i_20 - 1] [i_14]))))), ((-((+(4294934528LL)))))));
                    var_40 = ((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) arr_58 [i_13] [i_14] [i_14 + 2] [i_20 + 1])))) ? (max((((/* implicit */int) var_11)), ((-2147483647 - 1)))) : (((/* implicit */int) ((((/* implicit */int) arr_58 [i_13] [i_13] [i_13] [i_13])) >= (((/* implicit */int) arr_58 [i_13] [i_14] [i_20 - 2] [i_20])))))));
                    arr_73 [i_13] [i_14] = ((/* implicit */_Bool) min((min((((/* implicit */long long int) ((((/* implicit */_Bool) (short)14548)) ? (((/* implicit */int) var_6)) : (-167430738)))), (max((arr_43 [i_13]), (((/* implicit */long long int) var_2)))))), (((/* implicit */long long int) arr_66 [i_14]))));
                }
            }
        } 
    } 
    var_41 = ((_Bool) ((signed char) max((var_1), (var_1))));
    /* LoopSeq 1 */
    for (unsigned char i_23 = 0; i_23 < 23; i_23 += 3) 
    {
        arr_76 [i_23] = arr_75 [i_23];
        var_42 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), (arr_74 [i_23] [i_23])))) ? (((((/* implicit */_Bool) arr_75 [i_23])) ? (((/* implicit */int) arr_75 [i_23])) : (((/* implicit */int) arr_75 [i_23])))) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (((((_Bool)0) && (((/* implicit */_Bool) (unsigned short)13105)))) || (var_10)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_74 [i_23] [i_23]))))));
        var_43 = ((/* implicit */unsigned char) min((var_43), (((/* implicit */unsigned char) 1075673518U))));
        arr_77 [i_23] = ((/* implicit */_Bool) ((int) var_7));
    }
    var_44 = ((/* implicit */unsigned int) var_4);
}
