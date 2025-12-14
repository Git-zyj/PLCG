/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228419
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
    var_11 = ((/* implicit */unsigned char) var_7);
    var_12 = ((/* implicit */unsigned char) min((var_12), (var_4)));
    var_13 = ((/* implicit */_Bool) var_1);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopSeq 4 */
                for (signed char i_2 = 1; i_2 < 11; i_2 += 3) 
                {
                    arr_8 [i_0 + 2] [i_1] [i_2 + 1] [i_2 - 1] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (signed char)62)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (16582368656365363203ULL))), (((/* implicit */unsigned long long int) arr_4 [i_0] [4] [(short)7]))));
                    var_14 = ((/* implicit */short) ((((unsigned int) ((4294967295U) >> (((((/* implicit */int) arr_2 [i_0 + 1])) + (130)))))) + (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0 + 2] [i_0 + 2] [i_2 + 1])) && (((/* implicit */_Bool) arr_0 [i_0 + 1] [i_2 - 1]))))))));
                }
                for (signed char i_3 = 0; i_3 < 12; i_3 += 1) /* same iter space */
                {
                    var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) max(((signed char)-54), ((signed char)-16))))));
                    var_16 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) min((((/* implicit */int) (unsigned char)232)), (var_8)))), (arr_9 [i_0 + 2] [i_0 + 1])));
                    var_17 = ((/* implicit */signed char) max((max((((/* implicit */long long int) arr_4 [i_0] [i_1] [i_3])), (-6844842498619956992LL))), (arr_6 [(short)3] [i_1] [i_0 + 2] [i_1])));
                }
                for (signed char i_4 = 0; i_4 < 12; i_4 += 1) /* same iter space */
                {
                    var_18 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) arr_11 [i_0 - 1])))) ? (((/* implicit */int) min((((/* implicit */unsigned char) var_7)), (arr_13 [i_0 + 2] [i_0 - 1] [i_0 - 1])))) : (((/* implicit */int) arr_14 [i_0 + 2] [(unsigned short)11]))));
                    var_19 |= ((/* implicit */unsigned char) max((((/* implicit */long long int) (+(((/* implicit */int) arr_11 [i_0 + 1]))))), (((((/* implicit */_Bool) arr_14 [i_0 - 1] [i_0 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0 + 3] [i_0 + 2]))) : (var_2)))));
                }
                for (signed char i_5 = 0; i_5 < 12; i_5 += 1) /* same iter space */
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (signed char i_6 = 0; i_6 < 12; i_6 += 3) 
                    {
                        arr_22 [i_0] [i_5] [i_5] = ((/* implicit */short) arr_5 [(unsigned char)9] [i_1] [i_5] [(unsigned char)9]);
                        arr_23 [i_0] [i_5] [i_5] [i_6] = ((/* implicit */unsigned short) arr_0 [(_Bool)1] [i_1]);
                    }
                    for (unsigned int i_7 = 0; i_7 < 12; i_7 += 3) 
                    {
                        var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) (signed char)43)) != (((/* implicit */int) (unsigned char)249))))) + (((((/* implicit */_Bool) (signed char)-63)) ? (((/* implicit */int) arr_1 [i_0 + 3] [i_0 + 3])) : (((/* implicit */int) arr_1 [i_0 + 1] [i_0 - 1]))))));
                        var_21 ^= ((/* implicit */_Bool) ((((/* implicit */int) ((min((var_10), (var_6))) == (max((((/* implicit */unsigned int) arr_12 [i_0 + 2] [i_1] [i_7])), (arr_4 [i_1] [i_5] [i_7])))))) - (((/* implicit */int) ((((/* implicit */unsigned long long int) var_9)) < (max((18446744073709551592ULL), (((/* implicit */unsigned long long int) arr_24 [i_0] [i_1] [i_0] [i_7])))))))));
                        var_22 = ((/* implicit */_Bool) (~((~((~(var_10)))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_8 = 0; i_8 < 12; i_8 += 3) 
                    {
                        var_23 = ((/* implicit */int) ((((/* implicit */int) arr_2 [i_0 + 3])) < (((/* implicit */int) (_Bool)1))));
                        arr_32 [i_8] [i_8] [i_1] [i_1] [i_1] [i_0 + 1] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_13 [i_0] [i_0 + 3] [i_0])) || (((/* implicit */_Bool) arr_13 [i_0 - 1] [i_0 - 1] [i_1]))));
                        /* LoopSeq 1 */
                        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                        {
                            arr_35 [i_9 - 1] [i_1] [i_5] [i_5] = ((/* implicit */_Bool) arr_12 [i_0 + 1] [i_0] [i_0 + 1]);
                            arr_36 [i_0] [i_5] [i_0] [i_0] [i_8] [i_9 - 1] [i_9 - 1] = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)148))));
                            arr_37 [i_9] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) ((var_1) >> (((((/* implicit */int) arr_17 [i_0] [i_1] [i_5] [i_0])) - (23555)))))) ? (((/* implicit */unsigned long long int) (-(var_9)))) : (11039856575565588762ULL)));
                            var_24 = ((/* implicit */unsigned char) var_8);
                        }
                    }
                    /* LoopSeq 1 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_11 = 1; i_11 < 9; i_11 += 3) 
                        {
                            var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) min((((/* implicit */long long int) (+(max((2119772195U), (((/* implicit */unsigned int) (signed char)-12))))))), (((((/* implicit */_Bool) (signed char)38)) ? (((((/* implicit */_Bool) arr_19 [i_10])) ? (((/* implicit */long long int) 2560385872U)) : (var_9))) : (((/* implicit */long long int) ((/* implicit */int) arr_41 [i_1] [i_11 + 2] [i_1] [i_1] [i_11 - 1] [i_11 - 1]))))))))));
                            var_26 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_0] [i_5])) ? (((/* implicit */int) arr_1 [i_0 + 2] [i_0])) : (((/* implicit */int) (unsigned char)83))))) ? ((+(((/* implicit */int) (unsigned char)45)))) : (((/* implicit */int) arr_10 [i_0 + 1])))) < (((/* implicit */int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_39 [i_0] [i_1] [i_5] [i_1] [i_10] [i_11 - 1])) : (((/* implicit */int) (signed char)36)))) <= (((/* implicit */int) ((short) arr_38 [i_5])))))));
                        }
                        var_27 = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-6)) || (((/* implicit */_Bool) 18424580112070333263ULL))));
                        var_28 = ((/* implicit */signed char) arr_20 [i_0 + 2] [i_10] [i_10] [i_5]);
                        arr_43 [i_10] [i_5] [i_5] [(_Bool)1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) min(((unsigned char)255), (((/* implicit */unsigned char) arr_1 [i_1] [i_5])))))))) == (max((((/* implicit */unsigned long long int) var_2)), (var_5)))));
                        arr_44 [i_10] [i_5] [i_5] [10] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_0 + 3] [(short)5] [i_0 + 3] [i_0 + 3] [i_0 - 1])) ? (((/* implicit */unsigned long long int) var_6)) : (arr_27 [i_0 + 3] [3U] [i_0] [i_0 + 3] [i_0 - 1])))) ? (((((/* implicit */_Bool) arr_27 [i_0 + 3] [i_0] [i_0 + 3] [i_0 + 3] [i_0 - 1])) ? (((/* implicit */unsigned long long int) var_9)) : (arr_27 [i_0 + 3] [i_0 + 3] [i_0 + 3] [i_0 + 3] [i_0 - 1]))) : (max((arr_27 [i_0 + 3] [i_0] [i_0 - 1] [i_0 + 3] [i_0 - 1]), (arr_27 [i_0 + 3] [i_0] [i_0] [i_0 + 3] [i_0 - 1])))));
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_12 = 0; i_12 < 12; i_12 += 1) 
                    {
                        for (short i_13 = 0; i_13 < 12; i_13 += 3) 
                        {
                            {
                                var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_24 [i_0 + 3] [i_1] [i_5] [i_12])) ? (max((((/* implicit */unsigned int) ((((/* implicit */int) var_0)) - (((/* implicit */int) arr_7 [i_0] [i_5] [(signed char)0] [i_13]))))), (arr_4 [i_0] [(unsigned char)4] [i_5]))) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_45 [i_0 + 2] [i_5] [i_0] [i_0 + 3] [i_0 + 3]), ((!(((/* implicit */_Bool) (unsigned char)49))))))))));
                                var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) ((short) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) var_2)))) >= (((1099511627775LL) + (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0 + 3] [i_5] [i_12])))))))))));
                            }
                        } 
                    } 
                }
                var_31 |= ((/* implicit */unsigned int) ((((/* implicit */long long int) (-(((/* implicit */int) ((unsigned char) (unsigned char)38)))))) == (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_1] [i_1] [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)53))) : (var_1)))) ? (max((3072LL), (((/* implicit */long long int) arr_11 [i_1])))) : (((/* implicit */long long int) (~(var_1))))))));
                /* LoopNest 3 */
                for (short i_14 = 0; i_14 < 12; i_14 += 2) 
                {
                    for (unsigned char i_15 = 2; i_15 < 11; i_15 += 3) 
                    {
                        for (unsigned int i_16 = 0; i_16 < 12; i_16 += 3) 
                        {
                            {
                                var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_0 - 1] [(unsigned char)11] [1ULL] [i_15] [i_16])) ? (((/* implicit */int) arr_13 [i_0 - 1] [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) (signed char)-110))))) ? (max((18424580112070333232ULL), (((/* implicit */unsigned long long int) var_7)))) : (((/* implicit */unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) ((arr_4 [i_0] [i_15 - 2] [i_0 - 1]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_50 [i_0] [i_15 - 1] [i_0 - 1])))))))))));
                                var_33 = ((/* implicit */int) 3118627430U);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
