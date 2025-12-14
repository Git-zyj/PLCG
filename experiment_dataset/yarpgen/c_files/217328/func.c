/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217328
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
    var_11 = ((/* implicit */unsigned int) var_6);
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((arr_0 [i_0]) & (((/* implicit */int) ((unsigned short) arr_1 [i_0 + 2])))))), (((((/* implicit */_Bool) arr_2 [i_0] [i_0 + 3])) ? (((/* implicit */unsigned int) var_10)) : (arr_2 [i_0] [i_0 + 2])))));
                var_12 -= ((/* implicit */unsigned short) ((long long int) (!((!(((/* implicit */_Bool) var_2)))))));
                arr_6 [i_0] = ((/* implicit */signed char) arr_4 [i_0]);
            }
        } 
    } 
}
