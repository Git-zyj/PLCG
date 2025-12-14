/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211496
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
    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))) : (((/* implicit */unsigned long long int) (~(((unsigned int) var_18))))))))));
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) 1919857255)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (((((((/* implicit */_Bool) var_6)) ? (var_5) : (var_15))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        arr_3 [i_0] = var_8;
        var_21 = ((/* implicit */unsigned long long int) var_13);
        var_22 = ((/* implicit */signed char) ((unsigned short) ((arr_1 [i_0 + 3]) == (((/* implicit */unsigned long long int) 1919857255)))));
    }
}
