/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243069
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
    var_19 = ((unsigned long long int) var_15);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 17; i_2 += 4) 
            {
                {
                    var_20 |= min((3173747755607748239ULL), (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_1]))));
                    arr_9 [i_0] [i_0] [i_0] [i_0] = ((unsigned long long int) min((arr_8 [i_2 - 2]), (arr_8 [i_2 - 1])));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) min((var_21), (((0ULL) | (var_12)))));
    var_22 = ((/* implicit */unsigned long long int) max((var_22), (var_1)));
}
