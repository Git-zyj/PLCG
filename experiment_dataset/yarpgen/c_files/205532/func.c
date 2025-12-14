/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205532
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
    var_18 = ((/* implicit */_Bool) var_16);
    var_19 += ((/* implicit */int) var_8);
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned short) 0ULL);
                var_21 &= ((/* implicit */unsigned long long int) arr_4 [i_0 + 1] [i_0 + 1]);
            }
        } 
    } 
    var_22 = ((/* implicit */_Bool) min((((((0ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)3199)) ? (8454671299446539762LL) : (((/* implicit */long long int) -619794259))))))))));
}
