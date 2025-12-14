/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42626
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
    var_15 += ((/* implicit */unsigned long long int) (+(var_11)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_12))))), (max((arr_3 [22] [i_1]), (arr_3 [i_0] [i_0]))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_6 [i_0 + 1]), ((!(((/* implicit */_Bool) arr_1 [i_0] [i_1]))))))))));
                var_17 ^= ((/* implicit */int) max((((/* implicit */unsigned int) ((short) (~(var_5))))), (min((((((/* implicit */_Bool) 173485083)) ? (3076950375U) : (((/* implicit */unsigned int) var_11)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) (unsigned short)40397)) : (((/* implicit */int) arr_5 [23ULL])))))))));
                var_18 = 1218016902U;
                var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) (-((-(((((/* implicit */int) arr_4 [i_1] [i_0 + 2])) - (((/* implicit */int) (unsigned short)32768)))))))))));
            }
        } 
    } 
}
