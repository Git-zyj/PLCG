/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28993
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
    for (short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_11 = arr_1 [i_0];
        var_12 = ((/* implicit */unsigned short) (~(((unsigned long long int) arr_0 [i_0]))));
    }
    var_13 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_0)) ? (((((/* implicit */int) var_3)) << (((var_7) + (1147398875))))) : (((/* implicit */int) ((_Bool) var_6))))) - (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (var_6) : (((/* implicit */unsigned long long int) var_2))))))));
}
