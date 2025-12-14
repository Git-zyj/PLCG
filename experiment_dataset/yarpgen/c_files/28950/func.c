/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28950
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
    var_17 = ((unsigned long long int) min((var_11), (var_6)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 11; i_1 += 4) 
        {
            {
                arr_7 [1ULL] [i_1] = arr_0 [i_0];
                arr_8 [i_0] [i_1 + 4] = min((((unsigned long long int) var_8)), ((+(arr_6 [i_1 - 2] [i_1 + 2] [i_1 - 1]))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_9) : (var_10)))) ? (min((var_9), (var_5))) : (var_2))) < (max((11753555213261341823ULL), (1073741792ULL)))));
    var_19 = ((max((((((/* implicit */_Bool) var_16)) ? (var_14) : (var_6))), (var_16))) * (var_5));
    var_20 = var_8;
}
