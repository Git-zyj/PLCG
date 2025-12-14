/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203379
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
    var_10 = ((/* implicit */unsigned int) min((var_10), (((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_9)) + (var_2)))) ? (((((/* implicit */_Bool) var_1)) ? (var_2) : (12251514807181072136ULL))) : (min((var_0), (var_2)))))))));
    var_11 *= max((((/* implicit */unsigned long long int) (signed char)-1)), (((((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned char) (_Bool)1))))) ? (min((var_0), (((/* implicit */unsigned long long int) var_5)))) : (((/* implicit */unsigned long long int) var_5)))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) arr_0 [i_0]))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0]))))));
        var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) arr_0 [(unsigned short)3]))));
    }
    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_6)));
}
