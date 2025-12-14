/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32358
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
    for (long long int i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1))));
                var_13 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_6 [i_1 - 2])) ? ((~(-6608816191958003557LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0])))))));
                arr_7 [i_0] = ((((/* implicit */long long int) min((3406184432U), (((/* implicit */unsigned int) max((var_11), (((/* implicit */short) arr_3 [12])))))))) <= (min((((/* implicit */long long int) (_Bool)1)), (-6608816191958003557LL))));
                var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) max(((+(((/* implicit */int) ((short) (signed char)76))))), (((/* implicit */int) (_Bool)1)))))));
            }
        } 
    } 
    var_15 = ((/* implicit */short) (+(((((/* implicit */_Bool) ((((/* implicit */int) var_4)) & (((/* implicit */int) (short)-3019))))) ? (min((((/* implicit */long long int) var_5)), (6608816191958003563LL))) : (((/* implicit */long long int) var_5))))));
    var_16 = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)48))));
    var_17 = ((/* implicit */long long int) max(((~((-(var_3))))), (max((((/* implicit */unsigned int) (+(((/* implicit */int) var_7))))), (min((var_5), (((/* implicit */unsigned int) var_4))))))));
}
