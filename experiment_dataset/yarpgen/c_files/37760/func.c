/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37760
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
    var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((signed char) max((((var_8) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)116))))), (((/* implicit */unsigned long long int) var_10))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            {
                arr_4 [i_1] = ((/* implicit */unsigned short) var_17);
                arr_5 [i_0] [i_0] |= ((/* implicit */unsigned char) min(((unsigned short)36963), (((/* implicit */unsigned short) arr_1 [i_0]))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) + (var_8)));
    var_21 = max((((((/* implicit */_Bool) (-(((/* implicit */int) var_11))))) ? (((/* implicit */unsigned int) ((var_14) + (-25)))) : (var_5))), (((/* implicit */unsigned int) ((_Bool) (unsigned short)36963))));
}
