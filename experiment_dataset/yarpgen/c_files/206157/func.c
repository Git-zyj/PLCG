/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206157
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
    var_19 = ((/* implicit */long long int) var_11);
    var_20 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) <= (18446744073709551615ULL))) ? (((((/* implicit */_Bool) (short)30392)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_18))) : (var_3))) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) ? (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) != (18446744073709551615ULL))) ? ((+(18446744073709551608ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_14)))))) : (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) (signed char)74)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)53))) : (500778122452471980LL)))))));
    var_21 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) (~(((/* implicit */int) (signed char)-77))))) : (((((/* implicit */_Bool) 18446744073709551610ULL)) ? (6LL) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_22 = ((/* implicit */_Bool) ((short) (+(min((9223372036854775799LL), (((/* implicit */long long int) 4294967288U)))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (long long int i_2 = 0; i_2 < 22; i_2 += 2) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_4 = 1; i_4 < 21; i_4 += 2) 
                        {
                            arr_15 [i_0] [i_1] [(unsigned char)18] [i_3] [i_4] = ((/* implicit */unsigned long long int) 9223372036854775799LL);
                            var_23 &= ((/* implicit */_Bool) ((var_5) ? (var_13) : (((/* implicit */unsigned long long int) ((-9223372036854775803LL) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)57))))))));
                            arr_16 [i_2] [i_3] [i_2] [i_0] [i_2] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_11 [i_0] [i_0] [i_0]) / (9223372036854775799LL)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_4 + 1] [i_2] [i_4 + 1] [i_2] [i_4 - 1]))) : ((-(-5LL)))));
                            arr_17 [i_4] [i_3] [i_0] [1U] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1122170612U)) ? (((/* implicit */unsigned long long int) arr_10 [i_0] [i_1] [i_0] [i_1] [i_1] [i_0])) : (arr_7 [i_4] [i_2] [i_1] [i_0])))) ? ((~(240994737))) : (((/* implicit */int) ((short) arr_13 [i_3] [i_0] [i_0] [i_0])))));
                        }
                        for (unsigned short i_5 = 4; i_5 < 21; i_5 += 3) 
                        {
                            var_24 ^= ((((/* implicit */_Bool) arr_10 [i_3] [i_5] [i_5] [i_3] [i_2] [i_3])) ? (arr_10 [i_3] [i_3] [i_5] [i_0] [i_0] [i_3]) : (-22LL));
                            var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (arr_8 [i_3] [i_5 - 1] [i_3]) : (arr_8 [i_2] [i_5 - 4] [i_2]))))));
                        }
                        arr_20 [i_3] [i_0] [(_Bool)1] [i_0] [(unsigned short)0] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [(unsigned short)6]))))) ? (2676255854950863176ULL) : (((/* implicit */unsigned long long int) arr_10 [i_0] [(short)17] [i_1] [(_Bool)1] [(short)17] [i_0]))));
                        var_26 = ((/* implicit */unsigned long long int) (short)32740);
                        var_27 ^= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_2] [i_2])) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-99))))))));
                        /* LoopSeq 1 */
                        for (signed char i_6 = 0; i_6 < 22; i_6 += 4) 
                        {
                            arr_23 [i_3] [i_3] [i_0] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_6] [i_2] [i_2] [i_1] [i_0]))) : (3244485285U)));
                            arr_24 [7U] [i_0] [i_3] [21LL] [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) -3699049862323354420LL)) % (((unsigned long long int) 1476865578))));
                        }
                    }
                    for (unsigned long long int i_7 = 1; i_7 < 19; i_7 += 3) /* same iter space */
                    {
                        arr_27 [(unsigned short)16] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) ((short) var_5))) | (((/* implicit */int) (!(((/* implicit */_Bool) -9223372036854775799LL)))))));
                        arr_28 [i_0] [i_1] [i_1] [i_2] [i_7] [i_7] = ((/* implicit */long long int) ((short) ((((/* implicit */long long int) 240994741)) >= (var_17))));
                    }
                    for (unsigned long long int i_8 = 1; i_8 < 19; i_8 += 3) /* same iter space */
                    {
                        var_28 = ((/* implicit */short) ((((/* implicit */_Bool) (~(arr_7 [i_8] [i_2] [21LL] [1LL])))) ? (var_17) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_8 + 2] [i_8 + 1] [i_0] [i_8 + 2])))));
                        arr_32 [i_0] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) var_14);
                    }
                    arr_33 [i_0] [i_1] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned int) arr_1 [i_0] [i_2])))));
                }
                for (long long int i_9 = 0; i_9 < 22; i_9 += 2) /* same iter space */
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_10 = 3; i_10 < 21; i_10 += 1) 
                    {
                        var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) var_17))));
                        arr_40 [i_0] [i_9] [8U] [i_0] [i_0] = ((/* implicit */short) var_8);
                    }
                    /* vectorizable */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        arr_43 [i_0] [i_1] [(signed char)20] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_19 [i_9] [i_9] [i_9] [i_1] [i_0])) ? (((/* implicit */int) arr_19 [i_0] [i_1] [i_9] [i_11] [i_11])) : (var_10)));
                        arr_44 [i_0] [i_0] [i_0] [i_9] [i_11] = ((/* implicit */unsigned long long int) (-(arr_25 [i_0] [i_0] [i_1] [i_9] [i_0] [i_11])));
                        arr_45 [i_11] [20LL] [i_0] [2LL] [20LL] = (i_0 % 2 == 0) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_11] [i_9] [i_9] [i_1] [i_1] [(_Bool)0] [(_Bool)0])) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)23720))))) ? (((2408048044U) >> (((((/* implicit */int) arr_39 [i_11] [i_0] [i_0] [i_0])) - (16374))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_18)))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_11] [i_9] [i_9] [i_1] [i_1] [(_Bool)0] [(_Bool)0])) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)23720))))) ? (((2408048044U) >> (((((((/* implicit */int) arr_39 [i_11] [i_0] [i_0] [i_0])) - (16374))) - (2037))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_18))))))));
                        arr_46 [i_11] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) ((((var_10) != (((/* implicit */int) var_8)))) ? (((((/* implicit */_Bool) (short)-4826)) ? (-3699049862323354420LL) : (((/* implicit */long long int) 823389063U)))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)67))))))));
                        arr_47 [i_0] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) arr_12 [i_0] [13U]))));
                    }
                    arr_48 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) arr_13 [i_9] [i_0] [i_0] [0LL]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) -5LL)))))) : (((((/* implicit */_Bool) (short)-67)) ? (((/* implicit */int) ((signed char) (signed char)74))) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))));
                    var_30 = (+(((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 16654267527599868931ULL)) ? (1792476546109682685ULL) : (var_16))))));
                    arr_49 [i_0] [i_9] [i_1] [i_0] = ((/* implicit */long long int) (~(((arr_22 [i_9] [i_1] [i_1] [i_1] [i_0] [i_0] [12]) & (((/* implicit */int) arr_14 [i_9] [i_0] [12] [i_0] [i_0]))))));
                }
                for (short i_12 = 3; i_12 < 21; i_12 += 3) 
                {
                    var_31 = min(((((!(((/* implicit */_Bool) var_4)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_12] [19U] [i_1] [i_0]))) : (7266796588934064226LL)))) : (((((/* implicit */_Bool) 0U)) ? (18446744073709551592ULL) : (((/* implicit */unsigned long long int) -9223372036854775800LL)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) arr_37 [i_12] [i_12] [i_0] [i_1] [i_0])) : (arr_30 [i_0] [i_1] [i_0] [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_25 [i_12] [i_0] [i_0] [i_1] [i_0] [i_0])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (signed char)-112))))) : (min((((/* implicit */unsigned long long int) var_9)), (422438080403842159ULL))))));
                    arr_52 [i_0] [15ULL] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_14)))) >= (max((var_14), (((/* implicit */long long int) arr_14 [i_12 - 2] [i_0] [i_12 - 2] [i_12] [i_12]))))));
                }
            }
        } 
    } 
    var_32 &= ((/* implicit */signed char) min((26LL), ((((_Bool)1) ? (-3699049862323354420LL) : (3699049862323354414LL)))));
}
