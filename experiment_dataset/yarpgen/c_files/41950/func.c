/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41950
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
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */unsigned int) var_13)) >= (var_7))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_3))) : (max((var_3), (((/* implicit */unsigned long long int) var_12))))))) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_6))))) / (((var_3) % (((/* implicit */unsigned long long int) var_2)))))))));
    var_15 = ((/* implicit */int) var_4);
    /* LoopSeq 1 */
    for (signed char i_0 = 2; i_0 < 24; i_0 += 1) 
    {
        var_16 = ((/* implicit */int) max((((long long int) ((((/* implicit */int) arr_1 [i_0])) > (((/* implicit */int) arr_1 [i_0 - 1]))))), (((/* implicit */long long int) max((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0])))), (((/* implicit */int) max((arr_2 [i_0]), (arr_2 [i_0])))))))));
        arr_3 [14LL] = ((/* implicit */int) arr_2 [i_0 - 2]);
    }
    var_17 = ((/* implicit */int) var_4);
}
