/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20505
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
    var_19 = ((/* implicit */short) ((1946034536U) & (((((2348932760U) ^ (2348932760U))) ^ (2348932759U)))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 23; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */unsigned int) 12845677853781730254ULL);
                    arr_8 [i_1] [i_2] = ((/* implicit */unsigned short) -6087634198690924381LL);
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) (unsigned char)23))));
}
