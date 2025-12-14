/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237667
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
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_17 += ((unsigned int) ((var_12) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) - (2813162336U)))) : ((+(0LL)))));
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) var_5);
    }
    var_18 ^= ((/* implicit */short) ((((var_0) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) (short)1023)), ((unsigned short)65535))))) : ((-(242433335U))))) + (((/* implicit */unsigned int) (~(((/* implicit */int) min((var_1), (((/* implicit */unsigned short) var_5))))))))));
}
