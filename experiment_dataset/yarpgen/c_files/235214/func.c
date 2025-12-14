/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235214
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
    for (long long int i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 19; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned char) ((_Bool) max((arr_2 [i_1] [i_1]), (((((/* implicit */_Bool) var_2)) ? (var_12) : (((/* implicit */int) var_9)))))));
                arr_5 [i_1] = ((/* implicit */unsigned long long int) var_5);
            }
        } 
    } 
    var_14 = ((/* implicit */long long int) var_1);
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) -2806258866491221939LL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_7)) : (-104139779)))) : (((((-2485535325132728936LL) + (9223372036854775807LL))) << (((var_5) - (7644867793677730932LL)))))))) ? (var_12) : (((/* implicit */int) var_7))));
}
