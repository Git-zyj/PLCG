/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202058
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 24; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) 1939104848263153849LL))));
                var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) max(((-(((/* implicit */int) (signed char)-61)))), (((/* implicit */int) min((arr_1 [i_1 + 1] [i_1 - 1]), (arr_1 [i_1 + 1] [i_1 - 1])))))))));
                arr_4 [12LL] [14] = ((/* implicit */unsigned int) (~(((/* implicit */int) min((arr_3 [i_1 + 1] [16ULL]), (arr_3 [i_1 - 1] [7LL]))))));
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) 1207412041U);
}
