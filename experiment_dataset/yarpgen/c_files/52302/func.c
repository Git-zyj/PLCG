/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52302
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((unsigned int) ((((((/* implicit */_Bool) (signed char)120)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))) >> (((((((/* implicit */_Bool) var_9)) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))) - (3373148052U))))));
        arr_3 [i_0] = ((/* implicit */signed char) ((min((((/* implicit */unsigned int) (signed char)111)), (((((/* implicit */_Bool) 3620489408U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (5U))))) <= (arr_1 [i_0])));
    }
    var_15 *= ((min((var_13), (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)3))))))) >> (((/* implicit */int) min((((_Bool) var_13)), (((_Bool) 3312082675U))))));
}
