/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190461
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 11; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1] [i_1] [i_1 + 3])) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1] [i_1])))))))) ? (max((arr_2 [i_1] [i_1 + 1] [i_1 - 2]), (((/* implicit */unsigned long long int) var_14)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_15)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_12))))) < (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13))))))))))));
                var_19 += ((/* implicit */unsigned int) var_6);
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_1))));
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (min(((((_Bool)1) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_11)))), (((/* implicit */int) ((unsigned short) 1456843653509525847LL))))) : (((/* implicit */int) ((short) min((2047ULL), (((/* implicit */unsigned long long int) var_5))))))));
}
