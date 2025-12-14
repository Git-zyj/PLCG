/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198021
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
    for (unsigned char i_0 = 1; i_0 < 7; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (((long long int) arr_2 [(_Bool)1] [i_0])) : (((/* implicit */long long int) ((var_3) % (var_11)))))) % (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [8LL] [(_Bool)1])) >> (((((/* implicit */int) arr_1 [i_0])) + (12488)))))) || (((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_0])))))))))));
        var_14 = var_9;
    }
    var_15 = (~(((((unsigned int) var_4)) & (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_10)))))));
}
