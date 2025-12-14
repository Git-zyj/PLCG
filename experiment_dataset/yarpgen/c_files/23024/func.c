/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23024
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
    for (unsigned short i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((((/* implicit */_Bool) ((arr_2 [i_0 + 1] [i_0 - 1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 - 2] [i_0 - 1]))) : (17870283321406128128ULL)))) || (((/* implicit */_Bool) var_5)))))));
                arr_6 [i_0] [i_1] [i_1] = ((((((((/* implicit */_Bool) (unsigned short)31393)) || (((/* implicit */_Bool) (signed char)-12)))) ? (((arr_5 [i_1]) >> (((/* implicit */int) arr_3 [i_0])))) : (arr_1 [i_1]))) | (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_8)))));
            }
        } 
    } 
    var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((((((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) var_5)) : (var_13))) < (((/* implicit */long long int) (+(((/* implicit */int) var_2))))))) ? ((-(((/* implicit */int) ((signed char) var_9))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)8)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-24))))))))))))));
}
