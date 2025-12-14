/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20616
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */long long int) min((((/* implicit */int) var_5)), (504154286)));
                arr_6 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((0LL) / (((/* implicit */long long int) ((/* implicit */int) (short)298)))))) ? (min((((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (12930867037685350410ULL) : (((/* implicit */unsigned long long int) 6LL)))), (((/* implicit */unsigned long long int) var_9)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1)))))));
            }
        } 
    } 
    var_16 = ((/* implicit */int) var_4);
    var_17 |= ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_10))) / (((var_6) - (((/* implicit */long long int) var_1))))));
}
