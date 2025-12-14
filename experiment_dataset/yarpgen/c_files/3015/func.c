/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3015
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
    var_11 = (-(5758986507852257347LL));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 3; i_0 < 19; i_0 += 3) 
    {
        var_12 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (~(var_5)))) ? (((((/* implicit */int) arr_0 [i_0 - 2])) ^ (696489663))) : (((/* implicit */int) var_2))))));
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) arr_0 [(short)1]))) ? (arr_1 [19]) : (((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 - 1]))) + (((((/* implicit */long long int) 696489669)) & (arr_1 [i_0 - 1])))))));
    }
    var_13 *= ((/* implicit */short) min(((+(((/* implicit */int) var_2)))), (var_9)));
    var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) min((((unsigned short) var_2)), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_4))))))))) * (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_6)) : (var_9)))), (var_3))))))));
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (var_3) : (((/* implicit */unsigned int) ((696489661) | (-696489687))))));
}
