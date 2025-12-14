/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246334
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                arr_4 [i_1] [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned int) arr_1 [i_0] [i_1])), (min((((((/* implicit */_Bool) 24U)) ? (24U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_1]))))), (min((((/* implicit */unsigned int) (_Bool)1)), (4294967269U)))))));
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0] [i_1])) + ((+(((/* implicit */int) arr_1 [i_0] [i_0])))))))));
                    var_18 = ((/* implicit */signed char) ((((min((((/* implicit */long long int) arr_3 [i_0] [(unsigned short)8] [i_2])), (((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1] [i_2]))) * (arr_0 [i_1] [i_2]))))) + (9223372036854775807LL))) >> (((arr_3 [(_Bool)1] [i_1] [i_2]) - (3644078527U)))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 22; i_4 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((max((((/* implicit */unsigned long long int) arr_13 [i_3] [i_4 - 1] [(signed char)10] [i_4 + 1] [i_4 + 2] [i_4 - 1] [i_4 + 2])), (arr_11 [i_2] [i_4 + 2] [(short)18] [i_4] [i_4] [i_4 - 1] [i_4]))) >= (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_8 [(unsigned short)4] [(unsigned short)4] [i_2] [i_3] [(unsigned short)4]))))))))));
                                arr_14 [i_0] [i_1] [i_2] [i_1] [i_3] [i_0] = ((/* implicit */signed char) arr_12 [i_0] [i_0] [i_2] [i_3] [i_4 + 2] [(unsigned short)17] [i_0]);
                            }
                        } 
                    } 
                    arr_15 [(short)0] [i_1] [i_0] [i_2] = ((/* implicit */long long int) arr_2 [i_0] [i_1]);
                }
                var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [11LL] [i_1] [i_1])) ? (((/* implicit */int) arr_8 [i_0] [14LL] [i_0] [i_1] [14LL])) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_1] [i_1]))))) ? (((/* implicit */int) max((arr_5 [i_0] [i_0] [i_0] [i_1]), (var_11)))) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])), (arr_5 [5LL] [i_0] [i_0] [i_1]))))));
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_13)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_11))));
    /* LoopSeq 3 */
    for (long long int i_5 = 3; i_5 < 11; i_5 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_6 = 3; i_6 < 12; i_6 += 4) 
        {
            arr_22 [i_6] [i_5] = ((/* implicit */unsigned long long int) arr_10 [i_6 + 1] [0LL] [18U] [i_5 - 1] [i_5]);
            /* LoopSeq 1 */
            for (unsigned short i_7 = 0; i_7 < 14; i_7 += 3) 
            {
                var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) (~(((/* implicit */int) arr_21 [i_6 + 2] [(unsigned short)0] [i_5 - 1])))))));
                arr_25 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_21 [i_5 + 3] [i_5] [i_5 + 3])) >= (((/* implicit */int) arr_8 [i_6] [i_6] [i_5 + 3] [i_6 + 1] [i_7]))));
            }
            /* LoopNest 2 */
            for (unsigned int i_8 = 3; i_8 < 13; i_8 += 1) 
            {
                for (unsigned int i_9 = 0; i_9 < 14; i_9 += 2) 
                {
                    {
                        var_23 = ((/* implicit */unsigned long long int) arr_9 [i_5 + 2] [i_5] [i_5] [i_5 - 1] [i_5] [i_5 + 2]);
                        var_24 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) arr_13 [i_5] [i_5] [i_5] [i_5] [i_5] [6LL] [i_5 + 2]))) && (((((/* implicit */int) arr_17 [i_6])) >= (((/* implicit */int) arr_28 [i_5 - 3] [i_5] [i_5] [i_5 - 3]))))));
                        /* LoopSeq 3 */
                        for (unsigned short i_10 = 0; i_10 < 14; i_10 += 2) 
                        {
                            arr_35 [(unsigned short)12] [(unsigned short)12] [i_8 + 1] [i_5] [i_9] [i_9] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_12 [(signed char)11] [i_5] [i_8] [i_9] [7ULL] [i_8 - 3] [i_6 - 1]))));
                            arr_36 [i_5] [i_6] [i_5] [i_9] [i_10] = ((/* implicit */long long int) arr_20 [i_5 + 2] [i_6]);
                            arr_37 [8LL] [i_5] = arr_10 [i_5] [i_5] [i_8] [i_9] [i_5];
                            arr_38 [(signed char)0] [i_5] [i_8 - 3] [(signed char)10] [(signed char)10] = (-(arr_6 [i_9] [i_6] [i_5]));
                        }
                        for (unsigned int i_11 = 0; i_11 < 14; i_11 += 2) /* same iter space */
                        {
                            var_25 = ((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_6 - 1] [i_5])) | (((/* implicit */int) arr_2 [i_5 - 1] [i_5 + 1]))));
                            var_26 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_1 [i_5 + 2] [i_6 + 2]))));
                        }
                        for (unsigned int i_12 = 0; i_12 < 14; i_12 += 2) /* same iter space */
                        {
                            var_27 *= ((/* implicit */short) arr_0 [i_6 + 2] [i_5 + 3]);
                            var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_5 - 2] [i_9] [i_6 - 2] [i_6 - 2])) - (((((/* implicit */_Bool) arr_18 [i_6])) ? (((/* implicit */int) arr_13 [i_5] [i_6] [i_5] [i_8] [i_12] [(unsigned short)12] [i_5 - 1])) : (((/* implicit */int) arr_7 [i_5 + 3] [i_9] [i_12])))))))));
                        }
                    }
                } 
            } 
            var_29 = ((/* implicit */long long int) arr_21 [i_5 - 3] [i_5] [i_5 + 3]);
        }
        arr_45 [i_5] = ((/* implicit */_Bool) max((((/* implicit */long long int) arr_23 [i_5])), ((((!(((/* implicit */_Bool) arr_20 [i_5 + 1] [i_5])))) ? (((/* implicit */long long int) arr_41 [i_5 + 1] [i_5] [i_5 + 1] [i_5 + 3] [i_5] [i_5 - 2] [i_5 + 3])) : ((~(arr_6 [i_5] [i_5] [i_5])))))));
    }
    for (long long int i_13 = 1; i_13 < 23; i_13 += 4) /* same iter space */
    {
        var_30 = ((((((/* implicit */_Bool) (-(arr_47 [i_13] [i_13 + 1])))) ? ((~(arr_47 [i_13] [i_13 - 1]))) : (arr_48 [i_13] [i_13]))) << (((/* implicit */int) ((((/* implicit */unsigned long long int) min((1231180883U), (11U)))) != (arr_46 [i_13 + 2])))));
        arr_49 [i_13 + 1] = ((unsigned short) (short)26352);
        arr_50 [i_13] = ((((/* implicit */_Bool) (((~(arr_47 [i_13] [i_13 + 2]))) % (((((/* implicit */_Bool) arr_48 [(short)14] [i_13])) ? (arr_48 [i_13 - 1] [i_13 - 1]) : (arr_47 [i_13] [i_13])))))) ? (((/* implicit */unsigned long long int) arr_48 [i_13] [i_13 + 1])) : (arr_46 [i_13]));
    }
    /* vectorizable */
    for (long long int i_14 = 1; i_14 < 23; i_14 += 4) /* same iter space */
    {
        var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_48 [i_14 + 1] [i_14 + 1])) ? (((((/* implicit */unsigned long long int) arr_48 [i_14] [i_14])) + (var_0))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_51 [i_14 - 1])))));
        arr_55 [i_14] |= ((/* implicit */unsigned short) ((arr_47 [i_14 - 1] [i_14 - 1]) * (arr_48 [i_14 - 1] [i_14 + 1])));
    }
    var_32 = ((/* implicit */unsigned short) min((max((min((((/* implicit */unsigned long long int) var_16)), (var_6))), (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) max((min((var_2), (((/* implicit */long long int) var_11)))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_5))))))))));
    var_33 = ((/* implicit */unsigned int) var_8);
}
