/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231251
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
    for (int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned int) ((int) var_10));
                var_11 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((int) var_3))) ? (((((/* implicit */_Bool) var_10)) ? (1605413139U) : (min((var_8), (3676795935U))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 265372835U)) ? (var_8) : (((/* implicit */unsigned int) var_2))))) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) -1)) || (((/* implicit */_Bool) -2147483647))))))))));
            }
        } 
    } 
    var_12 = ((/* implicit */int) var_6);
}
