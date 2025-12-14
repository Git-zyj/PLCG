/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210003
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
        for (unsigned short i_1 = 2; i_1 < 14; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) arr_0 [i_0]))) ? ((-(((((/* implicit */_Bool) 3579404567858194306LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_1]))) : (-3579404567858194306LL))))) : (((/* implicit */long long int) ((unsigned int) max((((/* implicit */signed char) var_0)), (arr_3 [i_0] [i_1])))))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)119)) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_0 - 1])) ? (((/* implicit */int) arr_3 [i_0] [i_0 - 1])) : (((/* implicit */int) arr_3 [i_0] [i_0 - 1])))) : (((/* implicit */int) max((arr_3 [i_0] [i_0 - 1]), (arr_3 [i_0] [i_0 - 1]))))));
            }
        } 
    } 
    var_10 = ((/* implicit */unsigned char) ((var_2) / (((/* implicit */int) var_4))));
}
