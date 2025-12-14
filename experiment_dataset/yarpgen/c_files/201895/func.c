/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201895
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
    var_14 = ((/* implicit */signed char) (~(((/* implicit */int) var_0))));
    var_15 *= ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (4259005352U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_16 *= ((/* implicit */unsigned long long int) var_7);
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) var_8)) % (((/* implicit */int) arr_0 [i_0] [i_0]))));
        var_17 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) (short)26)) : (((/* implicit */int) arr_2 [i_0]))));
    }
}
