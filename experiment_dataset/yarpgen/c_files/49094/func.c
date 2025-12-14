/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49094
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
    var_14 = ((/* implicit */int) ((((/* implicit */_Bool) ((int) var_3))) ? (min(((((_Bool)1) ? (5427371368173875525LL) : (((/* implicit */long long int) ((/* implicit */int) var_5))))), (((/* implicit */long long int) ((var_3) ? (var_7) : (4036157350U)))))) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)62)))))));
    var_15 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) min((arr_1 [i_0] [i_1]), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_1 [i_0] [i_1]))))))))));
                var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) max((((/* implicit */unsigned int) -763545121)), (2525813758U))))));
                arr_5 [(_Bool)1] [i_1] &= ((/* implicit */unsigned int) arr_4 [i_0]);
            }
        } 
    } 
}
