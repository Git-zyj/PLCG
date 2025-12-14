/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4969
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 *= ((((/* implicit */int) arr_2 [i_0] [i_0])) < (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1)))));
        var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) max((min((((/* implicit */int) (_Bool)1)), (((arr_3 [i_0]) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_0 [(_Bool)1])))))), (((/* implicit */int) ((_Bool) max((var_11), (var_6))))))))));
        var_15 = max((((((/* implicit */int) (_Bool)0)) == (((/* implicit */int) arr_1 [i_0])))), (((_Bool) arr_2 [i_0] [i_0])));
    }
    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~((~(((/* implicit */int) var_0))))))) ? (((/* implicit */int) max((var_6), (((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) var_5))))))) : (((/* implicit */int) var_9))));
    var_17 = ((/* implicit */_Bool) ((((/* implicit */int) (!(max(((_Bool)1), (var_4)))))) + (((/* implicit */int) var_8))));
}
