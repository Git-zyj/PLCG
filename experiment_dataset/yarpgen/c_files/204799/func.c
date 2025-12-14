/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204799
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((unsigned long long int) ((((long long int) arr_1 [i_0])) - (arr_0 [3ULL])));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_0] [i_0] [(short)11] = ((/* implicit */_Bool) min(((unsigned short)32512), (((/* implicit */unsigned short) (short)21160))));
                    var_17 &= ((/* implicit */long long int) var_14);
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 1) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 1) 
        {
            {
                arr_15 [i_4] [i_4] = ((min((17256203874501473940ULL), (arr_10 [i_3] [i_3]))) >= (((((/* implicit */_Bool) arr_12 [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)18179))) : (arr_10 [i_3] [i_4]))));
                var_18 = min((((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_3] [i_4] [i_4])) || (((/* implicit */_Bool) var_15))))) : (((/* implicit */int) var_4))))), (max((max((-3523119084025001722LL), (((/* implicit */long long int) var_12)))), (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_13 [i_3] [i_3] [i_3])), (var_16)))))));
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) var_9))));
    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */int) ((var_6) || (((/* implicit */_Bool) (unsigned char)15))))) & (((/* implicit */int) var_12))))), (max((max((var_15), (((/* implicit */unsigned int) var_10)))), (((unsigned int) var_16)))))))));
}
