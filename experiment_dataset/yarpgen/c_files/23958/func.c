/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23958
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
    var_15 = var_8;
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 3; i_0 < 15; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    arr_10 [i_2] [i_2] = ((/* implicit */signed char) (~(((/* implicit */int) var_3))));
                    arr_11 [i_0] [15U] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((int) arr_6 [i_1] [12U]))) > (((((/* implicit */_Bool) (signed char)-102)) ? (arr_2 [i_2]) : (var_5)))));
                }
            } 
        } 
        arr_12 [(unsigned short)14] [(unsigned short)14] = ((/* implicit */unsigned long long int) ((var_0) ? (((var_0) ? (((/* implicit */int) var_12)) : (arr_1 [4LL]))) : (((((/* implicit */_Bool) (signed char)20)) ? (((/* implicit */int) arr_5 [7U])) : (((/* implicit */int) arr_7 [i_0] [i_0] [(signed char)2]))))));
    }
    for (signed char i_3 = 2; i_3 < 20; i_3 += 2) 
    {
        arr_15 [i_3] = ((/* implicit */long long int) (signed char)23);
        arr_16 [i_3] [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_14 [i_3 - 2])) & (((/* implicit */int) arr_14 [i_3 - 1])))))));
        arr_17 [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_3)), (arr_13 [i_3 + 2] [i_3 + 1])))) ? (((/* implicit */long long int) ((((((/* implicit */int) (unsigned char)50)) ^ (((/* implicit */int) var_0)))) ^ (((/* implicit */int) (signed char)8))))) : (((arr_13 [i_3] [i_3 - 2]) ^ (((/* implicit */long long int) (~(((/* implicit */int) var_10)))))))));
        arr_18 [i_3 - 2] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) min((arr_13 [i_3] [i_3]), (arr_13 [i_3] [i_3])))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_13 [i_3] [i_3]))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)110))))), ((((+(arr_13 [(signed char)11] [i_3 + 1]))) & (((/* implicit */long long int) (~(((/* implicit */int) (signed char)-113)))))))));
    }
}
