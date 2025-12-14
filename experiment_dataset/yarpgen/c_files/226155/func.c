/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226155
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 12; i_0 += 3) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)127)) - (((/* implicit */int) arr_1 [i_0]))));
        var_16 += ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_0 [2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (var_5)))));
    }
    for (short i_1 = 0; i_1 < 12; i_1 += 3) /* same iter space */
    {
        var_17 = ((/* implicit */short) (~(((/* implicit */int) arr_2 [i_1]))));
        var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) var_3))));
        var_19 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)41775))))) : (((((/* implicit */_Bool) var_12)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [6U])))))))));
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)23761)))) << ((((-(((/* implicit */int) arr_1 [i_1])))) + (41862)))));
    }
    var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((var_14) * (var_14))) * (((((/* implicit */_Bool) (unsigned short)23761)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) : (var_4)))))) - (var_0))))));
}
