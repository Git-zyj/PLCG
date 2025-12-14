/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246658
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
    var_11 *= ((((((/* implicit */_Bool) 2163195629U)) || (((/* implicit */_Bool) ((unsigned int) var_1))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_9)))))) | (((((/* implicit */_Bool) var_7)) ? (2131771653U) : (var_5))))) : (((((((/* implicit */_Bool) 2590706318U)) ? (var_8) : (1704260985U))) - (min((var_9), (var_7))))));
    var_12 += ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((var_8) <= (1046835011U))))))));
    var_13 = min(((~(var_6))), (((((/* implicit */unsigned int) ((/* implicit */int) ((2590706324U) < (2163195622U))))) % (var_8))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            {
                arr_6 [i_1] [i_1] = max(((+(((((/* implicit */_Bool) var_1)) ? (262143U) : (3203551460U))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 3257147398U)) ? (var_4) : (4294967295U)))) ? (var_7) : (((((/* implicit */_Bool) 62914560U)) ? (var_8) : (3420900865U))))));
                var_14 = 260284951U;
                var_15 -= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) 262168U)) ? (0U) : (2590706300U))) > (((((/* implicit */_Bool) 3294493604U)) ? (var_8) : (4294967290U))))))) <= (arr_2 [i_1])));
            }
        } 
    } 
    var_16 = 0U;
}
