/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215138
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
    for (short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */long long int) min((min((min(((signed char)-24), (((/* implicit */signed char) var_3)))), ((signed char)24))), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_0] [(_Bool)1] [i_0])) ^ (((/* implicit */int) var_11))))))))));
                arr_7 [i_0] = ((/* implicit */unsigned long long int) var_6);
                var_19 = ((/* implicit */signed char) ((((/* implicit */int) min((arr_4 [i_0] [i_0] [i_0]), (((/* implicit */signed char) var_3))))) > (((((/* implicit */_Bool) arr_4 [i_0] [i_0] [9U])) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_1])) : (((/* implicit */int) arr_4 [i_0] [i_1] [i_1]))))));
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) (_Bool)1);
}
