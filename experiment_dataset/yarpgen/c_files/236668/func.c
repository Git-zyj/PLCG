/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236668
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
    var_17 = ((/* implicit */signed char) ((unsigned int) (!(((/* implicit */_Bool) var_4)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 14; i_1 += 4) 
        {
            {
                var_18 = ((((/* implicit */unsigned long long int) ((((1011596419697513486ULL) != (arr_3 [i_0] [i_0]))) ? (arr_1 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))))) - (1011596419697513466ULL));
                var_19 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) var_6)), (((((arr_0 [i_0]) * (((/* implicit */unsigned long long int) var_16)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))));
            }
        } 
    } 
}
