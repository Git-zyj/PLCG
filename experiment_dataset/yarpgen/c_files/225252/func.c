/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225252
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
    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) (~(var_18))))));
    var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (signed char)125)) : (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) var_8)))))));
    var_22 = ((/* implicit */unsigned int) max(((-(min((var_7), (((/* implicit */unsigned long long int) var_11)))))), (((/* implicit */unsigned long long int) ((min((var_10), (((/* implicit */unsigned int) var_14)))) < (((/* implicit */unsigned int) ((/* implicit */int) var_16))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        var_23 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)(-127 - 1)))));
        var_24 ^= ((/* implicit */unsigned int) (((~(min((arr_2 [i_0]), (((/* implicit */unsigned int) arr_0 [i_0] [i_0 + 2])))))) < (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 - 1] [i_0 + 2]))) <= (arr_2 [i_0 - 1])))))));
    }
}
