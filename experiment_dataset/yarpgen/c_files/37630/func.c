/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37630
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
    var_20 = ((/* implicit */signed char) ((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_16)), (var_9)))) ? ((~(var_19))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) >> (((((((/* implicit */_Bool) (+(((/* implicit */int) var_14))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_17)))))) : (((((/* implicit */_Bool) (unsigned char)239)) ? (9007198180999168ULL) : (9333815622688176952ULL))))) - (1340766492ULL)))));
    var_21 &= var_4;
    /* LoopSeq 1 */
    for (unsigned int i_0 = 4; i_0 < 20; i_0 += 3) 
    {
        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((((18242713632397661032ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)19126))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)218)))))));
        var_23 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0]))))) ? (min((((/* implicit */unsigned long long int) arr_0 [i_0])), (var_9))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 - 4])))))) ? (((((/* implicit */_Bool) ((int) (short)19941))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (min((((/* implicit */unsigned long long int) arr_1 [i_0])), (var_3))))) : (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_1 [i_0 - 2])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0 - 2]))))))));
        var_24 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)218))));
    }
}
