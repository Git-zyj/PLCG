/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233380
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
    var_18 = ((/* implicit */int) max((min((((/* implicit */unsigned int) var_4)), (var_13))), (max((((/* implicit */unsigned int) ((var_1) == (var_1)))), (max((((/* implicit */unsigned int) var_0)), (var_5)))))));
    var_19 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) (~(var_5)))) ? (((713875007560099672LL) & (((/* implicit */long long int) ((/* implicit */int) (signed char)4))))) : (((/* implicit */long long int) ((/* implicit */int) min((var_10), (var_15))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_17)) * (var_9)))) ? (((((arr_1 [i_0]) > (((/* implicit */long long int) var_13)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [11] [i_0])) ? (var_1) : (var_1)))) : (max((var_9), (((/* implicit */unsigned long long int) var_4)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
        arr_5 [i_0] = ((/* implicit */int) ((long long int) ((((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-65)), ((unsigned char)200)))) << (((min((arr_1 [i_0 - 1]), (-7586071020582880LL))) + (3815320622640691410LL))))));
    }
}
