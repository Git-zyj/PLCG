/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53396
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
    for (unsigned long long int i_0 = 3; i_0 < 13; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */int) 4056858888U);
                arr_4 [i_1] [i_1] = max((((/* implicit */unsigned int) (short)-25038)), (4056858909U));
            }
        } 
    } 
    var_14 = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)65511))));
    var_15 += min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) 941979057818850321ULL)))))))), (var_7));
}
