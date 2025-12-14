/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230254
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
    for (short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6930453945183279595ULL)) ? (6281799675242311876ULL) : (((/* implicit */unsigned long long int) arr_2 [i_0]))))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [i_0]) : (arr_2 [i_0]))) : ((-(arr_2 [i_0])))));
        arr_3 [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) arr_1 [i_0] [i_0]))));
    }
    var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned int) (+((+(((/* implicit */int) var_4))))))))))));
}
