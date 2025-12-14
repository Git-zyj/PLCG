/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206581
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
    var_15 = ((/* implicit */short) var_6);
    /* LoopNest 3 */
    for (unsigned char i_0 = 4; i_0 < 18; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (signed char i_2 = 1; i_2 < 18; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */unsigned long long int) (+(var_5)));
                    var_17 -= ((/* implicit */unsigned short) min((var_13), (((unsigned int) var_0))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) (((+((-(var_8))))) | (var_7)));
    var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((var_3) / (var_7))))));
}
