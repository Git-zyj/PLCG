/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52561
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
    var_15 = ((/* implicit */signed char) max((((/* implicit */unsigned short) var_8)), (var_9)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 10; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                var_16 -= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) max((max((((/* implicit */int) (short)-15159)), (var_13))), (((/* implicit */int) var_9))))), (max((((((/* implicit */_Bool) arr_1 [i_1])) ? (1ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)18867)) != (((/* implicit */int) (short)2016)))))))));
                arr_4 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) arr_2 [i_0] [i_0])) | (var_1))) & (((/* implicit */unsigned long long int) max((var_7), (((/* implicit */long long int) (short)15187)))))))) ? (((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) var_3)), (-514322865597242602LL))) | (((/* implicit */long long int) var_10))))) : (min((((1073741823ULL) & (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0])))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_0 [i_1])), (var_2))))))));
            }
        } 
    } 
}
