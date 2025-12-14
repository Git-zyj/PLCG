/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40439
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
    var_19 = ((/* implicit */signed char) ((int) var_6));
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_2)))), ((~(((/* implicit */int) var_2))))))) ? (((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)237)) ? (((/* implicit */int) (short)22690)) : (((/* implicit */int) var_5))))) / ((~(1030187434U))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((var_11) * (((/* implicit */unsigned int) var_6)))))))));
    var_21 = ((/* implicit */unsigned long long int) ((var_17) - (((((/* implicit */int) (!(((/* implicit */_Bool) var_18))))) & (((/* implicit */int) var_0))))));
    var_22 *= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) 1030187434U)) - (((((((/* implicit */_Bool) 3264779862U)) && (((/* implicit */_Bool) var_4)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)15354), ((short)22677))))) : (var_1)))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 8; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 8; i_1 += 1) 
        {
            {
                var_23 = ((/* implicit */unsigned int) min((var_23), (3264779861U)));
                var_24 = ((/* implicit */long long int) max(((~(arr_0 [i_0 + 2]))), ((~(arr_0 [i_0 + 1])))));
                arr_4 [i_1] [i_1] = ((/* implicit */unsigned int) arr_3 [i_0]);
                var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) ((arr_0 [i_0]) << (((((/* implicit */int) ((810811069U) < (((arr_2 [(signed char)0] [i_0 + 1] [i_0 + 1]) & (((/* implicit */unsigned int) arr_0 [i_0]))))))) - (1))))))));
            }
        } 
    } 
}
