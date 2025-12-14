/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233293
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
    var_16 = ((/* implicit */unsigned short) max((((/* implicit */int) min(((_Bool)0), ((!(((/* implicit */_Bool) (signed char)41))))))), (((int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_12)))))));
    var_17 &= ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : (((/* implicit */int) var_14)))));
    var_18 = ((/* implicit */_Bool) var_5);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) >> (((((/* implicit */int) arr_0 [i_0])) - (138)))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) & (var_10)))), (((((/* implicit */_Bool) var_9)) ? (arr_3 [i_0] [i_1] [i_0]) : (((/* implicit */unsigned long long int) var_8))))))));
                var_20 += ((/* implicit */unsigned long long int) (+((((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_4 [i_0] [i_1] [i_1]))))));
            }
        } 
    } 
}
