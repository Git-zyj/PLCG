/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23664
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
    var_19 = ((/* implicit */unsigned long long int) var_5);
    var_20 = min((((/* implicit */unsigned long long int) 388936049)), (min((((/* implicit */unsigned long long int) ((signed char) var_10))), (((17326964629637060710ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */short) (_Bool)1)), (var_7)))) ? ((-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) ^ (var_6))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_4 [i_0] [i_1] [i_1]), (arr_4 [i_0] [i_0] [i_1])))))));
                var_21 = ((/* implicit */unsigned short) arr_3 [i_0]);
                arr_7 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_2 [i_0]);
                var_22 = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) (unsigned char)56)))) / (var_4)));
            }
        } 
    } 
    var_23 |= ((/* implicit */long long int) (+(-861135594)));
}
