/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41794
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
    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((var_17) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_15)))) : (((var_3) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_19))))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (!(((((/* implicit */int) (short)27157)) <= (((/* implicit */int) var_4))))))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 3; i_0 < 8; i_0 += 3) 
    {
        arr_2 [i_0 + 3] = ((/* implicit */unsigned int) max((((/* implicit */int) var_3)), (((arr_1 [i_0 + 1]) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) arr_1 [i_0 + 1]))))));
        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) arr_1 [i_0 - 3]))));
        var_22 ^= ((/* implicit */unsigned int) arr_0 [i_0 - 3]);
    }
    var_23 |= ((/* implicit */unsigned int) (_Bool)1);
    var_24 &= ((/* implicit */_Bool) var_18);
}
