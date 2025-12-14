/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3413
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
    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) min((((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_17)))))) : (var_3))), (((/* implicit */long long int) var_2)))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_19 -= ((/* implicit */short) ((long long int) max((((/* implicit */int) var_2)), (arr_1 [i_0]))));
        arr_2 [i_0] = ((/* implicit */unsigned int) arr_0 [(_Bool)1] [i_0]);
        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) (short)16380)) ? (((/* implicit */long long int) ((/* implicit */int) var_17))) : (min((((/* implicit */long long int) max((((/* implicit */int) (unsigned char)252)), (arr_1 [i_0])))), (-5926434760853135459LL)))));
        var_21 = ((/* implicit */unsigned long long int) var_2);
    }
}
