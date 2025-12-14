/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37241
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
    var_14 = ((/* implicit */unsigned short) max((var_14), (var_5)));
    var_15 = ((/* implicit */unsigned long long int) min((var_15), (min((4194303ULL), (((/* implicit */unsigned long long int) var_4))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */unsigned long long int) arr_2 [i_1 + 1]);
                    arr_7 [i_0] [i_1] = ((/* implicit */unsigned long long int) var_7);
                    var_17 = ((/* implicit */int) arr_0 [i_0] [i_0]);
                }
            } 
        } 
    } 
}
