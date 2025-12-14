/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218624
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
    var_19 &= ((/* implicit */unsigned int) var_2);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned int) (((((~(arr_3 [i_0] [i_1 - 1]))) + (2147483647))) >> (((arr_5 [i_0] [i_1 - 1]) + (1636883568)))));
                arr_7 [i_0] = ((/* implicit */long long int) (signed char)-105);
                var_21 += ((/* implicit */unsigned int) max((((/* implicit */int) (signed char)-86)), (min((max((arr_5 [i_0] [i_0]), (arr_0 [i_0] [7]))), (min((arr_5 [15LL] [i_1 - 1]), (((/* implicit */int) (_Bool)0))))))));
            }
        } 
    } 
}
