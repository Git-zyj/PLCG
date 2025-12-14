/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26943
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
    for (short i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            {
                var_19 *= ((/* implicit */unsigned int) max((max((((/* implicit */signed char) arr_4 [i_0])), ((signed char)66))), (((signed char) arr_3 [(_Bool)1]))));
                var_20 = ((/* implicit */signed char) (unsigned char)119);
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)127)));
    var_22 = ((/* implicit */unsigned long long int) var_3);
    var_23 ^= ((/* implicit */long long int) min((min((734750655U), (734750655U))), (3560216640U)));
}
