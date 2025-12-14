/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20613
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
    var_14 = ((/* implicit */unsigned char) var_0);
    var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((max((((/* implicit */int) var_3)), (((var_11) / (((/* implicit */int) var_10)))))) & (((/* implicit */int) ((var_7) > (var_8)))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) var_3);
        var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) (unsigned short)65535)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) : (max((arr_1 [i_0] [i_0]), (var_13)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) >= (var_8)))), (var_5))))) : (max((arr_1 [i_0] [i_0]), (arr_0 [i_0]))))))));
        var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) max(((~(var_7))), (var_8))))));
    }
    var_18 = ((/* implicit */short) var_8);
}
