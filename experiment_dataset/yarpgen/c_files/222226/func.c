/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222226
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
    var_14 = ((/* implicit */long long int) max(((((!(((/* implicit */_Bool) var_12)))) ? (max((var_1), (((/* implicit */unsigned long long int) (short)4049)))) : (var_1))), (((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_1)) ? (18446744073709551594ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-20859))))))))));
    var_15 = ((/* implicit */short) var_13);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] [17LL] = ((/* implicit */long long int) (((!(var_13))) || (((/* implicit */_Bool) ((var_4) ? (arr_2 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (short)78))))))));
                var_16 = ((/* implicit */long long int) (short)-87);
            }
        } 
    } 
    var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) var_8))));
}
