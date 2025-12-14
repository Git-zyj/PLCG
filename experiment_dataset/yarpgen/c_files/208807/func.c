/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208807
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
    for (signed char i_0 = 3; i_0 < 16; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((((/* implicit */long long int) ((arr_6 [(unsigned char)16] [(_Bool)1] [i_3]) | (((/* implicit */unsigned int) arr_4 [i_2] [i_2]))))) | (arr_0 [i_0 - 2]))) | (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_3] [i_2] [i_2] [i_1] [i_0 - 2]))))))));
                            arr_10 [i_2] [i_1] [i_2] [i_2] [1ULL] = ((/* implicit */signed char) ((((((/* implicit */int) arr_9 [i_0 - 2] [i_1] [i_2] [i_3] [i_3])) | (((/* implicit */int) arr_1 [i_0 + 1])))) | (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0 - 2])) > (((/* implicit */int) arr_9 [i_0 - 3] [i_0 - 3] [i_2] [i_3] [i_3])))))));
                        }
                    } 
                } 
                arr_11 [i_0] [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) -732827352)) < (((15475784910244402040ULL) << (((15475784910244402040ULL) - (15475784910244402021ULL)))))));
                arr_12 [i_1] [i_1] [0LL] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_4 [i_0] [i_0])) ^ (((((arr_8 [i_0] [i_1]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0 - 1] [i_0] [i_1] [i_1] [i_1]))))) ^ (((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [8U] [8U] [i_1] [i_1]))) ^ (arr_8 [i_0] [i_1])))))));
                arr_13 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) arr_6 [i_0] [(_Bool)1] [i_1])) / (((((((/* implicit */unsigned long long int) -732827341)) + (15475784910244402040ULL))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [(unsigned char)4] [i_1] [i_1] [i_1])))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_4 = 1; i_4 < 24; i_4 += 1) 
    {
        for (unsigned int i_5 = 0; i_5 < 25; i_5 += 1) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_6 = 4; i_6 < 22; i_6 += 1) 
                {
                    for (unsigned int i_7 = 0; i_7 < 25; i_7 += 1) 
                    {
                        for (long long int i_8 = 0; i_8 < 25; i_8 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_17 [i_6 - 3] [i_4])) >= (((/* implicit */int) arr_15 [i_4]))))) >= (arr_19 [i_4] [i_4]))))) >= (arr_16 [i_4] [i_5] [i_6])));
                                arr_27 [i_4] [i_4] [i_6] [i_4] = ((/* implicit */short) ((((/* implicit */int) arr_22 [i_4] [i_4] [i_4])) + (((((((/* implicit */int) arr_22 [i_4] [i_4] [i_4])) * (((/* implicit */int) arr_25 [i_4] [i_4] [i_6] [i_7] [i_4] [i_4] [i_6 + 3])))) * (((((/* implicit */int) arr_15 [i_4])) * (((/* implicit */int) arr_21 [i_5] [i_6] [i_5] [i_8]))))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 2 */
                for (long long int i_9 = 1; i_9 < 23; i_9 += 1) 
                {
                    var_19 *= ((/* implicit */short) ((((/* implicit */int) ((arr_19 [4] [(signed char)24]) == (arr_19 [i_4] [(unsigned char)14])))) > (((arr_19 [i_5] [12U]) ^ (arr_19 [16ULL] [12])))));
                    arr_31 [i_9] [i_4] [i_9] [i_4 - 1] = (i_4 % 2 == zero) ? (((/* implicit */int) ((((arr_20 [15ULL] [i_4] [i_4 - 1]) << (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_4] [i_5] [i_4]))) ^ (arr_26 [i_4]))) - (11635766794584116925ULL))))) / (((/* implicit */unsigned int) ((((/* implicit */int) arr_15 [i_4])) | (((/* implicit */int) arr_15 [i_4])))))))) : (((/* implicit */int) ((((arr_20 [15ULL] [i_4] [i_4 - 1]) << (((((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_4] [i_5] [i_4]))) ^ (arr_26 [i_4]))) - (11635766794584116925ULL))) - (10821320512478260454ULL))))) * (((/* implicit */unsigned int) ((((/* implicit */int) arr_15 [i_4])) | (((/* implicit */int) arr_15 [i_4]))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_10 = 3; i_10 < 23; i_10 += 1) 
                    {
                        for (unsigned int i_11 = 0; i_11 < 25; i_11 += 1) 
                        {
                            {
                                arr_37 [i_11] [i_10 + 1] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) arr_17 [i_9] [i_4]);
                                arr_38 [i_9] [i_4] [i_9] [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */int) ((arr_19 [i_10] [i_4]) <= (arr_36 [i_10] [i_10 + 2] [i_9] [i_9] [i_5])))) * (((/* implicit */int) ((((/* implicit */int) ((0U) == (((/* implicit */unsigned int) -732827358))))) <= (((((/* implicit */int) arr_21 [i_5] [i_9] [i_10] [i_11])) | (arr_19 [i_4] [i_4]))))))));
                                arr_39 [i_4] [i_5] [i_9] [i_4] [(_Bool)1] [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) arr_23 [i_4] [i_9 - 1] [i_4])) < (((/* implicit */int) arr_23 [i_4] [i_10 - 2] [i_11]))))) != (((/* implicit */int) arr_21 [i_5] [i_9 + 2] [i_10] [i_11]))));
                                arr_40 [i_4] [i_10] [i_9] [i_4] [i_4] = ((/* implicit */int) ((((/* implicit */unsigned long long int) 4294967295U)) != (2970959163465149576ULL)));
                            }
                        } 
                    } 
                }
                for (long long int i_12 = 0; i_12 < 25; i_12 += 1) 
                {
                    arr_43 [i_4] [i_5] [i_4] = arr_15 [i_4];
                    var_20 = ((/* implicit */_Bool) max((var_20), (arr_17 [i_4] [(_Bool)1])));
                }
            }
        } 
    } 
}
