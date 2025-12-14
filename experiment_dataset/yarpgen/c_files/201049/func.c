/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201049
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
    var_20 = ((/* implicit */long long int) ((_Bool) (-(var_0))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (((((/* implicit */_Bool) var_12)) ? (-3275390509327995055LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)16)))))));
        arr_2 [i_0] = arr_0 [i_0];
    }
    var_22 *= ((((((/* implicit */_Bool) (+(((/* implicit */int) var_16))))) ? (((/* implicit */unsigned int) min((var_6), (((/* implicit */int) var_11))))) : (min((((/* implicit */unsigned int) var_9)), (var_1))))) << (((max(((+(((/* implicit */int) var_13)))), (((/* implicit */int) max((var_2), (var_2)))))) - (55))));
}
