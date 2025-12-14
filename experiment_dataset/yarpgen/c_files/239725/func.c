/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239725
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
    var_10 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_8)))) || (((/* implicit */_Bool) var_6))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] &= ((/* implicit */unsigned long long int) min(((~(((/* implicit */int) arr_0 [i_0])))), ((-(((/* implicit */int) arr_2 [i_0]))))));
        var_11 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))) > (((/* implicit */int) min((var_5), (((/* implicit */signed char) ((_Bool) arr_1 [8]))))))));
        arr_4 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0])) * (((((/* implicit */int) arr_1 [(short)4])) ^ (((/* implicit */int) arr_1 [i_0]))))));
        var_12 = ((/* implicit */unsigned char) (-(((((/* implicit */long long int) ((var_8) + (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))) / (((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) + (-5897482914523321837LL)))))));
    }
    var_13 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_3))));
}
