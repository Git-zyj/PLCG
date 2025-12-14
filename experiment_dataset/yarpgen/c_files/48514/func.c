/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48514
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
    var_14 |= ((/* implicit */unsigned long long int) ((var_9) > (((/* implicit */int) ((short) 4293918720U)))));
    var_15 = (!(((/* implicit */_Bool) ((unsigned long long int) max((var_6), (var_10))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_16 = max((((((/* implicit */int) arr_0 [i_0])) - (((/* implicit */int) var_10)))), (((((/* implicit */_Bool) max((15854737172129573306ULL), (((/* implicit */unsigned long long int) arr_0 [i_0]))))) ? (((/* implicit */int) arr_1 [i_0])) : ((-2147483647 - 1)))));
        arr_2 [i_0] &= ((/* implicit */long long int) var_0);
        arr_3 [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned char) var_4)), (arr_0 [i_0])));
        var_17 += ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_0 [i_0])) ? (var_1) : (((/* implicit */long long int) var_9)))), (((/* implicit */long long int) arr_1 [i_0]))));
    }
    var_18 = ((/* implicit */unsigned long long int) ((unsigned short) max((((((((/* implicit */int) var_3)) + (2147483647))) << (((((/* implicit */int) var_10)) - (1))))), (max((37208336), (((/* implicit */int) (unsigned short)49753)))))));
    var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) var_13))));
}
