/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217529
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
    var_17 = ((/* implicit */short) var_12);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_18 = ((/* implicit */short) ((((((/* implicit */_Bool) (signed char)-80)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)14342)))) > (((/* implicit */int) max((((/* implicit */short) arr_0 [i_0])), (arr_1 [i_0]))))));
        arr_3 [i_0] = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((arr_0 [i_0]) ? (max((arr_2 [19U]), (arr_2 [i_0]))) : (max((arr_2 [(short)19]), (arr_2 [i_0])))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_8)), (arr_2 [i_0])))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (var_4))) : (((/* implicit */unsigned long long int) (((_Bool)0) ? (var_11) : (((/* implicit */long long int) arr_2 [i_0])))))))));
    }
    var_19 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_10)), (var_4)));
}
