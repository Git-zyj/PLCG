/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21240
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
    var_13 = ((/* implicit */long long int) ((_Bool) ((short) (_Bool)1)));
    var_14 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (_Bool)1)))) <= (var_12)));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 *= ((/* implicit */unsigned long long int) arr_0 [i_0]);
        var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) arr_1 [i_0]))));
        var_17 = ((/* implicit */short) min((var_17), (((short) arr_0 [i_0]))));
    }
    for (int i_1 = 2; i_1 < 16; i_1 += 2) 
    {
        arr_5 [i_1] [i_1] = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((unsigned char) arr_0 [i_1 + 3]))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_1 [(signed char)1])))) : (var_12)))));
        var_18 = ((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) (_Bool)1))) - (((/* implicit */int) arr_2 [i_1] [i_1]))));
    }
}
