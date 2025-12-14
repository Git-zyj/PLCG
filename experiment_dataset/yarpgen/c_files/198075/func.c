/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198075
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
    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((unsigned short) var_17)))));
    var_20 = ((/* implicit */short) var_12);
    var_21 = ((/* implicit */signed char) min((var_13), (min((((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))) : (var_0))), (((/* implicit */unsigned long long int) (unsigned char)128))))));
    var_22 = ((/* implicit */int) 18446744073709551615ULL);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_23 = ((/* implicit */unsigned long long int) var_12);
                var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) var_10))));
            }
        } 
    } 
}
