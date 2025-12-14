/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237853
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
    var_13 = ((/* implicit */_Bool) ((unsigned int) (-(((long long int) var_9)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned long long int) (~(((int) arr_3 [i_0]))));
                arr_4 [i_0] [12U] [i_0] = ((/* implicit */unsigned short) max(((~(((/* implicit */int) var_3)))), (((/* implicit */int) ((unsigned char) arr_2 [i_0] [i_0] [i_0])))));
            }
        } 
    } 
    var_15 = ((/* implicit */short) min((var_5), (((/* implicit */unsigned int) var_4))));
}
