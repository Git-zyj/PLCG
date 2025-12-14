/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24142
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_20 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (3463201684U) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_5)))))));
        var_21 = ((/* implicit */unsigned int) -1929477082);
        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((int) 4194303U)))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 22; i_1 += 1) 
    {
        var_23 = ((/* implicit */unsigned int) 1528755810);
        var_24 = ((/* implicit */signed char) ((arr_0 [i_1]) != (arr_5 [i_1])));
    }
    var_25 = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_1)), (var_17)))) ? (((/* implicit */int) ((_Bool) (+(var_6))))) : (((/* implicit */int) var_5)));
    var_26 = ((/* implicit */int) min((min((max((4194303U), (((/* implicit */unsigned int) var_14)))), (((/* implicit */unsigned int) min((-1929477075), (((/* implicit */int) (_Bool)1))))))), (max((((((/* implicit */unsigned int) var_19)) + (4290772964U))), (min((4290773005U), (4194302U)))))));
}
