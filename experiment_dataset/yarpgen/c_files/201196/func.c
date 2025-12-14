/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201196
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
    for (int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_13 = ((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) var_9)) * (35184372088831ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) var_1)) != (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_8))))))));
        arr_3 [i_0] [i_0] = (-((+(3753570311964425302ULL))));
        var_14 = ((/* implicit */unsigned long long int) var_10);
        var_15 |= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0])) >> (((35184372088832ULL) - (35184372088822ULL)))))) >= (((((/* implicit */_Bool) ((35184372088821ULL) ^ (35184372088822ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) != (arr_2 [i_0] [i_0]))))) : (var_9)))));
    }
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) < (((((/* implicit */_Bool) min(((unsigned short)55151), ((unsigned short)10379)))) ? (var_11) : (var_11)))));
}
