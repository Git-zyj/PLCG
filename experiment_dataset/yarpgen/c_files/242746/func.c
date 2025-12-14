/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242746
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
    for (long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)32752))) / (arr_0 [i_0] [i_1])))) ? (((/* implicit */int) arr_5 [13LL] [i_0] [i_1])) : ((-(((/* implicit */int) (short)24447))))))));
                arr_6 [11ULL] [2LL] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (var_6) : (-2285095372960012460LL))))) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) (!(((/* implicit */_Bool) ((short) (short)7168))))))));
                var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) ((signed char) ((9223372036854775798LL) / (((var_9) & (9223372036854775807LL)))))))));
                var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) min(((((~(arr_0 [i_0] [(short)10]))) / (((/* implicit */long long int) ((/* implicit */int) var_4))))), (((/* implicit */long long int) arr_4 [i_0] [i_1])))))));
            }
        } 
    } 
    var_14 = ((/* implicit */long long int) var_8);
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) 9223372036854775807LL)) ? ((-9223372036854775807LL - 1LL)) : (2594894323883701781LL)));
    var_16 ^= ((/* implicit */signed char) var_5);
}
