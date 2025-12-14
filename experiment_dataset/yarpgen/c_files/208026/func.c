/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208026
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    arr_8 [i_2] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_2] [i_0 - 1] [i_0 - 1])) ? (arr_6 [i_0] [i_1] [i_0] [i_1]) : (arr_0 [i_0 - 1])))) & (((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 - 1] [(short)7]))) : (arr_1 [i_0 - 1])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0 - 1] [i_0 - 1] [i_0 - 1])) ? (arr_4 [i_2] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2] [i_1] [i_2])))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [11U] [i_2])) ? (arr_6 [i_0 - 1] [(unsigned short)18] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1] [i_1])))))))))) : (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) arr_5 [i_0 - 1] [i_1] [i_2])) : (arr_3 [i_0] [i_0] [i_0])))), (min((arr_4 [i_1] [i_1] [i_0 - 1]), (((/* implicit */unsigned int) arr_5 [i_2] [i_2] [i_2]))))))));
                    arr_9 [17ULL] [i_1] = ((/* implicit */int) min((((((/* implicit */_Bool) max((arr_5 [i_0 - 1] [i_0] [i_0 - 1]), (((/* implicit */unsigned short) arr_7 [i_0] [i_0] [i_1] [i_1]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2] [i_1] [i_0 - 1]))) : (min((arr_6 [i_0 - 1] [i_1] [i_1] [i_2]), (((/* implicit */long long int) arr_7 [i_0] [i_0] [i_0 - 1] [i_0])))))), (((/* implicit */long long int) ((_Bool) arr_1 [i_2])))));
                    var_17 = ((/* implicit */unsigned char) ((min((((/* implicit */unsigned long long int) min((arr_4 [i_0 - 1] [i_0 - 1] [i_2]), (((/* implicit */unsigned int) arr_3 [i_0 - 1] [i_1] [i_1]))))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) arr_4 [i_0] [i_2] [i_2])) : (arr_1 [(unsigned short)15]))))) / (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0 - 1] [i_0] [i_0]))) : (arr_4 [(short)7] [i_1] [i_1]))))))));
                }
            } 
        } 
    } 
    var_18 *= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_0)) && (max((var_9), (var_3))))) ? (((/* implicit */int) ((signed char) max((var_4), (((/* implicit */signed char) var_7)))))) : (((/* implicit */int) var_9))));
}
