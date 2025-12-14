/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24028
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
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((2396662665U) != (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) ? (((/* implicit */int) var_2)) : ((~(((/* implicit */int) var_8))))))) ? ((-(((var_15) ? (4U) : (1339037348U))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_1 [i_0])) != (((/* implicit */int) arr_1 [(short)4])))) ? (((/* implicit */int) ((((/* implicit */int) var_7)) != (((/* implicit */int) var_11))))) : (((((/* implicit */_Bool) arr_1 [9U])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_2 [i_0]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) : (arr_0 [(_Bool)1] [i_1])));
                var_20 = ((/* implicit */unsigned long long int) min(((unsigned short)30368), ((unsigned short)35143)));
            }
        } 
    } 
}
