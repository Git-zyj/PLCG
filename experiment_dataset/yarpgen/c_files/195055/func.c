/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195055
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
    var_20 *= ((/* implicit */unsigned long long int) var_6);
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        var_21 = ((/* implicit */signed char) var_15);
        var_22 = ((/* implicit */signed char) (+(((/* implicit */int) var_0))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) var_7);
        arr_4 [(unsigned short)1] [i_0] = ((/* implicit */_Bool) min((max((var_17), (var_17))), (((/* implicit */unsigned long long int) ((var_12) / (var_12))))));
        arr_5 [i_0] = ((/* implicit */long long int) var_14);
    }
    var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (+(((/* implicit */int) var_3))))), (min((var_15), (((/* implicit */unsigned int) var_12)))))))));
    var_24 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((((/* implicit */int) var_10)) & (((/* implicit */int) var_6)))) ^ (((/* implicit */int) var_3)))))));
}
