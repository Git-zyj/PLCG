/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246255
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
    var_12 = ((/* implicit */int) ((((/* implicit */_Bool) (~(var_2)))) ? (((unsigned int) (unsigned short)62966)) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((1475810966) < (-853822172)))) == (((1475810967) << (((1475810966) - (1475810966)))))))))));
    var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) var_6))));
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 16; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            {
                var_14 *= 4294967295U;
                var_15 = ((/* implicit */short) (+(((((/* implicit */_Bool) min((var_7), (var_10)))) ? (arr_4 [i_1] [i_1 + 1] [i_0 - 3]) : (arr_4 [i_0] [i_0] [i_0])))));
                var_16 = (((!(((/* implicit */_Bool) (short)-10808)))) ? (((/* implicit */int) ((short) ((-1475810980) > (-4))))) : (-1475810972));
                var_17 = ((/* implicit */unsigned long long int) arr_1 [i_0 + 1] [i_0 + 1]);
            }
        } 
    } 
}
