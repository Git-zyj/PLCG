/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22055
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
    for (signed char i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        var_15 = ((/* implicit */_Bool) ((short) ((unsigned short) ((unsigned short) var_10))));
        var_16 = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0 + 1])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)79)))));
        var_17 = ((/* implicit */unsigned int) max((((/* implicit */int) var_8)), (((((/* implicit */_Bool) max((70876096U), (2684773759U)))) ? (((/* implicit */int) var_3)) : (((((/* implicit */_Bool) (signed char)-125)) ? (((/* implicit */int) (signed char)-87)) : (((/* implicit */int) arr_2 [9LL] [i_0]))))))));
        arr_3 [i_0] = ((/* implicit */unsigned int) min((((((((/* implicit */unsigned long long int) 29)) < (68719476735ULL))) ? (68719476735ULL) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (2764961264U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 + 1])))))))), (((/* implicit */unsigned long long int) ((unsigned char) -1LL)))));
    }
    var_18 &= ((/* implicit */_Bool) 18446744004990074881ULL);
}
