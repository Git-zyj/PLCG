/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22495
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
    for (signed char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_11 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0]))))));
        var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))) ? (((((/* implicit */int) arr_1 [i_0])) - (((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) ((signed char) arr_1 [i_0])))));
        var_13 = ((/* implicit */_Bool) arr_0 [i_0]);
        var_14 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))) : (arr_0 [i_0]))))));
        var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) arr_1 [7LL])), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_1 [i_0]))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_0 [i_0])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (arr_0 [i_0]))))))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))));
    }
    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_6) >> (((((/* implicit */int) var_0)) - (37360)))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_1)) : (((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_1)))) >> ((((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_4))) - (37351LL)))))));
}
