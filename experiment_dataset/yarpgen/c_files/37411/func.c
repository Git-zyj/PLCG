/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37411
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
    var_12 -= ((/* implicit */unsigned char) var_5);
    var_13 = ((/* implicit */unsigned short) (-(max(((~(116561194U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)32764)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_4)))))))));
    var_14 -= ((/* implicit */short) min((266287972352ULL), (((/* implicit */unsigned long long int) ((var_6) & (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 4; i_0 < 11; i_0 += 2) 
    {
        arr_2 [i_0] |= ((/* implicit */short) min((((/* implicit */long long int) 4178406102U)), ((~((-(-464734399577893228LL)))))));
        var_15 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_0 [i_0] [i_0 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0 - 1]))) : (var_0))) + (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)16383)))))));
    }
}
