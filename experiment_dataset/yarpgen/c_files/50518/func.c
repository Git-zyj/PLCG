/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50518
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        var_16 = ((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0] [i_0 + 1])) & (((/* implicit */int) (unsigned char)232))));
        var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) (-(((/* implicit */int) var_1)))))));
    }
    for (unsigned short i_1 = 0; i_1 < 11; i_1 += 4) 
    {
        var_18 |= ((/* implicit */short) ((((_Bool) ((var_7) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)232))))) ? (((/* implicit */unsigned long long int) min(((-(((/* implicit */int) var_10)))), (((/* implicit */int) var_14))))) : ((~(arr_3 [i_1] [i_1])))));
        var_19 = ((/* implicit */unsigned int) (+(max((((/* implicit */unsigned long long int) ((1796339213) < (((/* implicit */int) arr_0 [i_1] [i_1]))))), (arr_3 [3ULL] [(_Bool)1])))));
    }
    var_20 |= ((/* implicit */int) ((((/* implicit */int) var_0)) < (((((/* implicit */_Bool) ((((/* implicit */int) var_7)) * (((/* implicit */int) var_1))))) ? (min((var_11), (((/* implicit */int) (unsigned char)228)))) : (((/* implicit */int) var_4))))));
}
