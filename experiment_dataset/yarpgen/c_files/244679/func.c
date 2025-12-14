/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244679
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
    var_17 = ((/* implicit */long long int) var_3);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) -6181424727605603890LL)) ? ((+(18LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0]))))))));
                var_19 = ((/* implicit */unsigned short) (((+(((((/* implicit */_Bool) -104073840)) ? (1832450789745604459LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) % (((/* implicit */long long int) (+(((/* implicit */int) arr_3 [i_0] [i_1] [i_1])))))));
                var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((short) var_0)))));
                var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) min((((((/* implicit */int) arr_0 [i_0])) - (((/* implicit */int) arr_0 [i_1])))), ((-(((/* implicit */int) arr_0 [i_0])))))))));
            }
        } 
    } 
    var_22 = ((((/* implicit */_Bool) var_11)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
    var_23 = ((/* implicit */signed char) var_8);
}
