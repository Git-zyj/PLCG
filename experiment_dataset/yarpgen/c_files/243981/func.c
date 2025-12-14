/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243981
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
    var_20 &= ((/* implicit */_Bool) min((((/* implicit */unsigned int) var_4)), (((((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned long long int) var_13))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : ((+(16711680U)))))));
    var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) var_11))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                var_22 ^= ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1] [i_0] [10LL])) ? (arr_2 [(unsigned short)4]) : (((/* implicit */unsigned long long int) arr_4 [i_0] [(unsigned short)3] [i_1]))))) ? (((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_2 [i_0]) : (arr_2 [1ULL]))) : (min((arr_2 [i_0]), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [i_0])))))));
                var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_1])))) ? (((/* implicit */unsigned long long int) ((unsigned int) ((unsigned short) arr_0 [i_0])))) : (arr_2 [i_0]))))));
            }
        } 
    } 
}
