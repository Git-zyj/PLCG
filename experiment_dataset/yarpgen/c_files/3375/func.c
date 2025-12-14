/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3375
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) arr_3 [i_0 + 1]))) ? (17108918118887721935ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_3 [i_1]))))));
                arr_5 [i_0 + 1] [i_1] [i_1] = ((/* implicit */_Bool) (-(arr_2 [i_0 + 1] [(signed char)4])));
                var_11 = ((/* implicit */short) min((((/* implicit */unsigned long long int) var_3)), (min((arr_0 [i_0 + 1]), (((/* implicit */unsigned long long int) var_10))))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned char) max((var_12), (var_6)));
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) min((((/* implicit */unsigned long long int) var_2)), (18446744073709551615ULL)))))) : (min((11745675540219913974ULL), (((/* implicit */unsigned long long int) (_Bool)1))))));
    var_14 |= ((((/* implicit */int) var_0)) >> (((11745675540219913974ULL) - (11745675540219913971ULL))));
}
