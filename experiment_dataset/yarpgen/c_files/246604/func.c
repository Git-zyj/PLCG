/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246604
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
    var_12 = ((/* implicit */short) (unsigned char)210);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */long long int) var_8);
                arr_5 [i_0] = ((/* implicit */unsigned long long int) (_Bool)1);
            }
        } 
    } 
    var_14 = ((/* implicit */signed char) min((((((/* implicit */unsigned int) ((/* implicit */int) max(((signed char)123), (((/* implicit */signed char) (_Bool)1)))))) * ((+(483335004U))))), (((/* implicit */unsigned int) ((var_1) != (((/* implicit */int) (unsigned char)161)))))));
}
