/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246789
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
    var_10 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_6)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))))) ? (((((/* implicit */_Bool) min((var_8), ((unsigned char)102)))) ? (var_1) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_8))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
    var_11 = ((/* implicit */unsigned long long int) ((var_0) != (((/* implicit */long long int) ((/* implicit */int) (unsigned short)11943)))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_12 = ((/* implicit */unsigned short) (+(max((((unsigned int) var_2)), (((((/* implicit */_Bool) -2390845343247067491LL)) ? (364757239U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))))))));
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) var_8)) ^ (((/* implicit */int) ((unsigned char) ((long long int) var_1))))));
    }
}
