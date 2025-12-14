/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32261
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
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (unsigned char i_2 = 2; i_2 < 9; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 2; i_3 < 9; i_3 += 3) 
                    {
                        var_18 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_0 [i_0]))));
                        /* LoopSeq 3 */
                        for (long long int i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            arr_14 [6LL] [(_Bool)1] [i_1] [i_1] [(unsigned short)0] [i_0] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_1] [i_2 + 2] [i_2 + 2] [i_3 + 3])) ? (arr_12 [9ULL] [i_2 + 3] [9ULL] [i_3 + 1] [(short)4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))));
                            var_19 += (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_6 [2ULL] [(unsigned char)11])))));
                        }
                        for (short i_5 = 2; i_5 < 9; i_5 += 3) 
                        {
                            var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) arr_12 [i_0 - 2] [8] [2U] [8] [8]))));
                            var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((short) arr_17 [i_0 - 1] [i_0 - 1] [7] [11LL] [i_3] [i_5 - 2])))));
                            var_22 = ((/* implicit */unsigned int) ((long long int) arr_11 [i_3] [i_3] [i_3 - 1] [i_3 + 3]));
                        }
                        for (unsigned short i_6 = 2; i_6 < 10; i_6 += 4) 
                        {
                            var_23 = ((/* implicit */short) var_4);
                            var_24 += ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (_Bool)1)));
                        }
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 2; i_7 < 10; i_7 += 1) 
                    {
                        for (unsigned char i_8 = 0; i_8 < 12; i_8 += 4) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_3 [i_0 - 2]))));
                                arr_26 [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_14) : (((/* implicit */int) var_10))))) ? (var_16) : (((/* implicit */int) var_12))));
                                var_26 |= ((/* implicit */short) var_6);
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_27 [i_0 - 1] [i_0 + 1] = ((/* implicit */unsigned long long int) (-(arr_21 [6] [6] [2U] [6] [i_0 + 1] [i_0])));
        /* LoopNest 3 */
        for (unsigned long long int i_9 = 0; i_9 < 12; i_9 += 1) 
        {
            for (unsigned int i_10 = 3; i_10 < 10; i_10 += 4) 
            {
                for (unsigned int i_11 = 0; i_11 < 12; i_11 += 2) 
                {
                    {
                        var_27 = ((/* implicit */signed char) (~(((/* implicit */int) arr_4 [i_0 - 2] [i_10 + 2] [i_10 - 3]))));
                        var_28 = ((/* implicit */unsigned long long int) ((long long int) arr_12 [i_10] [i_10 + 1] [i_10] [i_10 + 1] [i_10 - 3]));
                        arr_35 [i_0 - 1] [8] [8] [i_9] [9LL] [8] = ((/* implicit */unsigned char) ((short) ((((/* implicit */unsigned long long int) var_15)) + (arr_12 [i_0] [i_0] [i_0] [i_0 + 1] [i_0 - 2]))));
                    }
                } 
            } 
        } 
        var_29 &= ((/* implicit */int) ((short) arr_2 [3LL] [i_0]));
        var_30 = ((/* implicit */long long int) ((int) arr_16 [i_0 + 1] [(unsigned char)2] [i_0 + 1]));
    }
    for (int i_12 = 0; i_12 < 15; i_12 += 3) 
    {
        var_31 = ((/* implicit */unsigned int) arr_38 [(_Bool)1] [i_12]);
        /* LoopNest 2 */
        for (long long int i_13 = 1; i_13 < 11; i_13 += 4) 
        {
            for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_15 = 0; i_15 < 15; i_15 += 1) 
                    {
                        for (short i_16 = 2; i_16 < 12; i_16 += 1) 
                        {
                            {
                                var_32 = ((/* implicit */int) arr_42 [i_12] [i_15] [i_14] [i_12]);
                                arr_52 [2LL] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_41 [0] [0] [0])) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)1)), (arr_39 [12U] [12U] [(_Bool)1])))) ? ((+(((/* implicit */int) var_10)))) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_44 [(_Bool)1] [(short)10] [9] [(_Bool)1])), (arr_40 [6U] [i_16] [i_16 - 1])))))) : (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [10U] [8ULL]))) : (var_1)))))));
                                var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_46 [i_13 + 2] [i_14 - 1] [i_16 + 2] [i_16 - 2])) ? (var_16) : (((/* implicit */int) arr_40 [i_13 + 3] [i_16 + 1] [i_14 - 1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (~(var_4)))))) : (((((/* implicit */_Bool) max((var_15), (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_38 [(short)6] [(short)4]))))) : (arr_39 [i_12] [(unsigned char)6] [(unsigned char)6]))))))));
                                var_34 = ((/* implicit */unsigned char) min((var_34), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_37 [0U])), (arr_41 [6U] [(unsigned short)10] [i_16 + 2])))) ? (var_14) : (((/* implicit */int) arr_49 [(_Bool)1] [(_Bool)1] [(unsigned char)8] [8] [(_Bool)1])))))));
                            }
                        } 
                    } 
                    var_35 = ((/* implicit */int) max((var_35), (((/* implicit */int) (+((-(((unsigned long long int) (_Bool)1)))))))));
                }
            } 
        } 
    }
    var_36 = ((/* implicit */unsigned int) max((var_36), (((/* implicit */unsigned int) var_16))));
    /* LoopNest 3 */
    for (unsigned char i_17 = 0; i_17 < 22; i_17 += 1) 
    {
        for (int i_18 = 0; i_18 < 22; i_18 += 4) 
        {
            for (signed char i_19 = 0; i_19 < 22; i_19 += 4) 
            {
                {
                    var_37 += ((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? (min((max((((/* implicit */unsigned long long int) var_14)), (arr_57 [i_17] [14ULL] [(unsigned char)4] [i_18]))), (((/* implicit */unsigned long long int) min((arr_56 [i_17] [i_17]), (var_5)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_54 [i_17])) ? (((/* implicit */int) arr_54 [i_19])) : (((/* implicit */int) arr_54 [(unsigned char)11])))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_20 = 1; i_20 < 21; i_20 += 1) 
                    {
                        for (unsigned char i_21 = 3; i_21 < 21; i_21 += 3) 
                        {
                            {
                                var_38 ^= ((/* implicit */short) (-(((((/* implicit */_Bool) ((signed char) var_1))) ? (((/* implicit */int) ((unsigned short) var_4))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))));
                                var_39 = ((/* implicit */unsigned long long int) min((var_39), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) var_1)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_61 [7U] [0ULL] [0ULL] [7U] [7U]))))))) <= (((unsigned long long int) 536838144U)))))));
                                var_40 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)93))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_60 [6U] [6U] [6U] [6U])))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (9223372036854775807LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_11)) : (arr_57 [i_18] [(unsigned short)2] [(unsigned char)5] [4U])))))) : (var_8)));
                                arr_63 [(signed char)13] [7U] [2U] |= ((/* implicit */short) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_53 [15] [14LL])) ? (((/* implicit */int) arr_56 [i_17] [i_17])) : (((/* implicit */int) arr_54 [i_18])))), (max((var_16), (((/* implicit */int) arr_55 [(unsigned char)16])))))))));
                            }
                        } 
                    } 
                    var_41 ^= ((/* implicit */unsigned char) ((short) var_0));
                }
            } 
        } 
    } 
}
