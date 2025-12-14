/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52778
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
    var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) (signed char)123))));
    var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) min((var_8), (((/* implicit */int) ((signed char) max((-1), (2147483647))))))))));
    var_14 -= ((/* implicit */unsigned long long int) (-(var_8)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            {
                var_15 ^= min((max((var_3), (((/* implicit */unsigned long long int) var_7)))), (((arr_2 [i_0 - 1] [i_1 - 2]) * (((/* implicit */unsigned long long int) var_10)))));
                arr_4 [4ULL] [i_0] [i_0] = ((/* implicit */signed char) arr_3 [i_0] [i_0] [i_1]);
            }
        } 
    } 
}
