/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29591
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
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */int) min((((/* implicit */unsigned int) (-(((/* implicit */int) var_6))))), (((((/* implicit */_Bool) var_2)) ? (arr_0 [i_1 + 1]) : (arr_0 [i_1 + 2])))));
                arr_6 [i_1 + 1] = ((/* implicit */signed char) ((((/* implicit */unsigned int) min((1175944821), (((/* implicit */int) (signed char)-20))))) - (((var_14) << (0U)))));
            }
        } 
    } 
    var_17 = ((/* implicit */int) var_3);
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)20)) ? (-269352389) : (((/* implicit */int) (signed char)-123))))) == ((+(((((/* implicit */_Bool) var_6)) ? (var_14) : (13U)))))));
}
