/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195109
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
    var_15 = (~(((/* implicit */int) (unsigned char)227)));
    var_16 = ((/* implicit */short) (-(((/* implicit */int) (((~(var_1))) <= (((/* implicit */unsigned long long int) ((var_9) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (short)0))))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                var_17 ^= ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)60115)) / (((((/* implicit */int) (unsigned char)10)) - (-306539390)))));
                var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) min((((-32) + (((/* implicit */int) var_12)))), (((((/* implicit */int) (short)0)) - (((/* implicit */int) (short)0))))))) + (((((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))) - (max((((/* implicit */unsigned long long int) arr_1 [i_0])), (var_1))))))))));
            }
        } 
    } 
}
