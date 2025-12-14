/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26194
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
    var_10 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 9028223760621545594ULL)) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_4)), (0ULL)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_8))))) : (((((/* implicit */_Bool) var_7)) ? (var_7) : (((/* implicit */unsigned long long int) 1082735617)))))) : (((var_1) / (((/* implicit */unsigned long long int) var_6))))));
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 15; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))) + (arr_2 [i_0] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) max(((signed char)-7), ((signed char)6)))))))) ? (((/* implicit */int) (signed char)-7)) : (((/* implicit */int) var_5))));
                    arr_8 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */long long int) ((short) arr_2 [i_0] [i_0]));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned long long int) var_0);
}
