/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24903
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
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        arr_3 [(short)15] = ((/* implicit */_Bool) (+(((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_0)))) + ((-(((/* implicit */int) var_4))))))));
        arr_4 [i_0] = ((/* implicit */short) ((var_9) << (((((/* implicit */int) ((signed char) (-(((/* implicit */int) var_8)))))) + (129)))));
    }
    var_10 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_1))) - (((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) (unsigned short)31)) ? (4860227780155318622LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_6))))))));
    var_11 = ((((var_5) ^ ((~(var_9))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((var_9) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) && (((/* implicit */_Bool) min((-1168424818), (((/* implicit */int) (_Bool)1))))))))));
    var_12 = ((/* implicit */unsigned short) var_5);
    var_13 *= ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) ((var_9) ^ (var_2)))) || (((/* implicit */_Bool) ((var_9) - (((/* implicit */unsigned long long int) var_7))))))))));
}
