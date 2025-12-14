/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227588
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
    var_12 &= ((/* implicit */unsigned long long int) ((short) 17106167877736739688ULL));
    var_13 = ((/* implicit */unsigned char) var_5);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            {
                var_14 -= ((/* implicit */short) (~(1340576195972811928ULL)));
                var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_0 [i_0])))))));
                var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) arr_0 [i_0]))));
                var_17 *= ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (short)15428)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1 + 2] [i_1 + 2]))) : (var_10))));
            }
        } 
    } 
}
