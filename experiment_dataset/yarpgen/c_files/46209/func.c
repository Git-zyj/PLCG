/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46209
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
    var_18 = ((/* implicit */unsigned long long int) ((((max((4095ULL), (((/* implicit */unsigned long long int) var_8)))) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_7))))) > (((/* implicit */int) ((_Bool) var_2))))))) : (var_0)));
    var_19 = ((/* implicit */signed char) ((((((/* implicit */_Bool) -8)) && (((/* implicit */_Bool) (-(((/* implicit */int) var_4))))))) && (((((/* implicit */_Bool) (unsigned short)39514)) && (((/* implicit */_Bool) -2070918967))))));
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)26022)) && (((((/* implicit */_Bool) arr_1 [i_0 + 1])) && (((/* implicit */_Bool) var_16))))));
        var_21 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)63)), ((unsigned short)42746)))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (unsigned short)39514))))))));
    }
}
