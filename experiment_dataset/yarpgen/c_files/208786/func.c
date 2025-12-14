/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208786
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    arr_7 [i_2] = ((/* implicit */unsigned char) 4194176U);
                    var_14 = ((/* implicit */unsigned long long int) arr_0 [i_2]);
                    arr_8 [i_0] [i_1] [i_0] |= ((/* implicit */long long int) min((((1833642153U) / (((/* implicit */unsigned int) ((/* implicit */int) var_1))))), (((/* implicit */unsigned int) (unsigned short)10117))));
                    arr_9 [i_0] [i_2] [3LL] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)-1)) + (((/* implicit */int) (_Bool)1)))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_3 = 2; i_3 < 11; i_3 += 4) 
    {
        arr_13 [i_3] = ((((arr_6 [i_3] [i_3] [i_3 + 1] [i_3 + 1]) << (((arr_0 [i_3]) - (8282155124696432193LL))))) / (2880124161690946515ULL));
        arr_14 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_3 - 1])) * (((/* implicit */int) arr_3 [i_3 + 1] [i_3 + 1]))))) ? (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) arr_10 [i_3 + 1])))) : (((((/* implicit */int) arr_3 [i_3 - 1] [i_3 - 2])) / (((/* implicit */int) var_7))))));
        arr_15 [i_3 - 1] [i_3 - 1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)116)) + (((/* implicit */int) var_2))))) + (((arr_1 [i_3 - 1]) << (((var_0) - (15499294870922289741ULL)))))));
        arr_16 [i_3] = ((/* implicit */long long int) ((((/* implicit */int) var_11)) / (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_5 [i_3] [i_3 - 1] [i_3 - 1]))))));
    }
    /* LoopNest 3 */
    for (unsigned long long int i_4 = 1; i_4 < 18; i_4 += 4) 
    {
        for (short i_5 = 0; i_5 < 19; i_5 += 1) 
        {
            for (short i_6 = 2; i_6 < 16; i_6 += 4) 
            {
                {
                    var_15 ^= ((/* implicit */unsigned char) ((((((/* implicit */int) (signed char)-88)) + (2147483647))) << (((((/* implicit */int) arr_19 [i_4] [i_6 - 1])) - (16112)))));
                    arr_24 [i_5] [i_6] = ((/* implicit */unsigned char) (+(((arr_23 [i_5] [i_4 - 1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_5] [i_4 + 1]))) : (var_0)))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_7 = 0; i_7 < 19; i_7 += 1) 
    {
        for (unsigned char i_8 = 0; i_8 < 19; i_8 += 4) 
        {
            {
                var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) (((+(((/* implicit */int) arr_19 [i_7] [i_8])))) / (((/* implicit */int) (unsigned char)204)))))));
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 19; i_9 += 1) 
                {
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        {
                            arr_35 [i_7] [i_9] [(short)1] [i_7] = ((/* implicit */_Bool) (unsigned char)2);
                            /* LoopSeq 3 */
                            /* vectorizable */
                            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                            {
                                arr_39 [i_7] [i_7] [i_8] [i_9] [i_10] [i_11] = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) arr_18 [i_7]))));
                                var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_21 [(unsigned char)10] [i_10] [i_8])))))));
                            }
                            /* vectorizable */
                            for (signed char i_12 = 2; i_12 < 17; i_12 += 1) 
                            {
                                arr_42 [i_7] [i_8] [i_8] [18U] = ((/* implicit */short) ((arr_31 [i_7] [i_7] [i_7]) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)55391)))));
                                var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_38 [i_12 - 1] [i_12] [i_12] [i_12 + 1] [(unsigned short)13])) ^ (((/* implicit */int) arr_40 [i_12 - 2] [i_12] [i_7] [i_12 + 2] [14LL]))));
                                arr_43 [i_7] [i_8] [i_9] [i_7] [i_10] [7U] = ((/* implicit */_Bool) ((((/* implicit */int) arr_38 [i_12 + 2] [i_8] [i_12 + 1] [i_9] [i_12])) ^ (((/* implicit */int) (signed char)-64))));
                            }
                            /* vectorizable */
                            for (unsigned char i_13 = 0; i_13 < 19; i_13 += 1) 
                            {
                                arr_46 [i_7] [i_7] [i_9] [i_7] [7LL] = ((/* implicit */unsigned short) var_11);
                                var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_22 [i_7] [i_8] [i_8] [i_10])))))));
                            }
                            var_20 = ((/* implicit */long long int) ((((arr_33 [i_7] [i_8] [i_8] [i_9] [i_10] [i_10]) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) + (((/* implicit */unsigned long long int) ((var_13) | (((/* implicit */int) var_2)))))));
                            arr_47 [i_7] [i_8] [i_7] = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) var_12)) << (((2047ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
