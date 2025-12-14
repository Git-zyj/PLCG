/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204643
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
    var_10 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (max((0ULL), (((/* implicit */unsigned long long int) (signed char)-122)))) : (((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? (23ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_11 = ((/* implicit */unsigned int) min((var_11), (((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned short) arr_1 [i_0])))))))), ((-(((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) 1228478683))))))))))));
        var_12 &= ((/* implicit */unsigned char) var_9);
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 17; i_1 += 2) 
    {
        var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) ((((var_9) + (2147483647))) << (((var_7) - (1228732859003908516ULL))))))));
        var_14 = ((/* implicit */unsigned char) min((var_14), (((unsigned char) arr_3 [i_1]))));
        var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) (+(((/* implicit */int) arr_2 [i_1])))))));
    }
}
