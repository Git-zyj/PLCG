/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224563
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
    for (short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)1974)))))));
                arr_4 [i_0] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-21050)) ^ (arr_0 [i_0])))) ? (((int) arr_0 [i_0])) : ((~(((/* implicit */int) (unsigned short)7281))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned short) min((((min((var_9), ((_Bool)0))) ? ((+(var_3))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1246325797582096852LL)))))))), (((/* implicit */long long int) var_4))));
}
