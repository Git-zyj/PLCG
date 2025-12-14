/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190868
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
    for (long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (!(arr_1 [i_0])))), (max((((/* implicit */unsigned long long int) arr_1 [i_1])), (7495490549249311140ULL)))));
                var_18 = ((/* implicit */unsigned int) arr_0 [i_0]);
                var_19 = ((/* implicit */unsigned char) (-(max(((+(4197391603U))), (((/* implicit */unsigned int) var_4))))));
            }
        } 
    } 
    var_20 = (~(max((((/* implicit */unsigned long long int) var_13)), (7495490549249311162ULL))));
}
