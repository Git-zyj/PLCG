/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213957
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
    var_14 ^= ((/* implicit */_Bool) ((((/* implicit */unsigned int) (((~(((/* implicit */int) var_3)))) ^ (((/* implicit */int) var_3))))) | (var_4)));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */short) 9223372036854775782LL);
                    var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) (short)26457))));
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)75)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_1]))) : (2943550634696670587LL)))) && (((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_1 [i_1])) * (arr_2 [i_0] [i_2 + 1])))))));
                }
            } 
        } 
        arr_10 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned int) arr_4 [i_0] [i_0]))))) ? (((((/* implicit */_Bool) (unsigned char)183)) ? (1040322543U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((min((var_10), (var_0))) | (max((var_2), (arr_3 [i_0] [i_0])))))));
    }
}
