/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203716
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
    for (int i_0 = 3; i_0 < 15; i_0 += 1) 
    {
        var_18 |= ((/* implicit */short) max(((+(-1621979243))), (((((/* implicit */int) arr_0 [i_0 - 2])) << (((((/* implicit */int) arr_0 [i_0 - 2])) - (78)))))));
        var_19 = 22U;
    }
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((signed char) var_5))), (var_15)))) / (max((((/* implicit */unsigned long long int) var_15)), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) var_0)) : (var_16)))))));
    var_21 = ((/* implicit */unsigned int) var_5);
    var_22 = ((/* implicit */signed char) ((((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_15))) ^ (((/* implicit */unsigned int) var_0)))) >> (((((/* implicit */int) (short)32767)) - (32767)))));
}
