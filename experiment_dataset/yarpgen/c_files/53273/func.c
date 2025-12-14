/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53273
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
    var_18 = ((/* implicit */unsigned char) var_0);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 8; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((signed char) (signed char)-14)))));
                            arr_13 [(unsigned short)3] [i_2] [5ULL] [i_3] [i_2] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) min(((unsigned short)47120), (((/* implicit */unsigned short) (unsigned char)245))))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_13)))))) >= (((((/* implicit */_Bool) max((var_1), ((unsigned short)9)))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)115))) : (var_17))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)83)))))))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) min((-1868428767), (((/* implicit */int) (unsigned char)255)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (~(9223372036854775796LL))))))) : (((/* implicit */int) var_9))));
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((((((/* implicit */_Bool) (unsigned char)0)) ? (8576951613876679473ULL) : (8576951613876679473ULL))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)12)) ? (((/* implicit */int) (unsigned short)256)) : (((/* implicit */int) (signed char)-18))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_17) / (8576951613876679466ULL)))) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (unsigned short)65526)) : (((/* implicit */int) (unsigned char)8)))))))));
    var_22 = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (8576951613876679458ULL)))) ? (((((/* implicit */_Bool) 1868428779)) ? (((/* implicit */unsigned long long int) 8589934591LL)) : (6411718578468804585ULL))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)0))))))), ((+(18446744073709551607ULL)))));
    /* LoopNest 2 */
    for (unsigned char i_4 = 0; i_4 < 11; i_4 += 2) 
    {
        for (signed char i_5 = 0; i_5 < 11; i_5 += 2) 
        {
            {
                var_23 = ((/* implicit */unsigned short) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (12848558675635988927ULL) : (((/* implicit */unsigned long long int) var_0))))) ? (arr_15 [i_4] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) var_12))))))));
                /* LoopSeq 2 */
                for (unsigned short i_6 = 1; i_6 < 10; i_6 += 2) 
                {
                    arr_23 [i_6] [i_6] [i_5] [i_4] = ((/* implicit */signed char) arr_21 [(unsigned char)9] [i_5] [(unsigned short)0] [i_6]);
                    var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) arr_14 [i_6 + 1]))));
                }
                for (signed char i_7 = 2; i_7 < 10; i_7 += 1) 
                {
                    var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)65526))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (var_17))))));
                    arr_27 [i_4] [(unsigned char)10] [i_4] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) max((arr_14 [i_5]), (((/* implicit */unsigned long long int) var_1))))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_22 [i_7] [i_7 + 1] [i_7 + 1]))));
                    var_26 &= ((/* implicit */unsigned char) var_1);
                    /* LoopSeq 1 */
                    for (signed char i_8 = 4; i_8 < 8; i_8 += 3) 
                    {
                        var_27 = ((/* implicit */unsigned char) var_12);
                        var_28 |= ((/* implicit */unsigned short) min((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))), (((((/* implicit */_Bool) ((signed char) (unsigned short)65280))) ? (((/* implicit */int) (signed char)51)) : (((/* implicit */int) (unsigned short)7))))));
                        var_29 = ((/* implicit */unsigned short) ((long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_14)))))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_9 = 0; i_9 < 11; i_9 += 3) 
                        {
                            var_30 -= ((/* implicit */unsigned char) arr_15 [i_7] [i_8]);
                            var_31 = ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)-1))));
                            var_32 *= ((/* implicit */unsigned int) (unsigned char)119);
                            var_33 |= ((/* implicit */unsigned char) (signed char)126);
                        }
                        /* vectorizable */
                        for (unsigned char i_10 = 0; i_10 < 11; i_10 += 3) 
                        {
                            var_34 += ((/* implicit */unsigned int) ((unsigned char) (+(((/* implicit */int) var_9)))));
                            var_35 = ((/* implicit */unsigned char) max((var_35), (((/* implicit */unsigned char) (unsigned short)65519))));
                            var_36 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)134)) : (((/* implicit */int) var_1))))) ? (((/* implicit */int) (unsigned short)35932)) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_9))))));
                            arr_36 [i_8] [i_8] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_12))));
                            arr_37 [i_4] [i_7] |= ((/* implicit */unsigned short) (unsigned char)249);
                        }
                        /* vectorizable */
                        for (unsigned short i_11 = 0; i_11 < 11; i_11 += 1) 
                        {
                            arr_40 [i_8] = ((/* implicit */unsigned long long int) var_4);
                            arr_41 [i_8] [2U] [i_5] [i_5] [i_8] = ((/* implicit */unsigned short) 8576951613876679439ULL);
                            arr_42 [i_11] [4ULL] [i_4] [4ULL] [(unsigned short)0] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2032))) : (2506495293788424655ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (var_8)))));
                        }
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_12 = 4; i_12 < 10; i_12 += 3) 
                    {
                        for (unsigned long long int i_13 = 0; i_13 < 11; i_13 += 4) 
                        {
                            {
                                arr_47 [i_13] [i_13] [i_12] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned short)29683)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_17))), (((/* implicit */unsigned long long int) (unsigned short)2))))) ? ((+(((/* implicit */int) (unsigned short)65257)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_4])) ? (var_17) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)64)), (var_7)))) : (((/* implicit */int) (unsigned char)205))))));
                                arr_48 [i_7] [i_7 - 1] [i_7] [(unsigned char)1] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1LL)) ? (14725033011749599355ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)59097)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65529)) * (((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) var_5)) ? (2088960) : (((/* implicit */int) var_5)))) : (((((/* implicit */_Bool) 2798649254U)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)120))))))) : (((((((/* implicit */_Bool) (unsigned char)249)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65279))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_15), (((/* implicit */unsigned short) (unsigned char)120))))))))));
                                arr_49 [i_4] [i_4] [i_5] [i_7] [i_12] [i_13] = ((/* implicit */int) min((var_8), (((/* implicit */long long int) var_7))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
