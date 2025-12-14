/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209316
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
    var_12 = ((/* implicit */_Bool) ((var_9) ^ (18230005765042171558ULL)));
    var_13 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) 2147483646)) ? (((/* implicit */unsigned long long int) (~(var_0)))) : (((216738308667380055ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))), (var_8)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            {
                var_14 *= ((/* implicit */_Bool) max((max((3207400655U), (((/* implicit */unsigned int) (unsigned short)45608)))), ((+(416159409U)))));
                arr_6 [i_1] = ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_7)));
                var_15 = ((/* implicit */short) ((unsigned short) max((((/* implicit */long long int) arr_1 [i_0])), (arr_5 [i_0] [i_1] [i_1]))));
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) var_7);
}
