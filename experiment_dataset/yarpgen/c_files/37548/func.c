/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37548
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
    for (int i_0 = 3; i_0 < 15; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((signed char) ((signed char) 16144593161310038393ULL))))));
                    arr_7 [(signed char)6] [i_1] [i_2] = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) & (arr_6 [i_1] [i_0 - 3] [i_1 - 1]))) << (((((unsigned int) var_0)) - (65346U)))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */signed char) (~(var_18)));
}
