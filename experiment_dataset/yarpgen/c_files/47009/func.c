/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47009
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
    var_14 = ((/* implicit */unsigned int) var_8);
    var_15 = ((((/* implicit */_Bool) ((signed char) var_9))) ? (((((/* implicit */_Bool) -2900253992183367993LL)) ? (((14349783188238294485ULL) | (((/* implicit */unsigned long long int) 294146689U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))))) : (((/* implicit */unsigned long long int) 294146689U)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_0 [i_0]))));
        var_16 *= ((/* implicit */unsigned long long int) ((var_11) | (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0)))))));
    }
    var_17 |= ((/* implicit */unsigned char) ((long long int) (unsigned short)10));
    var_18 = ((/* implicit */unsigned int) ((short) max((((unsigned int) var_11)), (((/* implicit */unsigned int) ((var_10) | (((/* implicit */int) (unsigned char)0))))))));
}
