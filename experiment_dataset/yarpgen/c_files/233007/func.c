/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233007
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
    for (unsigned long long int i_0 = 3; i_0 < 24; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */_Bool) arr_1 [i_0]);
                arr_6 [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((max((-1647362990), (((/* implicit */int) (unsigned short)11)))), (((/* implicit */int) (signed char)-63))))) ? (((/* implicit */int) arr_2 [i_0] [i_1])) : (arr_1 [i_0])));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) var_12);
    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) min((((var_18) + (((/* implicit */unsigned long long int) var_11)))), (((/* implicit */unsigned long long int) (signed char)-82))))) ? (((/* implicit */int) ((unsigned char) min((6946051864870696237ULL), (((/* implicit */unsigned long long int) var_5)))))) : (((((((/* implicit */int) var_9)) & (((/* implicit */int) var_12)))) >> (((/* implicit */int) ((_Bool) (signed char)-80)))))));
    var_22 |= ((/* implicit */short) ((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) & (var_19))));
}
