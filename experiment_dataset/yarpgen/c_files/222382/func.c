/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222382
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
    var_12 = ((/* implicit */signed char) ((4294967293U) / (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_13 = ((/* implicit */_Bool) (+(var_10)));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) var_7))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
        arr_3 [i_0] = ((/* implicit */int) ((short) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) * (var_1))));
    }
    var_14 = (!(((/* implicit */_Bool) ((unsigned char) ((var_7) ? (((/* implicit */unsigned long long int) var_8)) : (var_10))))));
}
