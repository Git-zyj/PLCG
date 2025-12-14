/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247056
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
    var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) min((((/* implicit */int) ((signed char) ((((var_2) + (2147483647))) << (((((var_2) + (1024228154))) - (1))))))), ((-(((/* implicit */int) var_0)))))))));
    var_13 = ((/* implicit */signed char) min((var_11), (((((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_0))))) & (((/* implicit */int) ((var_9) > (((/* implicit */int) (signed char)0)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 23; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] [i_1] = min((min((((/* implicit */int) (!(((/* implicit */_Bool) 2147483647))))), (arr_2 [i_1 + 1]))), (((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_1]))))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) ((2147483624) < (arr_2 [i_1])))))));
                arr_6 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 569136331)) ? (((/* implicit */long long int) var_2)) : (var_5))), (((/* implicit */long long int) (signed char)32))))) && (((/* implicit */_Bool) max((max((((/* implicit */int) var_6)), (-1456853284))), ((-2147483647 - 1)))))));
                var_14 = ((/* implicit */signed char) min((2147483647), (min((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)32351))) != (8986780426379928291LL)))), (-2147483627)))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) var_5);
    var_16 |= 9223372036854775807LL;
}
