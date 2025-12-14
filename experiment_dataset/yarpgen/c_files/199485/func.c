/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199485
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
    var_15 = ((/* implicit */_Bool) (+(2088277117U)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 17; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */signed char) max((min((((/* implicit */int) ((var_0) && (((/* implicit */_Bool) arr_1 [i_0]))))), (max((var_2), (((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) var_0))));
                var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) arr_4 [i_0 + 2] [i_1] [i_1]))));
                arr_7 [i_0] [i_0] &= ((/* implicit */_Bool) min((max((((/* implicit */unsigned int) arr_0 [i_0 + 2] [i_0 + 3])), ((-(2088277117U))))), (((/* implicit */unsigned int) min((arr_3 [i_1 + 1] [i_1 - 1] [i_1 - 2]), (((/* implicit */signed char) (_Bool)0)))))));
            }
        } 
    } 
    var_18 = ((/* implicit */_Bool) (+(((/* implicit */int) ((signed char) ((unsigned int) 2088277117U))))));
}
