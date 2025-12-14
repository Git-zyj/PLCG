/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42759
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
    for (long long int i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */long long int) min(((!((_Bool)1))), ((_Bool)1)));
                var_14 = ((/* implicit */_Bool) ((unsigned long long int) (~((+(var_4))))));
                var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((536805376U) <= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))));
                var_16 = ((/* implicit */unsigned long long int) var_3);
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned int) (-(max(((((_Bool)1) ? (9223372036854775802LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))), (-9029461444920485780LL)))));
    var_18 -= ((/* implicit */signed char) (_Bool)1);
}
