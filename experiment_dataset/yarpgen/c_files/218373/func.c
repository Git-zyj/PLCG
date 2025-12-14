/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218373
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
        for (unsigned short i_1 = 3; i_1 < 18; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */int) max((((((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) 465405352U)))) ? (((((arr_2 [i_0]) + (9223372036854775807LL))) << (((arr_0 [i_0]) - (3348279001426668771LL))))) : (((((/* implicit */_Bool) 1514740059U)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [(signed char)14]))))))), (((/* implicit */long long int) var_9))));
                var_14 = ((/* implicit */unsigned int) var_6);
                var_15 = ((/* implicit */signed char) (+((~(((/* implicit */int) arr_3 [i_1] [i_0]))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_9))));
}
