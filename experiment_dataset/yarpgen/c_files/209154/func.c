/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209154
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
    var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) var_8))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_10) ? (arr_0 [i_0]) : (arr_0 [i_0])))) ? (((((/* implicit */int) arr_1 [i_0] [i_0])) << ((((+(var_0))) - (985420156U))))) : (((/* implicit */int) ((_Bool) (short)(-32767 - 1))))));
        var_15 = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) 1610612736)))))));
        var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) var_11))));
    }
    var_17 = ((/* implicit */_Bool) (-(((/* implicit */int) var_7))));
    var_18 += ((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_2)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (-1) : (((/* implicit */int) (short)(-32767 - 1)))))) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))));
    var_19 = ((((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? ((~(18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_2), ((_Bool)1))))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))));
}
