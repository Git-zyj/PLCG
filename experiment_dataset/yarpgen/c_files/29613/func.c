/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29613
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(12381229186297040095ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_8)) > (arr_2 [9ULL] [9ULL]))))) : (((long long int) arr_1 [i_0] [i_0]))));
                var_21 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)61560)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)188))) : (5194708930834452214LL)));
            }
        } 
    } 
    var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) var_16))));
    var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? ((+(2682059837454398343ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))));
}
