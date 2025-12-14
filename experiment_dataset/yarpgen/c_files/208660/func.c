/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208660
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
    var_20 = ((/* implicit */unsigned long long int) min((var_20), ((~(min((min((var_18), (((/* implicit */unsigned long long int) var_7)))), (((var_11) >> (((((/* implicit */int) var_4)) - (14661)))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        arr_4 [i_0 - 1] [i_0] |= ((/* implicit */short) ((((/* implicit */int) arr_3 [i_0])) - (((/* implicit */int) var_10))));
        arr_5 [i_0] [(signed char)7] = ((/* implicit */unsigned int) (((+(((/* implicit */int) (unsigned short)39164)))) != (((/* implicit */int) ((var_11) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))))));
        var_21 = ((/* implicit */unsigned long long int) ((int) arr_0 [i_0]));
    }
    for (signed char i_1 = 0; i_1 < 16; i_1 += 4) 
    {
        var_22 = (~(((unsigned long long int) ((var_3) ? (((/* implicit */int) arr_3 [19LL])) : (((/* implicit */int) var_15))))));
        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) min((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_12)), (var_0)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) * (((/* implicit */int) var_2))))) : (arr_7 [i_1]))), (((/* implicit */unsigned long long int) min((var_9), (((/* implicit */unsigned short) var_14))))))))));
    }
    var_24 = ((/* implicit */signed char) (~(((/* implicit */int) ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) != (var_18)))))));
}
