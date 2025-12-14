/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25889
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
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */int) var_12)) > (((/* implicit */int) var_5))));
    var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) 0ULL))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                arr_6 [i_1] [i_1] = ((/* implicit */signed char) -1733793818);
                var_15 = ((/* implicit */signed char) arr_3 [i_1] [i_1]);
                var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) 18446744073709551607ULL))));
            }
        } 
    } 
}
