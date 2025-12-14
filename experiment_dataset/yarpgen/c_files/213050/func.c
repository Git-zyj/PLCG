/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213050
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
    var_11 = ((/* implicit */short) max((min((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_5))))), (min((var_4), (((/* implicit */unsigned long long int) (short)-2237)))))), (((/* implicit */unsigned long long int) (+(var_7))))));
    var_12 = ((/* implicit */signed char) var_7);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                arr_5 [i_0] [(signed char)2] = (+((+(((/* implicit */int) ((arr_3 [i_0] [i_0]) >= (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))));
                arr_6 [11] [i_1] = ((/* implicit */short) 1864057518U);
                var_13 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_2)), (var_4)))) ? (((/* implicit */long long int) ((arr_0 [(short)7] [i_1]) * (((/* implicit */unsigned int) 1388608185))))) : (min((5765550715035468983LL), (((/* implicit */long long int) (short)-2238))))))), (min((7103723994564357491ULL), (((/* implicit */unsigned long long int) arr_3 [i_1] [i_0]))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) ((long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-1)) || (((/* implicit */_Bool) (short)2237))))), (3877610117342796502LL))));
}
