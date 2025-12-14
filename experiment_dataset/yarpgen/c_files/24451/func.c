/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24451
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
    for (unsigned char i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        arr_4 [i_0 - 2] = ((/* implicit */int) ((unsigned int) (~(((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_3 [i_0 + 4]) : (((/* implicit */unsigned long long int) -1462324220)))))));
        var_18 ^= ((/* implicit */unsigned char) ((unsigned int) 3931569807836285852LL));
    }
    var_19 += ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((((((/* implicit */unsigned long long int) 3931569807836285852LL)) + (var_5))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) && ((_Bool)1))))))) : (((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) var_0)), (3931569807836285852LL))) + (((((/* implicit */long long int) var_17)) ^ (-686454863799877899LL))))))));
}
