/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227144
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
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_10 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_0)))), (((((/* implicit */int) arr_1 [i_0])) - (((/* implicit */int) arr_2 [i_0]))))));
        var_11 = ((/* implicit */_Bool) max((var_11), (((/* implicit */_Bool) arr_2 [i_0]))));
        var_12 = ((/* implicit */unsigned short) ((signed char) 18446744073709551615ULL));
    }
    for (unsigned int i_1 = 0; i_1 < 15; i_1 += 3) 
    {
        var_13 |= (((~(max((((/* implicit */unsigned long long int) arr_4 [i_1])), (arr_5 [i_1]))))) | (min((arr_5 [i_1]), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) | (arr_5 [i_1]))))));
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 3) 
        {
            for (long long int i_3 = 0; i_3 < 15; i_3 += 3) 
            {
                {
                    var_14 += ((/* implicit */unsigned char) max((((/* implicit */unsigned short) arr_7 [i_3])), (((unsigned short) var_3))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_4 = 1; i_4 < 12; i_4 += 4) 
                    {
                        var_15 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */int) (unsigned char)16)) : (-1278567845)))) | (1ULL)));
                        var_16 ^= ((/* implicit */signed char) ((max((arr_5 [i_4 + 3]), (arr_5 [i_4 + 3]))) & (((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_7)) | (-606295832306654767LL))))));
                        arr_13 [i_1] [i_2] [i_4 + 3] = ((/* implicit */int) ((((/* implicit */_Bool) ((max((7007283501736509483ULL), (18446744073709551615ULL))) ^ (max((12171794263466709702ULL), (((/* implicit */unsigned long long int) (short)28433))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) max((((/* implicit */long long int) var_6)), (var_8)))))) : (((((/* implicit */_Bool) arr_6 [i_2] [i_3] [i_4])) ? (max((((/* implicit */long long int) (short)22389)), (9223372036854775807LL))) : (((((/* implicit */_Bool) arr_3 [i_1] [i_3])) ? (5035685610296789292LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)25829)))))))));
                        var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((arr_5 [i_4 + 2]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) <= (((((/* implicit */_Bool) var_1)) ? (arr_5 [i_4 + 2]) : (arr_5 [i_4 + 1]))))))));
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) arr_15 [i_5] [i_5] [i_3] [i_2] [i_2] [i_1]))) ? (((/* implicit */int) arr_4 [i_3])) : ((~(((/* implicit */int) (unsigned short)127))))))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-97)) ? (9223372036854775807LL) : (((/* implicit */long long int) 4294967295U))))) ^ ((~(arr_5 [i_1]))))) : (((/* implicit */unsigned long long int) (~(arr_6 [i_1] [i_3] [i_5])))))))));
                        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_8)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (+(var_7)))) ? (((/* implicit */int) (unsigned char)249)) : (((/* implicit */int) var_3))))) : (((((/* implicit */_Bool) ((arr_9 [i_1] [i_3]) ? (((/* implicit */int) arr_9 [i_1] [i_1])) : (((/* implicit */int) var_0))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)5530))) == (9223372036854775807LL))))) : (max((var_8), (((/* implicit */long long int) (_Bool)1))))))));
                        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (short)28192))));
                    }
                }
            } 
        } 
        var_21 += ((/* implicit */unsigned int) ((((/* implicit */int) arr_14 [i_1] [i_1] [i_1] [i_1] [6LL])) < (((((/* implicit */_Bool) ((unsigned short) arr_9 [i_1] [i_1]))) ? ((~(((/* implicit */int) arr_10 [i_1] [i_1] [i_1] [i_1] [i_1])))) : (((((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) ? (arr_15 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) : (((/* implicit */int) (unsigned char)167))))))));
    }
    for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 1) 
    {
        arr_19 [i_6] = ((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned int) var_3)), (arr_16 [i_6]))) + (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
        /* LoopSeq 2 */
        for (unsigned short i_7 = 0; i_7 < 12; i_7 += 2) /* same iter space */
        {
            arr_22 [i_6] [i_7] [i_6] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((long long int) 17645260957250137747ULL))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (var_7) : (((/* implicit */int) var_0))))) : (min((arr_16 [i_7]), (((/* implicit */unsigned int) arr_11 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])))))) - (((((/* implicit */_Bool) arr_2 [i_6])) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)75)))))));
            arr_23 [i_6] [i_6] = ((((/* implicit */unsigned long long int) ((760413047U) | (((/* implicit */unsigned int) var_7))))) | (min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_6]))) & (arr_5 [i_6]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_5))))))));
        }
        /* vectorizable */
        for (unsigned short i_8 = 0; i_8 < 12; i_8 += 2) /* same iter space */
        {
            arr_28 [i_6] [i_8] = ((/* implicit */unsigned short) (signed char)-125);
            arr_29 [i_6] = ((/* implicit */signed char) arr_5 [i_6]);
        }
    }
    var_22 ^= ((/* implicit */signed char) max((max((18446744073709551614ULL), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_7)) | (-9223372036854775799LL)))))), (((/* implicit */unsigned long long int) var_8))));
}
