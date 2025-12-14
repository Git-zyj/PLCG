/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43616
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
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_17 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) var_13)) : ((+(var_9)))));
        arr_3 [i_0] = ((/* implicit */short) var_7);
    }
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)63)) << (((((/* implicit */int) (short)504)) - (484)))));
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? ((+(min((((/* implicit */int) var_14)), (var_13))))) : ((+((-(((/* implicit */int) var_1))))))));
    var_20 ^= ((/* implicit */int) min((min((((/* implicit */long long int) var_14)), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_11))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (~(var_11)))))))));
}
