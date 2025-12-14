/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212600
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
    for (unsigned short i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                var_11 = ((unsigned long long int) min((min((((/* implicit */long long int) (short)-25023)), (arr_2 [i_0] [i_0]))), (((/* implicit */long long int) min(((short)11532), (((/* implicit */short) var_1)))))));
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned short) var_9);
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned long long int) ((var_5) ? (((/* implicit */int) ((_Bool) min((var_3), (((/* implicit */long long int) var_7)))))) : (((/* implicit */int) min(((!(((/* implicit */_Bool) (short)-25023)))), ((!(((/* implicit */_Bool) var_9)))))))));
}
