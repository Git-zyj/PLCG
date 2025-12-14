/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215315
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
    var_13 |= ((/* implicit */long long int) (unsigned short)65535);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (short i_2 = 2; i_2 < 16; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)39578))) : (var_0))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
                    var_15 = ((/* implicit */unsigned char) ((unsigned long long int) ((short) (_Bool)1)));
                }
            } 
        } 
    } 
}
