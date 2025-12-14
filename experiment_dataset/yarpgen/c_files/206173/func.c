/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206173
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
    var_12 ^= ((/* implicit */signed char) 29841190U);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) ^ (arr_0 [(signed char)4] [i_1]))), (((/* implicit */unsigned long long int) (~(arr_2 [i_0] [i_1])))))))));
                arr_5 [i_0] = ((/* implicit */signed char) ((unsigned char) min((((unsigned int) arr_2 [i_1] [i_1])), (((/* implicit */unsigned int) var_6)))));
                var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((1562819328), (((/* implicit */int) (signed char)54))))) ? (((arr_0 [i_0] [i_1]) + (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0])))) : (((((/* implicit */_Bool) (signed char)-38)) ? (((/* implicit */unsigned long long int) 4095)) : (9ULL)))));
                var_15 += ((arr_1 [i_0]) / (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0])));
            }
        } 
    } 
}
