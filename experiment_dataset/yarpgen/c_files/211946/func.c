/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211946
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
    var_13 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) max((var_12), (((/* implicit */long long int) var_0))))) ? (((/* implicit */long long int) ((/* implicit */int) ((4199845017U) != (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))) : (min((((/* implicit */long long int) var_8)), (var_12))))), (((long long int) var_5))));
    var_14 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((min((var_7), (((/* implicit */long long int) (signed char)-68)))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_9)) : (var_3)))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */_Bool) arr_0 [0ULL]);
                var_16 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [(signed char)19])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (var_12)))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) ((var_7) <= (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))))))) ? (((/* implicit */int) ((min((((/* implicit */unsigned long long int) 4199845017U)), (arr_4 [3U]))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1] [i_0]))))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned char) (signed char)31)), (arr_0 [i_1]))))))));
                var_17 = ((/* implicit */signed char) (-((~(arr_4 [i_0])))));
            }
        } 
    } 
}
