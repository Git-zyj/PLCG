/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219810
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
    var_20 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) min((((/* implicit */unsigned short) var_12)), (var_6)))) <= (((/* implicit */int) ((unsigned short) (unsigned char)20)))))) / (((/* implicit */int) var_4))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [(short)11]))) - (max((((/* implicit */long long int) var_11)), (var_16)))))) * (max((min((arr_3 [i_0] [i_1] [i_1]), (arr_3 [i_1] [i_1] [i_0]))), (((/* implicit */unsigned long long int) ((arr_3 [i_0] [i_1 + 2] [i_1]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1])))))))))))));
                var_22 = ((/* implicit */_Bool) ((short) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_4 [i_0])), (var_6))))) - (var_16))));
            }
        } 
    } 
    var_23 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_17))) <= (min((max((((/* implicit */long long int) (short)0)), (9007198986305536LL))), (var_7)))));
    var_24 = ((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) ((unsigned char) var_11))), (((var_16) - (((/* implicit */long long int) ((/* implicit */int) var_17))))))) > (((/* implicit */long long int) ((0U) >> (((/* implicit */int) (unsigned char)0)))))));
}
