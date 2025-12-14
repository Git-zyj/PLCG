/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47473
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
    var_14 = ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(4294967295U)))) ? (((/* implicit */int) ((signed char) var_8))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)85))))))), (((unsigned int) var_7))));
    var_15 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) & (((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)51)) / (((/* implicit */int) (signed char)-74))))) * (var_12)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                arr_6 [i_0 + 2] = ((/* implicit */unsigned char) var_0);
                arr_7 [i_0] [i_1] [i_1] = ((/* implicit */signed char) var_11);
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) var_11);
}
