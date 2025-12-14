/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239394
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
    var_17 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) var_6)) : (var_15))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((((/* implicit */int) var_7)) == (((/* implicit */int) var_7))))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            {
                var_18 ^= ((/* implicit */int) ((arr_6 [i_1 + 2] [i_0]) | (((/* implicit */unsigned long long int) (((+(((/* implicit */int) var_9)))) << (((arr_5 [i_0]) - (1247597261))))))));
                var_19 |= ((/* implicit */signed char) max((((var_6) - (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 + 1]))))), (((/* implicit */long long int) arr_0 [4U]))));
            }
        } 
    } 
    var_20 = max((var_4), (var_4));
    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)15)) ? ((-2147483647 - 1)) : (2147483647)));
}
