/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223238
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
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */signed char) ((arr_4 [i_1] [i_1 - 1] [i_0]) && (((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_1 + 2] [i_1 + 2])))))));
                var_13 = ((/* implicit */short) var_1);
            }
        } 
    } 
    var_14 = ((/* implicit */short) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_9)), (-2417918788539562235LL)))) <= (max((((var_0) << (((var_10) + (509100803))))), (((/* implicit */unsigned long long int) ((((var_1) + (9223372036854775807LL))) >> (((var_4) - (1003262087U))))))))));
}
