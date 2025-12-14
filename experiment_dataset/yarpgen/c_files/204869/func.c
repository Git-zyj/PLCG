/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204869
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    var_17 += ((/* implicit */unsigned long long int) (unsigned short)954);
                    var_18 ^= ((/* implicit */long long int) 4314592499333298517ULL);
                    arr_9 [i_0] [i_0 + 1] [i_0] = ((/* implicit */signed char) 4336297659167318870LL);
                    var_19 = ((/* implicit */short) 24U);
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */long long int) var_11);
}
