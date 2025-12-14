/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233677
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
    var_18 += ((/* implicit */unsigned long long int) (+(((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)0)) < (((/* implicit */int) (unsigned char)99)))))) / (((((/* implicit */_Bool) var_8)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 3; i_0 < 14; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((int) arr_1 [i_0 - 2]));
        arr_3 [i_0] = ((/* implicit */long long int) ((unsigned char) (((_Bool)1) ? (((/* implicit */int) (unsigned char)106)) : (((/* implicit */int) (unsigned char)7)))));
    }
    var_19 = ((/* implicit */signed char) ((min((((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))), (max((var_7), (((/* implicit */long long int) var_6)))))) - (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2761541699156349019LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_8)))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_10)))))));
}
