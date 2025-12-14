/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233664
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
    /* vectorizable */
    for (short i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        var_16 = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
        var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) | (var_11)))) ? (var_14) : ((-(var_7)))));
        arr_2 [i_0] = var_15;
        var_18 = ((/* implicit */unsigned char) arr_0 [i_0]);
    }
    var_19 = max((((/* implicit */unsigned long long int) min(((~(((/* implicit */int) (short)21717)))), (((/* implicit */int) max((var_8), (((/* implicit */unsigned char) var_1)))))))), (((var_1) ? (max((((/* implicit */unsigned long long int) (unsigned char)61)), (10015461588297370488ULL))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_8))))))));
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((min((((/* implicit */int) var_15)), (var_14))) * (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_8))))))) ? (var_7) : (min((((((/* implicit */int) (short)21719)) - (((/* implicit */int) (_Bool)1)))), (3)))));
    var_21 = ((/* implicit */unsigned long long int) max(((((~(((/* implicit */int) (short)(-32767 - 1))))) ^ (((/* implicit */int) var_8)))), (((/* implicit */int) var_8))));
    var_22 = ((/* implicit */signed char) var_5);
}
