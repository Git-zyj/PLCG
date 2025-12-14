/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242813
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
    var_11 = ((/* implicit */unsigned int) var_0);
    var_12 = ((/* implicit */unsigned short) min((15U), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((var_3) - (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) < (max((var_9), (var_1))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_13 = ((((/* implicit */long long int) ((((((/* implicit */_Bool) -174147454)) || (((/* implicit */_Bool) -174147454)))) ? ((~(var_8))) : ((-(((/* implicit */int) (unsigned short)2))))))) / (((((/* implicit */_Bool) min((3663413859U), (((/* implicit */unsigned int) 174147462))))) ? (((/* implicit */long long int) -174147463)) : (((long long int) arr_1 [1LL])))));
                var_14 = ((/* implicit */unsigned long long int) (signed char)33);
                var_15 = arr_0 [i_0];
                var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) ((arr_3 [i_0] [i_0]) > (((/* implicit */unsigned long long int) 3074291987U))))) : (1744793183))) : (((/* implicit */int) ((arr_3 [i_0] [(signed char)0]) == (((/* implicit */unsigned long long int) ((unsigned int) var_8))))))));
            }
        } 
    } 
}
