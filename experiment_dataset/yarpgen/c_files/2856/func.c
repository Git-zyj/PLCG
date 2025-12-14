/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2856
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
    var_15 = ((/* implicit */int) var_8);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */int) arr_4 [i_1 + 1])) <= (((/* implicit */int) (signed char)-112)))))));
                var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) max((min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_0])) ? (536870911) : (((/* implicit */int) arr_3 [i_1]))))), (((var_12) * (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))), (((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) var_1))) * (((/* implicit */int) (short)-16370))))))))));
                var_18 = ((/* implicit */signed char) arr_3 [i_0]);
                var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) max((((arr_1 [8]) - (arr_1 [i_0]))), (((/* implicit */unsigned int) (unsigned short)13707)))))));
            }
        } 
    } 
}
