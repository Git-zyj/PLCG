/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225730
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
    var_10 = ((/* implicit */signed char) var_6);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_11 = ((((/* implicit */_Bool) 4095)) ? (((/* implicit */int) ((((/* implicit */int) ((short) 16201929452159055549ULL))) > (((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) 18446744073709551615ULL)))))))) : (((/* implicit */int) ((((/* implicit */int) var_4)) >= (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_7)) : (var_2)))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) (unsigned char)96);
        arr_4 [i_0] = max((0ULL), (((/* implicit */unsigned long long int) ((var_3) % (((/* implicit */long long int) ((/* implicit */int) ((var_1) < (((/* implicit */long long int) ((/* implicit */int) var_4)))))))))));
    }
}
