/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192498
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
    var_16 |= ((/* implicit */unsigned char) (-((+(((/* implicit */int) var_1))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 3; i_0 < 14; i_0 += 4) 
    {
        var_17 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) 402653184U)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) -5930975868691582272LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)188))) : (arr_1 [i_0])))) ? (((/* implicit */long long int) max((((/* implicit */int) (unsigned char)200)), (arr_0 [i_0])))) : (((5930975868691582272LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))))))) : (((/* implicit */long long int) min((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)139))))), (var_15))))));
        var_18 = ((/* implicit */long long int) arr_0 [i_0 - 1]);
    }
    var_19 *= ((/* implicit */unsigned int) ((((((var_14) >= (((/* implicit */long long int) 151461773)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_6) : (-1343483856892121480LL)))))) ? (((/* implicit */long long int) var_12)) : ((-(1343483856892121479LL)))));
    var_20 = var_9;
}
