/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30709
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
    for (long long int i_0 = 3; i_0 < 12; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */long long int) min((var_20), (((long long int) ((signed char) 1600875386U)))));
                var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_5 [i_0 - 2]), (arr_5 [i_0 - 2])))) ? (((((/* implicit */_Bool) arr_5 [i_0 - 2])) ? (arr_5 [i_0 - 1]) : (arr_5 [i_0 - 3]))) : (((arr_5 [i_0 - 3]) + (arr_5 [i_0 - 1])))));
                var_22 *= ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)65530))));
            }
        } 
    } 
    var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) ((short) (unsigned char)96))) : (((/* implicit */int) (unsigned short)43628))))) ? (((/* implicit */int) var_18)) : (((((((/* implicit */_Bool) (short)28674)) ? (var_15) : (((/* implicit */int) var_18)))) / (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned short)40521)) : (var_15)))))));
}
