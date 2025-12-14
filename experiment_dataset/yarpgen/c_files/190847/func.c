/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190847
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
    var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) (!((!((!(((/* implicit */_Bool) var_2)))))))))));
    var_20 = ((((/* implicit */int) var_15)) % (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) != (((/* implicit */int) (unsigned short)45669))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_21 |= ((/* implicit */unsigned int) (unsigned short)46693);
                var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_10))))), (arr_1 [i_1])))))))));
            }
        } 
    } 
}
