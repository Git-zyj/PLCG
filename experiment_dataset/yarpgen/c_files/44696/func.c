/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44696
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
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */int) (signed char)-98);
                var_19 = ((/* implicit */short) min((((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1] [i_0] [i_0]))))) != (((/* implicit */int) arr_0 [i_0] [i_1]))))), ((+(((((/* implicit */_Bool) (signed char)-23)) ? (((/* implicit */int) arr_1 [i_1])) : (var_11)))))));
                arr_6 [i_1] = ((/* implicit */long long int) arr_1 [i_0]);
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) (+(203841735))))));
}
