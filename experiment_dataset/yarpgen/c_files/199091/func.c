/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199091
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
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_13 = ((/* implicit */unsigned short) ((var_6) ? (((((/* implicit */_Bool) (unsigned short)0)) ? ((-(arr_3 [i_0] [i_0]))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_3 [i_0] [i_0]) : (arr_1 [i_0]))))) : (var_4)));
        arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) arr_2 [i_0])))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (var_9)))));
    }
    var_14 = ((/* implicit */short) ((var_7) - (((/* implicit */unsigned int) max((((/* implicit */int) var_3)), (((((/* implicit */_Bool) (signed char)113)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_2)))))))));
    var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) var_11))));
}
