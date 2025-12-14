/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199248
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
    var_10 += ((/* implicit */unsigned short) (~(((/* implicit */int) ((short) ((unsigned long long int) 15762598695796736LL))))));
    var_11 = ((/* implicit */unsigned int) var_2);
    var_12 = ((/* implicit */_Bool) (+(min((min((((/* implicit */unsigned int) (_Bool)1)), (var_5))), (((/* implicit */unsigned int) (_Bool)1))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_13 -= ((/* implicit */int) var_4);
                arr_6 [2LL] [(_Bool)1] = ((/* implicit */unsigned short) var_9);
            }
        } 
    } 
}
