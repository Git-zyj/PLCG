/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219054
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            {
                var_19 += ((/* implicit */_Bool) (((+(3909234683U))) % (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
                var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(11ULL)))) ? (((((/* implicit */_Bool) (signed char)52)) ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 - 1]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) && (((/* implicit */_Bool) 385732614U))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) (!(((/* implicit */_Bool) max((((int) var_7)), (((/* implicit */int) min(((signed char)45), (var_7))))))))))));
}
