/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203273
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
    var_15 -= ((/* implicit */_Bool) ((((var_9) || (((/* implicit */_Bool) ((long long int) var_6))))) ? (((min((0ULL), (((/* implicit */unsigned long long int) (_Bool)0)))) | (((/* implicit */unsigned long long int) 1281305858U)))) : (((/* implicit */unsigned long long int) (+(min((4313204944719903014LL), (((/* implicit */long long int) var_11)))))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)0))))) ^ (max((((/* implicit */unsigned int) (~(((/* implicit */int) var_11))))), (2001048195U))))))));
        arr_2 [i_0] = ((((/* implicit */long long int) max((min((248812264), (((/* implicit */int) arr_1 [i_0])))), (var_12)))) != (((arr_0 [i_0]) + (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) ^ (3441420740U)))))));
    }
    var_17 = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned int) (_Bool)1)), (3935837052U))) << (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) -295423875)) ? (((/* implicit */int) var_6)) : (-1658162603)))))));
}
