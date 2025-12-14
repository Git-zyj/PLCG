/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4070
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
    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-97))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) & (1334188543513460876ULL)))))) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_15 = ((/* implicit */short) max((((/* implicit */long long int) (!(((/* implicit */_Bool) 17112555530196090757ULL))))), (((arr_0 [i_0]) >> (((/* implicit */int) arr_1 [i_0]))))));
        var_16 = ((/* implicit */unsigned char) (+(var_5)));
    }
    for (short i_1 = 0; i_1 < 25; i_1 += 1) 
    {
        var_17 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) max((((/* implicit */int) arr_5 [(unsigned char)2])), (var_11)))))) * (((((/* implicit */_Bool) min((arr_4 [i_1]), (((/* implicit */unsigned int) (unsigned short)54004))))) ? (arr_4 [i_1]) : ((-(arr_4 [(unsigned char)21])))))));
        arr_6 [i_1] = ((/* implicit */long long int) ((max((max((arr_4 [i_1]), (((/* implicit */unsigned int) var_2)))), (((((/* implicit */_Bool) 1334188543513460871ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (380146841U))))) == (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_5 [i_1]))))));
        arr_7 [i_1] = ((/* implicit */_Bool) (((-(17112555530196090739ULL))) * (((17112555530196090739ULL) - (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_5 [i_1])))))))));
    }
}
