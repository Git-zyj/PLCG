/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218017
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
    var_18 = ((/* implicit */short) ((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_16)), (max((var_17), (2648017728U)))))) != (((((/* implicit */_Bool) ((var_13) - (((/* implicit */int) (signed char)-38))))) ? (max((((/* implicit */unsigned long long int) (signed char)38)), (12402142970539698297ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-33)) ? (((/* implicit */unsigned int) 1067405842)) : (var_7))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */unsigned int) ((_Bool) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0])))));
                var_20 = ((/* implicit */long long int) ((int) (unsigned char)221));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) ((var_4) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_12))));
    var_22 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) (-(var_17)))) : (min((var_15), (((/* implicit */unsigned long long int) var_12)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) var_11))) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-33)) && (((/* implicit */_Bool) var_16))))) : (((/* implicit */int) var_3)))))));
    var_23 = ((/* implicit */unsigned long long int) 1770526218U);
}
