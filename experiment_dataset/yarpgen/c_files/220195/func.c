/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220195
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        arr_4 [(unsigned short)1] [(unsigned short)1] = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) var_10))))));
        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 13236370963815174522ULL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_0 [i_0]))));
    }
    var_18 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) var_2)), (((((/* implicit */_Bool) ((long long int) (unsigned short)0))) ? (var_4) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))))));
    var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) (~((~(((unsigned long long int) var_12)))))))));
    var_20 = ((/* implicit */unsigned short) var_12);
    var_21 ^= ((/* implicit */unsigned short) ((signed char) var_9));
}
