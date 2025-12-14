/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2560
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
    for (signed char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */short) 3613592160U);
                var_18 = (-(((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_0]))) ^ (var_12))));
                var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [(_Bool)1] [(_Bool)1] [(_Bool)1])) << (((/* implicit */int) ((_Bool) var_15)))));
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) (unsigned char)239);
}
