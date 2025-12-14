/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198457
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
    for (unsigned short i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */signed char) arr_0 [i_1]);
                    var_16 = ((/* implicit */unsigned int) ((min(((-(arr_7 [i_0] [i_1] [i_2]))), (((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_7 [i_2] [i_1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2] [i_1] [8ULL]))))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_9) != (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0 + 2])))))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */signed char) max((203277404), (4)));
}
