/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226416
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
    var_17 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) -1331124641192470042LL))) ? (((/* implicit */long long int) var_10)) : (max((((/* implicit */long long int) var_12)), (var_0)))))), (var_3)));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */long long int) ((((/* implicit */int) max((arr_4 [i_0] [i_1]), (arr_4 [i_0] [i_1])))) ^ (((/* implicit */int) max((arr_4 [i_0] [i_1]), (arr_4 [i_0] [i_1]))))));
                var_19 = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_2 [i_0] [i_1])), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_10)) : (var_9)))))) ? (((((/* implicit */_Bool) (unsigned short)57344)) ? (-3343737498736533884LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [10]))) : (arr_1 [i_0] [i_1])))))) : (((/* implicit */long long int) min(((~(((/* implicit */int) var_5)))), (((/* implicit */int) ((((/* implicit */int) (short)32767)) > (arr_3 [i_1]))))))));
            }
        } 
    } 
    var_20 *= ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (((var_7) / (((/* implicit */unsigned int) var_11)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_0) : (0LL)))) ? (((/* implicit */long long int) var_11)) : (((((/* implicit */_Bool) 2766579622U)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (-1LL)))))));
}
