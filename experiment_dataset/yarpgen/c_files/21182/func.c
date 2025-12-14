/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21182
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
    var_13 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_2))));
    var_14 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned char)195)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_7))), (((/* implicit */unsigned long long int) var_2))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_5))))) : (((((/* implicit */_Bool) var_1)) ? ((~(32767LL))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_12)))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        var_15 = ((/* implicit */unsigned int) arr_2 [i_0]);
        arr_3 [i_0 - 1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_2 [i_0])), (var_11)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) / (2701382428U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) != (1593584867U)));
    }
}
