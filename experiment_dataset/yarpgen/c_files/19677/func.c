/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19677
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
    var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) var_8))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) min((min((((/* implicit */int) ((var_0) < (5834302433268016948ULL)))), ((~(((/* implicit */int) (short)-16841)))))), (((145932564) ^ (((/* implicit */int) (_Bool)1))))));
        arr_4 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((((/* implicit */int) (short)24076)) >> (((/* implicit */int) (_Bool)1))))))) ? (max((((/* implicit */long long int) (((_Bool)1) ? (2889530196U) : (((/* implicit */unsigned int) -145932565))))), (((((/* implicit */long long int) 1754452227)) % (-3843878840742531573LL))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)30621))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10)))) : (((((/* implicit */int) (short)-25969)) * (((/* implicit */int) var_2)))))))));
        arr_5 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned char) 3843878840742531572LL))) % (-323681504)));
    }
}
