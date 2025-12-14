/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39500
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_12 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) < (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6))))) ? (var_9) : (((var_9) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))))));
        var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) ((var_7) << (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_9)))) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_5)))))))))));
    }
    var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((((((((/* implicit */_Bool) var_11)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))) ? (((((/* implicit */_Bool) var_7)) ? (var_9) : (((/* implicit */unsigned long long int) var_7)))) : (((/* implicit */unsigned long long int) ((var_3) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_11))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))));
}
