/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243888
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
    var_17 ^= ((/* implicit */short) ((var_5) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (min(((~(2110913188U))), (((((/* implicit */_Bool) (signed char)-64)) ? (2110913188U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 4; i_0 < 7; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 9; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] [(short)6] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) arr_4 [i_0])) ? (var_7) : (((/* implicit */unsigned long long int) 2110913186U)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 + 1]))) >= (2184054109U))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0 + 1])) ? (((/* implicit */int) arr_1 [i_0 - 2])) : (((/* implicit */int) var_5))))), (((((/* implicit */_Bool) var_3)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
                var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) max((2110913186U), (((/* implicit */unsigned int) var_9)))))));
                var_19 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_3 [i_0]))));
                arr_7 [5U] = ((/* implicit */_Bool) ((((long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_5 [(_Bool)1] [(_Bool)1]))))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) ((var_3) & (((/* implicit */long long int) 402022634U))))) ? (((((((/* implicit */int) (signed char)-106)) + (2147483647))) >> (((1209714736103726099LL) - (1209714736103726078LL))))) : (((/* implicit */int) arr_1 [i_1 - 2])))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) 31641917U);
}
