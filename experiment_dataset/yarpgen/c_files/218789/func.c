/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218789
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
    var_11 = ((/* implicit */signed char) min((var_8), (((((/* implicit */_Bool) (signed char)2)) ? (((((/* implicit */_Bool) 685350848)) ? (var_4) : (var_8))) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */short) ((signed char) min((((/* implicit */int) var_2)), (((((/* implicit */int) (signed char)5)) - (((/* implicit */int) var_9)))))));
                var_13 = ((/* implicit */signed char) ((((/* implicit */int) arr_4 [i_1] [i_1] [i_0])) >= (((/* implicit */int) max((arr_3 [i_0] [i_0] [i_1]), (arr_3 [i_0] [i_1] [i_1]))))));
                var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((((/* implicit */int) ((arr_1 [i_1]) != (arr_1 [(unsigned char)5])))) / (((((arr_1 [i_0]) - (((/* implicit */int) (unsigned char)47)))) / (((((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) + (((/* implicit */int) (unsigned short)29464)))))))))));
            }
        } 
    } 
}
