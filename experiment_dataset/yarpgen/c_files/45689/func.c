/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45689
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
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) >= (max((((var_12) % (((/* implicit */unsigned long long int) 4101724121U)))), (((/* implicit */unsigned long long int) ((unsigned short) var_5)))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        var_17 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */int) arr_0 [i_0 + 1])), (arr_2 [i_0 + 1])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (arr_2 [i_0]) : (arr_2 [i_0 + 1])))) : (193243174U)));
        var_18 &= ((/* implicit */_Bool) arr_2 [(short)8]);
        var_19 = (-(((/* implicit */int) min((((/* implicit */signed char) arr_0 [i_0 + 1])), (arr_1 [17])))));
        var_20 = ((/* implicit */unsigned char) max((((signed char) arr_1 [i_0 + 1])), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_1 [i_0 - 1])))))));
        var_21 = ((/* implicit */short) arr_2 [i_0 + 1]);
    }
}
