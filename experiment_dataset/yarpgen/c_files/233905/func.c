/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233905
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
    for (signed char i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 23; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) (signed char)-81)) ? (((/* implicit */int) (signed char)-65)) : (((/* implicit */int) (unsigned char)33)))));
                var_19 = ((((/* implicit */_Bool) max((var_11), (((/* implicit */unsigned int) var_1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)229)) <= (((/* implicit */int) ((arr_3 [i_0]) < (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0])))))))))) : (min((4294967289U), (((/* implicit */unsigned int) (short)26190)))));
                var_20 = ((/* implicit */signed char) ((9223372036854775807LL) < (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1 - 1])) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)32))))))))))));
                var_21 = ((/* implicit */signed char) ((((arr_3 [i_0]) > (min((-3468341894102462877LL), (((/* implicit */long long int) var_10)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((min((0U), (((/* implicit */unsigned int) arr_2 [i_1 - 1])))) < (((/* implicit */unsigned int) ((/* implicit */int) ((short) 6452933237377356580LL)))))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_0 + 1] [i_0 - 1] [i_0]))))) ? (((/* implicit */long long int) (~(7U)))) : (6452933237377356576LL)))));
                /* LoopSeq 2 */
                for (unsigned int i_2 = 1; i_2 < 23; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 3; i_3 < 23; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((signed char) arr_2 [i_0]))) : (((/* implicit */int) ((short) (short)-11268))))))));
                                var_23 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) (unsigned char)187)))) ? (((((/* implicit */_Bool) arr_9 [i_0 + 1] [i_3 - 2] [i_0])) ? (4294967277U) : (arr_5 [i_3] [i_0] [i_3 + 1] [i_3 + 1]))) : (arr_12 [i_0 + 1] [i_1 - 1] [i_0] [i_4] [i_4] [i_0 - 1] [i_0 - 1])));
                                var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) arr_2 [i_2 + 1]))));
                                var_25 &= ((/* implicit */unsigned int) ((min((-2748455802572608711LL), (((/* implicit */long long int) arr_11 [i_4] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_2 + 1] [i_1 - 1] [i_0])))) | (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0 - 1])) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0 - 1] [i_0 + 1] [i_4]))))))));
                                var_26 = ((((/* implicit */_Bool) -2385676530915997748LL)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))));
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */signed char) (+((-9223372036854775807LL - 1LL))));
                    /* LoopSeq 3 */
                    for (short i_5 = 1; i_5 < 22; i_5 += 4) 
                    {
                        var_28 = ((/* implicit */signed char) max((((/* implicit */unsigned int) arr_6 [i_0])), (arr_13 [i_0] [i_0] [i_2 + 1] [i_2 + 1])));
                        var_29 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_9 [i_0 - 1] [i_1 + 1] [i_0])) ? (((/* implicit */int) arr_9 [i_0 - 1] [i_1 + 1] [i_0])) : (((/* implicit */int) arr_9 [i_0 - 1] [i_1 + 1] [i_0]))))));
                        var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) ((((/* implicit */_Bool) ((3U) << (((((((/* implicit */_Bool) 3138440199U)) ? (arr_3 [2U]) : (((/* implicit */long long int) 4294967288U)))) + (6627618347639861125LL)))))) ? ((+(((var_7) + (((/* implicit */long long int) ((/* implicit */int) arr_6 [14U]))))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))))));
                    }
                    /* vectorizable */
                    for (long long int i_6 = 0; i_6 < 24; i_6 += 4) 
                    {
                        var_31 = ((/* implicit */short) 659066317382016949LL);
                        var_32 = (i_0 % 2 == zero) ? (((/* implicit */short) ((((((/* implicit */int) arr_15 [i_0] [i_2 - 1] [i_1 + 1] [i_0])) + (2147483647))) >> (((((/* implicit */int) arr_15 [i_0] [i_1 + 1] [i_1 - 1] [i_0])) + (2392)))))) : (((/* implicit */short) ((((((((/* implicit */int) arr_15 [i_0] [i_2 - 1] [i_1 + 1] [i_0])) - (2147483647))) + (2147483647))) >> (((((((/* implicit */int) arr_15 [i_0] [i_1 + 1] [i_1 - 1] [i_0])) + (2392))) - (33839))))));
                        var_33 = ((/* implicit */signed char) ((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)93))) > (arr_12 [i_6] [i_1 - 1] [i_0] [i_6] [i_0 + 1] [i_6] [i_2 + 1]))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (((((/* implicit */_Bool) arr_13 [i_0 - 1] [i_0] [i_2 + 1] [i_6])) ? (arr_12 [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1] [i_6] [i_6] [i_0 + 1]) : (4294967289U)))));
                        var_34 ^= ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1])))))));
                    }
                    /* vectorizable */
                    for (short i_7 = 2; i_7 < 23; i_7 += 1) 
                    {
                        var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_17 [i_0 + 1] [i_0 + 1] [i_2 - 1] [i_0])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_0] [i_1 - 1] [i_0] [i_2 + 1] [i_0] [i_7 - 2] [i_7 - 1])) ? (((/* implicit */int) arr_15 [i_0 + 1] [i_1 - 1] [i_2 - 1] [i_0])) : (((/* implicit */int) arr_2 [i_0]))))) : (var_6)));
                        var_36 = ((/* implicit */long long int) max((var_36), (((/* implicit */long long int) ((-2547723350519351526LL) >= (((/* implicit */long long int) arr_12 [i_0 - 1] [i_0 + 1] [(unsigned char)2] [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 + 1])))))));
                        /* LoopSeq 1 */
                        for (long long int i_8 = 0; i_8 < 24; i_8 += 1) 
                        {
                            var_37 = ((/* implicit */long long int) ((var_6) / (arr_21 [i_0 - 1] [i_1 - 1] [i_0 - 1] [i_2 - 1] [i_7 - 1])));
                            var_38 += ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (6U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [(short)22])))));
                            var_39 = ((/* implicit */unsigned char) ((0U) <= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-81)))));
                            var_40 = ((/* implicit */unsigned char) arr_21 [i_8] [i_7 - 2] [i_1 - 1] [i_1 - 1] [i_0]);
                        }
                    }
                }
                for (unsigned char i_9 = 2; i_9 < 22; i_9 += 1) 
                {
                    var_41 = ((((/* implicit */_Bool) 17U)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) min((2385676530915997748LL), (((/* implicit */long long int) 20U))))))) : (4294967289U));
                    var_42 = ((/* implicit */signed char) (~(4294967290U)));
                    var_43 = ((/* implicit */short) max((var_43), (((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) max(((short)22978), (((/* implicit */short) arr_6 [(signed char)10]))))), (min((((/* implicit */long long int) var_13)), (-9223372036854775804LL)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_1 + 1] [6LL] [i_9 - 1] [6LL])) ? (((/* implicit */int) arr_17 [i_9 + 1] [i_0 - 1] [i_9 - 2] [(signed char)12])) : (((/* implicit */int) max((((/* implicit */short) (signed char)81)), (var_17))))))) : ((-((-(arr_1 [i_0]))))))))));
                }
            }
        } 
    } 
    var_44 = ((/* implicit */unsigned char) var_4);
    /* LoopSeq 2 */
    for (short i_10 = 1; i_10 < 15; i_10 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned char i_11 = 3; i_11 < 15; i_11 += 3) 
        {
            for (signed char i_12 = 3; i_12 < 15; i_12 += 2) 
            {
                for (unsigned int i_13 = 1; i_13 < 15; i_13 += 2) 
                {
                    {
                        var_45 = ((/* implicit */long long int) ((unsigned int) max((((/* implicit */unsigned int) arr_0 [i_12 - 2])), (4294967292U))));
                        var_46 = ((/* implicit */short) ((long long int) (unsigned char)122));
                        /* LoopSeq 1 */
                        for (long long int i_14 = 4; i_14 < 14; i_14 += 4) 
                        {
                            var_47 = ((/* implicit */unsigned char) min((var_47), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) 6452933237377356580LL)))))));
                            var_48 = ((/* implicit */unsigned int) max((max((((/* implicit */long long int) arr_38 [i_14 + 2] [i_14 - 4] [i_10] [i_11 - 3] [i_12 - 3] [i_11 - 3] [i_10])), (((((/* implicit */_Bool) (unsigned char)134)) ? (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_10]))) : (9223372036854775807LL))))), (((((/* implicit */long long int) ((((/* implicit */_Bool) arr_38 [i_10] [i_10] [i_14 - 2] [i_10 + 1] [i_14 - 1] [i_14 - 1] [i_14 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_10] [i_10 - 1] [i_10 - 1] [i_10]))) : (arr_21 [i_10 - 1] [i_11 - 2] [i_12 - 1] [i_10 - 1] [i_14 - 3])))) / (max((((/* implicit */long long int) arr_11 [i_10 - 1] [i_13 - 1] [i_12 + 1] [i_12 - 2] [i_11 - 2] [i_11 - 3] [i_10 - 1])), (2680606572056975340LL)))))));
                            var_49 = ((/* implicit */long long int) arr_15 [i_10] [i_10 - 1] [i_10 - 1] [i_10]);
                        }
                        var_50 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1549933042U)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_32 [i_12 - 3]))))) ? (-2385676530915997769LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)63)))))) ? (((((/* implicit */_Bool) min((((/* implicit */long long int) (short)-881)), (arr_3 [i_10])))) ? (((((/* implicit */_Bool) arr_24 [i_10] [i_11 - 2] [i_10] [i_13 - 1])) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_10 - 1] [i_11 - 2] [i_11 - 2] [i_13 - 1]))))) : (((/* implicit */long long int) min((2128743763U), (((/* implicit */unsigned int) arr_11 [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10 + 1] [i_10 + 1] [i_10 - 1]))))))) : (((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_33 [i_10 - 1] [i_10] [i_13 + 1])))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_9))))) : (((((/* implicit */_Bool) 4294967274U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_11 - 2] [i_12 + 1] [i_10]))) : (var_10))))))));
                    }
                } 
            } 
        } 
        var_51 = ((/* implicit */short) (((!(((/* implicit */_Bool) var_8)))) ? ((-(((9223372036854775807LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)62))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_20 [i_10 - 1])) ? (4294967274U) : (arr_5 [i_10 + 1] [i_10] [i_10] [i_10 + 1]))))));
        /* LoopNest 3 */
        for (short i_15 = 0; i_15 < 16; i_15 += 3) 
        {
            for (long long int i_16 = 3; i_16 < 13; i_16 += 3) 
            {
                for (long long int i_17 = 3; i_17 < 13; i_17 += 4) 
                {
                    {
                        var_52 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_16])) ? (((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned char)12)), (arr_47 [i_15] [(signed char)12] [i_16 - 1] [i_15])))) : (max((arr_31 [2LL] [2LL]), (((/* implicit */long long int) arr_48 [(unsigned char)10])))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-51)) ? (69834083991955084LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)133)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)136))) : (1237105652U))))));
                        var_53 &= ((/* implicit */unsigned char) arr_21 [i_17 + 3] [i_17 - 3] [i_17 - 2] [i_17 - 3] [i_17 - 2]);
                        var_54 = ((/* implicit */unsigned char) max((var_54), (((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 3598959312848797955LL)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-886)))))))) ? (((/* implicit */int) (unsigned char)134)) : (((/* implicit */int) (signed char)63)))))));
                    }
                } 
            } 
        } 
    }
    for (short i_18 = 0; i_18 < 17; i_18 += 2) 
    {
        var_55 = ((/* implicit */long long int) max((var_55), (((/* implicit */long long int) ((((/* implicit */_Bool) 7U)) ? (((((/* implicit */_Bool) -2385676530915997769LL)) ? ((~(arr_23 [i_18] [i_18] [i_18] [i_18]))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)22))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)233))))))))));
        var_56 = ((/* implicit */short) max((var_56), (((/* implicit */short) ((((((/* implicit */int) arr_25 [i_18] [i_18])) << (((((/* implicit */int) arr_25 [i_18] [i_18])) - (1593))))) | (((/* implicit */int) (unsigned char)100)))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_19 = 0; i_19 < 21; i_19 += 4) 
    {
        var_57 = ((/* implicit */short) (signed char)113);
        var_58 = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) 9223372036854775800LL)) ? (arr_23 [i_19] [i_19] [i_19] [i_19]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_19]))))));
    }
}
