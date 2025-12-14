/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28790
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */_Bool) (short)20683);
                var_12 ^= ((/* implicit */short) arr_3 [i_0] [i_0] [8]);
            }
        } 
    } 
    var_13 = ((/* implicit */short) min((((/* implicit */int) ((((/* implicit */unsigned long long int) (-(var_8)))) >= (var_5)))), ((-(((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_0)))))))));
}
