/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199398
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
    for (short i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) var_1);
        arr_3 [i_0 - 1] [i_0] = ((/* implicit */unsigned char) ((short) ((1381184530U) / (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) var_4)))))))));
        var_20 -= min((((unsigned int) ((((/* implicit */int) (signed char)58)) << (((474724019) - (474724001)))))), (((/* implicit */unsigned int) var_2)));
    }
    var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_17)))))));
}
