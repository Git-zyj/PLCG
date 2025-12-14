/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246755
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
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((2731800529U), (var_16)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))) : (var_1)))) ? ((-(max((((/* implicit */int) var_13)), (var_14))))) : (((((/* implicit */_Bool) -859081131)) ? (((/* implicit */int) ((unsigned short) var_0))) : (((/* implicit */int) var_11))))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 11; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            {
                arr_5 [i_0 + 2] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((arr_1 [i_0]) ? (16420846503554313836ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))))) && (((/* implicit */_Bool) (short)4360))));
                var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)42191))) + (14359279842092652365ULL))) : (((/* implicit */unsigned long long int) arr_3 [i_0 - 2] [i_1 - 1]))))) ? ((~(((/* implicit */int) min((((/* implicit */short) arr_1 [i_0])), ((short)-4367)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)7467)) ? (((/* implicit */int) arr_4 [i_1 + 1])) : (((/* implicit */int) (unsigned short)57163))))) ? (((/* implicit */int) arr_4 [i_0 - 1])) : (((/* implicit */int) ((((/* implicit */int) var_15)) < (((/* implicit */int) arr_1 [i_0])))))))));
            }
        } 
    } 
    var_19 -= ((/* implicit */short) (!(((/* implicit */_Bool) (-(((((/* implicit */unsigned int) ((/* implicit */int) var_9))) / (var_16))))))));
}
