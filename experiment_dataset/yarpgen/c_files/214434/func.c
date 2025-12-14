/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214434
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                arr_6 [i_1] = ((/* implicit */signed char) var_6);
                arr_7 [i_1] [(signed char)1] = ((/* implicit */unsigned int) var_0);
                var_10 = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) ((var_8) & (((/* implicit */unsigned long long int) var_9))))) || (((/* implicit */_Bool) arr_3 [i_0] [i_1])))));
                var_11 ^= ((/* implicit */signed char) arr_0 [i_1]);
            }
        } 
    } 
    var_12 = (+(((/* implicit */int) var_4)));
}
