/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37587
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
    var_19 = ((/* implicit */unsigned short) min((((/* implicit */int) ((unsigned char) ((var_16) >> (((((/* implicit */int) var_6)) - (39))))))), (max((((/* implicit */int) var_1)), (var_3)))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0] [i_0])) >> (((((/* implicit */int) var_0)) - (8566))))))))) != (((/* implicit */int) arr_1 [i_0]))));
        arr_3 [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (short)30825)))))));
        arr_4 [i_0] |= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) + (((11057893100219411405ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)47)))))));
        arr_5 [(unsigned char)12] = ((/* implicit */_Bool) var_7);
    }
}
