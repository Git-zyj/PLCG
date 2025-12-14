/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26108
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
    var_19 += ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_2)) : (var_5)))) & (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (var_14))))) ^ (((/* implicit */unsigned long long int) var_12))));
    var_20 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((max((((/* implicit */int) var_1)), (var_17))), (var_4)))) ? ((~(((((/* implicit */int) var_9)) ^ (var_17))))) : (((/* implicit */int) var_2))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_21 ^= arr_4 [i_0] [i_1];
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned char) (-(((min((((/* implicit */unsigned long long int) arr_3 [i_1] [i_1] [i_1])), (arr_1 [i_0]))) & (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_2 [i_0])), (arr_3 [i_1] [i_0] [i_0]))))))));
            }
        } 
    } 
}
