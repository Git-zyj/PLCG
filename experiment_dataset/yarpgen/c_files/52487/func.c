/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52487
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
    for (int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 8; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */unsigned int) var_3);
                    var_19 *= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((long long int) var_13)) ^ (((((/* implicit */_Bool) -1022595009)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (-7798345510097608123LL)))))) | (((min((((/* implicit */unsigned long long int) (short)-31253)), (var_0))) ^ (((var_3) & (0ULL)))))));
                    var_20 = ((/* implicit */unsigned int) (~(min((((/* implicit */long long int) var_17)), (var_11)))));
                }
            } 
        } 
    } 
    var_21 |= ((/* implicit */_Bool) (+(((int) var_11))));
}
