/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231377
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
    for (unsigned short i_0 = 3; i_0 < 17; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) min((var_18), (var_2))))))) ? (max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_2 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_3 [i_0])))), (((/* implicit */int) var_14)))) : (((/* implicit */int) arr_0 [i_1])))))));
                var_21 = (-(((/* implicit */int) max((arr_0 [i_0 - 1]), (((/* implicit */short) (!(((/* implicit */_Bool) var_2)))))))));
            }
        } 
    } 
    var_22 ^= ((/* implicit */unsigned short) ((unsigned int) var_16));
    var_23 ^= ((/* implicit */short) max((((/* implicit */int) var_2)), (((((/* implicit */_Bool) min((var_12), (((/* implicit */unsigned short) (_Bool)1))))) ? (((/* implicit */int) var_19)) : ((~(((/* implicit */int) var_12))))))));
}
