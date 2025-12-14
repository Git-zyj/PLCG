/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/455
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
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? ((+((~(var_6))))) : (((/* implicit */long long int) ((/* implicit */int) var_8)))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1045904881808080821LL)) ? (7531722299235052217ULL) : (((/* implicit */unsigned long long int) (~((+(arr_0 [i_0] [i_0]))))))));
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))) : (((/* implicit */unsigned int) (+(arr_0 [i_0] [i_0]))))));
    }
}
