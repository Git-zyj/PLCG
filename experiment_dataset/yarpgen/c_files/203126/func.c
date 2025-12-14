/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203126
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
    for (short i_0 = 3; i_0 < 17; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */int) max((var_18), (min((((arr_1 [i_0 - 3]) << (((arr_1 [i_0 - 1]) - (1667565566))))), (((/* implicit */int) var_4))))));
                var_19 = ((/* implicit */int) min((var_19), (min(((~(((/* implicit */int) var_13)))), (((/* implicit */int) ((unsigned char) arr_5 [i_0 - 2] [i_0 - 2])))))));
                var_20 |= ((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-50)), ((unsigned char)184)));
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) var_9)), (((int) (unsigned char)68))))) ? (((((/* implicit */int) ((short) (unsigned char)184))) / (((/* implicit */int) (unsigned char)190)))) : (min(((~(((/* implicit */int) (unsigned char)44)))), (((/* implicit */int) min((var_0), (var_0))))))));
}
