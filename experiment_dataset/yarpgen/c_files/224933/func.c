/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224933
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
    var_11 = ((/* implicit */signed char) max((((((/* implicit */unsigned long long int) (-(var_10)))) & (((((/* implicit */_Bool) var_6)) ? (var_0) : (7590946458750144831ULL))))), (((/* implicit */unsigned long long int) var_1))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 18; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((short) arr_0 [i_1 + 3] [i_1]))), (max((-4304722249589327929LL), (((/* implicit */long long int) arr_4 [i_1 + 4] [i_1]))))));
                var_13 -= ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (unsigned short)65531)) ? (((/* implicit */int) arr_3 [i_0] [i_0] [i_1])) : (arr_4 [i_0] [10ULL])))));
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */int) (~(arr_1 [i_1])));
            }
        } 
    } 
}
