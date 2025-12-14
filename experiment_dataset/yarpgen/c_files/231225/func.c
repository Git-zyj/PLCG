/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231225
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
    var_11 = ((/* implicit */long long int) min((((/* implicit */unsigned int) var_6)), ((-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_0)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                var_12 += ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (arr_3 [i_0] [(_Bool)1]))) < (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) min((33787878U), (((/* implicit */unsigned int) arr_1 [i_0])))))))))));
                arr_5 [i_0] = ((/* implicit */signed char) arr_1 [i_0]);
            }
        } 
    } 
}
