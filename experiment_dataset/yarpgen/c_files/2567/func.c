/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2567
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
    var_13 = ((/* implicit */short) ((unsigned char) max((((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)240)), (var_8)))), ((-(((/* implicit */int) var_9)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_14 = (!(((/* implicit */_Bool) (unsigned short)35255)));
        var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-9297)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_0 [i_0])));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) ((unsigned char) (unsigned char)236));
        var_16 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */long long int) var_10))));
    }
}
