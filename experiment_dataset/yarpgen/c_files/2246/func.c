/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2246
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
    var_17 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) var_5))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) & (((/* implicit */int) var_0))))) : (((unsigned long long int) var_5)))))));
    var_18 += ((/* implicit */unsigned short) (((((!(((/* implicit */_Bool) var_11)))) ? (((/* implicit */int) var_4)) : (((((/* implicit */int) var_0)) + (((/* implicit */int) var_15)))))) + ((+(((/* implicit */int) (!(var_12))))))));
    var_19 = ((/* implicit */int) ((((var_13) << (((((var_12) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (var_13))) - (3416521943U))))) != (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) >> (((((((/* implicit */_Bool) var_13)) ? (var_5) : (var_5))) - (2455419755U))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 8; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 11; i_1 += 1) 
        {
            {
                var_20 |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((((/* implicit */int) arr_2 [i_1 - 3] [i_1 - 3] [i_0])) + (((/* implicit */int) arr_2 [i_0] [i_1 + 1] [i_1 - 4])))))))));
                var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (~(((3925120437U) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))));
                arr_4 [i_1] [i_1] = ((/* implicit */_Bool) arr_2 [i_0 - 3] [i_0] [i_1 - 2]);
                arr_5 [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_1])) ? (arr_3 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 - 2])))))))));
            }
        } 
    } 
}
