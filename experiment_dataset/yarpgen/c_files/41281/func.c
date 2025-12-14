/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41281
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (long long int i_4 = 0; i_4 < 16; i_4 += 1) 
                            {
                                var_12 &= ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) (+(3469632768U)))) ? (((/* implicit */int) arr_3 [i_2])) : (((/* implicit */int) ((arr_5 [i_0] [i_1] [i_1]) >= (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1])))))))));
                                var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)32767)) || (((/* implicit */_Bool) ((((((/* implicit */int) var_1)) << (((627419027) - (627419017))))) * ((~(((/* implicit */int) arr_2 [i_0] [(signed char)2] [9ULL])))))))));
                            }
                            var_14 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_3] [8ULL] [i_2] [i_2] [i_1] [i_0])) ? (((/* implicit */int) min((var_0), (((/* implicit */signed char) arr_13 [10U] [i_1] [i_2] [(_Bool)1] [i_3]))))) : (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_9)) >= (((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [i_2] [i_0] [i_0]))))) > (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))))));
                            arr_14 [i_2] [i_2] [i_3] [i_3] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_0] [2U] [i_0] [i_0])) << (((((/* implicit */int) (signed char)95)) - (88)))))) : (arr_4 [(unsigned short)9] [(unsigned short)9])))) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) arr_8 [i_0] [(signed char)7] [i_2] [i_3] [i_1]))))) < (((/* implicit */int) arr_3 [i_0])))))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 0; i_6 < 16; i_6 += 2) 
                    {
                        for (unsigned int i_7 = 0; i_7 < 16; i_7 += 4) 
                        {
                            {
                                var_15 *= ((/* implicit */short) var_4);
                                arr_22 [i_0] [i_1] [i_1] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_7 [i_0] [i_1] [i_5] [i_6] [i_6] [i_7])) & ((~(16886907089423014647ULL)))))) ? ((~(((/* implicit */int) arr_17 [i_1] [i_6] [i_7])))) : (((/* implicit */int) (unsigned short)12288))));
                                var_16 = ((/* implicit */unsigned char) (-((~(((((/* implicit */int) arr_13 [i_0] [i_1] [i_7] [i_6] [i_7])) * (((/* implicit */int) var_1))))))));
                            }
                        } 
                    } 
                    arr_23 [i_5] [(unsigned short)5] [i_5] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) -1LL))));
                }
                /* vectorizable */
                for (unsigned int i_8 = 0; i_8 < 16; i_8 += 2) 
                {
                    var_17 = ((/* implicit */int) ((arr_1 [(unsigned char)3] [i_1]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_8] [(short)15] [(short)15] [i_1] [i_1] [i_0])))));
                    var_18 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)32767)) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_8)))) : (((/* implicit */int) arr_26 [i_0] [i_1] [i_8] [i_8]))));
                    arr_28 [3LL] [i_8] = ((/* implicit */unsigned long long int) (~(var_10)));
                }
                /* LoopNest 3 */
                for (unsigned int i_9 = 0; i_9 < 16; i_9 += 1) 
                {
                    for (unsigned char i_10 = 0; i_10 < 16; i_10 += 1) 
                    {
                        for (unsigned char i_11 = 0; i_11 < 16; i_11 += 3) 
                        {
                            {
                                arr_39 [i_0] [i_1] [i_9] [i_10] [(unsigned short)2] [i_11] = ((/* implicit */_Bool) max((((unsigned long long int) ((((/* implicit */int) (signed char)95)) >= (((/* implicit */int) (short)(-32767 - 1)))))), (((/* implicit */unsigned long long int) min((((unsigned short) arr_10 [(unsigned short)1] [i_1] [i_0])), (((/* implicit */unsigned short) var_5)))))));
                                var_19 = ((/* implicit */_Bool) (((-((+(((/* implicit */int) arr_16 [i_0] [i_0] [(signed char)14])))))) + (((((-1516832227) ^ (((/* implicit */int) var_8)))) + (((/* implicit */int) ((signed char) arr_5 [(signed char)5] [3ULL] [3ULL])))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_12 = 0; i_12 < 15; i_12 += 2) 
    {
        for (short i_13 = 0; i_13 < 15; i_13 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) (((~((((_Bool)1) ? (var_6) : (((/* implicit */int) arr_35 [i_13] [i_13] [9U] [i_12] [i_12])))))) | (((/* implicit */int) arr_15 [i_13]))));
                /* LoopNest 2 */
                for (unsigned int i_14 = 0; i_14 < 15; i_14 += 2) 
                {
                    for (unsigned int i_15 = 0; i_15 < 15; i_15 += 3) 
                    {
                        {
                            arr_52 [i_12] [i_13] [i_13] [i_13] = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_10 [i_12] [i_13] [i_14]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32764)) ? (((/* implicit */int) (short)32762)) : (((/* implicit */int) (short)32758)))))));
                            arr_53 [i_12] [(unsigned short)4] [i_12] &= ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */int) var_1)) ^ (arr_19 [i_13]))));
                            var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) arr_3 [i_14]))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned int) ((var_10) + (((((/* implicit */int) (unsigned short)33653)) + (((((/* implicit */int) var_9)) + (1516832226)))))));
}
