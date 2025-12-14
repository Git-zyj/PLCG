/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200438
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
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            {
                arr_5 [i_1] [i_0] = ((/* implicit */_Bool) min((-1706090733), (((((/* implicit */int) (signed char)24)) / (((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))));
                var_10 *= arr_1 [i_0];
                arr_6 [i_0] [i_0] = ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) > (max((var_9), (((/* implicit */long long int) 4289992577U)))));
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) var_0);
            }
        } 
    } 
    var_11 = ((/* implicit */unsigned short) var_2);
}
