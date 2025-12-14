/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38825
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
    for (unsigned int i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_7 [i_0 - 1] [i_0 - 1] = ((/* implicit */_Bool) 594192974U);
                arr_8 [i_1] = ((/* implicit */unsigned int) ((max((((unsigned int) var_11)), (((/* implicit */unsigned int) (_Bool)1)))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (-(((/* implicit */int) (_Bool)1)))))))));
                var_19 = ((/* implicit */unsigned int) max((var_19), (((((((unsigned int) (_Bool)1)) ^ (((arr_1 [i_0] [i_1]) & (4U))))) & (((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 + 3]))) ^ (((((/* implicit */_Bool) 4007178540U)) ? (209544488U) : (4U)))))))));
            }
        } 
    } 
    var_20 ^= ((/* implicit */_Bool) ((unsigned int) max((((1854789914U) << (((/* implicit */int) (_Bool)1)))), (((1952242566U) | (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))));
}
