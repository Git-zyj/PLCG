/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38911
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
    var_14 = ((/* implicit */signed char) (_Bool)0);
    var_15 = ((/* implicit */signed char) ((_Bool) max((((/* implicit */long long int) ((((/* implicit */int) var_7)) > (((/* implicit */int) (_Bool)1))))), (var_8))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 22; i_1 += 4) 
        {
            {
                arr_6 [i_0] = ((/* implicit */signed char) (!(max((var_11), ((_Bool)0)))));
                var_16 ^= ((/* implicit */signed char) (((+(((/* implicit */int) (_Bool)0)))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))));
                var_17 = ((/* implicit */_Bool) (~((~(((/* implicit */int) (signed char)-63))))));
            }
        } 
    } 
}
