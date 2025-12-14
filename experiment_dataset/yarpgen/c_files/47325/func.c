/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47325
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
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((long long int) var_14)) + (max((((/* implicit */long long int) (unsigned char)9)), (var_12)))))) ? (var_3) : (((((/* implicit */int) (short)24770)) + (-2147483637)))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)15)) : (((/* implicit */int) (short)-7))))) >= ((((~(8212493810863935427ULL))) >> (((((/* implicit */int) min((((/* implicit */short) (unsigned char)58)), ((short)-24770)))) + (24822)))))));
        arr_5 [i_0] = ((/* implicit */int) ((unsigned int) ((((/* implicit */int) var_2)) * (((/* implicit */int) (unsigned char)246)))));
    }
}
