/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197122
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
    var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_5))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 19; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((4025033405U), (((/* implicit */unsigned int) arr_0 [i_0 - 2] [i_0 - 1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (signed char)2)))) : (((((arr_1 [i_0]) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_1]))))) ? ((+(var_0))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                arr_5 [i_0] [(short)4] = ((/* implicit */unsigned short) var_4);
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) (!((_Bool)1)));
}
