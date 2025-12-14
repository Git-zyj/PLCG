/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224221
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
    for (unsigned short i_0 = 3; i_0 < 11; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            {
                var_14 = (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0]))))));
                var_15 -= ((/* implicit */signed char) min((((((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1])) / (((/* implicit */int) arr_1 [i_1] [i_0 - 2])))), (((/* implicit */int) ((unsigned char) (signed char)22)))));
            }
        } 
    } 
    var_16 = ((/* implicit */long long int) var_11);
}
