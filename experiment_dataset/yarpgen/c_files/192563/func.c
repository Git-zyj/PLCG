/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192563
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
    var_13 = ((/* implicit */_Bool) (~(var_6)));
    var_14 = ((/* implicit */unsigned int) ((int) ((((var_9) ? (((/* implicit */long long int) var_10)) : (var_11))) ^ (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (unsigned int i_2 = 2; i_2 < 21; i_2 += 1) 
            {
                {
                    var_15 ^= arr_4 [i_0] [i_1] [i_1] [i_2];
                    arr_7 [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) min(((+(((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) + (var_3))))), (((/* implicit */unsigned int) min((((/* implicit */int) (unsigned short)64)), (1831767110))))));
                }
            } 
        } 
    } 
}
