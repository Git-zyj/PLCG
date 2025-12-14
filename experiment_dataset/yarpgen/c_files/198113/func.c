/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198113
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
    for (int i_0 = 4; i_0 < 22; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((710601555) * (((/* implicit */int) var_9)))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_0 [i_0] [i_0 - 3])) : (((/* implicit */int) var_9))))))) ? (((/* implicit */int) max(((signed char)-83), (((/* implicit */signed char) (_Bool)0))))) : ((+(((/* implicit */int) min(((signed char)31), (((/* implicit */signed char) (_Bool)0)))))))));
        arr_3 [i_0 - 2] [i_0 - 2] = ((/* implicit */_Bool) (~(max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_10))), (((/* implicit */long long int) var_9))))));
        arr_4 [i_0] = ((/* implicit */signed char) (~(min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)35))))), (var_4)))));
    }
    var_12 = ((/* implicit */unsigned char) (-9223372036854775807LL - 1LL));
}
