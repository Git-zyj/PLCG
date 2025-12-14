/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241274
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
    for (short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 23; i_1 += 2) 
        {
            {
                var_17 ^= ((/* implicit */unsigned short) arr_2 [i_1] [i_0]);
                var_18 = ((/* implicit */unsigned char) min((min((14030818712481797476ULL), (((/* implicit */unsigned long long int) 1794279352U)))), (((/* implicit */unsigned long long int) (unsigned short)65520))));
                var_19 &= ((/* implicit */long long int) (-(1794279339U)));
            }
        } 
    } 
    var_20 = ((/* implicit */short) ((unsigned char) ((unsigned short) var_3)));
}
