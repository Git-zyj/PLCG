/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28480
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
    var_10 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) * ((+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)79)) : (((/* implicit */int) var_0))))))));
    var_11 = ((/* implicit */short) (((+((+(3312029170439978498ULL))))) > (((/* implicit */unsigned long long int) ((long long int) var_8)))));
    var_12 = ((/* implicit */short) ((unsigned int) (~(((/* implicit */int) var_9)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 19; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (short i_2 = 3; i_2 < 21; i_2 += 3) 
                {
                    var_13 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned short) ((((/* implicit */unsigned long long int) var_7)) * (arr_1 [i_0])))))));
                    arr_8 [i_0] [i_0] [20LL] [20LL] &= ((/* implicit */short) ((unsigned int) arr_4 [i_2] [i_0]));
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    arr_12 [i_1] [(short)21] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_10 [i_1 + 2] [i_1] [i_1]), (((/* implicit */long long int) var_5))))) ? (((var_4) / (((/* implicit */unsigned long long int) arr_10 [i_1 - 1] [i_1] [i_1])))) : (((18446744073709551615ULL) * (((/* implicit */unsigned long long int) arr_10 [i_1 - 3] [i_1 - 3] [i_1]))))));
                    /* LoopSeq 3 */
                    for (unsigned int i_4 = 1; i_4 < 19; i_4 += 3) 
                    {
                        arr_16 [i_1] = ((/* implicit */unsigned short) (_Bool)1);
                        arr_17 [i_0] [(unsigned short)18] [i_3] [i_0] &= ((/* implicit */unsigned char) var_5);
                    }
                    for (int i_5 = 2; i_5 < 18; i_5 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            arr_22 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((var_7), (arr_7 [i_1] [6ULL])))) && (((/* implicit */_Bool) min((0ULL), (((/* implicit */unsigned long long int) arr_6 [i_6] [i_0])))))));
                            var_14 = (~(((((/* implicit */_Bool) min((((/* implicit */long long int) arr_18 [i_3] [(unsigned short)5] [i_6])), (var_7)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6))))) : (((((/* implicit */_Bool) 0U)) ? (21ULL) : (((/* implicit */unsigned long long int) var_1)))))));
                            var_15 = 2639190781737672182ULL;
                            arr_23 [i_1] [i_1] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 0ULL)) ? (arr_18 [4U] [i_5 - 1] [4U]) : (var_2))) - (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_11 [i_0] [i_0]))))))), (arr_1 [i_1 - 1])));
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_16 = ((/* implicit */signed char) (-((+(((/* implicit */int) var_3))))));
                            var_17 += ((/* implicit */unsigned char) max((arr_13 [i_0]), (((/* implicit */long long int) (+(((/* implicit */int) arr_9 [i_1 - 3])))))));
                        }
                        var_18 = ((/* implicit */unsigned long long int) var_6);
                        arr_26 [i_0] [i_1] [i_3] = ((/* implicit */signed char) min(((~(((/* implicit */int) var_3)))), (((/* implicit */int) ((arr_4 [i_1] [i_1]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)121))))))));
                    }
                    for (unsigned long long int i_8 = 1; i_8 < 18; i_8 += 3) 
                    {
                        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) 18446744073709551615ULL))) == (((/* implicit */int) var_9)))))));
                        arr_30 [i_0] [i_0] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(arr_25 [i_1 + 2] [i_1 + 2] [i_3] [i_1 + 2] [i_8 + 3])))) ? (((/* implicit */unsigned long long int) arr_20 [i_0] [i_1 - 3] [i_1] [i_3] [i_8 + 1])) : ((+(var_4)))));
                        arr_31 [i_0] [i_1] [i_1] [i_1] = (i_1 % 2 == 0) ? (((/* implicit */short) ((((/* implicit */int) ((arr_10 [i_1] [i_3] [i_1]) == (arr_10 [5] [5] [i_1])))) << (((min((((/* implicit */long long int) var_9)), (arr_10 [i_0] [i_0] [i_1]))) + (5801689056675497258LL)))))) : (((/* implicit */short) ((((/* implicit */int) ((arr_10 [i_1] [i_3] [i_1]) == (arr_10 [5] [5] [i_1])))) << (((((min((((/* implicit */long long int) var_9)), (arr_10 [i_0] [i_0] [i_1]))) + (5801689056675497258LL))) - (5801689056675558268LL))))));
                    }
                }
                arr_32 [i_1] = ((int) (-(((/* implicit */int) (unsigned char)121))));
                /* LoopNest 3 */
                for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 4) 
                {
                    for (unsigned char i_10 = 0; i_10 < 22; i_10 += 1) 
                    {
                        for (signed char i_11 = 0; i_11 < 22; i_11 += 2) 
                        {
                            {
                                arr_40 [i_11] [i_1] [i_9] [i_9] [i_1] [i_0] = ((/* implicit */int) (-(((((/* implicit */_Bool) (-(0ULL)))) ? (((/* implicit */unsigned long long int) arr_20 [i_0] [i_0] [i_9] [i_0] [i_11])) : (((18446744073709551615ULL) * (2047ULL)))))));
                                arr_41 [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (+(max(((-(((/* implicit */int) (short)25409)))), ((-(((/* implicit */int) arr_15 [i_9] [i_10]))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 4 */
    for (unsigned int i_12 = 2; i_12 < 20; i_12 += 3) 
    {
        /* LoopSeq 1 */
        for (long long int i_13 = 1; i_13 < 22; i_13 += 3) 
        {
            arr_47 [i_13] [i_13] [17LL] = ((/* implicit */unsigned long long int) ((short) (+(((((/* implicit */int) (unsigned char)137)) & (((/* implicit */int) (short)1780)))))));
            var_20 = arr_43 [i_12 + 1] [i_12 + 2];
        }
        arr_48 [i_12 - 2] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_43 [i_12 + 3] [i_12 + 2])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65525))))) >> (((((((/* implicit */_Bool) arr_46 [(signed char)16] [i_12])) ? (((/* implicit */int) arr_45 [i_12] [(unsigned char)22])) : (((int) (signed char)-1)))) - (31256)))));
        /* LoopNest 2 */
        for (short i_14 = 1; i_14 < 20; i_14 += 1) 
        {
            for (unsigned int i_15 = 1; i_15 < 22; i_15 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_16 = 2; i_16 < 22; i_16 += 1) 
                    {
                        for (unsigned char i_17 = 3; i_17 < 22; i_17 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned int) min((var_21), (var_1)));
                                arr_64 [i_12 + 2] [i_15] [i_12 + 3] [i_12] = ((/* implicit */unsigned long long int) (~(var_8)));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_18 = 2; i_18 < 22; i_18 += 1) 
                    {
                        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) (-(((/* implicit */int) arr_43 [i_12 - 1] [i_15 - 1])))))));
                        var_23 &= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_66 [i_18] [i_15] [i_12] [i_12])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)21731))))));
                        var_24 = ((/* implicit */int) var_8);
                    }
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_19 = 0; i_19 < 18; i_19 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_20 = 0; i_20 < 18; i_20 += 3) 
        {
            for (long long int i_21 = 0; i_21 < 18; i_21 += 3) 
            {
                {
                    var_25 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) * (arr_71 [i_19])));
                    /* LoopNest 2 */
                    for (unsigned int i_22 = 3; i_22 < 17; i_22 += 3) 
                    {
                        for (signed char i_23 = 3; i_23 < 17; i_23 += 3) 
                        {
                            {
                                arr_83 [i_19] [i_19] [i_19] [i_19] [i_21] = ((/* implicit */signed char) var_8);
                                var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_79 [i_19] [(unsigned short)0] [i_21] [(unsigned char)11])) ? (((16366561486844361766ULL) + (((/* implicit */unsigned long long int) arr_73 [i_19])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0)))));
                                var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3967955649U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (18446744073709551615ULL)))) ? (((unsigned long long int) var_8)) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_51 [i_23] [i_22 - 3] [i_21])))));
                                arr_84 [(unsigned short)8] [i_21] [i_21] [i_21] [10ULL] [i_21] [i_21] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (18446744073709551614ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
                                var_28 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)134))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)43559))) : (1029501149U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_19] [i_20] [i_19])))));
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */unsigned char) 18446744073709551610ULL);
                }
            } 
        } 
        arr_85 [i_19] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_1)) ? (arr_34 [i_19] [i_19] [4ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_54 [i_19] [i_19] [i_19]))))) == (0ULL)));
    }
    for (unsigned char i_24 = 0; i_24 < 12; i_24 += 2) 
    {
        arr_88 [i_24] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((-1LL) - (arr_25 [i_24] [i_24] [0] [i_24] [i_24])))))) ? (min((((((/* implicit */int) (short)29024)) * (0))), (((((/* implicit */_Bool) (unsigned char)130)) ? (1223858759) : (((/* implicit */int) (unsigned char)134)))))) : (((/* implicit */int) ((0ULL) != (min((((/* implicit */unsigned long long int) var_9)), (18446744073709551609ULL))))))));
        arr_89 [8] = ((/* implicit */long long int) (unsigned char)125);
    }
    /* vectorizable */
    for (unsigned int i_25 = 1; i_25 < 18; i_25 += 4) 
    {
        var_30 -= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) == (var_4)));
        /* LoopSeq 1 */
        for (unsigned int i_26 = 0; i_26 < 19; i_26 += 4) 
        {
            var_31 = ((/* implicit */short) (~(18446744073709551593ULL)));
            var_32 |= ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) 4294967295U)))))));
        }
    }
}
