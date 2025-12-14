/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49853
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
    var_18 = ((/* implicit */unsigned long long int) ((signed char) ((unsigned long long int) (signed char)-57)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */long long int) ((/* implicit */int) ((signed char) (signed char)-57)))) - (((long long int) 1547183857)))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */long long int) ((unsigned int) arr_0 [i_0]))) : (min((((/* implicit */long long int) 226521441U)), (var_0)))))));
                var_20 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (signed char)22)) ? (arr_1 [i_0] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))));
            }
        } 
    } 
}
