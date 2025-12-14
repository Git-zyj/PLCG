/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238887
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
    /* vectorizable */
    for (short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)123)) / (1241171470)))) ? (((unsigned long long int) arr_0 [i_0] [i_0])) : ((+(arr_1 [i_0])))));
        var_17 = ((/* implicit */unsigned short) arr_0 [i_0] [i_0]);
    }
    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */unsigned char) var_13)), (var_8)))) | (((/* implicit */int) var_8))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (((_Bool)1) || (((/* implicit */_Bool) 2748794419U))))))) : (min((var_10), (((/* implicit */long long int) ((unsigned int) (_Bool)0)))))));
}
