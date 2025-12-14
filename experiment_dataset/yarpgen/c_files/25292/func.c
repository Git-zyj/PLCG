/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25292
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
    var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) var_5))));
    var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) var_10))));
    var_15 = ((/* implicit */unsigned short) ((unsigned long long int) (!(((/* implicit */_Bool) ((unsigned long long int) var_8))))));
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_4)))))) + ((~(var_4)))))) + (((((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned char) var_1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_1)))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_5)))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_17 = ((unsigned char) ((((((/* implicit */_Bool) 6727316221992499236ULL)) ? (((/* implicit */int) (unsigned char)71)) : (536870911))) << (((/* implicit */int) ((((/* implicit */_Bool) 536870911)) && (((/* implicit */_Bool) 536870911)))))));
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) ((unsigned char) var_7)))) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) + (((/* implicit */int) var_9))))) ? (((/* implicit */int) var_2)) : (var_0))))));
        arr_4 [i_0] = ((/* implicit */unsigned char) ((long long int) ((int) ((unsigned char) var_10))));
        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((unsigned int) ((((/* implicit */int) var_1)) / (var_0)))))));
        arr_5 [i_0] [i_0] = ((/* implicit */short) (((+(((/* implicit */int) arr_1 [i_0] [i_0])))) % (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) && (((/* implicit */_Bool) var_2))))) < (((/* implicit */int) var_1)))))));
    }
}
