/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48757
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
    var_12 = ((/* implicit */short) min((((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))))) ? ((~(((/* implicit */int) var_6)))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1)))))), ((~(((((/* implicit */_Bool) 0)) ? (0) : (((/* implicit */int) (_Bool)0))))))));
    var_13 |= ((/* implicit */_Bool) var_6);
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 3; i_0 < 24; i_0 += 4) 
    {
        var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) var_9)) : (var_2)));
        var_15 = (_Bool)0;
        arr_3 [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) var_7))));
        arr_4 [i_0 - 2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_3) : (((/* implicit */unsigned int) (((_Bool)1) ? (1100002927) : (((/* implicit */int) (_Bool)1)))))));
        var_16 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_0)) ? (var_2) : (var_2)))));
    }
    var_17 = ((/* implicit */_Bool) var_9);
}
