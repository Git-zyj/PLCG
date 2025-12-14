/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220541
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
    for (unsigned long long int i_0 = 2; i_0 < 8; i_0 += 1) 
    {
        arr_4 [i_0] = (signed char)-1;
        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-10)) || (((/* implicit */_Bool) (unsigned short)124)))))) : (arr_2 [i_0 - 2]))))));
        arr_5 [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) arr_1 [i_0 + 2]));
    }
    var_20 += ((/* implicit */int) var_17);
}
