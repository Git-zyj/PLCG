/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247730
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
    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((_Bool) ((unsigned short) ((unsigned long long int) var_3)))))));
    var_18 &= ((/* implicit */int) ((unsigned int) ((short) ((unsigned long long int) var_14))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_19 *= ((/* implicit */unsigned short) ((unsigned char) ((_Bool) arr_1 [i_0] [i_0])));
        arr_2 [i_0] &= ((_Bool) ((_Bool) var_14));
    }
    var_20 = ((/* implicit */unsigned int) ((_Bool) ((unsigned char) ((long long int) var_9))));
    var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((unsigned int) ((unsigned int) ((unsigned long long int) (_Bool)1)))))));
}
