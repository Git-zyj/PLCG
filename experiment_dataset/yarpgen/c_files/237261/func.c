/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237261
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
    var_15 = ((/* implicit */int) var_10);
    var_16 = var_0;
    var_17 = ((/* implicit */int) (signed char)83);
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 4; i_2 < 20; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        {
                            arr_12 [i_0] [i_2] [i_2] [i_0] [i_0] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_0)) ? (arr_6 [i_0] [i_1 - 1] [(signed char)1]) : (((/* implicit */int) (signed char)79)))), ((-(((((/* implicit */int) var_7)) ^ (((/* implicit */int) (_Bool)1))))))));
                            /* LoopSeq 1 */
                            for (int i_4 = 0; i_4 < 22; i_4 += 2) 
                            {
                                var_18 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_7))));
                                arr_15 [i_0] [i_1] [(short)5] [i_3] [i_0] = ((((/* implicit */_Bool) ((var_14) ? (arr_3 [i_0 + 1]) : (arr_3 [i_0 + 1])))) ? (((/* implicit */int) (signed char)83)) : (var_6));
                                var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)61440))))) ? (((/* implicit */int) (unsigned short)1473)) : (arr_7 [i_0] [i_0])));
                                var_20 = ((/* implicit */signed char) min((var_20), ((signed char)-92)));
                                var_21 = ((/* implicit */signed char) var_7);
                            }
                        }
                    } 
                } 
                arr_16 [i_0] [i_0] = ((/* implicit */signed char) (+(arr_13 [i_1] [9ULL] [i_0 - 1] [i_0] [i_0 + 1])));
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 1) 
                {
                    for (unsigned int i_6 = 2; i_6 < 21; i_6 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) 18446744073709551601ULL))));
                            var_23 = max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_2)), (var_3)))), (min((arr_0 [i_0 - 1]), (((/* implicit */unsigned long long int) var_4)))));
                            arr_21 [i_0] [(unsigned short)8] [(unsigned short)8] [i_6] [i_0] = ((/* implicit */unsigned long long int) var_4);
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (signed char i_7 = 2; i_7 < 19; i_7 += 1) 
                {
                    var_24 = ((/* implicit */unsigned short) max(((~(((/* implicit */int) var_11)))), (min((((/* implicit */int) var_11)), (((((/* implicit */_Bool) var_12)) ? (var_0) : (((/* implicit */int) var_5))))))));
                    arr_24 [(_Bool)1] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)244)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (min((((/* implicit */unsigned long long int) arr_2 [i_7 + 2] [i_0] [i_0 + 1])), (arr_0 [i_7 - 2])))));
                }
                for (unsigned short i_8 = 0; i_8 < 22; i_8 += 2) 
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_9 = 0; i_9 < 22; i_9 += 2) /* same iter space */
                    {
                        var_25 = ((/* implicit */short) var_13);
                        /* LoopSeq 1 */
                        for (short i_10 = 1; i_10 < 20; i_10 += 2) 
                        {
                            arr_31 [i_1] [i_8] [i_0] = ((/* implicit */unsigned int) var_0);
                            var_26 = ((/* implicit */unsigned short) min((((/* implicit */int) arr_10 [i_0] [i_1 - 1] [i_8] [i_9] [i_10 + 2] [i_9])), ((+((+(((/* implicit */int) var_1))))))));
                            var_27 += ((/* implicit */signed char) max((((((((/* implicit */int) arr_10 [i_10 + 1] [i_1] [i_8] [i_1] [i_1] [i_0 - 1])) > (((/* implicit */int) arr_27 [i_10] [(unsigned short)15] [i_9] [i_8] [i_1] [i_0 - 1])))) ? (((/* implicit */unsigned long long int) var_0)) : (min((((/* implicit */unsigned long long int) arr_11 [i_0] [i_1] [i_8] [i_9] [i_0] [i_8])), (32ULL))))), (((/* implicit */unsigned long long int) arr_14 [i_0] [9ULL] [i_8] [i_8] [i_8] [i_9] [i_10]))));
                        }
                        var_28 += ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 4294967295U)), (arr_0 [i_0 + 1])))) ? (arr_13 [i_1] [i_1] [i_1] [i_9] [i_1 - 1]) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_10)), (var_3))))));
                        arr_32 [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0 + 1] [i_1 - 1] [i_1 - 1])) ? (arr_5 [i_0 + 1] [i_1 - 1] [i_1 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)61440)))))) ? (((((/* implicit */_Bool) arr_5 [i_0 + 1] [i_1 - 1] [i_1 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (arr_5 [i_0 + 1] [i_1 - 1] [i_1 - 1]))) : ((+(arr_5 [i_0 + 1] [i_1 - 1] [i_1 - 1]))));
                        /* LoopSeq 3 */
                        for (unsigned short i_11 = 0; i_11 < 22; i_11 += 4) 
                        {
                            arr_35 [i_0] [i_1] [i_8] [i_9] [i_11] [i_8] [i_0] = ((/* implicit */int) ((((((/* implicit */_Bool) 180822984)) ? (((/* implicit */int) arr_8 [i_0] [i_1 - 1] [i_9] [i_11])) : (((/* implicit */int) var_1)))) > ((-(((/* implicit */int) arr_8 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0]))))));
                            var_29 = min(((~(((((/* implicit */_Bool) arr_26 [i_0] [i_1] [i_0])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned short)1476)))))), (((/* implicit */int) var_4)));
                            arr_36 [i_0] [i_9] = ((/* implicit */short) var_13);
                            var_30 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_11)))), (((/* implicit */int) (unsigned short)61461))))), ((-(arr_0 [(signed char)6])))));
                        }
                        for (int i_12 = 0; i_12 < 22; i_12 += 4) 
                        {
                            arr_40 [i_0] [i_1 - 1] [i_1 - 1] [i_0] [i_12] = ((/* implicit */signed char) (unsigned short)64062);
                            arr_41 [i_0] [i_1] [i_8] [i_9] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 15ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (((((/* implicit */_Bool) arr_5 [12U] [i_0 - 1] [i_0])) ? (var_13) : (((/* implicit */unsigned long long int) (~(arr_5 [14U] [i_9] [i_12]))))))));
                            arr_42 [i_0] [i_0] [13] [i_0] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (unsigned short)25025)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_0] [(unsigned short)14] [i_1 - 1] [(unsigned short)14])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)10))))))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) arr_20 [i_0]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_34 [i_0 - 1] [i_0] [i_0 + 1] [i_0])) : (((/* implicit */int) var_9))))) : (arr_0 [i_0 + 1])))));
                        }
                        for (signed char i_13 = 4; i_13 < 21; i_13 += 4) 
                        {
                            var_31 = ((/* implicit */int) max(((+(var_13))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (unsigned short)61451)) : (((/* implicit */int) (unsigned char)176)))))));
                            var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */short) max((var_9), (var_10)))), (var_12)))) ? (((/* implicit */int) var_7)) : (arr_14 [i_13 - 4] [(short)6] [i_9] [i_9] [i_8] [i_1] [i_0 + 1]))))));
                        }
                    }
                    for (unsigned short i_14 = 0; i_14 < 22; i_14 += 2) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (int i_15 = 1; i_15 < 18; i_15 += 4) 
                        {
                            var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) arr_25 [i_0]))));
                            arr_51 [i_0] [i_0] [i_8] [i_14] [i_15 + 2] [i_0] [i_8] = (+((+(((/* implicit */int) (unsigned char)52)))));
                            var_34 = ((/* implicit */signed char) var_11);
                            arr_52 [i_0] [i_1 - 1] [i_0] [i_1 - 1] [i_14] = ((((/* implicit */_Bool) arr_45 [7U] [7U] [i_8] [i_14] [i_0])) ? (((/* implicit */int) var_7)) : (arr_2 [i_0 + 1] [i_0] [i_15 + 1]));
                        }
                        /* vectorizable */
                        for (signed char i_16 = 0; i_16 < 22; i_16 += 4) 
                        {
                            arr_56 [i_0] [i_0 - 1] [i_0 - 1] [i_1] [i_8] [i_0] [i_16] = ((/* implicit */int) arr_38 [i_16] [i_14] [i_8] [i_1] [i_0 - 1]);
                            var_35 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_47 [i_0 + 1] [6U] [i_8] [i_14])) ? (((/* implicit */int) var_7)) : (var_6)));
                        }
                        arr_57 [i_0] [i_8] [i_0] = ((/* implicit */int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_1 [i_0 + 1])), (arr_26 [i_0] [i_0] [i_0]))))))), (((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_46 [i_0]))) : (var_8)))));
                    }
                    for (unsigned short i_17 = 0; i_17 < 22; i_17 += 2) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (int i_18 = 0; i_18 < 22; i_18 += 1) 
                        {
                            var_36 = ((/* implicit */unsigned long long int) var_7);
                            var_37 = ((/* implicit */signed char) max((var_37), (((/* implicit */signed char) max((max((1504835819U), (4294967295U))), (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)127))))))))));
                            var_38 = ((/* implicit */short) (signed char)-88);
                            arr_65 [i_0] [i_1 - 1] [i_8] = ((/* implicit */short) var_14);
                            var_39 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_11 [i_0 + 1] [i_0] [i_0] [i_0] [i_0] [i_0 - 1])) ? (1U) : (((/* implicit */unsigned int) arr_11 [i_0 - 1] [(signed char)8] [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1]))))));
                        }
                        for (signed char i_19 = 0; i_19 < 22; i_19 += 2) /* same iter space */
                        {
                            arr_69 [i_0] [i_1 - 1] [i_8] [i_17] [i_19] = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_30 [i_0 + 1] [i_17] [i_8] [i_1 - 1] [i_1 - 1] [i_0 + 1] [i_0 + 1]), (((/* implicit */int) arr_34 [i_0 - 1] [i_1 - 1] [i_8] [i_0]))))) ? (((/* implicit */unsigned long long int) (+(arr_30 [i_0 - 1] [i_0 - 1] [i_1] [i_1] [i_8] [i_17] [i_19])))) : (min((1776906957417097926ULL), (((/* implicit */unsigned long long int) arr_43 [i_8] [i_8] [i_8] [i_8]))))));
                            arr_70 [i_1] [i_0] = ((/* implicit */unsigned short) var_10);
                        }
                        for (signed char i_20 = 0; i_20 < 22; i_20 += 2) /* same iter space */
                        {
                            arr_73 [i_0] [18U] [18U] [18U] [i_0] = var_1;
                            arr_74 [(unsigned short)2] [(_Bool)1] [i_0] [i_0] [i_1 - 1] [i_0] = ((/* implicit */unsigned int) 830748071);
                        }
                        arr_75 [i_0 + 1] [i_0] [i_0 + 1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_72 [i_0 - 1] [i_1 - 1] [i_1] [i_1] [i_1] [i_0 - 1] [i_8])) ? (arr_72 [i_0 + 1] [i_1 - 1] [i_17] [i_17] [i_1 - 1] [i_1 - 1] [i_17]) : (arr_72 [i_0 + 1] [i_1 - 1] [i_1 - 1] [i_8] [i_0 + 1] [i_17] [7])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 607902435U)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_1))))) : (max((arr_72 [i_0 - 1] [i_1 - 1] [i_1] [i_8] [i_8] [i_17] [i_17]), (arr_72 [i_0 - 1] [i_1 - 1] [i_1] [(_Bool)1] [i_1] [i_8] [i_1])))));
                        var_40 -= ((/* implicit */unsigned int) var_7);
                        var_41 = ((/* implicit */unsigned int) var_1);
                    }
                    var_42 = ((/* implicit */short) 34ULL);
                    arr_76 [i_0] [i_1] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)126))) : (max((((/* implicit */unsigned int) arr_64 [i_0] [i_1] [i_0] [i_8] [i_1 - 1] [i_1])), (var_3)))))));
                }
            }
        } 
    } 
}
