/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213222
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
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_16 = ((((arr_3 [i_1]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))))) - (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)511)) > (((/* implicit */int) arr_2 [i_0])))))));
                var_17 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) arr_0 [6] [i_1])), (2135782833)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? ((+(var_5))) : (min((((/* implicit */unsigned int) arr_1 [i_0])), (arr_3 [i_0])))))) : (min((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)1)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_0))))), (max((-1LL), (((/* implicit */long long int) (short)-512))))))));
                arr_4 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) ((signed char) arr_0 [i_0] [i_1])))));
                var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) | (((/* implicit */int) ((var_6) == (arr_3 [i_1]))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-93)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_15))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_3))) | (-7478667717198649175LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_1]))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) min(((short)16383), (((/* implicit */short) (signed char)-70))))) > (((/* implicit */int) arr_1 [i_1]))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) max((min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_3))))), (((var_2) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-2))))))), (((/* implicit */unsigned int) (((~(((/* implicit */int) var_10)))) << (((((/* implicit */int) var_3)) + (6922))))))));
    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) (+(var_1))))));
    var_21 = min((((/* implicit */long long int) var_4)), (((((/* implicit */long long int) ((0U) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)69)))))) & (var_1))));
    var_22 = ((/* implicit */unsigned int) var_0);
}
