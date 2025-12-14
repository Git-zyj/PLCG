/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234548
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
    var_14 = ((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))));
    var_15 = ((/* implicit */signed char) max((((/* implicit */long long int) (_Bool)1)), (var_1)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned char i_1 = 4; i_1 < 17; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9)))), (((/* implicit */int) arr_4 [i_1]))));
                var_17 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_7)))))) > (var_10)));
                var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned long long int) var_5)))))));
                arr_6 [i_1] = ((/* implicit */unsigned long long int) arr_2 [i_0] [i_0]);
                arr_7 [i_1] = ((/* implicit */long long int) var_5);
            }
        } 
    } 
}
