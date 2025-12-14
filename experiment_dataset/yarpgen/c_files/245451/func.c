/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245451
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
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) % (((/* implicit */int) var_1))))) ? (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) var_17)))) : ((+(((/* implicit */int) ((((/* implicit */int) var_17)) != (((/* implicit */int) var_6)))))))));
    var_21 = ((/* implicit */_Bool) (+(((((((/* implicit */int) (_Bool)0)) != (((/* implicit */int) var_11)))) ? (((/* implicit */int) max(((_Bool)0), ((_Bool)1)))) : (((/* implicit */int) ((((/* implicit */int) var_3)) < (((/* implicit */int) var_7)))))))));
    var_22 = var_19;
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((var_4) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_0])))), ((+(((/* implicit */int) var_14))))))) ? (((((/* implicit */int) arr_1 [i_0])) - ((-(((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */int) ((_Bool) (_Bool)0))) << (((/* implicit */int) max((var_7), (arr_1 [i_0]))))))));
        arr_3 [i_0] [i_0] = ((_Bool) (_Bool)1);
    }
}
