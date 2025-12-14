/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239869
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
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) -2052979533)) ? (2052979532) : (-2052979533)))), (var_5)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)64))))) : (max((11224129478641314782ULL), (((/* implicit */unsigned long long int) (~(var_10))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 19; i_1 += 3) 
        {
            {
                var_14 = ((arr_4 [i_1 - 4] [i_1 - 2] [i_1 - 4]) | (arr_4 [i_1 - 1] [i_1 - 2] [i_1 - 4]));
                arr_5 [17U] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_1 [i_1 + 1] [i_1 - 4])))) ? (((/* implicit */unsigned int) (~(var_1)))) : (((((/* implicit */_Bool) max((arr_3 [i_1]), (((/* implicit */unsigned int) arr_4 [i_0] [i_0] [i_0]))))) ? (((/* implicit */unsigned int) arr_4 [i_1] [i_1 + 1] [i_0])) : ((-(arr_2 [i_0])))))));
                var_15 *= ((/* implicit */unsigned int) ((arr_4 [i_0] [i_1] [i_1]) == (((arr_4 [i_1 - 3] [i_1 - 4] [i_1 - 2]) & (((/* implicit */int) var_4))))));
            }
        } 
    } 
    var_16 -= ((/* implicit */short) max((((/* implicit */unsigned int) (short)896)), (((((/* implicit */_Bool) var_9)) ? (var_10) : (var_5)))));
}
