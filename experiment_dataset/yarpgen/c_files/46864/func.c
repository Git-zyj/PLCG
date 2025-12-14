/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46864
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
    var_13 = ((/* implicit */int) var_12);
    var_14 = ((/* implicit */unsigned int) var_1);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)124)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (_Bool)1))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((var_6) + (((arr_10 [i_2] [i_1] [i_3 - 1]) / (var_2)))))))))));
                                var_17 *= ((/* implicit */signed char) ((((_Bool) arr_11 [i_3 - 1] [i_1] [i_0 - 1] [i_0] [i_0 - 1])) ? (((((/* implicit */int) arr_3 [i_0 - 1] [i_0] [i_0 + 1])) | (((/* implicit */int) arr_3 [i_0 + 1] [i_0] [i_0 + 1])))) : (((((/* implicit */int) arr_5 [i_2] [i_0 + 1] [i_2])) * (((/* implicit */int) arr_5 [i_2] [i_0 - 1] [i_2]))))));
                                var_18 *= ((/* implicit */signed char) arr_4 [i_2] [i_3]);
                                var_19 = ((/* implicit */unsigned short) (!(var_11)));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) var_4))));
    }
    for (unsigned int i_5 = 0; i_5 < 18; i_5 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 3; i_6 < 14; i_6 += 1) 
        {
            for (unsigned short i_7 = 2; i_7 < 16; i_7 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 0; i_8 < 18; i_8 += 2) 
                    {
                        for (long long int i_9 = 0; i_9 < 18; i_9 += 2) 
                        {
                            {
                                arr_29 [i_5] [i_5] [i_7 - 2] [i_8] [i_9] = ((/* implicit */signed char) (((((~(((/* implicit */int) arr_22 [i_6 + 1] [i_6 + 1] [i_7 + 2])))) + (2147483647))) >> (((/* implicit */int) arr_22 [i_6 + 1] [(unsigned char)4] [i_7 + 2]))));
                                var_21 &= ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (((var_11) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_0))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned short i_10 = 4; i_10 < 16; i_10 += 3) 
                    {
                        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) max((((var_5) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_25 [i_10 - 1] [i_10 + 2] [(signed char)8] [i_10 - 3] [i_10])) | (((/* implicit */int) arr_25 [i_7] [i_10 + 2] [i_7] [i_7] [i_7]))))))))));
                        var_23 = ((/* implicit */_Bool) min((var_23), (((((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_26 [i_6 + 1] [i_6])))) != (((((/* implicit */long long int) ((((/* implicit */int) arr_30 [i_10] [i_7] [i_6] [i_5])) * (((/* implicit */int) var_9))))) / (max((var_0), (((/* implicit */long long int) var_3))))))))));
                    }
                    for (long long int i_11 = 0; i_11 < 18; i_11 += 2) 
                    {
                        var_24 -= ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)171))));
                        arr_34 [i_5] [i_6] [i_11] = ((/* implicit */unsigned long long int) var_4);
                        var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) var_6))));
                    }
                    arr_35 [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_31 [i_7 - 1] [i_6 - 3] [i_6 - 3]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_6] [i_6] [i_6] [i_6 + 2] [i_6 - 2])))))) && (((/* implicit */_Bool) arr_21 [i_6 - 2] [i_6 - 2] [i_7 - 2]))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
        {
            /* LoopNest 2 */
            for (signed char i_13 = 0; i_13 < 18; i_13 += 4) 
            {
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (signed char i_15 = 0; i_15 < 18; i_15 += 3) 
                        {
                            var_26 += ((/* implicit */unsigned long long int) var_3);
                            arr_46 [i_5] [i_12 - 1] [i_13] [i_12 - 1] [i_13] |= ((/* implicit */_Bool) arr_43 [i_13] [i_5] [i_13] [i_5] [i_5]);
                        }
                        for (long long int i_16 = 2; i_16 < 16; i_16 += 3) 
                        {
                            var_27 = ((/* implicit */unsigned char) var_0);
                            var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) ((var_11) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) var_1)) >> (((((/* implicit */int) arr_42 [i_5] [i_5] [i_14] [i_14])) + (146)))))) != (var_6))))) : (var_7))))));
                            arr_49 [i_16] [(unsigned char)17] [i_13] [i_16] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_5] [i_12])) ? (var_6) : (((/* implicit */long long int) 877728592U))))) ? (((((/* implicit */unsigned long long int) 3417238703U)) & (0ULL))) : (((/* implicit */unsigned long long int) var_7))))));
                            arr_50 [i_5] [(_Bool)1] [i_16] [i_5] [i_16 + 2] = ((/* implicit */long long int) 4294967283U);
                            var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1))))) / (min((((/* implicit */unsigned int) arr_43 [(_Bool)1] [i_14] [i_13] [i_12] [i_5])), (min((((/* implicit */unsigned int) var_1)), (var_7))))))))));
                        }
                        /* vectorizable */
                        for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
                        {
                            arr_53 [(unsigned short)7] [i_17] [i_14] [i_17] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 575111807)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)117))));
                            arr_54 [i_5] [i_12 - 1] [(unsigned short)6] [i_14] [i_17] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_3))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned short i_18 = 0; i_18 < 18; i_18 += 3) /* same iter space */
                        {
                            var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) arr_41 [i_5] [i_5] [i_12] [i_13] [i_14] [i_18]))));
                            var_31 -= arr_23 [i_12 - 1] [i_12] [i_12 - 1];
                            var_32 -= ((/* implicit */signed char) 877728592U);
                            var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_5)))))));
                        }
                        for (unsigned short i_19 = 0; i_19 < 18; i_19 += 3) /* same iter space */
                        {
                            arr_60 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned int) arr_28 [i_5] [i_5] [i_5] [i_5] [1U]);
                            var_34 -= ((/* implicit */_Bool) arr_51 [(_Bool)1] [i_5] [i_13] [i_12 - 1] [i_5]);
                            arr_61 [i_5] [i_5] [i_13] [i_14] [10] = ((/* implicit */_Bool) ((9873259148231837970ULL) << (((((/* implicit */int) (signed char)-91)) + (132)))));
                            arr_62 [i_5] [i_5] [i_13] [i_12] [i_5] = ((/* implicit */long long int) var_10);
                        }
                    }
                } 
            } 
            arr_63 [i_5] = ((/* implicit */long long int) (~(((0ULL) + (((/* implicit */unsigned long long int) (+(2147483647))))))));
            arr_64 [i_12] [i_5] [i_5] = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) arr_23 [i_12 - 1] [i_12 - 1] [i_12 - 1])) >> (((/* implicit */int) arr_23 [i_12 - 1] [i_12] [i_12 - 1]))))));
        }
        for (unsigned short i_20 = 0; i_20 < 18; i_20 += 2) 
        {
            arr_68 [i_5] [i_20] [i_5] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_10)) ? (arr_19 [i_5] [i_20]) : (((/* implicit */long long int) ((/* implicit */int) arr_39 [i_5] [10U] [i_5] [i_5]))))) == (((/* implicit */long long int) ((((((/* implicit */_Bool) 877728571U)) && (((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_40 [i_20] [i_20] [i_5])))))));
            var_35 = ((/* implicit */unsigned char) max((var_35), (var_9)));
        }
        arr_69 [i_5] [i_5] = ((/* implicit */_Bool) ((2163023157U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)54636)))));
    }
}
