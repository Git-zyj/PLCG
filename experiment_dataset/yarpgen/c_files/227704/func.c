/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227704
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
    var_20 = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)103))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1)))))));
                var_21 += ((/* implicit */unsigned char) (+((+((+(-9119577827740811452LL)))))));
                var_22 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)59))));
                var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) (+((+((~(((/* implicit */int) arr_0 [i_1])))))))))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned short) (+((+((~(var_5)))))));
    var_25 = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)12))));
}
