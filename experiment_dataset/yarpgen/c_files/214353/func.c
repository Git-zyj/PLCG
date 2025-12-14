/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214353
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
    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) var_3))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) arr_0 [i_0]))));
        var_19 = ((/* implicit */signed char) (+(((/* implicit */int) ((_Bool) var_2)))));
        var_20 *= ((/* implicit */unsigned char) min((((/* implicit */long long int) ((arr_0 [i_0]) + (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (var_8) : (((/* implicit */long long int) var_1))))));
    }
    var_21 = (-(((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? ((-(var_0))) : (((/* implicit */int) var_2)))));
}
