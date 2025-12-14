/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215322
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
    var_14 ^= ((/* implicit */unsigned long long int) (+((~(((var_11) / (((/* implicit */long long int) ((/* implicit */int) var_9)))))))));
    var_15 = ((/* implicit */signed char) (+(((((/* implicit */long long int) (+(((/* implicit */int) var_1))))) / (((var_6) * (((/* implicit */long long int) ((/* implicit */int) var_2)))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 15; i_1 += 4) 
        {
            for (long long int i_2 = 1; i_2 < 16; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */unsigned char) (-((+(((/* implicit */int) arr_3 [i_0] [i_0]))))));
                    arr_7 [i_1] [i_1] [i_2 + 1] [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_1 + 1] [4LL])) * (((/* implicit */int) arr_3 [i_1 - 1] [i_1 - 1])))))));
                }
            } 
        } 
    } 
}
