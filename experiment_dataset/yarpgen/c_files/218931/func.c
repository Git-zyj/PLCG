/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218931
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
    var_11 ^= ((/* implicit */short) var_1);
    var_12 = ((((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) ? (min((144115188075724800ULL), (36024398972452864ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (1962696687U)))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 2332270602U)))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 3; i_0 < 15; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) (-((-(1962696706U)))));
        arr_3 [12LL] [12LL] &= ((/* implicit */long long int) arr_1 [i_0]);
    }
    var_13 -= 1962696687U;
}
