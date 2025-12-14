/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48978
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
        for (unsigned int i_1 = 3; i_1 < 17; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1 + 1] = ((/* implicit */signed char) min((5512348429376378459LL), (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) (signed char)21))))))))));
                var_14 *= ((/* implicit */_Bool) (unsigned char)150);
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) var_11);
    var_16 = ((/* implicit */_Bool) min((((/* implicit */int) var_7)), (15728640)));
    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) min((min((var_2), (((/* implicit */unsigned long long int) ((5512348429376378436LL) >> (((15728640) - (15728626)))))))), (((/* implicit */unsigned long long int) 5512348429376378459LL)))))));
}
