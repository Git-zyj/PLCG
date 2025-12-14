/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241598
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
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_1))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                arr_5 [i_1] = ((/* implicit */short) max((((((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [18ULL] [18ULL] [i_1]))))) ? (((arr_3 [i_1] [i_1] [i_1]) + (arr_3 [i_1] [i_0] [i_1]))) : (((((/* implicit */_Bool) (unsigned char)204)) ? (17069043366955894541ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)178))))))), (((/* implicit */unsigned long long int) ((var_8) ? (((/* implicit */long long int) arr_1 [i_0])) : (var_4))))));
                var_17 ^= ((/* implicit */long long int) var_12);
            }
        } 
    } 
}
