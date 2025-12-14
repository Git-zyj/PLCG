/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228926
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
    var_16 = ((/* implicit */short) (+(((/* implicit */int) (unsigned char)190))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            {
                arr_8 [i_0] [(_Bool)1] [i_0] = ((/* implicit */int) (+(min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) / (((/* implicit */int) (_Bool)1))))), (min((1099511627775ULL), (((/* implicit */unsigned long long int) arr_1 [i_1]))))))));
                arr_9 [i_0] [i_1 - 1] [i_1 - 1] = ((/* implicit */unsigned long long int) ((int) (-(((/* implicit */int) (unsigned char)66)))));
                arr_10 [i_0] [i_0] = ((/* implicit */signed char) (_Bool)1);
            }
        } 
    } 
}
