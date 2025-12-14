/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228585
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
    for (long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((+(arr_2 [i_0] [i_0]))), ((((_Bool)0) ? (((/* implicit */unsigned int) -1056178635)) : (arr_2 [i_0] [i_0])))))) ? (((arr_3 [i_1] [i_1 + 1] [i_1]) / (arr_3 [(unsigned short)8] [i_1] [i_1]))) : (((/* implicit */long long int) arr_2 [i_1] [i_0]))));
                arr_4 [i_1] = var_5;
                arr_5 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)0))) ? (((((((/* implicit */_Bool) (signed char)21)) || (((/* implicit */_Bool) -1LL)))) ? (var_2) : (arr_3 [i_1] [3LL] [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_3 [i_1] [i_1 - 1] [i_1]) > (min((6470503247392414821LL), (((/* implicit */long long int) var_13))))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_14)) <= (((/* implicit */int) (unsigned char)5))))) != (((/* implicit */int) var_14))))))))));
}
