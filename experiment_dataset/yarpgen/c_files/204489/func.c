/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204489
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
    var_10 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_3))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_11 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */int) arr_0 [i_0])) ^ (((/* implicit */int) (unsigned char)150)))));
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(min((var_4), (((/* implicit */unsigned long long int) (unsigned char)150))))))) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_9)) + (var_5)))) ? (((((/* implicit */int) (signed char)(-127 - 1))) - (((/* implicit */int) var_2)))) : ((+(((/* implicit */int) arr_1 [i_0] [0U]))))))));
    }
}
