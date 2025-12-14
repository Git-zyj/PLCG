/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46885
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
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        arr_2 [0U] = ((/* implicit */unsigned long long int) (short)-1);
        var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(var_3)))) ? (var_9) : (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) 29360128)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(_Bool)1]))) : (378360981U))), (((/* implicit */unsigned int) arr_0 [5] [i_0])))))));
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -29360149)) ? (((/* implicit */long long int) (+(((/* implicit */int) min(((_Bool)0), ((_Bool)0))))))) : ((((!(((/* implicit */_Bool) var_8)))) ? (((((/* implicit */_Bool) var_0)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) var_12))))) : (((/* implicit */long long int) max((29360175), (((/* implicit */int) (signed char)(-127 - 1))))))))));
    }
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_12)) : (var_10)))) ? (((/* implicit */unsigned long long int) (~(29360103)))) : (var_11)))) ? ((-(-5LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)75)), (var_9)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -29360106)))))) : (var_3))))));
}
