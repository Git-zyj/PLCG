/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190880
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
    var_20 = ((/* implicit */short) (_Bool)1);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 23; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned long long int) (+((((((~(((/* implicit */int) (_Bool)1)))) + (2147483647))) << ((((+(var_15))) - (674372388)))))));
                var_21 = ((/* implicit */_Bool) max((var_21), ((_Bool)0)));
                var_22 = ((/* implicit */signed char) (unsigned char)18);
            }
        } 
    } 
}
