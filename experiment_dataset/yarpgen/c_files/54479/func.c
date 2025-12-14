/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54479
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
    var_14 = ((/* implicit */int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)176)), (var_7))))))), (var_11)));
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 8; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) max((max((((/* implicit */unsigned short) arr_1 [i_0 + 2])), (var_11))), (max(((unsigned short)36540), ((unsigned short)59769))))))));
                var_16 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-5)))))));
            }
        } 
    } 
}
