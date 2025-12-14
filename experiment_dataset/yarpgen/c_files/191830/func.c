/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191830
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
    var_14 |= ((/* implicit */short) (~(var_9)));
    var_15 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_12))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_16 = (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) var_4)))), (arr_2 [i_0])))));
        var_17 |= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) / (min((arr_2 [i_0]), (arr_2 [i_0])))));
        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) ((int) var_2))) ? ((+(arr_2 [i_0]))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [i_0]))))))))));
        var_19 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)9)) ? (((((/* implicit */_Bool) (signed char)-10)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))) : (((((/* implicit */int) arr_0 [i_0])) & (((/* implicit */int) arr_0 [i_0]))))));
    }
}
