/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27833
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
    var_11 = ((/* implicit */unsigned short) (short)-5282);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 10; i_1 += 1) 
        {
            {
                arr_6 [1U] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))));
                var_12 = ((/* implicit */signed char) min(((~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-37))))))), (((/* implicit */int) min(((!(((/* implicit */_Bool) var_0)))), ((((_Bool)0) || (((/* implicit */_Bool) var_8)))))))));
                var_13 = ((/* implicit */int) (((!((_Bool)1))) || (((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned short) arr_2 [i_1 - 2] [i_1 - 1] [i_1 + 1])))))));
            }
        } 
    } 
}
