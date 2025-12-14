/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54182
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
    var_11 = ((/* implicit */signed char) ((var_3) << (((var_10) - (7175054376021866671LL)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 19; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */short) ((((/* implicit */_Bool) 2094268210391308163LL)) ? (4111892083176473151ULL) : (((/* implicit */unsigned long long int) 793425U))));
                var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_0 [i_0 + 1])), (((((/* implicit */_Bool) var_2)) ? (4111892083176473151ULL) : (((/* implicit */unsigned long long int) var_3))))))))))));
                var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) (-(((/* implicit */int) min((arr_0 [i_1 + 4]), (max(((unsigned char)254), (arr_0 [0])))))))))));
            }
        } 
    } 
    var_15 = max((((((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) * (4111892083176473151ULL))) / (((/* implicit */unsigned long long int) min((-1LL), (var_7)))))), (((/* implicit */unsigned long long int) var_0)));
}
