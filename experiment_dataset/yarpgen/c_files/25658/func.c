/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25658
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
    for (short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (signed char i_1 = 3; i_1 < 11; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (int i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    var_16 = var_7;
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        for (short i_4 = 3; i_4 < 11; i_4 += 4) 
                        {
                            {
                                var_17 ^= ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) arr_6 [i_1 - 3] [i_1 - 3] [i_1 - 3])) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (unsigned short)13811)) : (((/* implicit */int) var_5)))) : (((/* implicit */int) var_5)))));
                                var_18 = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((short) var_14))), (((((/* implicit */_Bool) ((signed char) var_5))) ? (var_10) : (((/* implicit */long long int) ((((/* implicit */int) var_8)) & (((/* implicit */int) (short)16383)))))))));
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_2] [i_1] [i_2] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((_Bool) arr_0 [i_1] [i_1]))), (((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) + (arr_0 [i_0] [i_0])))))));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 1; i_5 < 11; i_5 += 4) 
                    {
                        for (short i_6 = 0; i_6 < 12; i_6 += 4) 
                        {
                            {
                                arr_19 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_16 [i_1 - 1] [i_2] [i_5 - 1]) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)49075)))))) ? (((/* implicit */int) ((signed char) arr_6 [i_5 + 1] [i_5 - 1] [i_5 - 1]))) : (((/* implicit */int) var_11))));
                                arr_20 [i_2] [i_2] [i_1] [i_5 + 1] [i_6] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)10767)) ? (min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_6)))), (var_13))) : (((/* implicit */int) max((((/* implicit */short) arr_2 [i_5])), (var_11))))));
                                var_19 = ((/* implicit */unsigned short) max((((/* implicit */int) (_Bool)1)), (((((((/* implicit */int) var_14)) - (((/* implicit */int) var_6)))) - (((/* implicit */int) var_9))))));
                                var_20 |= ((/* implicit */short) min((((/* implicit */long long int) ((((((/* implicit */int) var_11)) - ((-2147483647 - 1)))) | (var_12)))), (((long long int) (-(var_0))))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                {
                    var_21 = ((/* implicit */signed char) var_5);
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 0; i_8 < 12; i_8 += 1) 
                    {
                        for (short i_9 = 0; i_9 < 12; i_9 += 4) 
                        {
                            {
                                arr_28 [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) ((((var_13) ^ (((/* implicit */int) var_5)))) | ((-(var_12)))));
                                arr_29 [i_1] [i_1 + 1] [i_7] [i_7] [i_9] = ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (-977582395124689593LL))) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_15)) != (((/* implicit */int) (unsigned short)49087)))))));
                                var_22 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (short)24202))));
                                arr_30 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) arr_25 [i_1] [i_1] [i_1]);
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                {
                    arr_34 [i_1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_8))))) + (-578115573534653701LL)));
                    /* LoopSeq 2 */
                    for (unsigned int i_11 = 0; i_11 < 12; i_11 += 4) 
                    {
                        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_0] [i_1])) ? (((/* implicit */int) (unsigned char)87)) : (((/* implicit */int) var_14))))) ? (((((/* implicit */_Bool) var_2)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) : (((/* implicit */long long int) ((/* implicit */int) var_5)))));
                        arr_38 [i_1] [i_1] [i_10] [i_0] = ((/* implicit */signed char) ((long long int) (+(((/* implicit */int) var_11)))));
                    }
                    for (long long int i_12 = 1; i_12 < 10; i_12 += 3) 
                    {
                        var_24 += ((/* implicit */unsigned int) arr_5 [i_0] [i_1]);
                        arr_41 [(unsigned short)0] [i_1] [i_1] [i_1 - 3] |= ((/* implicit */short) var_0);
                        var_25 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_14))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)8923)) : (((/* implicit */int) var_6)))) : (((/* implicit */int) arr_23 [i_0] [i_1]))));
                        var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) arr_27 [i_1 - 3] [i_1 - 2]))));
                    }
                }
                /* LoopSeq 1 */
                for (long long int i_13 = 1; i_13 < 8; i_13 += 2) 
                {
                    var_27 = ((/* implicit */short) max((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_15 [i_0])) ? (((/* implicit */int) var_8)) : (var_0))))), (min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_2)) : (1115992605))), ((~(((/* implicit */int) (unsigned char)0))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_14 = 0; i_14 < 12; i_14 += 4) 
                    {
                        var_28 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) 6078277372131108542ULL)) ? (((/* implicit */int) (short)-24201)) : (((/* implicit */int) (signed char)-14))))));
                        var_29 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (short)-32764)) ? (((/* implicit */int) (signed char)89)) : (((/* implicit */int) (_Bool)1)))) > (((/* implicit */int) arr_45 [i_0]))));
                    }
                    var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) var_12))));
                    /* LoopNest 2 */
                    for (signed char i_15 = 0; i_15 < 12; i_15 += 2) 
                    {
                        for (unsigned short i_16 = 0; i_16 < 12; i_16 += 1) 
                        {
                            {
                                arr_53 [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_3);
                                arr_54 [i_1] [i_1] [i_15] [i_15] [i_16] = ((((/* implicit */int) ((((((/* implicit */int) var_15)) > (((/* implicit */int) (unsigned short)62288)))) || (((_Bool) var_6))))) > (((/* implicit */int) min(((unsigned char)87), ((unsigned char)77)))));
                            }
                        } 
                    } 
                }
                var_31 += ((/* implicit */unsigned char) min((((/* implicit */int) arr_40 [i_1 - 1] [i_1] [i_1 - 2] [i_1 + 1])), ((-(((/* implicit */int) arr_40 [i_1] [i_1 - 3] [i_1 - 1] [i_1 - 1]))))));
                /* LoopSeq 3 */
                for (int i_17 = 2; i_17 < 9; i_17 += 1) 
                {
                    arr_59 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_1 - 3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))) : (var_10))), (((/* implicit */long long int) var_0))));
                    arr_60 [i_0] [i_1] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((var_3), (((/* implicit */int) var_11)))))))), (((((/* implicit */unsigned int) ((/* implicit */int) var_11))) + (arr_24 [i_1 + 1] [i_17 + 2])))));
                    arr_61 [i_1] [i_0] [i_17] = ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_14))) - ((~(var_7)))))) ? (((((/* implicit */_Bool) arr_40 [i_0] [i_0] [i_0] [i_0])) ? (((((/* implicit */_Bool) (unsigned char)75)) ? (((/* implicit */unsigned long long int) var_7)) : (arr_0 [i_17] [i_1]))) : (((/* implicit */unsigned long long int) 9223372036854775807LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) (!(((/* implicit */_Bool) (short)32743))))), (((short) (short)(-32767 - 1))))))));
                }
                for (unsigned short i_18 = 1; i_18 < 8; i_18 += 4) 
                {
                    /* LoopNest 2 */
                    for (long long int i_19 = 0; i_19 < 12; i_19 += 4) 
                    {
                        for (unsigned int i_20 = 1; i_20 < 11; i_20 += 3) 
                        {
                            {
                                var_32 &= ((/* implicit */long long int) ((((/* implicit */int) ((signed char) ((((/* implicit */int) var_8)) * (((/* implicit */int) (short)32759)))))) | (((((((/* implicit */int) (signed char)-76)) > (((/* implicit */int) (short)-19928)))) ? (((/* implicit */int) (short)-32756)) : ((+(var_3)))))));
                                arr_69 [i_1] [i_1] [i_1 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_2)) : (var_3))))) ? (((((/* implicit */_Bool) 6003313934792372632ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (9223372036854775807LL))) : (((/* implicit */long long int) ((/* implicit */int) var_1)))));
                            }
                        } 
                    } 
                    arr_70 [i_1] = ((/* implicit */int) var_11);
                }
                for (long long int i_21 = 0; i_21 < 12; i_21 += 4) 
                {
                    arr_74 [i_1] [i_1 + 1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) max(((unsigned short)42886), (((/* implicit */unsigned short) (signed char)121))))) ? (((int) arr_4 [i_1 - 3] [i_1])) : (max(((-(((/* implicit */int) var_2)))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_14))))))));
                    arr_75 [i_1] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)23509)), (0LL)))) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)180))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((arr_47 [i_21] [i_21] [i_21] [i_21] [i_21] [i_1]), (var_6)))))))));
                }
            }
        } 
    } 
    var_33 = ((/* implicit */short) var_4);
}
