/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213959
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
    var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) max((((((var_6) - (((/* implicit */unsigned int) var_12)))) - (min((var_11), (((/* implicit */unsigned int) var_7)))))), (((min((((/* implicit */unsigned int) var_1)), (var_3))) - (((var_2) * (var_4))))))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) arr_0 [i_0]);
        var_14 *= ((/* implicit */unsigned char) arr_1 [i_0] [(unsigned char)20]);
        var_15 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) min((arr_0 [(signed char)6]), (min((arr_0 [i_0]), (arr_0 [i_0])))))) <= (((/* implicit */int) arr_1 [i_0] [i_0]))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 16; i_1 += 2) 
    {
        /* LoopNest 3 */
        for (short i_2 = 0; i_2 < 18; i_2 += 1) 
        {
            for (int i_3 = 0; i_3 < 18; i_3 += 1) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        arr_15 [i_2] [i_4] [i_3] [i_4] [i_1] [2U] = ((/* implicit */int) max((((/* implicit */unsigned int) max((((((/* implicit */int) arr_1 [i_1] [i_4])) & (((/* implicit */int) arr_9 [i_1] [2ULL] [i_1] [i_4])))), (((/* implicit */int) arr_13 [(unsigned short)4] [(unsigned short)4] [i_3] [i_4]))))), (arr_7 [i_1] [5U] [i_1])));
                        arr_16 [(_Bool)1] [i_4] [(_Bool)1] [i_4] |= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) max((arr_13 [i_1] [15] [i_3] [i_1]), (((/* implicit */short) arr_5 [9U]))))) / (((((/* implicit */int) arr_1 [4] [i_2])) * (((/* implicit */int) arr_12 [i_3]))))))) / (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_3])) && (((/* implicit */_Bool) arr_12 [i_1]))))), (arr_11 [i_2] [i_3] [i_4])))));
                    }
                } 
            } 
        } 
        arr_17 [i_1] = ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_12 [i_1])), (arr_8 [(unsigned short)6] [i_1] [i_1])))), (min((arr_11 [i_1] [i_1] [i_1]), (((/* implicit */unsigned long long int) arr_4 [i_1])))))) & (max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_1 [i_1] [i_1])), (arr_8 [i_1] [i_1] [i_1])))), (max((((/* implicit */unsigned long long int) arr_8 [i_1] [(short)0] [i_1])), (arr_11 [i_1] [i_1] [i_1])))))));
    }
    for (unsigned int i_5 = 2; i_5 < 21; i_5 += 1) 
    {
        var_16 ^= ((/* implicit */unsigned short) max((((/* implicit */signed char) max((((((/* implicit */_Bool) arr_18 [i_5])) && (((/* implicit */_Bool) arr_1 [i_5] [12])))), (((((/* implicit */_Bool) arr_0 [i_5])) && (((/* implicit */_Bool) arr_18 [i_5]))))))), (max((arr_19 [(signed char)2]), (arr_19 [(short)14])))));
        var_17 = ((/* implicit */signed char) ((((((arr_18 [(signed char)7]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_5]))))) * (arr_18 [0U]))) >= (min((arr_18 [i_5]), (((/* implicit */unsigned int) arr_1 [7U] [i_5]))))));
    }
    var_18 |= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_7))) * (((((/* implicit */long long int) max((var_3), (var_4)))) & (min((((/* implicit */long long int) var_9)), (var_10)))))));
}
