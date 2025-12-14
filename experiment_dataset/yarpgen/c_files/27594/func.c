/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27594
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            for (signed char i_2 = 2; i_2 < 20; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_1] [10U] [i_2 - 1] = max((((((/* implicit */_Bool) ((signed char) var_11))) ? (min((arr_5 [i_1] [i_0]), (((/* implicit */unsigned int) arr_0 [i_1])))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [(signed char)10] [i_2 + 1] [i_0]))))), (((unsigned int) max((4285698830U), (1297228709U)))));
                    arr_9 [i_0] [i_1 - 1] [i_2] = ((unsigned int) (!(((/* implicit */_Bool) 4294967295U))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_7) : (var_12)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-123))) : (var_7))))));
    var_15 = ((/* implicit */signed char) min((2997738586U), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_9)))) : (3634724055U)))));
}
