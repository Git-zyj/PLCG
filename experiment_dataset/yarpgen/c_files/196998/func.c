/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196998
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
    for (unsigned int i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        var_12 = ((/* implicit */_Bool) (~(var_8)));
        arr_2 [i_0] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) var_8)))) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 11611206971134557568ULL))))))));
    }
    var_13 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (signed char)123)), ((unsigned short)45484)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_4) : (var_11)))) ? (((unsigned long long int) var_0)) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_6)), (var_10)))))))));
}
