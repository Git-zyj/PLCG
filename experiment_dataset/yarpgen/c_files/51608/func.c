/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51608
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
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) (((_Bool)1) ? (-872553595) : (((/* implicit */int) arr_1 [i_0]))));
        var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) -4696879501276941861LL))));
    }
    /* LoopNest 2 */
    for (unsigned int i_1 = 3; i_1 < 9; i_1 += 4) 
    {
        for (short i_2 = 0; i_2 < 11; i_2 += 4) 
        {
            {
                arr_10 [i_1 + 2] = ((/* implicit */unsigned long long int) (-(max(((~(arr_8 [i_1] [6] [6]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) 32736U)))))))));
                arr_11 [i_1] [i_1] = ((/* implicit */unsigned int) min((min((6730342754245060755ULL), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -4696879501276941871LL))))))), (((((/* implicit */_Bool) arr_9 [i_1] [2U] [i_2])) ? (((/* implicit */unsigned long long int) 4696879501276941847LL)) : (max((6730342754245060764ULL), (((/* implicit */unsigned long long int) 4696879501276941853LL))))))));
            }
        } 
    } 
    var_18 = var_3;
}
