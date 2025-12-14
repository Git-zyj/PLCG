/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216211
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
    var_12 = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((2954459826U) - (var_3)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (max((701119117517624726ULL), (17745624956191926883ULL))))), (((/* implicit */unsigned long long int) var_9))));
    var_13 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 701119117517624703ULL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_7))))) && (((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) (signed char)(-127 - 1))))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 56720942U)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_11))))))))));
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_11))))), ((+(((/* implicit */int) var_10))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) % (((/* implicit */int) ((signed char) var_3)))))) : (min((var_4), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) + (var_9))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            {
                arr_4 [i_0] = ((/* implicit */_Bool) max((((signed char) (_Bool)1)), (((/* implicit */signed char) ((arr_3 [i_1 - 1] [i_1 + 1] [i_1 - 1]) <= (arr_3 [i_1 + 1] [i_1 - 1] [i_1 + 1]))))));
                arr_5 [i_1] = ((/* implicit */_Bool) var_7);
            }
        } 
    } 
}
