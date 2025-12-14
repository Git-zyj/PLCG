/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194794
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
    var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) (signed char)-25))))) << (((((/* implicit */int) var_4)) + (62)))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */short) max((((((/* implicit */_Bool) arr_2 [i_1 - 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_6)))), ((-(-959983369)))));
                var_17 += ((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned short)37852)), (-2147483640)));
            }
        } 
    } 
}
