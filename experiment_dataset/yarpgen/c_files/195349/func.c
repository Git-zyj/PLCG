/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195349
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
    var_17 = ((/* implicit */signed char) ((_Bool) (((~(((/* implicit */int) var_8)))) > (((/* implicit */int) var_0)))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */int) ((min((((/* implicit */unsigned long long int) arr_0 [i_0])), (arr_1 [i_0]))) & (min((arr_1 [i_0]), (arr_1 [i_0])))));
        var_18 = ((/* implicit */short) var_12);
        arr_3 [i_0] = ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (arr_1 [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))));
        arr_4 [i_0] = (signed char)69;
    }
    var_19 = ((/* implicit */int) var_11);
    var_20 = ((/* implicit */unsigned char) var_11);
}
