/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247358
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
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                var_15 *= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)63290)), (-1583265251)))) ? (((var_1) >> (((((/* implicit */int) var_7)) - (36993))))) : (((/* implicit */long long int) ((/* implicit */int) ((1583265251) != (-1583265244))))))), (var_9)));
                var_16 = ((/* implicit */unsigned char) min((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1]))) : (var_5))))), (max((((((/* implicit */int) (short)14418)) >> (((arr_0 [(short)0] [(short)0]) - (5019316405757528254ULL))))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1]))) == (var_1))))))));
            }
        } 
    } 
    var_17 = ((signed char) 1583265258);
    var_18 = ((/* implicit */_Bool) max((((/* implicit */long long int) var_8)), (max((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)240)) / (((/* implicit */int) var_3))))), (((var_1) - (((/* implicit */long long int) var_14))))))));
    var_19 *= (!(((/* implicit */_Bool) (((((~(1583265244))) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */int) var_3)) != (((/* implicit */int) var_8)))))))));
    var_20 = ((/* implicit */_Bool) ((var_9) + (((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) var_8)) >= (((/* implicit */int) (unsigned short)24312))))), (((var_0) >> (((var_0) - (3447704089U))))))))));
}
