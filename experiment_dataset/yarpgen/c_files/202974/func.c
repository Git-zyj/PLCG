/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202974
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_14 ^= ((/* implicit */signed char) 18446744073709551615ULL);
                    var_15 = 2065744164;
                    var_16 = 26ULL;
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) var_9);
    var_18 = ((/* implicit */signed char) var_7);
    var_19 = ((/* implicit */signed char) var_4);
}
