/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217527
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
    var_12 |= (-(2386308570U));
    var_13 = ((/* implicit */unsigned int) (-((+(((/* implicit */int) (!(((/* implicit */_Bool) 1486078748U)))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        var_14 = max((1594456297U), (((((((/* implicit */_Bool) 1267455027U)) && (((/* implicit */_Bool) 3686383002U)))) ? (max((var_5), (arr_2 [i_0]))) : (arr_2 [i_0 + 3]))));
        var_15 = ((((/* implicit */_Bool) ((((/* implicit */int) ((arr_1 [i_0] [3U]) == (3110064233U)))) | (((/* implicit */int) (!(((/* implicit */_Bool) 3027512268U)))))))) ? (4294967295U) : (((((/* implicit */_Bool) 4057567625U)) ? (((unsigned int) 16862869U)) : ((~(arr_1 [i_0] [i_0 + 1]))))));
        var_16 = ((1023U) * (3027512265U));
    }
}
