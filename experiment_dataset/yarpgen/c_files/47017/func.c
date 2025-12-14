/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47017
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
    var_17 = ((/* implicit */long long int) (+((+(((/* implicit */int) (_Bool)1))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            for (signed char i_2 = 1; i_2 < 17; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)2698))));
                    var_19 &= ((/* implicit */long long int) (!(((/* implicit */_Bool) (~((~(((/* implicit */int) (_Bool)1)))))))));
                }
            } 
        } 
    } 
}
