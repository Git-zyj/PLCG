/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32354
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
    var_17 = ((/* implicit */_Bool) min((((6948522839569386194ULL) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6948522839569386194ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4294967275U)))))), (((/* implicit */unsigned long long int) var_11))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [12ULL] [(short)13] [i_1])) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))));
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) arr_3 [(signed char)2] [i_1] [(_Bool)1]);
            }
        } 
    } 
}
