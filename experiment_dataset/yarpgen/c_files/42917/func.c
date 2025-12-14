/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42917
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
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned int i_1 = 2; i_1 < 13; i_1 += 3) 
        {
            {
                var_10 = ((/* implicit */signed char) max(((~(((/* implicit */int) (unsigned char)0)))), ((+(((/* implicit */int) (_Bool)1))))));
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) 4965899388120782125ULL);
            }
        } 
    } 
    var_11 ^= max((((/* implicit */long long int) (-(var_1)))), (432345564227567616LL));
}
