/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230101
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
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)4175)) ? (((/* implicit */unsigned long long int) 2870296230U)) : (2336577089664125072ULL))))))) : (((/* implicit */int) var_2))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                for (int i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */short) arr_7 [(short)7] [i_1] [i_3] [i_3] [i_4]);
                                var_18 *= ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)0))));
                                var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (-(((/* implicit */int) (_Bool)1)))))));
                                arr_12 [i_0] [i_1] [i_2] [i_2] [i_4] [i_0] = ((/* implicit */int) ((unsigned long long int) (short)(-32767 - 1)));
                                var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) arr_2 [i_1] [i_2] [(unsigned short)12]))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */signed char) min((((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_2)))) - (((((/* implicit */_Bool) (short)32761)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)215))) : (-9223372036854775796LL))))), ((((+(arr_4 [i_2]))) - (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)57983)))))))));
                    var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) var_1))));
                    /* LoopSeq 2 */
                    for (signed char i_5 = 2; i_5 < 10; i_5 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_6 = 0; i_6 < 13; i_6 += 3) 
                        {
                            var_23 = ((/* implicit */_Bool) (-(2336577089664125083ULL)));
                            var_24 += ((/* implicit */long long int) (+(((/* implicit */int) (signed char)-71))));
                            var_25 = ((/* implicit */unsigned int) (signed char)97);
                        }
                        arr_18 [i_2] [i_1] [i_2] = ((/* implicit */int) ((((((/* implicit */_Bool) min((((/* implicit */int) var_11)), (var_7)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_9))))) : (((var_8) | (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))) != (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_5 + 1])) ? (((/* implicit */int) arr_17 [i_5 + 3])) : (((/* implicit */int) (signed char)-98)))))));
                    }
                    /* vectorizable */
                    for (int i_7 = 3; i_7 < 10; i_7 += 2) 
                    {
                        arr_21 [i_0] [i_0] [i_0] [i_2] [i_2] [i_7] = ((long long int) arr_1 [i_7 - 2]);
                        var_26 += ((/* implicit */unsigned short) var_1);
                        arr_22 [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) arr_6 [i_0] [i_2] [i_2]))))) + (((/* implicit */int) arr_16 [i_0] [i_1] [i_2] [i_7] [i_0] [i_1] [i_0]))));
                        arr_23 [i_2] = ((/* implicit */signed char) ((int) var_7));
                    }
                }
                for (short i_8 = 0; i_8 < 13; i_8 += 2) 
                {
                    /* LoopNest 2 */
                    for (short i_9 = 0; i_9 < 13; i_9 += 3) 
                    {
                        for (unsigned short i_10 = 0; i_10 < 13; i_10 += 4) 
                        {
                            {
                                var_27 = ((/* implicit */unsigned char) var_8);
                                var_28 += ((/* implicit */_Bool) ((((/* implicit */int) max(((signed char)1), ((signed char)-1)))) ^ ((+(var_5)))));
                            }
                        } 
                    } 
                    var_29 += ((/* implicit */signed char) max((((/* implicit */int) var_3)), ((-(((((/* implicit */int) var_10)) / (var_5)))))));
                }
                for (signed char i_11 = 0; i_11 < 13; i_11 += 1) 
                {
                    var_30 = ((/* implicit */long long int) min((var_30), (((((/* implicit */_Bool) (signed char)45)) ? (((/* implicit */long long int) max(((((_Bool)1) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)32765)))), ((~(((/* implicit */int) (signed char)10))))))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((unsigned int) arr_10 [i_0] [i_0] [i_1] [i_11] [i_11]))) : (((((/* implicit */long long int) ((/* implicit */int) var_11))) | (var_14)))))))));
                    /* LoopSeq 3 */
                    for (signed char i_12 = 0; i_12 < 13; i_12 += 1) 
                    {
                        var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) var_11))) || (((/* implicit */_Bool) ((long long int) var_6)))));
                        /* LoopSeq 1 */
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            var_32 = ((/* implicit */unsigned int) (signed char)1);
                            arr_37 [i_13] [i_13] = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) (~(1218085932U)))) ? ((~(((/* implicit */int) arr_7 [i_0] [i_1] [i_11] [i_12] [i_13])))) : (((/* implicit */int) var_11)))));
                        }
                        arr_38 [i_0] [i_0] [i_11] [i_12] &= ((/* implicit */long long int) ((((/* implicit */_Bool) 202928575004082393LL)) ? (((/* implicit */int) ((signed char) (~(((/* implicit */int) var_11)))))) : (arr_33 [i_12] [i_11] [i_11] [i_1] [i_0])));
                        var_33 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 2233437882U)) ? (((/* implicit */int) (signed char)45)) : (((/* implicit */int) arr_17 [i_11])))) >> (((var_7) - (1933104452)))));
                        var_34 = ((/* implicit */long long int) (~(var_15)));
                    }
                    for (long long int i_14 = 2; i_14 < 11; i_14 += 2) 
                    {
                        arr_42 [i_0] [i_1] [i_11] [(unsigned char)12] = ((/* implicit */signed char) var_4);
                        var_35 = ((/* implicit */unsigned int) arr_34 [i_0] [i_1] [i_11] [i_14]);
                    }
                    for (int i_15 = 2; i_15 < 11; i_15 += 4) 
                    {
                        arr_46 [i_0] [i_1] [i_11] [i_15] &= ((/* implicit */_Bool) ((((((long long int) var_1)) & (((/* implicit */long long int) ((/* implicit */int) var_2))))) >> ((((~(arr_28 [i_15] [i_11] [i_1] [i_1] [i_0] [i_15]))) - (8062706666717199823LL)))));
                        arr_47 [i_0] [i_1] = ((/* implicit */unsigned long long int) var_7);
                    }
                }
                var_36 &= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */long long int) max((var_5), (((/* implicit */int) arr_35 [i_0] [i_1] [(signed char)12] [i_0] [i_1] [i_0] [i_0]))))) / (var_12))))));
                var_37 = ((/* implicit */int) min((var_37), (((/* implicit */int) ((((var_15) / (var_8))) != (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_1]))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
    {
        for (long long int i_17 = 0; i_17 < 20; i_17 += 2) 
        {
            {
                var_38 = ((unsigned short) max((arr_52 [i_16] [i_17]), (((/* implicit */long long int) var_0))));
                /* LoopSeq 1 */
                for (long long int i_18 = 3; i_18 < 18; i_18 += 2) 
                {
                    var_39 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) max((var_2), (((/* implicit */unsigned short) var_3)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_53 [i_18 - 3] [i_18 + 2] [i_18] [i_17])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_54 [i_18 - 2])))))));
                    var_40 += ((/* implicit */unsigned long long int) ((_Bool) ((arr_53 [i_18 - 2] [i_18 - 1] [(unsigned short)14] [i_17]) >> (((var_15) - (951364637U))))));
                    /* LoopSeq 2 */
                    for (signed char i_19 = 0; i_19 < 20; i_19 += 1) 
                    {
                        var_41 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((var_7) - (((/* implicit */int) (short)32763)))) == (((/* implicit */int) var_3))))) | (((((/* implicit */_Bool) arr_52 [i_16] [i_18 - 3])) ? (((((/* implicit */_Bool) arr_55 [(unsigned char)2] [i_18] [i_19])) ? (((/* implicit */int) var_6)) : (var_5))) : (((/* implicit */int) ((_Bool) 5934291896302190791ULL)))))));
                        arr_59 [i_16] [i_17] [i_18] [i_16] = ((/* implicit */signed char) ((((((/* implicit */long long int) ((((/* implicit */_Bool) 2061529416U)) ? (3804783420U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0)))))) / (var_14))) ^ (((/* implicit */long long int) ((/* implicit */int) (short)32758)))));
                    }
                    for (unsigned long long int i_20 = 0; i_20 < 20; i_20 += 3) 
                    {
                        var_42 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) var_11)) >= (((/* implicit */int) (signed char)28))))) <= (((/* implicit */int) arr_51 [i_16] [i_17] [i_18]))));
                        arr_64 [i_16] [i_17] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-75)))))), ((+(var_12)))))) ? (((unsigned long long int) ((((/* implicit */int) arr_51 [i_16] [i_17] [(unsigned short)16])) > (((/* implicit */int) var_4))))) : (((/* implicit */unsigned long long int) 753146434362429497LL))));
                        arr_65 [i_20] [i_16] [i_16] [i_16] = ((unsigned short) max((((/* implicit */unsigned int) (+(((/* implicit */int) arr_49 [i_16] [i_20]))))), (var_0)));
                    }
                }
            }
        } 
    } 
    var_43 = ((/* implicit */unsigned short) var_1);
    var_44 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)205)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (signed char)31))));
}
