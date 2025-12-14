/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54907
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
    var_18 = ((((/* implicit */_Bool) ((unsigned short) var_10))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_15));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] |= ((/* implicit */long long int) var_14);
        arr_3 [15] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0])))) << (((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (var_3))) - (29447ULL)))));
    }
}
