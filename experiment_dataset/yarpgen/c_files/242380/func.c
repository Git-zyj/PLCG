/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242380
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
    var_12 = ((/* implicit */int) var_11);
    var_13 |= ((/* implicit */unsigned long long int) var_1);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_14 = ((/* implicit */signed char) (+((~(1065965267)))));
        var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) min((((((var_4) << (((arr_0 [i_0]) + (1710094444))))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [10])))))))), (((/* implicit */unsigned int) ((signed char) (~(arr_0 [i_0]))))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) var_9))));
                    var_17 = ((/* implicit */unsigned long long int) min((var_17), (min((min((((((/* implicit */unsigned long long int) var_10)) ^ (8160230552581058119ULL))), (((/* implicit */unsigned long long int) arr_5 [i_2])))), (((/* implicit */unsigned long long int) ((short) var_4)))))));
                    var_18 = (i_0 % 2 == zero) ? (((/* implicit */long long int) ((((var_9) + (2147483647))) << (((max((((/* implicit */int) var_5)), (arr_7 [i_2] [i_0] [i_2]))) - (1345598791)))))) : (((/* implicit */long long int) ((((var_9) + (2147483647))) << (((((max((((/* implicit */int) var_5)), (arr_7 [i_2] [i_0] [i_2]))) - (1345598791))) - (647523174))))));
                    arr_9 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) max((((((/* implicit */_Bool) arr_7 [i_2] [i_0] [i_2])) ? (arr_7 [i_2] [i_0] [i_2]) : (arr_7 [i_0] [i_0] [i_2]))), (min((arr_7 [i_0] [i_0] [i_2]), (arr_7 [i_0] [i_0] [i_0])))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 11; i_3 += 3) 
                    {
                        for (int i_4 = 1; i_4 < 12; i_4 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) 8160230552581058124ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-8))) : (3240927105U)))), (-1414999637574822261LL)));
                                arr_16 [i_0] [i_2] [i_2] [i_2] [i_1] &= ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */int) arr_10 [i_0] [i_1])) | (((/* implicit */int) arr_10 [i_3 - 1] [i_2])))) : (((/* implicit */int) (short)-4848))));
                                var_20 *= ((/* implicit */unsigned int) ((((/* implicit */int) arr_12 [6] [i_1] [6] [i_1])) / (((((arr_7 [i_0] [i_1] [i_0]) / (arr_2 [i_2] [6] [(short)0]))) * ((-(((/* implicit */int) arr_10 [i_1] [i_1]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_21 -= ((/* implicit */short) ((int) ((arr_8 [i_0] [i_0] [i_0] [i_0]) & ((~(arr_15 [i_0] [i_0] [i_0] [i_0] [12ULL] [i_0]))))));
        /* LoopNest 2 */
        for (long long int i_5 = 0; i_5 < 13; i_5 += 4) 
        {
            for (int i_6 = 0; i_6 < 13; i_6 += 2) 
            {
                {
                    var_22 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((((/* implicit */long long int) ((/* implicit */int) arr_5 [(short)2]))) - (18014398509481984LL)))))) ? (((arr_19 [i_5] [i_5] [i_5]) | (((/* implicit */unsigned int) arr_11 [i_6] [i_0])))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) var_2))) && (((/* implicit */_Bool) 3178408079U))))))));
                    arr_21 [i_0] [i_0] [11U] [i_6] = ((/* implicit */short) ((min((((/* implicit */long long int) (signed char)-4)), (arr_13 [i_6] [i_5] [i_0]))) & (((/* implicit */long long int) arr_11 [i_5] [i_6]))));
                }
            } 
        } 
    }
}
