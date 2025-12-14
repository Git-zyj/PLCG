/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224991
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
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                var_14 |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */int) arr_2 [i_0] [i_1])) : (((/* implicit */int) var_8))))) ? (arr_3 [i_0] [i_1]) : (((/* implicit */int) arr_1 [i_1]))));
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */signed char) min((arr_3 [i_0] [i_1]), (((/* implicit */int) ((unsigned short) 0U)))));
            }
        } 
    } 
    var_15 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((short)2), ((short)22477)))) ? (((/* implicit */int) var_5)) : (max((max((((/* implicit */int) var_8)), (2147483647))), (((/* implicit */int) var_5))))));
}
