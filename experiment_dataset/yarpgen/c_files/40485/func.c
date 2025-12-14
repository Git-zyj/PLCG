/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40485
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
    for (unsigned char i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        var_16 -= ((/* implicit */unsigned int) min((303690736550156695ULL), (((/* implicit */unsigned long long int) arr_1 [i_0 + 1] [i_0 + 1]))));
        var_17 = ((/* implicit */int) var_9);
        var_18 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) arr_1 [i_0 + 1] [i_0])) : (var_12))) - (((/* implicit */long long int) arr_1 [i_0 + 1] [i_0]))));
        arr_4 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)255)))))));
        var_19 = ((/* implicit */short) max((((/* implicit */long long int) arr_0 [i_0])), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)90))) : (((((/* implicit */_Bool) var_10)) ? (var_10) : (((/* implicit */long long int) arr_1 [i_0] [i_0]))))))));
    }
    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */unsigned int) var_3)) ^ (var_1))) : (((/* implicit */unsigned int) ((/* implicit */int) var_15))))))));
}
