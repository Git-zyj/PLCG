/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20245
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
    var_16 = ((/* implicit */long long int) var_10);
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            {
                arr_5 [i_1] = ((/* implicit */short) (-((~(arr_3 [i_0 - 1])))));
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */short) max((((/* implicit */unsigned long long int) (signed char)3)), (9248765768490408641ULL)));
            }
        } 
    } 
    var_17 = var_12;
}
