/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221753
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
    var_16 ^= ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((long long int) var_7))) - (var_13))) + (((((((/* implicit */unsigned long long int) 1363594125U)) <= (var_13))) ? (var_8) : (((/* implicit */unsigned long long int) var_3))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned long long int) arr_5 [i_0] [i_0]);
                arr_7 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)0)) + (((/* implicit */int) (_Bool)1))));
            }
        } 
    } 
}
