/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203997
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
    var_10 = ((/* implicit */_Bool) max((var_7), (((((_Bool) var_6)) ? (min((((/* implicit */unsigned int) (_Bool)1)), (var_4))) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_0), (((/* implicit */short) var_8))))))))));
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        var_11 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((2147483647) % (((/* implicit */int) arr_2 [i_0]))))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (signed char)95)))))));
        var_12 = ((/* implicit */unsigned int) var_5);
    }
}
