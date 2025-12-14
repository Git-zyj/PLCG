/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53423
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 12; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)65520)), (3288187472U)));
                var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((650171643422538369ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned char)96)))))))))))));
                var_15 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)1)), (1167554249U))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) (signed char)44);
}
