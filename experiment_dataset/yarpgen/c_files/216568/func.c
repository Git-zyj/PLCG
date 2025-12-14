/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216568
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
    for (unsigned short i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 8; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */unsigned char) var_4);
                var_17 *= ((/* implicit */signed char) var_10);
                arr_7 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (var_6) : (((/* implicit */long long int) var_1))))) ? (((((/* implicit */_Bool) var_13)) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) var_14))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? (((/* implicit */int) ((unsigned char) min((var_10), (((/* implicit */unsigned short) var_13)))))) : (((/* implicit */int) var_13))));
            }
        } 
    } 
    var_18 = min((((((/* implicit */_Bool) ((unsigned long long int) var_8))) ? (((/* implicit */unsigned int) var_4)) : (var_3))), (var_3));
    var_19 *= ((/* implicit */unsigned short) ((unsigned long long int) ((int) ((unsigned char) var_12))));
}
