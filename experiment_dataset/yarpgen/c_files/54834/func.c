/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54834
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
    var_18 = ((/* implicit */int) min((17282058062302274045ULL), (((/* implicit */unsigned long long int) (signed char)68))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        for (short i_1 = 4; i_1 < 18; i_1 += 3) 
        {
            {
                var_19 = arr_2 [i_0];
                var_20 = ((/* implicit */unsigned char) var_11);
                arr_4 [0] &= ((/* implicit */long long int) arr_1 [14LL]);
                var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((/* implicit */_Bool) ((arr_3 [i_0 + 1] [i_0 - 1]) ? (((((/* implicit */_Bool) arr_1 [0ULL])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_12))) : (((((/* implicit */_Bool) arr_1 [10ULL])) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)128)))))))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) ((_Bool) var_5))), (min((871700605U), (((/* implicit */unsigned int) (unsigned char)121))))))) : (min((((/* implicit */long long int) ((signed char) arr_2 [i_0]))), (max((((/* implicit */long long int) var_2)), (var_14))))))))));
            }
        } 
    } 
}
