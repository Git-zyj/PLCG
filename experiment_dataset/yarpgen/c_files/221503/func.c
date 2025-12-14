/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221503
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
    var_14 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((short) 536870911))) : (((/* implicit */int) var_0))))), (((unsigned int) (-(((/* implicit */int) var_0)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */signed char) var_6);
                var_16 = ((/* implicit */unsigned int) max((536870919), (((/* implicit */int) (signed char)15))));
                var_17 += ((_Bool) max((((int) var_1)), (((/* implicit */int) ((unsigned short) (-9223372036854775807LL - 1LL))))));
                arr_6 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) ((short) var_4))) ? (((/* implicit */unsigned long long int) arr_3 [i_1] [i_1 - 1])) : (min((((/* implicit */unsigned long long int) var_1)), (var_11))))) : (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL)))));
            }
        } 
    } 
}
