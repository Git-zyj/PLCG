/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26245
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
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((var_1) >= (var_1))) ? (var_3) : (((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_5)))))))) > (var_5)));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        var_12 = ((/* implicit */unsigned int) arr_2 [i_0] [i_0]);
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_1 [(short)2] [i_0 - 1]) : (((/* implicit */long long int) var_3))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_10))))) ? (((/* implicit */unsigned long long int) var_3)) : (max((var_1), (((/* implicit */unsigned long long int) max((var_10), (((/* implicit */short) var_8)))))))));
    }
    var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((((var_1) != (var_1))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_4))))) : (var_2)))) : (min((((((/* implicit */_Bool) var_6)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) ^ (var_2))))))));
}
