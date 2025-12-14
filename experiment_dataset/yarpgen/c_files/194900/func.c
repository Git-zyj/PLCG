/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194900
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
    var_18 = ((/* implicit */long long int) ((unsigned short) 144115188075855871ULL));
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 15; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    for (short i_3 = 1; i_3 < 16; i_3 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) arr_6 [i_0 - 3] [i_2] [i_0 - 3] [(unsigned short)10]))));
                            var_20 = ((/* implicit */_Bool) (+(((/* implicit */int) var_11))));
                        }
                    } 
                } 
                /* LoopSeq 4 */
                /* vectorizable */
                for (short i_4 = 1; i_4 < 13; i_4 += 2) 
                {
                    arr_10 [i_1] [i_1] [i_4] = ((/* implicit */unsigned int) ((arr_5 [i_1 + 1] [i_1]) % (arr_5 [i_1 + 1] [i_1])));
                    var_21 = ((((((/* implicit */int) arr_1 [i_4 - 1] [i_0])) <= (((/* implicit */int) arr_0 [i_4])))) ? (((-1LL) & (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1] [(_Bool)1]))))) : (((/* implicit */long long int) ((/* implicit */int) var_11))));
                }
                for (unsigned int i_5 = 0; i_5 < 17; i_5 += 4) 
                {
                    var_22 = ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_0 - 3] [i_5]))))) == (((unsigned int) var_8)));
                    arr_14 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_1])) ? (2166682519263522220LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (arr_2 [i_1]))))));
                    var_23 ^= ((unsigned int) max((arr_13 [i_1 + 1] [i_1 + 1] [i_1]), (((/* implicit */unsigned char) var_11))));
                    arr_15 [i_1] [i_1] = ((/* implicit */_Bool) 1518322944U);
                }
                for (unsigned char i_6 = 0; i_6 < 17; i_6 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 0; i_7 < 17; i_7 += 4) 
                    {
                        for (unsigned int i_8 = 2; i_8 < 16; i_8 += 4) 
                        {
                            {
                                var_24 |= ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_5))))) || ((_Bool)1))) ? (((/* implicit */long long int) min((arr_2 [i_8]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) -968660305)) && (((/* implicit */_Bool) arr_6 [(short)12] [i_8] [i_6] [i_6])))))))) : (arr_11 [i_1])));
                                var_25 = ((/* implicit */int) arr_12 [(unsigned short)12] [i_1] [i_7]);
                                arr_22 [i_8 + 1] [i_1] [i_8] [i_8] [i_8] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */int) var_6)) ^ (((/* implicit */int) ((_Bool) (unsigned char)252)))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (long long int i_9 = 2; i_9 < 15; i_9 += 4) 
                    {
                        var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) arr_18 [i_0] [(_Bool)1]))));
                        arr_25 [i_9] [i_9] |= ((/* implicit */unsigned long long int) (((_Bool)1) ? (((((/* implicit */_Bool) ((unsigned short) (unsigned short)8912))) ? (((/* implicit */int) var_10)) : ((+(((/* implicit */int) arr_19 [i_9] [i_6] [i_6] [i_0])))))) : (((((/* implicit */_Bool) arr_2 [i_9])) ? (((((/* implicit */int) var_11)) - (((/* implicit */int) var_4)))) : (((/* implicit */int) ((unsigned short) 1332081687)))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_10 = 0; i_10 < 17; i_10 += 4) 
                        {
                            arr_30 [i_0 - 1] [i_1] [6] [6U] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) max((((/* implicit */int) ((unsigned short) var_11))), (var_1)))) % (max((4294967295U), (((/* implicit */unsigned int) (unsigned short)59126))))));
                            var_27 += ((/* implicit */unsigned int) min((((_Bool) var_0)), (((((/* implicit */_Bool) arr_2 [i_10])) && (((/* implicit */_Bool) var_3))))));
                            var_28 -= ((/* implicit */unsigned long long int) ((-1) != (((/* implicit */int) (unsigned short)17645))));
                        }
                    }
                    for (unsigned char i_11 = 1; i_11 < 15; i_11 += 4) 
                    {
                        arr_34 [i_0] [i_1] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (~(((/* implicit */int) var_14))))), (max((var_13), (((/* implicit */long long int) arr_20 [i_11 + 1] [i_1] [i_0] [i_0 - 3] [(_Bool)1] [i_0]))))));
                        var_29 = ((/* implicit */_Bool) (-(min((((/* implicit */long long int) 1910979216)), (max((arr_18 [i_0 - 2] [i_6]), (8977030170815811252LL)))))));
                    }
                    /* LoopSeq 2 */
                    for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                    {
                        var_30 -= ((/* implicit */int) ((unsigned long long int) min(((~(-1))), (((/* implicit */int) (_Bool)1)))));
                        /* LoopSeq 2 */
                        for (int i_13 = 0; i_13 < 17; i_13 += 4) /* same iter space */
                        {
                            arr_42 [i_1] = ((/* implicit */int) (-(((unsigned long long int) arr_11 [8ULL]))));
                            arr_43 [i_0 + 1] [i_1] [(_Bool)1] [7] [10U] [i_13] [i_13] = ((/* implicit */unsigned int) (((-((-(var_1))))) ^ (((/* implicit */int) var_17))));
                        }
                        /* vectorizable */
                        for (int i_14 = 0; i_14 < 17; i_14 += 4) /* same iter space */
                        {
                            arr_48 [i_14] [(unsigned char)12] [i_14] [i_1] = ((/* implicit */signed char) ((long long int) ((var_12) ? (13850936598437935226ULL) : (((/* implicit */unsigned long long int) -1)))));
                            arr_49 [i_0 - 3] [i_1] [i_1] [13] [i_12] [i_14] = ((/* implicit */unsigned int) (short)6880);
                            var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-41)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_13))))));
                            arr_50 [i_14] [15LL] [i_6] [i_1] [i_14] [i_14] = ((/* implicit */long long int) (_Bool)1);
                            arr_51 [i_14] [i_12] [i_6] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_20 [i_0] [i_1] [i_6] [i_12] [i_1] [i_14])) ? (((/* implicit */int) arr_1 [i_6] [i_0 + 2])) : (((/* implicit */int) arr_13 [i_12] [(signed char)7] [i_0]))))));
                        }
                        var_32 = ((/* implicit */signed char) (-(min((((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)38535))) : (18446744073709551615ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) > (((/* implicit */int) var_10)))))))));
                        arr_52 [i_0] [(short)11] [i_6] [i_12] [i_1] [i_12] = ((/* implicit */short) ((unsigned char) var_14));
                    }
                    for (signed char i_15 = 0; i_15 < 17; i_15 += 4) 
                    {
                        arr_56 [i_6] [i_6] [i_6] |= ((/* implicit */short) ((((_Bool) var_7)) ? (((((/* implicit */int) arr_12 [i_1 + 1] [i_1 + 1] [i_1 + 1])) / (27))) : (((/* implicit */int) ((unsigned short) ((((/* implicit */int) arr_4 [i_6])) << (0)))))));
                        var_33 = ((/* implicit */int) max((var_33), (min(((+(((/* implicit */int) arr_37 [i_1] [i_1] [i_15] [i_1] [i_1 - 1])))), (min(((+(((/* implicit */int) var_3)))), ((~(1)))))))));
                        arr_57 [i_1] [i_1 - 1] [i_6] [i_15] = ((/* implicit */short) (_Bool)1);
                    }
                }
                for (short i_16 = 3; i_16 < 16; i_16 += 4) 
                {
                    arr_60 [2LL] [2] [2] [i_0] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) var_0))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((((/* implicit */_Bool) (short)-16619)) && (((/* implicit */_Bool) max((arr_59 [i_16] [i_1] [13U]), (((/* implicit */unsigned int) (signed char)-93))))))))));
                    var_34 *= ((/* implicit */_Bool) max((((/* implicit */int) var_11)), ((~(((/* implicit */int) var_3))))));
                }
                arr_61 [i_1] = ((/* implicit */signed char) 23);
                var_35 = ((/* implicit */short) max((var_35), (((/* implicit */short) ((_Bool) (+(arr_26 [i_0 - 2] [i_0] [(unsigned char)2] [(unsigned short)16] [i_1] [i_1] [i_1])))))));
                var_36 ^= ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)111)) ? (((/* implicit */unsigned long long int) -7)) : (16199360270928427053ULL)));
            }
        } 
    } 
    var_37 += ((/* implicit */int) (_Bool)1);
}
