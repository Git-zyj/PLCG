/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222400
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
    var_20 = ((/* implicit */_Bool) (~(((/* implicit */int) var_13))));
    var_21 = ((_Bool) var_7);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_22 = ((/* implicit */_Bool) max((var_22), (max((((_Bool) arr_1 [i_0])), ((_Bool)1)))));
        var_23 = (_Bool)0;
        arr_2 [i_0] = ((/* implicit */_Bool) ((var_0) ? (((/* implicit */int) min((var_12), (arr_0 [i_0])))) : (((/* implicit */int) (((((_Bool)1) && ((_Bool)1))) && (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))))));
    }
}
