/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25020
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
    var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) (-(((/* implicit */int) (signed char)-4))))) : (var_5))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 4; i_0 < 13; i_0 += 3) 
    {
        for (short i_1 = 3; i_1 < 13; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_1] = ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)1)));
                var_18 = ((/* implicit */int) max((((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))) : (133693440U)))), (var_7)));
            }
        } 
    } 
    var_19 = ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((var_7) < (((/* implicit */long long int) ((/* implicit */int) var_6))))), (((((/* implicit */int) (_Bool)1)) <= (var_8))))))) : (var_16));
    var_20 = ((/* implicit */int) (unsigned short)65535);
}
