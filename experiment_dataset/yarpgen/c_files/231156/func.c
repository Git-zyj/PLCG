/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231156
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
    for (int i_0 = 3; i_0 < 10; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */_Bool) (+(min((((((/* implicit */_Bool) -9223372036854775807LL)) ? (((/* implicit */long long int) var_8)) : (-6980732902910063785LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)254)) ? (arr_3 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1]))))))))));
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    for (signed char i_3 = 1; i_3 < 9; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 9; i_4 += 2) 
                        {
                            {
                                arr_11 [i_0 + 1] [i_0] [i_2] [i_0 + 1] [i_0] [i_0 + 1] = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (signed char)116)) < (((/* implicit */int) arr_8 [i_0 - 1] [i_0 - 2] [i_3 + 2] [i_4 - 1]))))) == (((/* implicit */int) ((_Bool) var_4)))));
                                arr_12 [i_4] [i_4] |= min(((-(min((arr_0 [i_3] [i_0]), (arr_3 [i_0 - 2]))))), (((arr_6 [i_3 + 1] [i_3] [i_3] [i_3 + 3] [i_3] [i_3]) % (arr_6 [i_3 + 1] [i_3] [i_3 + 1] [i_3 + 3] [i_3 + 1] [i_3]))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_5 = 3; i_5 < 11; i_5 += 2) 
                {
                    for (int i_6 = 0; i_6 < 12; i_6 += 1) 
                    {
                        {
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                            {
                                var_12 |= ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */long long int) arr_3 [i_6])) > (-9223372036854775804LL)))) ^ (((/* implicit */int) ((var_4) != (((/* implicit */unsigned long long int) -9223372036854775804LL)))))));
                                var_13 *= ((/* implicit */short) (-((~(arr_2 [i_1] [i_5])))));
                                var_14 = ((/* implicit */_Bool) 14415339287136014759ULL);
                            }
                            /* vectorizable */
                            for (int i_8 = 0; i_8 < 12; i_8 += 4) 
                            {
                                arr_22 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_0 - 2] [i_0 + 2])) <= (((/* implicit */int) arr_19 [i_0] [i_1] [i_0 + 2] [i_5 - 2] [i_1] [i_8] [i_5]))));
                                var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) != (((((/* implicit */int) var_6)) >> (((var_5) - (1389118288)))))));
                                arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((arr_9 [i_0 - 2]) << ((((+(9223372036854775806LL))) - (9223372036854775746LL)))));
                            }
                            /* LoopSeq 2 */
                            for (long long int i_9 = 0; i_9 < 12; i_9 += 4) 
                            {
                                var_16 *= ((/* implicit */unsigned int) min((((((/* implicit */long long int) min((522240), (((/* implicit */int) arr_7 [i_0] [i_9]))))) - (min((-9223372036854775804LL), (((/* implicit */long long int) (unsigned char)100)))))), (((/* implicit */long long int) (unsigned char)0))));
                                var_17 &= ((/* implicit */signed char) max((min((((/* implicit */unsigned long long int) arr_8 [i_9] [i_5] [11ULL] [i_0])), (max((((/* implicit */unsigned long long int) arr_18 [i_0 - 3] [i_6])), (var_4))))), (((/* implicit */unsigned long long int) arr_16 [i_9] [i_6] [i_5] [i_1] [i_0] [i_0]))));
                            }
                            for (int i_10 = 1; i_10 < 9; i_10 += 4) 
                            {
                                var_18 += ((/* implicit */_Bool) (signed char)-126);
                                var_19 = ((/* implicit */unsigned long long int) min(((~(((((/* implicit */_Bool) var_7)) ? (var_8) : (((/* implicit */int) var_7)))))), ((~(((((/* implicit */int) var_7)) / (((/* implicit */int) arr_1 [i_0]))))))));
                                arr_31 [i_0] [1] = ((/* implicit */unsigned long long int) ((((unsigned long long int) 4611686018360279040LL)) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_25 [i_0] [i_1] [i_1] [i_6] [6LL] [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_25 [i_0] [i_0 - 3] [i_5] [i_6] [i_0 - 3] [(unsigned short)5] [i_1]))))));
                                var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (((-(min((-9223372036854775807LL), (((/* implicit */long long int) (unsigned char)93)))))) < (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)240)) ? (2113929216U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)73)))))))))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = (unsigned char)140;
}
