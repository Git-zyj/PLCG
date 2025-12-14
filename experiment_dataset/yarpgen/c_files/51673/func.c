/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51673
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
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_11)), (var_10)))) ? ((-(((long long int) (unsigned short)18842)))) : (((/* implicit */long long int) ((arr_0 [i_1]) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) var_9)))))));
                var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_0 [i_1]) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)206)))))) ? (((arr_0 [i_1]) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) arr_0 [i_0])))))));
            }
        } 
    } 
    var_14 = ((/* implicit */_Bool) max(((~(3473729824113984777ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (unsigned short)0)))) : (((((/* implicit */int) var_1)) / (((/* implicit */int) (signed char)-59)))))))));
}
