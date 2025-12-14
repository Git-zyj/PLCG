/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247433
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_16 |= ((/* implicit */long long int) (!(((/* implicit */_Bool) min((5742220327660715454ULL), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (short)-28614)), (9223372036854775780LL)))))))));
                    var_17 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) min(((signed char)0), (((/* implicit */signed char) (_Bool)1))))), (max((var_11), (((/* implicit */unsigned long long int) (short)-2134))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 651490574311075832LL))));
}
