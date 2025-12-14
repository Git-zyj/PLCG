/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246047
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
    var_15 = ((/* implicit */int) var_9);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */int) ((((((/* implicit */_Bool) (short)-25430)) && (((/* implicit */_Bool) (short)25444)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (arr_3 [i_0] [i_0]) : (((/* implicit */long long int) arr_1 [i_0] [i_0])))))));
        var_16 = ((/* implicit */_Bool) ((((/* implicit */int) ((((((/* implicit */int) (short)25430)) <= (((/* implicit */int) (_Bool)1)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-4911)) ? (((/* implicit */int) (short)32765)) : (((/* implicit */int) (signed char)72)))))))) | (((/* implicit */int) arr_2 [i_0]))));
        arr_5 [i_0] = ((/* implicit */unsigned long long int) (short)-25430);
    }
    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) 6746887380226839994LL))));
}
