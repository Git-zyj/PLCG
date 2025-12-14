/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224959
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
    /* vectorizable */
    for (int i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        var_20 *= ((signed char) (+(arr_1 [i_0])));
        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_13)) - (arr_1 [(short)12])))) ? (((((/* implicit */_Bool) (unsigned short)2043)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)22543))))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))));
        var_22 *= ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)22544))))) > (((/* implicit */int) (unsigned short)2033))));
    }
    var_23 += ((/* implicit */signed char) ((unsigned long long int) ((long long int) ((((/* implicit */int) (signed char)-21)) / (((/* implicit */int) (unsigned short)2026))))));
}
