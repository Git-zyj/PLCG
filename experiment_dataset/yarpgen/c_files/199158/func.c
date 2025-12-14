/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199158
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
    var_12 = ((/* implicit */unsigned char) (!((_Bool)1)));
    var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) (-(min((((((/* implicit */_Bool) (short)13325)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (short)10707))))), (((/* implicit */long long int) ((340759033) * (((/* implicit */int) var_1))))))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 16; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)248)) ? (-340759036) : (-1334477702)));
                arr_4 [i_1] = ((/* implicit */_Bool) arr_0 [i_0]);
                var_15 = ((/* implicit */short) max((((/* implicit */int) arr_2 [i_0] [i_0 + 1] [(short)6])), (((((/* implicit */_Bool) (signed char)101)) ? (-2147483643) : (((/* implicit */int) (unsigned short)64977))))));
                var_16 = ((/* implicit */_Bool) (~(-2147483643)));
            }
        } 
    } 
    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) / (1334477701)))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_0))))) ? (((int) ((short) var_10))) : (((/* implicit */int) var_1))));
    var_18 = ((/* implicit */unsigned short) ((340759054) / (((/* implicit */int) (unsigned char)242))));
}
