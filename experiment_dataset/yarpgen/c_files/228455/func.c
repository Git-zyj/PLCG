/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228455
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
    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((_Bool) var_10)) ? ((~(((/* implicit */int) var_1)))) : (((/* implicit */int) ((short) var_18)))))) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_18))) : (((/* implicit */long long int) min((var_8), (((/* implicit */int) ((short) (_Bool)1)))))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */_Bool) var_17);
                arr_6 [6] [i_1] = ((/* implicit */signed char) ((((unsigned long long int) (_Bool)1)) == (((((_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_9), ((_Bool)1))))) : (0ULL)))));
            }
        } 
    } 
    var_21 = ((/* implicit */short) ((unsigned char) ((unsigned short) var_9)));
}
