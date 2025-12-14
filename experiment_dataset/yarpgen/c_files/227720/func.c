/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227720
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
    for (long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) arr_3 [i_0]);
                var_21 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) min(((-(383659777U))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (2391664307U) : (2391664328U)))))), (min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) ^ (((/* implicit */int) arr_0 [i_0]))))), (min((((/* implicit */unsigned long long int) var_5)), (var_11)))))));
                var_22 = ((/* implicit */unsigned int) arr_4 [i_1]);
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) var_15);
    var_24 = ((/* implicit */unsigned char) ((var_17) & (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
}
