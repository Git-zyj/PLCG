/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221604
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
    var_16 = ((/* implicit */unsigned long long int) var_2);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        var_17 = ((/* implicit */unsigned long long int) 2301789973U);
        arr_3 [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) (!((!(((/* implicit */_Bool) arr_1 [i_0])))))))));
        var_18 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) -531369966)))) ? (((((/* implicit */_Bool) 2301789978U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)29064))) : (1993177313U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(2ULL))))))))));
        arr_4 [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) (_Bool)1))));
    }
}
