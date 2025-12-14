/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191189
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
    var_16 = ((int) (+(((/* implicit */int) var_0))));
    var_17 = ((/* implicit */signed char) var_6);
    var_18 |= ((/* implicit */int) (((!(((/* implicit */_Bool) var_13)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((long long int) var_14)) >= (((/* implicit */long long int) max((((/* implicit */int) var_4)), (var_3)))))))) : (((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) var_9)), (var_8))))) * (var_7)))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_19 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) ((long long int) var_0)))) ? (((/* implicit */int) arr_1 [22ULL])) : (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) var_13))))) >= (((((/* implicit */_Bool) var_3)) ? (var_5) : (((/* implicit */int) arr_2 [i_0])))))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((unsigned long long int) (~(max(((-2147483647 - 1)), (((/* implicit */int) arr_2 [i_0])))))));
    }
}
