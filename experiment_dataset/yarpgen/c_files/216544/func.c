/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216544
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */int) arr_2 [i_0]);
                var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_10)), (1075921335U))))));
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) var_1);
    var_16 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1075921335U)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8))))) + (13479409758469556060ULL)));
}
