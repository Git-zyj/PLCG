/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30838
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
    var_17 = var_0;
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 21; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */signed char) (-(((((/* implicit */int) (short)-4446)) - (((/* implicit */int) var_1))))));
                arr_4 [i_0] = ((/* implicit */unsigned int) ((long long int) var_13));
                var_19 = ((/* implicit */short) ((((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_15)) ? (arr_0 [i_1]) : (((/* implicit */int) var_2))))))) * (max((min((((/* implicit */unsigned long long int) var_4)), (18446744073709551609ULL))), (var_0)))));
            }
        } 
    } 
}
