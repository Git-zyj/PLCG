/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235137
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
    var_18 = ((((/* implicit */_Bool) ((unsigned long long int) (!(((/* implicit */_Bool) var_13)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))) ? (var_14) : (min((((/* implicit */long long int) 992511851)), (var_15))))));
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2147483626)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) < (((unsigned long long int) -992511849))))) : (((/* implicit */int) (_Bool)1))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */_Bool) max((((/* implicit */signed char) ((_Bool) arr_0 [i_0] [i_1]))), (((signed char) arr_2 [i_0] [i_1] [i_1]))));
                var_21 = ((/* implicit */long long int) min((var_21), (((((/* implicit */_Bool) ((max((((/* implicit */int) (_Bool)1)), (660773811))) >> (((((((/* implicit */_Bool) arr_2 [i_0] [i_0] [6LL])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_1]))) : (7636256906015771651LL))) + (7928LL)))))) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)35861), (((/* implicit */unsigned short) (_Bool)1))))))))));
                var_22 = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0])) ^ (-1498163124)))) < (min((var_11), (((/* implicit */unsigned int) var_7)))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) (+(((/* implicit */int) (short)-10182))))), (((((/* implicit */_Bool) var_15)) ? (var_17) : (7636256906015771653LL)))))) ? ((+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_7)))))) : (((/* implicit */int) (signed char)-92))));
}
