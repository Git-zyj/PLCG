/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230381
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
    var_11 = ((/* implicit */signed char) var_1);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_1] = (_Bool)0;
                var_12 ^= ((/* implicit */unsigned long long int) arr_0 [i_0]);
                arr_7 [i_0] [i_0] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1921255871)) ? (((/* implicit */int) (unsigned char)128)) : (var_9)))) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) var_7)))) : (((/* implicit */int) (signed char)-127))));
            }
        } 
    } 
}
