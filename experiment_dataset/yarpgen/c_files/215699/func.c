/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215699
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
    for (unsigned int i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            {
                var_15 = ((((/* implicit */_Bool) var_4)) ? (min((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [i_0] [i_1]))))), (arr_1 [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_5 [i_1] [i_1]), (arr_5 [i_1] [i_1]))))));
                var_16 &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)34)) ? (((/* implicit */int) (unsigned char)45)) : (((/* implicit */int) (unsigned short)9886))))) ? (1778986537620853622ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (short)-23814)))));
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (arr_4 [i_1] [i_1] [i_1 + 1]))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (signed char i_2 = 2; i_2 < 13; i_2 += 1) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_3 = 1; i_3 < 13; i_3 += 3) 
                    {
                        arr_14 [i_1] = var_13;
                        var_17 = ((/* implicit */long long int) var_8);
                        var_18 = ((/* implicit */short) (signed char)123);
                    }
                    for (int i_4 = 1; i_4 < 11; i_4 += 3) 
                    {
                        var_19 = ((/* implicit */unsigned char) var_14);
                        arr_17 [i_4] [(signed char)6] [i_2] [(signed char)6] [i_0] |= ((/* implicit */short) (((((-(((/* implicit */int) arr_3 [i_1] [i_0])))) + (2147483647))) << (((((var_1) + (((/* implicit */int) arr_8 [i_2])))) - (2032484203)))));
                        arr_18 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 52411180)) ? (((/* implicit */int) (short)-1930)) : (((/* implicit */int) (short)-19383))));
                        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) (short)-19365)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-107))) : (18446744073709551603ULL))) : (((/* implicit */unsigned long long int) arr_2 [i_2 + 1] [i_1 - 1]))));
                        arr_19 [i_1] [i_2] [i_1] [i_0] [i_1] = ((/* implicit */signed char) ((14LL) - (arr_4 [i_4 + 3] [i_2 - 1] [i_1 + 2])));
                    }
                    var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (-(((/* implicit */int) (short)1023)))))));
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 13; i_5 += 4) 
                    {
                        for (signed char i_6 = 1; i_6 < 13; i_6 += 1) 
                        {
                            {
                                var_22 ^= ((/* implicit */unsigned char) arr_2 [i_0] [i_2]);
                                var_23 = ((/* implicit */_Bool) ((((/* implicit */int) (short)19377)) << (((2288884940U) - (2288884938U)))));
                                var_24 &= ((/* implicit */_Bool) arr_3 [i_2] [i_0]);
                                var_25 *= ((/* implicit */unsigned short) ((((/* implicit */int) arr_3 [i_0 - 1] [i_1 + 1])) > (((/* implicit */int) var_14))));
                                var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)9893)) && (arr_23 [i_1 + 1] [i_5 - 2] [i_6 + 1])));
                            }
                        } 
                    } 
                    arr_25 [i_1] = ((/* implicit */signed char) arr_15 [i_0 + 1] [i_0] [i_1 + 2] [i_2 - 1] [i_1]);
                }
                /* vectorizable */
                for (long long int i_7 = 3; i_7 < 12; i_7 += 2) 
                {
                    var_27 *= ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) arr_24 [i_7] [i_7] [i_1] [i_1] [i_1] [i_0] [i_0])) == (((/* implicit */int) (_Bool)1))))) - ((+(((/* implicit */int) arr_12 [i_7] [4ULL] [4ULL] [i_0]))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_8 = 1; i_8 < 13; i_8 += 1) /* same iter space */
                    {
                        var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) ((((/* implicit */_Bool) arr_24 [i_0] [i_0 + 1] [i_1] [i_1 + 1] [i_7 + 1] [i_8 - 1] [i_8])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_8])) ? (((/* implicit */int) (_Bool)0)) : (var_6)))))))));
                        arr_31 [i_1] = ((/* implicit */_Bool) var_5);
                    }
                    for (unsigned long long int i_9 = 1; i_9 < 13; i_9 += 1) /* same iter space */
                    {
                        var_29 *= ((/* implicit */signed char) (((!(((/* implicit */_Bool) 8368630680849789882ULL)))) ? (var_8) : (((((/* implicit */unsigned int) ((/* implicit */int) (short)-1930))) ^ (1125032885U)))));
                        arr_36 [i_9] [i_7] [4LL] [i_1] [i_0] &= ((/* implicit */int) (!((_Bool)1)));
                        /* LoopSeq 3 */
                        for (unsigned int i_10 = 1; i_10 < 12; i_10 += 4) /* same iter space */
                        {
                            var_30 = ((/* implicit */unsigned int) 18446744073709551600ULL);
                            var_31 = ((/* implicit */unsigned short) (~(((unsigned long long int) var_6))));
                            var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-26532)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))) : (18446744073709551588ULL)));
                        }
                        for (unsigned int i_11 = 1; i_11 < 12; i_11 += 4) /* same iter space */
                        {
                            var_33 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_9] [i_1] [i_0])) ? (((/* implicit */int) arr_28 [i_11] [i_9])) : (((/* implicit */int) var_10))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_0] [i_7]))) : (arr_40 [i_11 + 2] [i_11] [i_9] [i_7] [i_1 - 1] [i_0])));
                            var_34 = ((/* implicit */unsigned long long int) (unsigned short)65505);
                            arr_43 [i_0] [i_0] [i_0] [i_1] [i_7] [i_9] [i_1] = ((/* implicit */unsigned char) (signed char)106);
                        }
                        for (unsigned int i_12 = 1; i_12 < 12; i_12 += 4) /* same iter space */
                        {
                            var_35 = ((((((/* implicit */_Bool) arr_33 [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (3179273573U))) + (((/* implicit */unsigned int) (~(((/* implicit */int) var_3))))));
                            var_36 *= ((/* implicit */unsigned int) ((_Bool) (~(-15LL))));
                            arr_46 [i_12] [i_1] [i_7] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_14) ? (((/* implicit */int) (unsigned char)232)) : (((/* implicit */int) var_14))))) ? (((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_1] [i_9])) ? (((/* implicit */int) arr_33 [i_1] [i_1])) : (var_6))) : (((/* implicit */int) arr_24 [i_1 + 1] [i_7] [i_7] [i_7 - 2] [i_7] [i_9 + 1] [i_12 - 1]))));
                        }
                    }
                    var_37 ^= ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (2288884958U)))) || (((/* implicit */_Bool) ((var_0) - (((/* implicit */long long int) ((/* implicit */int) arr_44 [i_0] [i_0] [i_7] [i_7] [i_7] [i_1] [i_1])))))));
                }
            }
        } 
    } 
    var_38 *= ((/* implicit */long long int) min((var_8), (((/* implicit */unsigned int) max((var_5), (((/* implicit */signed char) ((((/* implicit */int) var_7)) < (((/* implicit */int) (unsigned short)55639))))))))));
}
