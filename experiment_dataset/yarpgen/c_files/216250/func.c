/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216250
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
    var_14 = ((/* implicit */signed char) min((((((/* implicit */_Bool) max((((/* implicit */long long int) 347658507)), (-6175671540157201010LL)))) ? (((/* implicit */long long int) min((var_10), (((/* implicit */unsigned int) var_6))))) : (((((/* implicit */_Bool) -6175671540157201037LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (var_9))))), (((/* implicit */long long int) var_0))));
    var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) var_13))));
    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_10)));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                var_17 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)23)) ? (((((/* implicit */_Bool) -6175671540157201010LL)) ? (((var_10) & (((/* implicit */unsigned int) var_3)))) : (((/* implicit */unsigned int) 0)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_2 [i_1] [i_0] [i_0]) : (var_3)))) ? (((/* implicit */int) max((var_8), (((/* implicit */short) var_5))))) : (arr_2 [i_0] [i_1] [i_1]))))));
                var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) arr_2 [i_1] [i_1] [i_0]))));
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) -347658505);
}
