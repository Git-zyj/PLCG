/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215441
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
    var_17 -= ((/* implicit */int) (unsigned short)29170);
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 3; i_0 < 21; i_0 += 2) 
    {
        var_18 = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)4)) & ((~(((/* implicit */int) (signed char)-4))))));
        arr_3 [i_0] [(short)12] &= ((/* implicit */unsigned long long int) ((arr_0 [i_0 - 3]) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) arr_0 [i_0 - 2]))));
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-4)) || (((/* implicit */_Bool) (unsigned short)0))));
        /* LoopSeq 3 */
        for (signed char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            var_20 = ((/* implicit */int) min((var_20), (((arr_5 [i_0 - 2] [i_0 - 3]) ? (((/* implicit */int) (signed char)-4)) : (((/* implicit */int) arr_1 [i_0 - 2]))))));
            var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) var_5)) & (var_1))))));
            var_22 -= ((/* implicit */signed char) (+(((unsigned int) (signed char)-11))));
            /* LoopSeq 2 */
            for (long long int i_2 = 1; i_2 < 21; i_2 += 3) 
            {
                var_23 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_8 [i_2 + 1] [i_2 - 1] [i_2])) & (((/* implicit */int) arr_1 [i_2 - 1]))));
                var_24 |= ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))));
                var_25 ^= ((/* implicit */long long int) (+(var_9)));
            }
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                /* LoopSeq 2 */
                for (long long int i_4 = 0; i_4 < 22; i_4 += 2) 
                {
                    arr_15 [9] [i_1] [i_3] [i_3] [i_4] = ((/* implicit */long long int) (+(((/* implicit */int) arr_7 [i_0 - 1] [i_0] [4ULL] [i_4]))));
                    arr_16 [i_4] [(_Bool)1] [i_1] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_11))));
                }
                for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 2) 
                {
                    var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0 - 3] [i_1] [i_3])) ? (arr_9 [i_0 - 1] [i_1] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
                    var_27 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (signed char)-4)) ? (-3618217264544141196LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)3)))))));
                    var_28 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_18 [i_0] [i_0 + 1] [i_0 - 2] [i_0 + 1]))));
                }
                /* LoopNest 2 */
                for (signed char i_6 = 0; i_6 < 22; i_6 += 3) 
                {
                    for (unsigned int i_7 = 0; i_7 < 22; i_7 += 1) 
                    {
                        {
                            var_29 += ((/* implicit */_Bool) ((unsigned char) (((_Bool)1) && (((/* implicit */_Bool) 4294967280U)))));
                            var_30 += ((/* implicit */unsigned char) (~(var_6)));
                            var_31 -= ((/* implicit */unsigned long long int) 3671560804U);
                        }
                    } 
                } 
            }
            arr_25 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_20 [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-29)) ? (((/* implicit */long long int) 623406500U)) : (7466844503132775587LL)))) : (((0ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))));
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(var_13)))) ? (((/* implicit */int) arr_23 [3U] [i_0] [i_0] [i_0] [i_8] [i_8] [i_8])) : (((/* implicit */int) arr_28 [(unsigned char)9] [(_Bool)1]))));
            arr_30 [i_8] = ((/* implicit */unsigned char) var_9);
        }
        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
        {
            arr_35 [i_9] [i_9 - 1] = ((/* implicit */signed char) ((((/* implicit */int) arr_19 [i_9] [i_9 - 1] [(unsigned char)9] [i_0 - 2])) == (((/* implicit */int) arr_17 [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_0] [i_0 + 1]))));
            arr_36 [20] [i_9] [(signed char)20] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_3)) == (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_0 + 1] [i_9] [(unsigned short)16] [(signed char)5]))) : ((~(var_0)))));
        }
        var_33 *= ((/* implicit */_Bool) (~(((/* implicit */int) arr_10 [6] [i_0 + 1] [i_0 - 2]))));
    }
    /* LoopNest 3 */
    for (unsigned int i_10 = 0; i_10 < 14; i_10 += 2) 
    {
        for (signed char i_11 = 0; i_11 < 14; i_11 += 4) 
        {
            for (short i_12 = 0; i_12 < 14; i_12 += 4) 
            {
                {
                    arr_45 [i_10] [i_11] [i_11] [(unsigned short)2] = ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (max((((/* implicit */long long int) var_11)), (min((var_13), (var_13))))) : (((/* implicit */long long int) (+(15587882U))))));
                    arr_46 [(unsigned short)0] [i_11] [i_12] = ((/* implicit */int) ((signed char) (~(((unsigned int) var_7)))));
                    /* LoopSeq 2 */
                    for (short i_13 = 2; i_13 < 12; i_13 += 3) 
                    {
                        var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (short)14954)) : ((~(arr_14 [i_13 - 1] [i_11] [i_12] [i_13 + 1] [(_Bool)1] [i_13 - 1])))));
                        var_35 += ((/* implicit */_Bool) (~(((/* implicit */int) var_14))));
                        var_36 = ((/* implicit */long long int) max((var_36), (((/* implicit */long long int) min(((+(((/* implicit */int) arr_6 [i_10] [i_11] [0LL])))), (((/* implicit */int) ((((/* implicit */int) (signed char)28)) != (((/* implicit */int) (_Bool)1))))))))));
                        arr_50 [i_10] [i_11] [i_12] [i_13] |= ((/* implicit */_Bool) (~((-(max((((/* implicit */unsigned long long int) arr_6 [4] [8ULL] [i_13 + 1])), (arr_4 [1ULL] [i_12] [8ULL])))))));
                        var_37 = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((-8389336768286821943LL) + (9223372036854775807LL))) << (((4294967295U) - (4294967295U)))))) ? ((-(arr_32 [i_13]))) : (((((/* implicit */_Bool) (short)14959)) ? (16790818313151110189ULL) : (464599105314865537ULL))))), (((((/* implicit */_Bool) ((int) arr_17 [i_13 - 1] [2ULL] [1] [i_11] [(short)0]))) ? (min((12916420518787890723ULL), (((/* implicit */unsigned long long int) arr_1 [i_10])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0)))))));
                    }
                    for (unsigned long long int i_14 = 0; i_14 < 14; i_14 += 2) 
                    {
                        var_38 = ((/* implicit */signed char) max((var_38), (((/* implicit */signed char) ((unsigned long long int) (signed char)-46)))));
                        arr_53 [i_10] [i_10] [i_10] |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 0LL))));
                    }
                    arr_54 [i_10] |= ((/* implicit */unsigned long long int) arr_11 [i_10] [i_11] [i_12]);
                }
            } 
        } 
    } 
}
