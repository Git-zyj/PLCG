/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35206
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
    var_20 = ((/* implicit */short) 8938192430563255271ULL);
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 3; i_0 < 18; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */int) (signed char)127);
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */long long int) ((unsigned short) ((unsigned long long int) (_Bool)0)));
                                var_22 = ((/* implicit */signed char) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)196))) % (2643507928U))) & (min((var_16), (((/* implicit */unsigned int) -517809597))))));
                            }
                        } 
                    } 
                    arr_12 [8] &= ((/* implicit */int) var_4);
                    var_23 = ((/* implicit */_Bool) arr_8 [i_2] [i_0]);
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_5 = 3; i_5 < 18; i_5 += 1) /* same iter space */
    {
        arr_16 [i_5] = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)-114)) & (((/* implicit */int) (unsigned char)46))));
        /* LoopNest 2 */
        for (long long int i_6 = 0; i_6 < 20; i_6 += 1) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 3) 
            {
                {
                    var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) arr_9 [i_5] [i_5] [i_5] [i_6] [i_6] [i_7] [i_7]))) ? (((((/* implicit */_Bool) 4965419564606163601LL)) ? (1638288550775191847LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)108))))) : (((/* implicit */long long int) ((unsigned int) (unsigned short)59842)))));
                    /* LoopSeq 3 */
                    for (int i_8 = 2; i_8 < 18; i_8 += 1) /* same iter space */
                    {
                        arr_25 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [(_Bool)1] [i_5] [10ULL] [i_5] [i_5] [i_5 - 2])) ? (-6448055751296089119LL) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [13U] [i_5])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_6] [17U]))) : (((((/* implicit */_Bool) arr_0 [(unsigned char)8])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)210))) : (var_13)))));
                        /* LoopSeq 2 */
                        for (short i_9 = 0; i_9 < 20; i_9 += 3) 
                        {
                            arr_28 [i_5] [i_5] [i_9] [i_5] [i_9] = ((/* implicit */unsigned int) arr_11 [i_8 + 1] [i_5] [i_8 + 2] [i_8 - 2] [i_8 - 1] [i_9] [i_9]);
                            arr_29 [i_5 - 1] [i_5 + 1] [i_5] [7] [i_5 + 2] = ((/* implicit */unsigned int) (signed char)-21);
                            var_25 = ((/* implicit */unsigned long long int) ((_Bool) ((short) (_Bool)1)));
                            var_26 ^= arr_6 [i_9] [i_7] [i_5];
                            var_27 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-50)) + (2147483647))) << (((((/* implicit */int) (unsigned char)154)) - (154)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_5]))) : (((unsigned long long int) 3765576884U))));
                        }
                        for (unsigned char i_10 = 0; i_10 < 20; i_10 += 4) 
                        {
                            arr_33 [i_5 + 1] [i_5] [i_8 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2643507928U)) ? (arr_19 [i_10] [i_5] [i_5]) : (((/* implicit */int) var_18))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_23 [15U] [i_5] [i_7] [(unsigned short)10])))) : (((((/* implicit */_Bool) var_2)) ? (4965419564606163601LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-124)))))));
                            var_28 = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)82))) < (var_5))));
                        }
                    }
                    for (int i_11 = 2; i_11 < 18; i_11 += 1) /* same iter space */
                    {
                        var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) ((18446744073709551610ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
                        arr_36 [i_5] [5ULL] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_0 [(unsigned char)11])) : (arr_19 [i_5] [i_5] [i_5])));
                        var_30 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned char)63)) ? (((/* implicit */int) (unsigned char)46)) : (((/* implicit */int) (_Bool)1)))) > (((/* implicit */int) arr_14 [i_11 - 2]))));
                    }
                    for (int i_12 = 2; i_12 < 18; i_12 += 1) /* same iter space */
                    {
                        var_31 &= ((((/* implicit */_Bool) arr_6 [i_12 + 2] [i_12 + 1] [i_5 - 2])) ? (((((/* implicit */_Bool) 18446744073709551607ULL)) ? (arr_35 [i_5] [i_5] [i_5] [i_5 - 2]) : (((/* implicit */unsigned long long int) var_7)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_37 [(signed char)18] [(signed char)18] [(signed char)18] [i_12 + 2] [i_12 + 1] [(short)4])))));
                        var_32 = ((/* implicit */_Bool) ((arr_31 [i_12 - 1] [i_6] [i_5 - 1] [i_12 + 1] [i_12 - 1] [i_12] [(_Bool)1]) + (arr_31 [(signed char)6] [i_6] [i_5 + 2] [(signed char)14] [i_12 + 2] [i_12] [i_6])));
                        arr_39 [i_12 - 2] [i_6] [i_7] [i_5] [i_5] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(_Bool)1])))));
                    }
                    var_33 = ((/* implicit */long long int) var_3);
                    var_34 = ((/* implicit */signed char) arr_17 [i_5]);
                }
            } 
        } 
        var_35 = ((/* implicit */unsigned int) arr_18 [i_5 - 1]);
    }
    for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
    {
        var_36 &= ((((unsigned int) 2513023303262697922ULL)) >> (((((unsigned long long int) arr_38 [i_13] [i_13 + 1] [i_13] [i_13 + 1])) - (32ULL))));
        arr_42 [i_13] [i_13 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((0U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_13] [i_13 + 1])))))) ? (((/* implicit */int) var_4)) : (((int) arr_23 [i_13 + 1] [i_13 + 1] [i_13 + 1] [i_13 + 1]))));
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 16; i_14 += 2) 
        {
            for (signed char i_15 = 1; i_15 < 13; i_15 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_16 = 0; i_16 < 16; i_16 += 1) 
                    {
                        arr_51 [i_13] = ((/* implicit */short) -4965419564606163581LL);
                        var_37 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4601565363204215962ULL)) ? (arr_44 [i_13 + 1]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 755565283730558120ULL)) ? (arr_48 [(short)3] [i_15 + 2] [(unsigned short)13] [i_13 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_15 + 2] [i_13 + 1]))))))))) ? (((((/* implicit */long long int) ((arr_19 [i_16] [i_13] [i_15 - 1]) - (arr_19 [i_13] [i_13] [i_15 + 1])))) + (((long long int) arr_37 [i_13 + 1] [i_14] [i_14] [i_15] [i_16] [i_13])))) : (((/* implicit */long long int) arr_31 [i_13 + 1] [17U] [i_14] [i_14] [i_14] [i_15] [i_14]))));
                        var_38 = ((/* implicit */long long int) arr_23 [i_13] [i_13] [i_13] [i_13 + 1]);
                    }
                    var_39 = ((/* implicit */unsigned char) max((var_39), (((/* implicit */unsigned char) arr_26 [i_13] [i_13] [i_14] [i_13] [i_15] [(unsigned short)8]))));
                }
            } 
        } 
    }
}
