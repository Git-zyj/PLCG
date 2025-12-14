/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219540
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
    for (int i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_11 -= ((/* implicit */unsigned long long int) var_0);
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned long long int) max((var_12), (((((/* implicit */_Bool) ((arr_7 [i_0 + 1]) % (arr_7 [i_0 - 1])))) ? (arr_7 [i_0 + 2]) : (arr_7 [i_0 + 1])))));
                                var_13 ^= ((/* implicit */short) (-((+(((((/* implicit */_Bool) (unsigned short)65535)) ? (arr_9 [i_0 + 2] [i_1] [i_2] [i_1] [i_4] [(unsigned char)21]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 + 2] [i_2])))))))));
                                arr_12 [(unsigned short)15] [i_1] [i_1] [i_1] [(short)16] [i_4] [(unsigned short)11] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_7 [i_0 - 2])) ? (arr_7 [i_0 + 1]) : (arr_7 [i_0 - 1]))) * (((((/* implicit */_Bool) arr_7 [i_0 + 1])) ? (arr_7 [i_0 + 2]) : (arr_7 [i_0 + 2])))));
                            }
                        } 
                    } 
                } 
                var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) 2551703874U))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 2) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_7 = 0; i_7 < 11; i_7 += 3) 
                {
                    for (unsigned short i_8 = 3; i_8 < 10; i_8 += 3) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 11; i_9 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */int) max((var_15), (((min((((((/* implicit */_Bool) 1743263430U)) ? (((/* implicit */int) (signed char)-1)) : (1998024889))), (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) (unsigned short)8191))))))) % (((((/* implicit */int) var_0)) ^ (((/* implicit */int) (unsigned short)41378))))))));
                                var_16 ^= ((/* implicit */int) 1743263421U);
                            }
                        } 
                    } 
                } 
                var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) 1743263421U)) ? (arr_20 [i_5] [i_6]) : (((/* implicit */int) var_7))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_10 = 0; i_10 < 23; i_10 += 4) 
    {
        for (unsigned long long int i_11 = 1; i_11 < 20; i_11 += 4) 
        {
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                {
                    arr_35 [i_10] [i_11] [i_12] |= ((/* implicit */long long int) ((unsigned int) ((0) * (((/* implicit */int) arr_30 [i_10] [(_Bool)1] [(_Bool)1])))));
                    arr_36 [i_10] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_4)) ? (arr_5 [4] [i_11 + 1] [i_11] [(_Bool)1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_10]))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (unsigned short)2))))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10])) || (((/* implicit */_Bool) arr_8 [i_10] [3LL] [(short)6] [i_11] [i_12] [i_12]))))) >= (((/* implicit */int) min((((/* implicit */unsigned short) (short)-23517)), ((unsigned short)1)))))))));
                    /* LoopNest 2 */
                    for (signed char i_13 = 0; i_13 < 23; i_13 += 2) 
                    {
                        for (int i_14 = 0; i_14 < 23; i_14 += 2) 
                        {
                            {
                                var_18 -= ((/* implicit */short) arr_39 [i_11] [i_13]);
                                var_19 ^= ((/* implicit */unsigned long long int) (~((+(((/* implicit */int) arr_1 [i_11 + 3] [i_11 + 3]))))));
                                var_20 = ((/* implicit */unsigned char) var_1);
                                arr_42 [i_10] [i_11] [i_12] [(unsigned short)19] [i_13] [i_11] = ((((/* implicit */_Bool) 2551703883U)) || (((/* implicit */_Bool) (unsigned short)24817)));
                                var_21 += ((/* implicit */unsigned long long int) max((arr_8 [i_11 + 1] [i_11 + 2] [i_11] [i_11] [i_11] [(signed char)5]), (((arr_8 [i_11 + 1] [i_11 + 1] [i_11 + 1] [i_11 + 2] [i_11] [i_11 + 2]) % (arr_8 [i_11 + 1] [i_11 + 1] [i_11] [i_11 + 2] [i_11] [i_11])))));
                            }
                        } 
                    } 
                    var_22 -= ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) > (16ULL)))), (((((/* implicit */_Bool) arr_2 [i_10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)4095))) : (arr_41 [i_10] [i_10] [i_10] [(_Bool)1] [i_12] [i_10] [i_10])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551600ULL))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_34 [i_10] [i_11 - 1])) || (((/* implicit */_Bool) arr_34 [i_10] [i_11 + 2]))))));
                }
            } 
        } 
    } 
}
