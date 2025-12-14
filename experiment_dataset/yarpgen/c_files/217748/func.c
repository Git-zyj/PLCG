/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217748
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
    var_14 = ((/* implicit */int) var_4);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */int) arr_2 [14U])) >= (((/* implicit */int) arr_2 [i_0]))))), (min((((((/* implicit */_Bool) (short)32546)) ? (((/* implicit */long long int) var_3)) : (-2605800054525418736LL))), (max((var_6), (((/* implicit */long long int) arr_2 [i_1]))))))));
                var_15 ^= ((/* implicit */long long int) (_Bool)1);
                arr_6 [3] [16] = ((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_1])) ^ (((((/* implicit */int) ((((/* implicit */int) arr_1 [i_1])) <= (((/* implicit */int) var_11))))) * (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [14LL]))) == (var_2))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned int) var_12);
    var_17 = ((/* implicit */short) (-(((/* implicit */int) (short)32562))));
    var_18 = ((/* implicit */unsigned short) min((((/* implicit */short) var_12)), (var_9)));
}
