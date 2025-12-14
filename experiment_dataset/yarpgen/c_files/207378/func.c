/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207378
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
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)70)) ? (((/* implicit */int) (signed char)123)) : (((/* implicit */int) (signed char)-116))));
    var_21 = ((long long int) var_5);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                var_22 = ((/* implicit */_Bool) arr_3 [i_1]);
                arr_4 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)96)) / (((/* implicit */int) (unsigned char)23))))), (((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))) : (var_14)))));
            }
        } 
    } 
}
