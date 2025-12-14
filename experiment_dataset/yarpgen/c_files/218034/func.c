/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218034
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
    var_15 = ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) - (var_11));
    var_16 = ((/* implicit */short) max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_13))))), (((((/* implicit */_Bool) ((long long int) var_12))) ? (((/* implicit */long long int) var_11)) : (min((-1895585322827744818LL), (((/* implicit */long long int) var_4))))))));
    var_17 = (+(min((((var_6) / (((/* implicit */long long int) var_13)))), (((/* implicit */long long int) var_3)))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 2) /* same iter space */
    {
        var_18 = ((/* implicit */int) max((var_18), (((((/* implicit */int) (unsigned short)63)) >> (((((/* implicit */int) var_5)) - (1157)))))));
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) : (var_10))) > (((/* implicit */long long int) (+(((/* implicit */int) arr_1 [i_0])))))));
        var_19 = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((((((/* implicit */int) (signed char)-1)) + (2147483647))) >> (((((/* implicit */int) (signed char)-1)) + (7)))))), (min((((((/* implicit */unsigned int) ((/* implicit */int) var_3))) / (var_11))), (((((/* implicit */_Bool) (short)11707)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_1)))))));
    }
    for (long long int i_1 = 0; i_1 < 15; i_1 += 2) /* same iter space */
    {
        arr_6 [i_1] [i_1] = ((/* implicit */signed char) arr_5 [i_1]);
        var_20 &= ((/* implicit */long long int) (short)11701);
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) ((var_13) >> (((((/* implicit */int) (short)-30408)) + (30418))))))) ? (((/* implicit */int) min((var_5), (arr_1 [i_1])))) : (((/* implicit */int) var_3))));
        arr_7 [i_1] = ((/* implicit */signed char) (short)-11708);
    }
}
