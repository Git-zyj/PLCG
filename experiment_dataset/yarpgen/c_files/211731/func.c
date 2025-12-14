/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211731
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
    for (long long int i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */signed char) ((short) (signed char)5));
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? ((+(min((870729097U), (870729097U))))) : ((+(arr_3 [i_0 - 2])))));
                arr_7 [i_1] = max(((-(((/* implicit */int) var_10)))), (var_7));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned char) var_2);
}
