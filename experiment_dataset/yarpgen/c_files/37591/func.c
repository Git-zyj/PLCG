/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37591
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
    for (int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                var_18 = var_1;
                arr_7 [i_0] [i_1] = ((/* implicit */unsigned long long int) (unsigned char)56);
                var_19 = ((/* implicit */unsigned long long int) (((-2147483647 - 1)) <= ((~(var_7)))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 2147483642)) ? (var_8) : (((/* implicit */unsigned int) 2147483640)))), (((/* implicit */unsigned int) ((18446744073709551615ULL) < (12ULL))))))) ? (7ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) && (((/* implicit */_Bool) 10535379467510084779ULL))))))));
    var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) max((((2851252242U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)179))))), (((/* implicit */unsigned int) ((var_5) != (((/* implicit */unsigned long long int) 2150962052U))))))))));
}
