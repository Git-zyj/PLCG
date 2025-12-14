/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31950
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
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) var_6))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_8)))) : (((((((/* implicit */long long int) ((/* implicit */int) var_5))) | (var_10))) - (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) var_9)))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 23; i_1 += 4) 
        {
            {
                arr_5 [12] [12] = ((/* implicit */_Bool) var_8);
                arr_6 [i_0] = ((((/* implicit */long long int) (~(((/* implicit */int) arr_3 [i_0] [i_1 + 1]))))) | (((long long int) var_0)));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) var_12);
}
