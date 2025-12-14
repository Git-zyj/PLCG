/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223907
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */unsigned int) max((var_14), (2497752287U)));
                arr_6 [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)24)) ? (1797215008U) : (2497752262U)))) ? (max((((/* implicit */long long int) arr_3 [i_0] [i_1])), (((((/* implicit */_Bool) var_8)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (signed char)63))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) << (((/* implicit */int) var_12))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(_Bool)0]))) : (((((/* implicit */_Bool) arr_4 [i_0])) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))))));
                arr_7 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (var_3) : (((/* implicit */unsigned long long int) var_5))));
            }
        } 
    } 
    var_15 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (705807642U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)9372))))))));
}
