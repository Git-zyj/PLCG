/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235183
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
    var_16 = ((/* implicit */_Bool) var_4);
    var_17 = ((/* implicit */unsigned short) (~((~(((/* implicit */int) (signed char)-28))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_18 *= ((/* implicit */_Bool) 636464780);
                arr_5 [i_0] [i_0] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) (signed char)66)) ? (1914011865U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1])))))));
                var_19 = ((/* implicit */_Bool) 3401445709U);
            }
        } 
    } 
}
