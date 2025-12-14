/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47554
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1])) ? (arr_4 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))));
                arr_7 [11U] [i_1] [11LL] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) var_14))) ? ((+(((/* implicit */int) arr_1 [i_0] [i_1])))) : ((((_Bool)1) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_1 [i_1] [i_0])))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (_Bool)1))))))));
                arr_8 [i_0] [(short)24] [i_1] = ((/* implicit */long long int) min((arr_3 [i_1] [i_1] [i_0]), (((/* implicit */unsigned int) max((arr_0 [i_0]), (((/* implicit */unsigned char) arr_2 [i_1] [10])))))));
            }
        } 
    } 
    var_16 = ((/* implicit */short) (!(((/* implicit */_Bool) (signed char)-45))));
    var_17 |= (-(((/* implicit */int) var_8)));
    var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((var_1) >> (((((((((/* implicit */_Bool) var_5)) ? (var_3) : (((/* implicit */unsigned long long int) var_14)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) > (0U))))))) - (650399438938400686ULL))))))));
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_5)));
}
