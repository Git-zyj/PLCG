/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190742
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
    for (long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(3897056867190511595ULL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) -243188102)), (7ULL))))))) : (((/* implicit */int) arr_1 [i_0]))));
        arr_4 [i_0] = ((/* implicit */unsigned char) arr_2 [i_0]);
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */long long int) arr_2 [i_0])) + (-9223372036854775799LL)));
    }
    for (signed char i_1 = 1; i_1 < 21; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 24; i_2 += 1) 
        {
            for (unsigned short i_3 = 1; i_3 < 23; i_3 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_4 = 2; i_4 < 20; i_4 += 4) 
                    {
                        var_12 = ((/* implicit */unsigned char) arr_9 [i_1 + 1]);
                        var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)12)) ? (((((/* implicit */_Bool) arr_9 [i_1 + 2])) ? (arr_9 [i_1 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-28168))))) : (((/* implicit */unsigned long long int) arr_6 [i_1 + 3])))))));
                        var_14 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_14 [i_2] [i_2])) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_13 [i_4]))))) : (((((/* implicit */_Bool) (short)28168)) ? (arr_6 [i_1 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (short)28168)))))))));
                        var_15 = ((/* implicit */short) arr_11 [i_3]);
                        arr_18 [i_1] [i_2] [i_3] [i_3] [i_4 - 2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_8 [i_2] [i_2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_1 - 1]))) : (arr_8 [i_1] [i_3])))) ? (((((/* implicit */_Bool) arr_17 [i_1] [i_3 - 1] [i_4] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_4 + 1]))) : (((((/* implicit */_Bool) arr_10 [i_1] [i_4 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_11))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
                    }
                    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_1 + 1] [i_3 - 1] [i_3 + 1] [i_3 - 1])) ? (((/* implicit */int) arr_15 [i_1] [i_3 - 1] [i_3] [i_2])) : (((/* implicit */int) (short)28168))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_3 + 1] [i_1 + 2])) ? (arr_10 [i_3 - 1] [i_1 + 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_1 + 3])))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1805590988)) ? (1023U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_2])))))) ? (arr_8 [i_1] [i_2]) : (((((/* implicit */_Bool) 1013U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_1 + 2]))) : (13484642182213080978ULL))))))))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (long long int i_5 = 4; i_5 < 23; i_5 += 4) /* same iter space */
        {
            arr_21 [i_1] [i_1] [i_5] = ((/* implicit */unsigned int) (_Bool)1);
            var_17 ^= ((/* implicit */signed char) arr_8 [i_1] [i_5]);
        }
        for (long long int i_6 = 4; i_6 < 23; i_6 += 4) /* same iter space */
        {
            arr_25 [i_1] [i_6 - 4] = ((/* implicit */_Bool) 1015U);
            var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)59925)) & (((/* implicit */int) (short)-28143))));
            var_19 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_1 + 2] [i_6])) ? (min((-449809713842937902LL), (((/* implicit */long long int) min((((/* implicit */unsigned short) var_1)), (arr_17 [i_1] [i_1 + 3] [i_1] [i_6])))))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_15 [i_1] [i_1] [i_1] [i_6 - 3])))))));
            /* LoopSeq 2 */
            for (unsigned long long int i_7 = 3; i_7 < 21; i_7 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_8 = 2; i_8 < 22; i_8 += 4) 
                {
                    arr_30 [i_1] [i_6 - 3] [i_7] [i_8 + 2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_6 - 1])) ? (arr_26 [i_6 - 3]) : (((/* implicit */long long int) arr_24 [i_1]))))) ? (((((/* implicit */_Bool) 1015U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_1]))) : (arr_7 [i_7] [i_1 + 2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_8]))))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_9 = 0; i_9 < 24; i_9 += 3) 
                    {
                        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) max((((((/* implicit */_Bool) (-(4294966294U)))) ? (((((/* implicit */_Bool) (short)28168)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) : (449809713842937924LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_31 [i_6] [i_6] [i_7] [i_6] [i_9] [i_6 - 3] [i_8])) ? (((/* implicit */int) (short)-28180)) : (((/* implicit */int) (short)28185))))))), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_29 [i_1] [i_6] [i_7] [i_7])) && (((/* implicit */_Bool) (short)-30030))))) / ((+(((/* implicit */int) (short)-32762))))))))))));
                        arr_33 [i_1] [i_6 + 1] [i_7 - 1] [i_8] [i_9] = ((/* implicit */int) max((max(((~(arr_19 [i_7] [i_6] [i_6]))), (((/* implicit */long long int) arr_20 [i_1 - 1])))), (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_13 [i_1 - 1])) ? (((/* implicit */int) (short)30029)) : (((/* implicit */int) arr_27 [i_1] [i_1])))) << (((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_7 + 2]))))))))));
                    }
                }
                arr_34 [i_1] [i_1] [i_1] [i_7] = ((/* implicit */int) arr_32 [i_1] [i_1] [i_1] [i_1] [i_6] [i_6 - 4] [i_6]);
                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)63))) + (1023U)))) ? (((arr_19 [i_7 - 3] [i_7] [i_7]) - (arr_19 [i_7 - 1] [i_7 + 2] [i_7 + 2]))) : (((((/* implicit */_Bool) arr_19 [i_7 - 2] [i_7 - 2] [i_7])) ? (arr_19 [i_7 - 2] [i_7 + 2] [i_7 - 1]) : (arr_19 [i_7 - 2] [i_7] [i_7])))));
            }
            for (unsigned int i_10 = 0; i_10 < 24; i_10 += 2) 
            {
                var_22 = ((/* implicit */short) (-(((/* implicit */int) ((unsigned char) (-(4294966281U)))))));
                var_23 -= ((((/* implicit */_Bool) (+(((/* implicit */int) arr_16 [i_1 + 1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)27414))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294966281U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-27))) : (990U)))) ? (((4294966281U) - (3794038992U))) : (((((/* implicit */_Bool) (short)-27415)) ? (1014U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-14929))))))));
            }
        }
    }
    var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) var_7))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : ((~(var_4)))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) var_2)) : ((-(4294966309U))))) : (var_5)));
    var_25 = ((/* implicit */unsigned char) min((var_4), (((/* implicit */unsigned long long int) 990U))));
}
