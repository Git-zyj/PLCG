/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42635
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
    for (long long int i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 14; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */signed char) (unsigned char)9);
                    var_16 = ((/* implicit */short) 15763947853156507007ULL);
                    var_17 = ((/* implicit */signed char) -811159792);
                }
            } 
        } 
    } 
    var_18 += var_10;
    var_19 = ((/* implicit */unsigned long long int) var_10);
}
