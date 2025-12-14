/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42269
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
    var_15 = ((/* implicit */long long int) var_6);
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                arr_5 [i_0] [(short)9] [i_0] = ((/* implicit */short) min((var_4), (max((arr_2 [i_0 - 1]), (((/* implicit */long long int) (-2147483647 - 1)))))));
                var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)209)))))) : (0LL)));
                var_17 = ((/* implicit */long long int) min((var_17), (arr_2 [i_0])));
                var_18 *= ((/* implicit */short) max((arr_4 [i_0] [(short)12]), (((((/* implicit */int) (unsigned short)11830)) >> (((((((/* implicit */_Bool) (unsigned char)92)) ? (((/* implicit */long long int) var_9)) : (0LL))) - (188314662LL)))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) (~(((var_9) >> (((var_10) - (12222849892418505583ULL)))))));
}
