/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5226
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
    var_20 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))))))) % (max((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)0))))), (var_9)))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_21 = ((/* implicit */short) ((((((((/* implicit */_Bool) arr_0 [i_0])) || ((_Bool)1))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0]))))) : (((/* implicit */int) arr_3 [i_0])))) & (((/* implicit */int) (_Bool)1))));
        var_22 = arr_0 [i_0];
    }
    for (unsigned short i_1 = 0; i_1 < 24; i_1 += 3) 
    {
        arr_7 [i_1] = ((/* implicit */signed char) ((((/* implicit */int) var_4)) >> (((((/* implicit */int) ((unsigned short) arr_6 [i_1]))) - (49550)))));
        var_23 ^= (_Bool)1;
    }
}
